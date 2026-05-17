/*
 * XREFs of sub_180049EE0 @ 0x180049EE0
 * Callers:
 *     RtlCreateHeap @ 0x180049100 (RtlCreateHeap.c)
 *     sub_180049E3C @ 0x180049E3C (sub_180049E3C.c)
 *     sub_180049E98 @ 0x180049E98 (sub_180049E98.c)
 *     sub_1800EEE84 @ 0x1800EEE84 (sub_1800EEE84.c)
 *     sub_180107738 @ 0x180107738 (sub_180107738.c)
 * Callees:
 *     sub_18004A7A0 @ 0x18004A7A0 (sub_18004A7A0.c)
 */

unsigned __int64 __fastcall sub_180049EE0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8

  v3 = (unsigned __int64)(unsigned int)sub_18004A7A0(a1, a2, a3) << 32;
  return v3 | (unsigned int)sub_18004A7A0(v5, v4, v6);
}
