/*
 * XREFs of ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x180047644
 * Callers:
 *     ?PrepareForADGStartup@CAudioDGProcess@@AEAAJXZ @ 0x180047538 (-PrepareForADGStartup@CAudioDGProcess@@AEAAJXZ.c)
 *     ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x18012199C (-ScheduleWorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800BC9F8 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::ResetEvent(wil::details *this, void *a2)
{
  unsigned int v2; // r8d
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !ResetEvent(this) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x8EB, v2, v3);
    __debugbreak();
  }
}
