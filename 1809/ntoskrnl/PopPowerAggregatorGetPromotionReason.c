/*
 * XREFs of PopPowerAggregatorGetPromotionReason @ 0x140876E78
 * Callers:
 *     PopPowerAggregatorSelectRequest @ 0x140876F34 (PopPowerAggregatorSelectRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopPowerAggregatorGetPromotionReason(int *a1, int *a2)
{
  int v2; // eax
  unsigned int v3; // r8d
  int v4; // r9d
  int v5; // eax
  unsigned int v6; // ecx

  v2 = a2[1];
  v3 = 0;
  v4 = a1[1];
  if ( v2 <= v4 )
  {
    if ( v2 == v4 && *a2 >= *a1 )
    {
      return 2;
    }
    else if ( v4 != 2 )
    {
      v5 = *a1;
      if ( *a2 == 1 )
      {
        if ( v5 != 1 )
          return 3;
      }
      else
      {
        v6 = 0;
        if ( v5 == 1 )
          return 3;
        return v6;
      }
    }
  }
  else
  {
    return 1;
  }
  return v3;
}
