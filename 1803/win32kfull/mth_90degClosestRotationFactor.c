/*
 * XREFs of mth_90degClosestRotationFactor @ 0x1C02B32F4
 * Callers:
 *     scl_InitializeScaling @ 0x1C02B4748 (scl_InitializeScaling.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall mth_90degClosestRotationFactor(int *a1)
{
  int v1; // edx
  bool v2; // zf
  int v3; // r8d
  bool v4; // sf
  bool v6; // sf
  bool v7; // sf
  int v8; // eax
  bool v9; // cc
  bool v10; // sf
  bool v11; // zf
  int v12; // eax
  bool v13; // cc
  bool v14; // sf
  bool v15; // zf
  int v16; // eax
  bool v17; // zf

  v1 = *a1;
  v2 = *a1 == 0;
  if ( *a1 > 0 )
  {
    v3 = a1[1];
    v4 = v3 < 0;
    if ( !v3 )
    {
      if ( a1[3] > 0 && a1[4] > 0 )
        return 0LL;
      v4 = 0;
    }
    if ( v4 && !a1[3] && a1[4] > 0 )
      return 0LL;
    v2 = v1 == 0;
  }
  if ( !v2 )
    goto LABEL_15;
  v6 = a1[1] < 0;
  if ( a1[1] <= 0 )
    goto LABEL_32;
  if ( a1[3] < 0 )
  {
    if ( a1[4] > 0 )
      return 1LL;
LABEL_15:
    v7 = v1 < 0;
    if ( v1 > 0 )
    {
      if ( a1[1] > 0 && a1[3] < 0 && !a1[4] )
        return 1LL;
      v7 = v1 < 0;
    }
    if ( v7 )
    {
      v8 = a1[1];
      v9 = v8 <= 0;
      if ( !v8 )
      {
        if ( a1[3] < 0 && a1[4] < 0 )
          return 2LL;
        v9 = 1;
      }
      if ( !v9 && !a1[3] && a1[4] < 0 )
        return 2LL;
    }
    v10 = v1 < 0;
    if ( v1 )
      goto LABEL_36;
  }
  v6 = a1[1] < 0;
LABEL_32:
  if ( !v6 || a1[3] <= 0 )
    goto LABEL_52;
  if ( a1[4] < 0 )
    return 3LL;
  v10 = v1 < 0;
LABEL_36:
  if ( v10 && a1[1] < 0 && a1[3] > 0 && !a1[4] )
    return 3LL;
  v11 = v1 == 0;
  if ( v1 > 0 )
  {
    v12 = a1[1];
    v13 = v12 <= 0;
    if ( !v12 )
    {
      if ( a1[3] > 0 && a1[4] < 0 )
        return 4LL;
      v13 = 1;
    }
    if ( !v13 && !a1[3] && a1[4] < 0 )
      return 4LL;
    v11 = v1 == 0;
  }
  if ( !v11 )
    goto LABEL_55;
LABEL_52:
  v14 = a1[1] < 0;
  if ( a1[1] <= 0 )
    goto LABEL_71;
  if ( a1[3] > 0 )
  {
    if ( a1[4] > 0 )
      return 5LL;
LABEL_55:
    v15 = v1 == 0;
    if ( v1 < 0 )
    {
      v16 = a1[1];
      v17 = v16 == 0;
      if ( v16 > 0 )
      {
        if ( a1[3] > 0 && !a1[4] )
          return 5LL;
        v17 = v16 == 0;
      }
      if ( v17 && a1[3] < 0 && a1[4] > 0 || v16 < 0 && !a1[3] && a1[4] > 0 )
        return 6LL;
      v15 = v1 == 0;
    }
    if ( !v15 )
      goto LABEL_74;
  }
  v14 = a1[1] < 0;
LABEL_71:
  if ( !v14 || a1[3] >= 0 )
    return 8LL;
  if ( a1[4] < 0 )
    return 7LL;
LABEL_74:
  if ( v1 > 0 && a1[1] < 0 && a1[3] < 0 && !a1[4] )
    return 7LL;
  return 8LL;
}
