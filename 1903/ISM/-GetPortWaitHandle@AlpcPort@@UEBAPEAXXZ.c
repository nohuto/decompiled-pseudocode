/*
 * XREFs of ?GetPortWaitHandle@AlpcPort@@UEBAPEAXXZ @ 0x18000E120
 * Callers:
 *     ?GetWindowId@MPCFocusTarget@@WEI@EAA_KXZ @ 0x1800380B0 (-GetWindowId@MPCFocusTarget@@WEI@EAA_KXZ.c)
 * Callees:
 *     <none>
 */

void *__fastcall AlpcPort::GetPortWaitHandle(AlpcPort *this)
{
  return (void *)*((_QWORD *)this + 7);
}
