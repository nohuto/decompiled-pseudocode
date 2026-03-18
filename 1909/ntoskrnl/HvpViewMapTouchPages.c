/*
 * XREFs of HvpViewMapTouchPages @ 0x140638360
 * Callers:
 *     HvpViewMapMakeViewRangeCOWByCaller @ 0x140635C20 (HvpViewMapMakeViewRangeCOWByCaller.c)
 *     HvpViewMapMakeViewRangeValid @ 0x14068F340 (HvpViewMapMakeViewRangeValid.c)
 *     HvpMappedViewConvertRegionFromLockedToCOWByPolicy @ 0x14072C5F0 (HvpMappedViewConvertRegionFromLockedToCOWByPolicy.c)
 * Callees:
 *     HvpInpageErrorFilter @ 0x14082F988 (HvpInpageErrorFilter.c)
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
