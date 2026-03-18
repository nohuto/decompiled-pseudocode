/*
 * XREFs of KeRestoreIptStateAfterProcessorComesOnline @ 0x14015F4DC
 * Callers:
 *     PopHandleNextState @ 0x140598DB0 (PopHandleNextState.c)
 *     PnprQuiesceProcessorDpc @ 0x1405AA170 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     KiRestoreIptState @ 0x1402AAE40 (KiRestoreIptState.c)
 */

struct _KPRCB *KeRestoreIptStateAfterProcessorComesOnline()
{
  struct _KPRCB *result; // rax
  _XSAVE_AREA *ExtendedState; // rdx

  if ( (_DWORD)KiIptMsrMask )
  {
    result = KeGetCurrentPrcb();
    ExtendedState = result->ExtendedState;
    if ( ExtendedState )
      return (struct _KPRCB *)KiRestoreIptState((char *)ExtendedState + (unsigned int)KeXStateLength);
  }
  return result;
}
