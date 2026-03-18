/*
 * XREFs of SetSharedPropForFilteredProcesses @ 0x1C0005FF0
 * Callers:
 *     InternalSetProp @ 0x1C008C438 (InternalSetProp.c)
 *     NtUserSetProp @ 0x1C0102500 (NtUserSetProp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetSharedPropForFilteredProcesses(__int64 a1, __int16 a2, __int64 a3)
{
  __int64 v5; // rax
  _QWORD *i; // rdi
  int v7; // ebx
  __int64 CurrentProcessWow64Process; // rax
  __int16 v9; // ax

  v5 = *(_QWORD *)(a1 + 40);
  if ( *(char *)(v5 + 19) >= 0 )
  {
    for ( i = *(_QWORD **)(*(int *)(v5 + 200) + *(_QWORD *)(v5 + 296) - 8LL); i; i = (_QWORD *)i[3 * v7] )
    {
      v7 = 0;
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(a1);
      ProbeForWrite(i, 0x618uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
      while ( 1 )
      {
        a1 = 3LL * v7;
        if ( v7 >= 64 )
          break;
        v9 = i[3 * v7 + 2];
        if ( !v9 )
          return 0LL;
        if ( v9 == a2 )
        {
          i[3 * v7 + 1] = a3;
          return 1LL;
        }
        ++v7;
      }
    }
  }
  return 0LL;
}
