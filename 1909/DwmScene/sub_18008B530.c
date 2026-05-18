/*
 * XREFs of sub_18008B530 @ 0x18008B530
 * Callers:
 *     sub_18006EF58 @ 0x18006EF58 (sub_18006EF58.c)
 *     sub_180089C5C @ 0x180089C5C (sub_180089C5C.c)
 *     sub_18008AB14 @ 0x18008AB14 (sub_18008AB14.c)
 *     sub_18008ABC0 @ 0x18008ABC0 (sub_18008ABC0.c)
 *     sub_18008ACB8 @ 0x18008ACB8 (sub_18008ACB8.c)
 *     sub_18008B02C @ 0x18008B02C (sub_18008B02C.c)
 *     sub_18008B3B0 @ 0x18008B3B0 (sub_18008B3B0.c)
 *     sub_18008C058 @ 0x18008C058 (sub_18008C058.c)
 *     sub_18008C330 @ 0x18008C330 (sub_18008C330.c)
 *     sub_18008CBD8 @ 0x18008CBD8 (sub_18008CBD8.c)
 *     sub_1800C1EE4 @ 0x1800C1EE4 (sub_1800C1EE4.c)
 *     sub_1801008C0 @ 0x1801008C0 (sub_1801008C0.c)
 *     sub_18011FCBC @ 0x18011FCBC (sub_18011FCBC.c)
 *     sub_18011FF04 @ 0x18011FF04 (sub_18011FF04.c)
 *     sub_180120150 @ 0x180120150 (sub_180120150.c)
 *     sub_180120434 @ 0x180120434 (sub_180120434.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18008B530(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(a1 + 40);
  }
  *a2 = *(_QWORD *)(a1 + 32);
  result = a2;
  a2[1] = v2;
  return result;
}
