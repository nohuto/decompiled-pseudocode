/*
 * XREFs of GetSharedPropForFilteredProcesses @ 0x1C00D60D0
 * Callers:
 *     _GetProp @ 0x1C00692EC (_GetProp.c)
 *     NtUserGetProp @ 0x1C00D5F60 (NtUserGetProp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetSharedPropForFilteredProcesses(__int64 a1, __int16 a2)
{
  __int64 v3; // rax
  _QWORD *i; // rdi
  int v5; // ebx
  __int64 CurrentProcessWow64Process; // rax
  __int16 v7; // ax

  v3 = *(_QWORD *)(a1 + 40);
  if ( *(char *)(v3 + 19) >= 0 )
  {
    for ( i = *(_QWORD **)(*(int *)(v3 + 200) + *(_QWORD *)(v3 + 296) - 8LL); i; i = (_QWORD *)i[3 * v5] )
    {
      v5 = 0;
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(a1);
      ProbeForRead(i, 0x618uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
      while ( 1 )
      {
        a1 = 3LL * v5;
        if ( v5 >= 64 )
          break;
        v7 = i[3 * v5 + 2];
        if ( !v7 )
          return 0LL;
        if ( v7 == a2 )
          return i[3 * v5 + 1];
        ++v5;
      }
    }
  }
  return 0LL;
}
