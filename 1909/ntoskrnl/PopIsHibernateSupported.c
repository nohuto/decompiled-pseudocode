/*
 * XREFs of PopIsHibernateSupported @ 0x140670968
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x140196720 (PopCheckAndHandleThermalConditions.c)
 *     PopCaptureSleepStudyStatistics @ 0x1402FBB9C (PopCaptureSleepStudyStatistics.c)
 *     PopPolicySystemIdle @ 0x140670540 (PopPolicySystemIdle.c)
 *     PopIsDozeSupported @ 0x14067092C (PopIsDozeSupported.c)
 *     PopVerifyPowerActionPolicy @ 0x140744E14 (PopVerifyPowerActionPolicy.c)
 *     PopVerifySystemPowerState @ 0x1407453AC (PopVerifySystemPowerState.c)
 * Callees:
 *     <none>
 */

bool __fastcall PopIsHibernateSupported(_BYTE *a1)
{
  bool result; // al

  result = 0;
  if ( a1[6] )
  {
    if ( a1[8] )
      return a1[22] == 2;
  }
  return result;
}
