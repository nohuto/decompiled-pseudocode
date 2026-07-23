/*
 * XREFs of HvlpPrepareFlushHeader @ 0x140279E98
 * Callers:
 *     HvlpFastFlushAddressSpaceTb @ 0x1402799F8 (HvlpFastFlushAddressSpaceTb.c)
 *     HvlpFlushRangeListTb @ 0x140279D14 (HvlpFlushRangeListTb.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x140279EF0 (HvlpSlowFlushAddressSpaceTb.c)
 * Callees:
 *     HvlpAffinityToVirtualAffinity @ 0x140279690 (HvlpAffinityToVirtualAffinity.c)
 */

__int64 __fastcall HvlpPrepareFlushHeader(_QWORD *a1, __int64 a2, __int64 a3, char a4)
{
  _QWORD *v4; // r11
  unsigned __int64 v6; // rcx
  int v7; // r10d
  unsigned int v8; // r10d
  __int64 result; // rax

  v4 = a1;
  v6 = 0LL;
  v7 = (a4 == 0 ? 4 : 0) | 2;
  if ( a2 )
    v7 = a4 == 0 ? 4 : 0;
  if ( a3 )
    v6 = HvlpAffinityToVirtualAffinity(*(_QWORD *)(a3 + 8));
  else
    v8 = v7 | 1;
  v4[2] = v6;
  result = v8;
  v4[1] = v8;
  *v4 = a2;
  return result;
}
