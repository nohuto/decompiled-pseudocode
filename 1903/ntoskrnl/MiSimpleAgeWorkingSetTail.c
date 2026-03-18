/*
 * XREFs of MiSimpleAgeWorkingSetTail @ 0x1402C8F80
 * Callers:
 *     MiSimpleAgePte @ 0x1402C8D90 (MiSimpleAgePte.c)
 * Callees:
 *     MiFlushTbList @ 0x14004FFE0 (MiFlushTbList.c)
 *     MiProcessVmAccessedInfo @ 0x1402C8A9C (MiProcessVmAccessedInfo.c)
 *     MiQueryEPTAccessedState @ 0x1402C8B60 (MiQueryEPTAccessedState.c)
 */

__int64 __fastcall MiSimpleAgeWorkingSetTail(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 i; // rbx
  __int64 v6; // r9
  _DWORD *v7; // rdx

  for ( i = *(_QWORD *)(a1 + 160);
        ;
        MiProcessVmAccessedInfo(
          a1,
          *(_DWORD **)(i + 248),
          (__int64 (__fastcall *)(__int64, _QWORD *))MiSimpleAgeWorkingSetEPTCallback) )
  {
    MiFlushTbList(*(int **)(i + 56), a2, a3, a4);
    v7 = *(_DWORD **)(i + 248);
    if ( !v7 || !*v7 || !(unsigned int)MiQueryEPTAccessedState(a1, v7, 1LL, v6) )
      break;
  }
  return 0LL;
}
