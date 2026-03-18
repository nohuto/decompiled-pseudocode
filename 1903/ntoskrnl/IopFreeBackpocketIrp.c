/*
 * XREFs of IopFreeBackpocketIrp @ 0x1402937DC
 * Callers:
 *     IopFreeReserveIrp @ 0x14029384C (IopFreeReserveIrp.c)
 * Callees:
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 */

LONG __fastcall IopFreeBackpocketIrp(IRP *a1)
{
  struct _KEVENT *v1; // rcx
  LONG result; // eax

  if ( a1 == Irp )
  {
    qword_140461908 = 0LL;
    _InterlockedExchange(&dword_140461900, 0);
    v1 = (struct _KEVENT *)&word_140461910;
    return KeSetEvent(v1, 1, 0);
  }
  if ( a1 == qword_140461928 )
  {
    qword_140461938 = 0LL;
    _InterlockedExchange(&dword_140461930, 0);
    v1 = &stru_140461940;
    return KeSetEvent(v1, 1, 0);
  }
  result = (int)qword_140461958;
  *(_QWORD *)&a1->Type = qword_140461958;
  qword_140461958 = a1;
  return result;
}
