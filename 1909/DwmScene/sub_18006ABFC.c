/*
 * XREFs of sub_18006ABFC @ 0x18006ABFC
 * Callers:
 *     sub_1800ACEF0 @ 0x1800ACEF0 (sub_1800ACEF0.c)
 * Callees:
 *     sub_1800E074C @ 0x1800E074C (sub_1800E074C.c)
 */

__int64 __fastcall sub_18006ABFC(__int64 a1, __int128 *a2)
{
  __int64 v2; // rcx
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 96) + 14624LL;
  v4 = *a2;
  return sub_1800E074C(v2, &v4);
}
