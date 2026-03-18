/*
 * XREFs of MiResetAccessBitsTail @ 0x140179890
 * Callers:
 *     MiResetAccessBitPte @ 0x1401783E0 (MiResetAccessBitPte.c)
 * Callees:
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     MiProcessVmAccessedInfo @ 0x1402C87FC (MiProcessVmAccessedInfo.c)
 *     MiQueryEPTAccessedState @ 0x1402C88C0 (MiQueryEPTAccessedState.c)
 */

__int64 __fastcall MiResetAccessBitsTail(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 i; // rbx
  int *v6; // rcx
  _DWORD *v7; // rdx

  for ( i = *(_QWORD *)(a1 + 160); ; MiProcessVmAccessedInfo(a1, *(_QWORD *)(i + 16), MiResetAccessBitsEPTCallback, i) )
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
