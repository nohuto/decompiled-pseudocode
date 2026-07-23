/*
 * XREFs of PopIsHibernateSupported @ 0x1405B1850
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x14018C034 (PopCheckAndHandleThermalConditions.c)
 *     PopCaptureSleepStudyStatistics @ 0x1402DF2DC (PopCaptureSleepStudyStatistics.c)
 *     PopPolicySystemIdle @ 0x1405B14E0 (PopPolicySystemIdle.c)
 *     PopIsDozeSupported @ 0x1405B1814 (PopIsDozeSupported.c)
 *     PopVerifyPowerActionPolicy @ 0x14071AC78 (PopVerifyPowerActionPolicy.c)
 *     PopVerifySystemPowerState @ 0x14071C5C8 (PopVerifySystemPowerState.c)
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
