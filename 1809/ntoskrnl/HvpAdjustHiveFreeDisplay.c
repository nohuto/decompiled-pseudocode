/*
 * XREFs of HvpAdjustHiveFreeDisplay @ 0x1405A5FA8
 * Callers:
 *     HvpAddBin @ 0x1405A49BC (HvpAddBin.c)
 *     HvLoadHive @ 0x1405A5C9C (HvLoadHive.c)
 *     HvFreeHivePartial @ 0x1405A9240 (HvFreeHivePartial.c)
 *     HvHiveStartMemoryBacked @ 0x14073DCFC (HvHiveStartMemoryBacked.c)
 *     HvpPerformLogFileRecovery @ 0x1407F8D60 (HvpPerformLogFileRecovery.c)
 * Callees:
 *     HvpAdjustBitmap @ 0x1405A6024 (HvpAdjustBitmap.c)
 */

__int64 __fastcall HvpAdjustHiveFreeDisplay(__int64 a1, unsigned int a2, int a3)
{
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 result; // rax

  if ( a2 > 0x7FFFE000 )
    return 3221225804LL;
  v5 = 0LL;
  v6 = 632LL * a3;
  while ( 1 )
  {
    result = HvpAdjustBitmap(a1, a2, v6 + 24 * v5 + a1 + 304);
    if ( (int)result < 0 )
      break;
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= 0x18 )
      return 0LL;
  }
  return result;
}
