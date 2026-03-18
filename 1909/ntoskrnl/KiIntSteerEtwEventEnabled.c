/*
 * XREFs of KiIntSteerEtwEventEnabled @ 0x14017D128
 * Callers:
 *     KiIntSteerLogState @ 0x14017D0C0 (KiIntSteerLogState.c)
 *     KiIntSteerLogStatus @ 0x1402B1A08 (KiIntSteerLogStatus.c)
 * Callees:
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 */

BOOLEAN __fastcall KiIntSteerEtwEventEnabled(PCEVENT_DESCRIPTOR EventDescriptor)
{
  if ( KiIntSteerEtwHandle )
    return EtwEventEnabled(KiIntSteerEtwHandle, EventDescriptor);
  else
    return 0;
}
