/*
 * XREFs of ?IsChildWindowCoordinateSpaceBoundary@@YAHPEAUtagWND@@@Z @ 0x1C0070208
 * Callers:
 *     UpdateWindowMonitor @ 0x1C0068A30 (UpdateWindowMonitor.c)
 *     IsChildWindowDpiBoundary @ 0x1C006F520 (IsChildWindowDpiBoundary.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C006F578 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsChildWindowCoordinateSpaceBoundary(struct tagWND *a1)
{
  __int64 v1; // rax
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 v4; // r9
  unsigned int v5; // edx
  unsigned int v6; // r9d
  unsigned int v7; // r8d
  int v8; // ecx
  int v9; // eax

  v1 = *((_QWORD *)a1 + 13);
  if ( !v1 )
    return 0;
  v2 = *((_QWORD *)a1 + 3);
  v3 = 0LL;
  if ( v2 )
  {
    v4 = *(_QWORD *)(v2 + 8);
    if ( v4 )
      v3 = *(_QWORD *)(v4 + 24);
  }
  if ( v1 == v3 )
    return 0;
  v5 = 1;
  v6 = *(_DWORD *)(*(_QWORD *)(v1 + 40) + 288LL);
  v7 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL);
  if ( (((unsigned __int16)(v7 >> 8) ^ (unsigned __int16)(v6 >> 8)) & 0x1FF) == 0 )
  {
    v8 = (v7 & 0xF) == 2 && (v7 & 0x20000000) != 0;
    v9 = (v6 & 0xF) == 2 && (v6 & 0x20000000) != 0;
    if ( v8 == v9 )
      return 0;
  }
  return v5;
}
