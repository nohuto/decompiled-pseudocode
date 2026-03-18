/*
 * XREFs of ExGetNextWakeTimeForDeepSleep @ 0x14033AFBC
 * Callers:
 *     PpmIdlePrepare @ 0x1400330E0 (PpmIdlePrepare.c)
 *     KiGetNextTimerExpirationDueTime @ 0x14009CE30 (KiGetNextTimerExpirationDueTime.c)
 * Callees:
 *     KeQueryTimerDueTime @ 0x1402A6D48 (KeQueryTimerDueTime.c)
 */

unsigned __int64 ExGetNextWakeTimeForDeepSleep()
{
  unsigned __int64 v0; // rbx
  unsigned __int64 result; // rax
  __int64 *v2; // rdi
  __int64 v3; // rcx

  v0 = -1LL;
  result = -1LL;
  if ( PoRtcWakeAllowed )
  {
    v2 = (__int64 *)ExpWakeTimerList;
    while ( v2 != &ExpWakeTimerList )
    {
      v3 = (__int64)(v2 - 33);
      v2 = (__int64 *)*v2;
      if ( *(_QWORD *)(v3 + 256) )
        result = KeQueryTimerDueTime(v3);
      if ( result )
      {
        if ( result < v0 )
          v0 = result;
      }
    }
    return v0;
  }
  return result;
}
