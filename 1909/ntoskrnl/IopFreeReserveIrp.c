/*
 * XREFs of IopFreeReserveIrp @ 0x1402935AC
 * Callers:
 *     IopFreeIrp @ 0x140043F70 (IopFreeIrp.c)
 *     IopCompleteRequest @ 0x140065750 (IopCompleteRequest.c)
 * Callees:
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     IopFreeBackpocketIrp @ 0x14029353C (IopFreeBackpocketIrp.c)
 */

LONG __fastcall IopFreeReserveIrp(IRP *a1)
{
  struct _KEVENT *v1; // rcx

  a1->AllocationFlags &= 0xDEu;
  if ( a1 == IopReserveIrps )
  {
    v1 = (struct _KEVENT *)&word_140461570;
    _InterlockedExchange(&dword_140461568, 0);
    return KeSetEvent(v1, 1, 0);
  }
  if ( a1 == qword_140461588 )
  {
    v1 = (struct _KEVENT *)&word_140461598;
    _InterlockedExchange(&dword_140461590, 0);
    return KeSetEvent(v1, 1, 0);
  }
  if ( a1 == qword_1404615B0 )
  {
    v1 = &stru_1404615C0;
    _InterlockedExchange(&dword_1404615B8, 0);
    return KeSetEvent(v1, 1, 0);
  }
  return IopFreeBackpocketIrp(a1);
}
