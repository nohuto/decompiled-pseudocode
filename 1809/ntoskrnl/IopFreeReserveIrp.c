/*
 * XREFs of IopFreeReserveIrp @ 0x14027EE84
 * Callers:
 *     IopFreeIrp @ 0x1400B96A0 (IopFreeIrp.c)
 *     IopCompleteRequest @ 0x1400BFD10 (IopCompleteRequest.c)
 * Callees:
 *     KeSetEvent @ 0x1400C2B00 (KeSetEvent.c)
 *     IopFreeBackpocketIrp @ 0x14027EE14 (IopFreeBackpocketIrp.c)
 */

LONG __fastcall IopFreeReserveIrp(IRP *a1)
{
  struct _KEVENT *v1; // rcx

  a1->AllocationFlags &= 0xDEu;
  if ( a1 == IopReserveIrps )
  {
    v1 = (struct _KEVENT *)&word_140435CF0;
    _InterlockedExchange(&dword_140435CE8, 0);
    return KeSetEvent(v1, 1, 0);
  }
  if ( a1 == qword_140435D08 )
  {
    v1 = (struct _KEVENT *)&word_140435D18;
    _InterlockedExchange(&dword_140435D10, 0);
    return KeSetEvent(v1, 1, 0);
  }
  if ( a1 == qword_140435D30 )
  {
    v1 = &stru_140435D40;
    _InterlockedExchange(&dword_140435D38, 0);
    return KeSetEvent(v1, 1, 0);
  }
  return IopFreeBackpocketIrp(a1);
}
