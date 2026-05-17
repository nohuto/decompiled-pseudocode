/*
 * XREFs of sub_180032A38 @ 0x180032A38
 * Callers:
 *     sub_180035F18 @ 0x180035F18 (sub_180035F18.c)
 * Callees:
 *     ZwProtectVirtualMemory @ 0x18009D0E0 (ZwProtectVirtualMemory.c)
 *     sub_1800D5DF0 @ 0x1800D5DF0 (sub_1800D5DF0.c)
 */

__int64 __fastcall sub_180032A38(unsigned int a1)
{
  __int64 result; // rax
  unsigned int v2; // [rsp+40h] [rbp+8h] BYREF
  __int64 v3; // [rsp+48h] [rbp+10h] BYREF
  __int64 v4; // [rsp+50h] [rbp+18h] BYREF

  v2 = a1;
  if ( !qword_18017A290 )
    sub_1800D5DF0();
  v4 = qword_18017A290;
  v3 = qword_18017A280;
  result = ZwProtectVirtualMemory(-1LL, &v4, &v3, v2, &v2);
  if ( (int)result < 0 )
    __fastfail(5u);
  return result;
}
