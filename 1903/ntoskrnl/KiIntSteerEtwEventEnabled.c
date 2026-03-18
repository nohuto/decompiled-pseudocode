/*
 * XREFs of KiIntSteerEtwEventEnabled @ 0x14017CA38
 * Callers:
 *     KiIntSteerLogState @ 0x14017C9D0 (KiIntSteerLogState.c)
 *     KiIntSteerLogStatus @ 0x1402B1CA8 (KiIntSteerLogStatus.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
 */

BOOLEAN __fastcall KiIntSteerEtwEventEnabled(PCEVENT_DESCRIPTOR EventDescriptor)
{
  if ( KiIntSteerEtwHandle )
    return EtwEventEnabled(KiIntSteerEtwHandle, EventDescriptor);
  else
    return 0;
}
