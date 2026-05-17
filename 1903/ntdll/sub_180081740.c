/*
 * XREFs of sub_180081740 @ 0x180081740
 * Callers:
 *     sub_18002EB80 @ 0x18002EB80 (sub_18002EB80.c)
 *     sub_180081630 @ 0x180081630 (sub_180081630.c)
 * Callees:
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 */

__int64 __fastcall sub_180081740(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  ZwClose(a1[4]);
  v2 = a1[3];
  a1[12] = 0LL;
  result = ZwClose(v2);
  a1[4] = 0LL;
  a1[3] = 0LL;
  return result;
}
