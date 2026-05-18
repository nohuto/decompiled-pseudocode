/*
 * XREFs of sub_1800A40C0 @ 0x1800A40C0
 * Callers:
 *     sub_1800C58F8 @ 0x1800C58F8 (sub_1800C58F8.c)
 *     sub_1800C6254 @ 0x1800C6254 (sub_1800C6254.c)
 *     sub_1800C80F8 @ 0x1800C80F8 (sub_1800C80F8.c)
 *     sub_1800DBFD4 @ 0x1800DBFD4 (sub_1800DBFD4.c)
 *     sub_1800F2344 @ 0x1800F2344 (sub_1800F2344.c)
 *     sub_1800F2944 @ 0x1800F2944 (sub_1800F2944.c)
 *     sub_1800F2AC4 @ 0x1800F2AC4 (sub_1800F2AC4.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800A40C0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 18656);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(a1 + 18656);
  }
  *a2 = *(_QWORD *)(a1 + 18648);
  result = a2;
  a2[1] = v2;
  return result;
}
