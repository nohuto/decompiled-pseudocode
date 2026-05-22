/*
 * XREFs of ?GetWaitHandle@AlpcPort@@UEAAPEAXXZ @ 0x18000B380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall AlpcPort::GetWaitHandle(AlpcPort *this)
{
  return (void *)*((_QWORD *)this + 2);
}
