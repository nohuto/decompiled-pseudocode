/*
 * XREFs of IopFreeReserveIrp @ 0x14029384C
 * Callers:
 *     IopFreeIrp @ 0x140043ED0 (IopFreeIrp.c)
 *     IopCompleteRequest @ 0x1400656B0 (IopCompleteRequest.c)
 * Callees:
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     IopFreeBackpocketIrp @ 0x1402937DC (IopFreeBackpocketIrp.c)
 */

LONG __fastcall IopFreeReserveIrp(IRP *a1)
{
  struct _KEVENT *v1; // rcx

  a1->AllocationFlags &= 0xDEu;
  if ( a1 == IopReserveIrps )
  {
    v1 = (struct _KEVENT *)&word_140461890;
    _InterlockedExchange(&dword_140461888, 0);
    return KeSetEvent(v1, 1, 0);
  }
  if ( a1 == qword_1404618A8 )
  {
    v1 = (struct _KEVENT *)&word_1404618B8;
    _InterlockedExchange(&dword_1404618B0, 0);
    return KeSetEvent(v1, 1, 0);
  }
  if ( a1 == qword_1404618D0 )
  {
    v1 = &stru_1404618E0;
    _InterlockedExchange(&dword_1404618D8, 0);
    return KeSetEvent(v1, 1, 0);
  }
  return IopFreeBackpocketIrp(a1);
}
