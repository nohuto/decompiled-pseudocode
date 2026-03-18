/*
 * XREFs of HvpViewMapTouchPages @ 0x1405A5B8C
 * Callers:
 *     HvpViewMapMakeViewRangeValid @ 0x1405A5658 (HvpViewMapMakeViewRangeValid.c)
 *     HvpViewMapMakeViewRangeCOWByCaller @ 0x1405A5A80 (HvpViewMapMakeViewRangeCOWByCaller.c)
 *     HvpMappedViewConvertRegionFromLockedToCOWByPolicy @ 0x140703FA0 (HvpMappedViewConvertRegionFromLockedToCOWByPolicy.c)
 * Callees:
 *     HvpInpageErrorFilter @ 0x1407F6E60 (HvpInpageErrorFilter.c)
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
