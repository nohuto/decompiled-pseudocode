/*
 * XREFs of HvpViewMapFindViewForFileOffset @ 0x1405FACD0
 * Callers:
 *     HvpViewMapUnCOWAndSealRange @ 0x1405A6824 (HvpViewMapUnCOWAndSealRange.c)
 *     HvpViewMapSealRange @ 0x1405A692C (HvpViewMapSealRange.c)
 *     HvpViewMapCOWAndUnsealRange @ 0x1405A6A0C (HvpViewMapCOWAndUnsealRange.c)
 *     HvpMapHiveImageFromViewMap @ 0x1405FAC30 (HvpMapHiveImageFromViewMap.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x1406BB750 (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapExtendStorage @ 0x1406CD840 (HvpViewMapExtendStorage.c)
 *     HvpViewMapConvertLockedPagesToCOWByPolicy @ 0x140709AB4 (HvpViewMapConvertLockedPagesToCOWByPolicy.c)
 *     HvpViewMapAdjustFlag @ 0x140741AF8 (HvpViewMapAdjustFlag.c)
 *     HvpViewMapShrinkStorage @ 0x1407F8330 (HvpViewMapShrinkStorage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall HvpViewMapFindViewForFileOffset(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rcx
  unsigned __int64 v4; // rdx
  unsigned __int64 result; // rax
  int v6; // edx
  unsigned __int64 v7; // rcx

  v2 = (unsigned __int64 *)(a1 + 40);
  v4 = v2[1];
  result = *v2;
  if ( (v4 & 1) != 0 && result )
    result ^= (unsigned __int64)v2;
  v6 = v4 & 1;
  while ( result )
  {
    if ( a2 < *(_QWORD *)(result + 40) )
    {
      v7 = *(_QWORD *)result;
    }
    else
    {
      if ( a2 < *(_QWORD *)(result + 48) )
        return result;
      v7 = *(_QWORD *)(result + 8);
    }
    if ( v6 && v7 )
      result ^= v7;
    else
      result = v7;
  }
  return 0LL;
}
