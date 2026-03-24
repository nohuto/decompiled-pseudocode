/*
 * XREFs of IopFreeBackpocketIrp @ 0x14027EE14
 * Callers:
 *     IopFreeReserveIrp @ 0x14027EE84 (IopFreeReserveIrp.c)
 * Callees:
 *     KeSetEvent @ 0x1400C2B00 (KeSetEvent.c)
 */

LONG __fastcall IopFreeBackpocketIrp(IRP *a1)
{
  struct _KEVENT *v1; // rcx
  LONG result; // eax

  if ( a1 == Irp )
  {
    qword_140435D68 = 0LL;
    _InterlockedExchange(&dword_140435D60, 0);
    v1 = (struct _KEVENT *)&word_140435D70;
    return KeSetEvent(v1, 1, 0);
  }
  if ( a1 == qword_140435D88 )
  {
    qword_140435D98 = 0LL;
    _InterlockedExchange(&dword_140435D90, 0);
    v1 = &stru_140435DA0;
    return KeSetEvent(v1, 1, 0);
  }
  result = (int)qword_140435DB8;
  *(_QWORD *)&a1->Type = qword_140435DB8;
  qword_140435DB8 = a1;
  return result;
}
