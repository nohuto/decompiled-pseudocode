/*
 * XREFs of MiTransformValidPteInPlace @ 0x140174574
 * Callers:
 *     MiShadowTopLevelPxes @ 0x14008F250 (MiShadowTopLevelPxes.c)
 *     MiInitializeSystemPageTable @ 0x14009641C (MiInitializeSystemPageTable.c)
 *     MiReplicatePteChangeToProcess @ 0x14017EA94 (MiReplicatePteChangeToProcess.c)
 *     MiReplacePfnWithGapMapping @ 0x1401869E4 (MiReplacePfnWithGapMapping.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140186EF8 (MiDemoteValidLargePageOneLevel.c)
 *     MiMakeLargePageTable @ 0x1402CA4A8 (MiMakeLargePageTable.c)
 *     MiInitializeDynamicBitmap @ 0x1407420E8 (MiInitializeDynamicBitmap.c)
 * Callees:
 *     MiFlushValidPteFromTb @ 0x140174624 (MiFlushValidPteFromTb.c)
 */

signed __int64 __fastcall MiTransformValidPteInPlace(
        volatile signed __int64 *a1,
        __int64 a2,
        signed __int64 a3,
        unsigned int a4)
{
  signed __int64 result; // rax
  unsigned __int64 v9; // rdi
  signed __int64 v10; // rtt
  signed __int64 v11; // rtt

  if ( (MiFlags & 0x4000000) != 0 )
    _mm_lfence();
  result = *a1;
  while ( result != a3 )
  {
    while ( (result & 0x20) != 0 )
    {
      v9 = result & 0xFFFFFFFFFFFFFFDFuLL;
      v10 = result;
      result = _InterlockedCompareExchange64(a1, result & 0xFFFFFFFFFFFFFFDFuLL, result);
      if ( v10 == result )
      {
        MiFlushValidPteFromTb(a2, result, a4);
        result = v9;
        break;
      }
    }
    v11 = result;
    result = _InterlockedCompareExchange64(a1, a3, result);
    if ( v11 == result )
    {
      if ( (MiFlags & 0x800) != 0 )
        result |= 0x20uLL;
      if ( (result & 0x20) != 0 )
        return MiFlushValidPteFromTb(a2, result, a4);
      return result;
    }
  }
  return result;
}
