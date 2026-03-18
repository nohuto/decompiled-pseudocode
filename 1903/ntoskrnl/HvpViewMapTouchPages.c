/*
 * XREFs of HvpViewMapTouchPages @ 0x1406605C4
 * Callers:
 *     HvpViewMapMakeViewRangeCOWByCaller @ 0x140631DA0 (HvpViewMapMakeViewRangeCOWByCaller.c)
 *     HvpViewMapMakeViewRangeValid @ 0x1406603E4 (HvpViewMapMakeViewRangeValid.c)
 *     HvpMappedViewConvertRegionFromLockedToCOWByPolicy @ 0x14072A750 (HvpMappedViewConvertRegionFromLockedToCOWByPolicy.c)
 * Callees:
 *     HvpInpageErrorFilter @ 0x14082FB18 (HvpInpageErrorFilter.c)
 */

__int64 __fastcall HvpViewMapTouchPages(_BYTE *a1, __int64 a2, char a3)
{
  _BYTE *i; // [rsp+28h] [rbp-10h]

  for ( i = a1; i < &a1[a2]; i += 4096 )
  {
    if ( a3 )
      *i = *i;
  }
  return 0LL;
}
