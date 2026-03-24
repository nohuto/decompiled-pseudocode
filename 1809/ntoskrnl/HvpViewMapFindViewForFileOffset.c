/*
 * XREFs of HvpViewMapFindViewForFileOffset @ 0x1405F9CD0
 * Callers:
 *     HvpViewMapUnCOWAndSealRange @ 0x1405A5824 (HvpViewMapUnCOWAndSealRange.c)
 *     HvpViewMapSealRange @ 0x1405A592C (HvpViewMapSealRange.c)
 *     HvpViewMapCOWAndUnsealRange @ 0x1405A5A0C (HvpViewMapCOWAndUnsealRange.c)
 *     HvpMapHiveImageFromViewMap @ 0x1405F9C30 (HvpMapHiveImageFromViewMap.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x1406BA4B0 (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapExtendStorage @ 0x1406CC5A0 (HvpViewMapExtendStorage.c)
 *     HvpViewMapConvertLockedPagesToCOWByPolicy @ 0x140708814 (HvpViewMapConvertLockedPagesToCOWByPolicy.c)
 *     HvpViewMapAdjustFlag @ 0x140740908 (HvpViewMapAdjustFlag.c)
 *     HvpViewMapShrinkStorage @ 0x1407F7130 (HvpViewMapShrinkStorage.c)
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
