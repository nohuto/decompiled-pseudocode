/*
 * XREFs of KeRestoreIptStateAfterProcessorComesOnline @ 0x140143688
 * Callers:
 *     PopHandleNextState @ 0x140569410 (PopHandleNextState.c)
 *     PnprQuiesceProcessorDpc @ 0x14057A350 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     KiRestoreIptState @ 0x140294700 (KiRestoreIptState.c)
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
