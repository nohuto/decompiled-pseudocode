/*
 * XREFs of PopIsHibernateSupported @ 0x1405B0850
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x14018BEF4 (PopCheckAndHandleThermalConditions.c)
 *     PopCaptureSleepStudyStatistics @ 0x1402DF0EC (PopCaptureSleepStudyStatistics.c)
 *     PopPolicySystemIdle @ 0x1405B04E0 (PopPolicySystemIdle.c)
 *     PopIsDozeSupported @ 0x1405B0814 (PopIsDozeSupported.c)
 *     PopVerifyPowerActionPolicy @ 0x1407199D8 (PopVerifyPowerActionPolicy.c)
 *     PopVerifySystemPowerState @ 0x14071B328 (PopVerifySystemPowerState.c)
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
