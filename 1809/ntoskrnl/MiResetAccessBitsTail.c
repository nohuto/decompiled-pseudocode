/*
 * XREFs of MiResetAccessBitsTail @ 0x14016FAB0
 * Callers:
 *     MiResetAccessBitPte @ 0x14016E930 (MiResetAccessBitPte.c)
 * Callees:
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiProcessVmAccessedInfo @ 0x1402B382C (MiProcessVmAccessedInfo.c)
 *     MiQueryEPTAccessedState @ 0x1402B38F0 (MiQueryEPTAccessedState.c)
 */

__int64 __fastcall MiResetAccessBitsTail(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 i; // rbx
  int *v6; // rcx
  _DWORD *v7; // rdx

  for ( i = *(_QWORD *)(a1 + 168); ; MiProcessVmAccessedInfo(a1, *(_QWORD *)(i + 16), MiResetAccessBitsEPTCallback, i) )
  {
    v6 = *(int **)(i + 8);
    if ( v6 )
      MiFlushTbList(v6, a2, a3, a4);
    v7 = *(_DWORD **)(i + 16);
    if ( !v7 || !*v7 || !(unsigned int)MiQueryEPTAccessedState(a1, v7, *(_QWORD *)(i + 8) != 0LL) )
      break;
  }
  return 0LL;
}
