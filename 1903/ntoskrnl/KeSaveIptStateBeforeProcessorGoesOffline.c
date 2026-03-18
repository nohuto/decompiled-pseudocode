/*
 * XREFs of KeSaveIptStateBeforeProcessorGoesOffline @ 0x14015F438
 * Callers:
 *     PopHandleNextState @ 0x140598DD0 (PopHandleNextState.c)
 *     PnprQuiesceProcessorDpc @ 0x1405AA190 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     KiSaveIptState @ 0x1402AB208 (KiSaveIptState.c)
 */

struct _KPRCB *KeSaveIptStateBeforeProcessorGoesOffline()
{
  struct _KPRCB *result; // rax
  _XSAVE_AREA *ExtendedState; // rdx

  if ( (_DWORD)KiIptMsrMask )
  {
    result = KeGetCurrentPrcb();
    ExtendedState = result->ExtendedState;
    if ( ExtendedState )
      return (struct _KPRCB *)KiSaveIptState((char *)ExtendedState + (unsigned int)KeXStateLength);
  }
  return result;
}
