/*
 * XREFs of sub_18008B420 @ 0x18008B420
 * Callers:
 *     sub_18006EE48 @ 0x18006EE48 (sub_18006EE48.c)
 *     sub_180089B4C @ 0x180089B4C (sub_180089B4C.c)
 *     sub_18008AA04 @ 0x18008AA04 (sub_18008AA04.c)
 *     sub_18008AAB0 @ 0x18008AAB0 (sub_18008AAB0.c)
 *     sub_18008ABA8 @ 0x18008ABA8 (sub_18008ABA8.c)
 *     sub_18008AF1C @ 0x18008AF1C (sub_18008AF1C.c)
 *     sub_18008B2A0 @ 0x18008B2A0 (sub_18008B2A0.c)
 *     sub_18008BF48 @ 0x18008BF48 (sub_18008BF48.c)
 *     sub_18008C220 @ 0x18008C220 (sub_18008C220.c)
 *     sub_18008CAC8 @ 0x18008CAC8 (sub_18008CAC8.c)
 *     sub_1800C1DD4 @ 0x1800C1DD4 (sub_1800C1DD4.c)
 *     sub_1801007B0 @ 0x1801007B0 (sub_1801007B0.c)
 *     sub_18011FBAC @ 0x18011FBAC (sub_18011FBAC.c)
 *     sub_18011FDF4 @ 0x18011FDF4 (sub_18011FDF4.c)
 *     sub_180120040 @ 0x180120040 (sub_180120040.c)
 *     sub_180120324 @ 0x180120324 (sub_180120324.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18008B420(__int64 a1, _QWORD *a2)
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
