/*
 * XREFs of MiUpdateOldWorkingSetPagesTail @ 0x1402B4320
 * Callers:
 *     MiUpdateOldPte @ 0x1402B4160 (MiUpdateOldPte.c)
 * Callees:
 *     MiFreeWsleList @ 0x1400B29F0 (MiFreeWsleList.c)
 *     MiProcessVmAccessedInfo @ 0x1402B382C (MiProcessVmAccessedInfo.c)
 *     MiQueryEPTAccessedState @ 0x1402B38F0 (MiQueryEPTAccessedState.c)
 */

__int64 __fastcall MiUpdateOldWorkingSetPagesTail(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 i; // rbx
  _DWORD *v6; // rdx

  for ( i = *(_QWORD *)(a1 + 168);
        ;
        MiProcessVmAccessedInfo(
          a1,
          *(_DWORD **)(i + 208),
          (__int64 (__fastcall *)(__int64, _QWORD *))MiUpdateOldPagesEPTCallback) )
  {
    if ( *(_DWORD *)(i + 36) )
      MiFreeWsleList(*(_QWORD *)(a1 + 24), i + 24, 0);
    v6 = *(_DWORD **)(i + 208);
    if ( !v6 || !*v6 || !(unsigned int)MiQueryEPTAccessedState(a1, v6, 0LL, a4) )
      break;
  }
  return 0LL;
}
