/*
 * XREFs of IopFreeReserveIrp @ 0x14027F074
 * Callers:
 *     IopFreeIrp @ 0x1400B95E0 (IopFreeIrp.c)
 *     IopCompleteRequest @ 0x1400BFC50 (IopCompleteRequest.c)
 * Callees:
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     IopFreeBackpocketIrp @ 0x14027F004 (IopFreeBackpocketIrp.c)
 */

LONG __fastcall IopFreeReserveIrp(IRP *a1)
{
  struct _KEVENT *v1; // rcx

  a1->AllocationFlags &= 0xDEu;
  if ( a1 == IopReserveIrps )
  {
    v1 = (struct _KEVENT *)&word_140436D90;
    _InterlockedExchange(&dword_140436D88, 0);
    return KeSetEvent(v1, 1, 0);
  }
  if ( a1 == qword_140436DA8 )
  {
    v1 = (struct _KEVENT *)&word_140436DB8;
    _InterlockedExchange(&dword_140436DB0, 0);
    return KeSetEvent(v1, 1, 0);
  }
  if ( a1 == qword_140436DD0 )
  {
    v1 = &stru_140436DE0;
    _InterlockedExchange(&dword_140436DD8, 0);
    return KeSetEvent(v1, 1, 0);
  }
  return IopFreeBackpocketIrp(a1);
}
