/*
 * XREFs of sub_18006C7D4 @ 0x18006C7D4
 * Callers:
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 *     sub_180023170 @ 0x180023170 (sub_180023170.c)
 *     sub_18006C688 @ 0x18006C688 (sub_18006C688.c)
 * Callees:
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

__int64 __fastcall sub_18006C7D4(__int64 a1)
{
  _QWORD *v1; // r8
  _QWORD *v4; // rbx

  v1 = *(_QWORD **)(a1 + 16);
  if ( v1 )
  {
    do
    {
      v4 = (_QWORD *)*v1;
      RtlFreeHeap(qword_180165420, 0, (__int64)v1);
      v1 = v4;
    }
    while ( v4 );
  }
  return RtlFreeHeap(qword_180165420, 0, a1);
}
