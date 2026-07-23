/*
 * XREFs of KeSaveIptStateBeforeProcessorGoesOffline @ 0x1401437C4
 * Callers:
 *     PopHandleNextState @ 0x14056A410 (PopHandleNextState.c)
 *     PnprQuiesceProcessorDpc @ 0x14057B350 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     KiSaveIptState @ 0x140294B18 (KiSaveIptState.c)
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
