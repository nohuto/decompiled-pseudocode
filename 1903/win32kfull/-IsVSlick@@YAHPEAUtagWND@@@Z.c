/*
 * XREFs of ?IsVSlick@@YAHPEAUtagWND@@@Z @ 0x1C023AABC
 * Callers:
 *     Is31TrayWindow @ 0x1C023AB34 (Is31TrayWindow.c)
 * Callees:
 *     GetScreenRectForWindow @ 0x1C0259DF0 (GetScreenRectForWindow.c)
 */

_BOOL8 __fastcall IsVSlick(struct tagWND *a1)
{
  __int64 v2; // rax
  unsigned int v3; // r8d
  unsigned int v4; // r9d
  _BOOL8 result; // rax
  __int128 v6; // [rsp+20h] [rbp-28h]
  _BYTE v7[24]; // [rsp+30h] [rbp-18h] BYREF

  v6 = *(_OWORD *)GetScreenRectForWindow(v7, a1);
  result = 0;
  if ( *(_DWORD *)*gpDispInfo == 1 )
  {
    v2 = *((_QWORD *)a1 + 5);
    v3 = *(_DWORD *)(v2 + 88);
    if ( v3 > DWORD2(v6) )
    {
      v4 = *(_DWORD *)(v2 + 92);
      if ( v4 > HIDWORD(v6) && v4 == HIDWORD(v6) + 100 && v3 == DWORD2(v6) + 100 )
        return 1;
    }
  }
  return result;
}
