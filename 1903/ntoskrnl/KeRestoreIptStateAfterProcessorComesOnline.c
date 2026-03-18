/*
 * XREFs of KeRestoreIptStateAfterProcessorComesOnline @ 0x14015EE3C
 * Callers:
 *     PopHandleNextState @ 0x140598DD0 (PopHandleNextState.c)
 *     PnprQuiesceProcessorDpc @ 0x1405AA190 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     KiRestoreIptState @ 0x1402AB0E0 (KiRestoreIptState.c)
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
