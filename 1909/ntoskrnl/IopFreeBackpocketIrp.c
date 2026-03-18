/*
 * XREFs of IopFreeBackpocketIrp @ 0x14029353C
 * Callers:
 *     IopFreeReserveIrp @ 0x1402935AC (IopFreeReserveIrp.c)
 * Callees:
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 */

LONG __fastcall IopFreeBackpocketIrp(IRP *a1)
{
  struct _KEVENT *v1; // rcx
  LONG result; // eax

  if ( a1 == Irp )
  {
    qword_1404615E8 = 0LL;
    _InterlockedExchange(&dword_1404615E0, 0);
    v1 = (struct _KEVENT *)&word_1404615F0;
    return KeSetEvent(v1, 1, 0);
  }
  if ( a1 == qword_140461608 )
  {
    qword_140461618 = 0LL;
    _InterlockedExchange(&dword_140461610, 0);
    v1 = &stru_140461620;
    return KeSetEvent(v1, 1, 0);
  }
  result = (int)qword_140461638;
  *(_QWORD *)&a1->Type = qword_140461638;
  qword_140461638 = a1;
  return result;
}
