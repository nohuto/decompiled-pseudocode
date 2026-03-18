/*
 * XREFs of EtwpCheckNotificationAccess @ 0x1406925A4
 * Callers:
 *     EtwpValidateEnableNotification @ 0x14069205C (EtwpValidateEnableNotification.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1408FCB54 (EtwpUpdatePeriodicCaptureState.c)
 * Callees:
 *     EtwpCheckGuidAccess @ 0x140692610 (EtwpCheckGuidAccess.c)
 *     EtwpCheckSecurityLoggerAccess @ 0x1406F180C (EtwpCheckSecurityLoggerAccess.c)
 */

__int64 __fastcall EtwpCheckNotificationAccess(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v5; // ecx
  __int64 v6; // rax

  result = EtwpCheckGuidAccess(a1, 128LL, 0LL);
  if ( (int)result >= 0 )
  {
    result = EtwpCheckGuidAccess(a2, 128LL, 0LL);
    v5 = result;
    if ( (int)result >= 0 )
    {
      v6 = *a1 - s_ProviderThreatInt;
      if ( *a1 == s_ProviderThreatInt )
        v6 = a1[1] - 0x44D38D4D0F04D8F1LL;
      if ( !v6 )
        return (unsigned int)EtwpCheckSecurityLoggerAccess(KeGetCurrentThread()->ApcState.Process);
      return v5;
    }
  }
  return result;
}
