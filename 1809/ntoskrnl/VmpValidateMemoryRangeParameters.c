/*
 * XREFs of VmpValidateMemoryRangeParameters @ 0x1408B1D9C
 * Callers:
 *     VmCreateMemoryRange @ 0x1408B1380 (VmCreateMemoryRange.c)
 *     VmDeleteMemoryRange @ 0x1408B1530 (VmDeleteMemoryRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VmpValidateMemoryRangeParameters(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4)
{
  unsigned __int64 v5; // r8

  if ( a4 == -1 )
    return 10LL;
  if ( !a3 )
    return 20LL;
  if ( a3 > 0xFFFFFFFFFFFFFLL )
    return 30LL;
  if ( ((a2 | a1) & 0xFFF) != 0 )
    return 40LL;
  v5 = a3 << 12;
  if ( v5 + a2 <= a2 )
    return 50LL;
  if ( v5 + a1 > a1 )
    return v5 + a2 - 1 > 0x7FFFFFFEFFFFLL ? 0x46 : 0;
  return 60LL;
}
