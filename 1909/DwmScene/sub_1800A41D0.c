/*
 * XREFs of sub_1800A41D0 @ 0x1800A41D0
 * Callers:
 *     sub_1800C5A08 @ 0x1800C5A08 (sub_1800C5A08.c)
 *     sub_1800C6364 @ 0x1800C6364 (sub_1800C6364.c)
 *     sub_1800C8208 @ 0x1800C8208 (sub_1800C8208.c)
 *     sub_1800DC0E4 @ 0x1800DC0E4 (sub_1800DC0E4.c)
 *     sub_1800F2454 @ 0x1800F2454 (sub_1800F2454.c)
 *     sub_1800F2A54 @ 0x1800F2A54 (sub_1800F2A54.c)
 *     sub_1800F2BD4 @ 0x1800F2BD4 (sub_1800F2BD4.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800A41D0(__int64 a1, _QWORD *a2)
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
