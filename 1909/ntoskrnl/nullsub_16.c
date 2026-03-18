/*
 * XREFs of nullsub_16 @ 0x14094CFA2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 nullsub_16()
{
  _BYTE retaddr[16]; // [rsp+0h] [rbp+0h]

  return MK_FP(*(_WORD *)retaddr, *(_QWORD *)retaddr)();
}
