/*
 * XREFs of ?IsChildWindowCoordinateSpaceBoundary@@YAHPEAUtagWND@@@Z @ 0x1C0039E54
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C00391F4 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     UpdateWindowMonitor @ 0x1C00437C0 (UpdateWindowMonitor.c)
 *     IsChildWindowDpiBoundary @ 0x1C007A5D8 (IsChildWindowDpiBoundary.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsChildWindowCoordinateSpaceBoundary(struct tagWND *a1)
{
  __int64 v1; // rax
  unsigned int v2; // r8d
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // r10

  v1 = *((_QWORD *)a1 + 10);
  v2 = 0;
  if ( v1 )
  {
    v3 = *((_QWORD *)a1 + 3);
    v4 = 0LL;
    if ( v3 )
    {
      v5 = *(_QWORD *)(v3 + 8);
      if ( v5 )
        v4 = *(_QWORD *)(v5 + 24);
    }
    if ( v1 != v4
      && (((unsigned __int16)(*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(v1 + 40) + 288LL) >> 8)) & 0x1FF) != 0 )
    {
      return 1;
    }
  }
  return v2;
}
