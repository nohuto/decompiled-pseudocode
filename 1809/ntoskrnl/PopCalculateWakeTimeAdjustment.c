/*
 * XREFs of PopCalculateWakeTimeAdjustment @ 0x14086B65C
 * Callers:
 *     PopValidateRTCWake @ 0x140566700 (PopValidateRTCWake.c)
 * Callees:
 *     PopPowerTransitionTimesInMs @ 0x140142BA4 (PopPowerTransitionTimesInMs.c)
 */

unsigned __int64 PopCalculateWakeTimeAdjustment()
{
  unsigned __int64 result; // rax
  unsigned int v1; // [rsp+40h] [rbp+8h] BYREF

  result = 0LL;
  v1 = 0;
  if ( dword_140417720 == 4 )
  {
    if ( !PoResumeFromHibernate )
    {
      PopPowerTransitionTimesInMs(0LL, 0LL, 0LL, 0LL, (__int64)&v1);
      return v1;
    }
  }
  else if ( !PoResumeFromHibernate )
  {
    return result;
  }
  return qword_140417CA8 / (unsigned __int64)qword_140417C70;
}
