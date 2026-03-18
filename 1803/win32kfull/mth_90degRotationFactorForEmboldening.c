/*
 * XREFs of mth_90degRotationFactorForEmboldening @ 0x1C02B3480
 * Callers:
 *     scl_InitializeScaling @ 0x1C02B4748 (scl_InitializeScaling.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall mth_90degRotationFactorForEmboldening(int *a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = a1[3];
  result = 0LL;
  if ( !v1 && !a1[1] )
  {
    if ( *a1 > 0 )
    {
      if ( a1[4] <= 0 )
        return 4LL;
      return result;
    }
    if ( *a1 < 0 )
    {
      if ( a1[4] >= 0 )
        return 6LL;
      else
        return 2LL;
    }
    return 8LL;
  }
  if ( *a1 || a1[4] )
    return 8LL;
  if ( v1 >= 0 )
  {
    if ( v1 <= 0 )
      return 8LL;
    if ( a1[1] >= 0 )
      return 5LL;
    else
      return 3LL;
  }
  else if ( a1[1] <= 0 )
  {
    return 7LL;
  }
  else
  {
    return 1LL;
  }
}
