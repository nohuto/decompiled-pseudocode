/*
 * XREFs of IopFreeBackpocketIrp @ 0x14027F004
 * Callers:
 *     IopFreeReserveIrp @ 0x14027F074 (IopFreeReserveIrp.c)
 * Callees:
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 */

LONG __fastcall IopFreeBackpocketIrp(IRP *a1)
{
  struct _KEVENT *v1; // rcx
  LONG result; // eax

  if ( a1 == Irp )
  {
    qword_140436E08 = 0LL;
    _InterlockedExchange(&dword_140436E00, 0);
    v1 = (struct _KEVENT *)&word_140436E10;
    return KeSetEvent(v1, 1, 0);
  }
  if ( a1 == qword_140436E28 )
  {
    qword_140436E38 = 0LL;
    _InterlockedExchange(&dword_140436E30, 0);
    v1 = &stru_140436E40;
    return KeSetEvent(v1, 1, 0);
  }
  result = (int)qword_140436E58;
  *(_QWORD *)&a1->Type = qword_140436E58;
  qword_140436E58 = a1;
  return result;
}
