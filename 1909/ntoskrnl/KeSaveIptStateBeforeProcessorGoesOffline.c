/*
 * XREFs of KeSaveIptStateBeforeProcessorGoesOffline @ 0x14015FAD8
 * Callers:
 *     PopHandleNextState @ 0x140598DB0 (PopHandleNextState.c)
 *     PnprQuiesceProcessorDpc @ 0x1405AA170 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     KiSaveIptState @ 0x1402AAF68 (KiSaveIptState.c)
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
