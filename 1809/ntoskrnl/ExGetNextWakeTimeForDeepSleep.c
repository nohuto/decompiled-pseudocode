/*
 * XREFs of ExGetNextWakeTimeForDeepSleep @ 0x14031C7AC
 * Callers:
 *     PpmIdlePrepare @ 0x14005F3A0 (PpmIdlePrepare.c)
 *     KiGetNextTimerExpirationDueTime @ 0x140061FF0 (KiGetNextTimerExpirationDueTime.c)
 * Callees:
 *     KeQueryTimerDueTime @ 0x1402907B8 (KeQueryTimerDueTime.c)
 */

unsigned __int64 __fastcall ExGetNextWakeTimeForDeepSleep(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 result; // rax
  __int64 *v5; // rdi
  __int64 v6; // rcx

  v3 = -1LL;
  result = -1LL;
  if ( PoRtcWakeAllowed )
  {
    v5 = (__int64 *)ExpWakeTimerList;
    while ( v5 != &ExpWakeTimerList )
    {
      v6 = (__int64)(v5 - 33);
      v5 = (__int64 *)*v5;
      if ( *(_QWORD *)(v6 + 256) )
        result = KeQueryTimerDueTime(v6, a2, a3);
      if ( result )
      {
        if ( result < v3 )
          v3 = result;
      }
    }
    return v3;
  }
  return result;
}
