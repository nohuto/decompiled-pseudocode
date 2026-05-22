/*
 * XREFs of ?GetPortWaitHandle@AlpcPort@@UEBAPEAXXZ @ 0x18000E190
 * Callers:
 *     ?GetWindowId@MPCFocusTarget@@WEI@EAA_KXZ @ 0x180037BC0 (-GetWindowId@MPCFocusTarget@@WEI@EAA_KXZ.c)
 * Callees:
 *     <none>
 */

void *__fastcall AlpcPort::GetPortWaitHandle(AlpcPort *this)
{
  return (void *)*((_QWORD *)this + 7);
}
