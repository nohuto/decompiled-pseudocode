/*
 * XREFs of ?GetWindowId@MPCFocusTarget@@WEI@EAA_KXZ @ 0x180037BC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall MPCFocusTarget::GetWindowId(__int64 a1)
{
  return AlpcPort::GetPortWaitHandle((AlpcPort *)(a1 - 72));
}
