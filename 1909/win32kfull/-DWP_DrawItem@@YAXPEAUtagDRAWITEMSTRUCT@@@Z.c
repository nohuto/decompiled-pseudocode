/*
 * XREFs of ?DWP_DrawItem@@YAXPEAUtagDRAWITEMSTRUCT@@@Z @ 0x1C0117EF0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00A9FB8 (xxxRealDefWindowProc.c)
 * Callees:
 *     ClientFrame @ 0x1C0259EA8 (ClientFrame.c)
 */

void __fastcall DWP_DrawItem(struct tagDRAWITEMSTRUCT *a1)
{
  int v1; // eax

  if ( *(_DWORD *)a1 == 2 )
  {
    v1 = *((_DWORD *)a1 + 3);
    if ( v1 == 4 || v1 == 1 && (*((_DWORD *)a1 + 4) & 0x10) != 0 )
      ClientFrame(*((HDC *)a1 + 4));
  }
}
