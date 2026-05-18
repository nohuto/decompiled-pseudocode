/*
 * XREFs of sub_180030EC4 @ 0x180030EC4
 * Callers:
 *     sub_18002D548 @ 0x18002D548 (sub_18002D548.c)
 *     sub_18002D710 @ 0x18002D710 (sub_18002D710.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_180030EC4(_DWORD *a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  int v17; // edx
  int v18; // edx
  int v19; // edx
  int v20; // edx

  if ( a2 <= 42 )
  {
    if ( a2 == 42 )
    {
      *a1 = 8;
      goto LABEL_60;
    }
    if ( a2 > 16 )
    {
      v6 = a2 - 17;
      if ( !v6 )
      {
        *a1 = 9;
        goto LABEL_60;
      }
      v7 = v6 - 11;
      if ( !v7 )
      {
        *a1 = 15;
        goto LABEL_60;
      }
      v8 = v7 - 2;
      if ( !v8 )
      {
        *a1 = 17;
        goto LABEL_60;
      }
      v9 = v8 - 4;
      if ( !v9 )
      {
        *a1 = 20;
        goto LABEL_60;
      }
      v10 = v9 - 6;
      if ( !v10 )
      {
        *a1 = 2;
        goto LABEL_60;
      }
      if ( v10 == 1 )
      {
        *a1 = 3;
        goto LABEL_60;
      }
    }
    else
    {
      if ( a2 == 16 )
      {
        *a1 = 4;
        goto LABEL_60;
      }
      if ( a2 )
      {
        v2 = a2 - 2;
        if ( !v2 )
        {
          *a1 = 6;
          goto LABEL_60;
        }
        v3 = v2 - 1;
        if ( !v3 )
        {
          *a1 = 11;
          goto LABEL_60;
        }
        v4 = v3 - 3;
        if ( !v4 )
        {
          *a1 = 5;
          goto LABEL_60;
        }
        v5 = v4 - 1;
        if ( !v5 )
        {
          *a1 = 10;
          goto LABEL_60;
        }
        if ( v5 == 3 )
        {
          *a1 = 21;
LABEL_60:
          a1[1] = 0;
          return a1;
        }
      }
    }
LABEL_16:
    *a1 = 0;
    goto LABEL_60;
  }
  if ( a2 <= 61 )
  {
    if ( a2 == 61 )
    {
      *a1 = 13;
      goto LABEL_60;
    }
    v11 = a2 - 45;
    if ( !v11 )
    {
      *a1 = 1;
      goto LABEL_60;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      *a1 = 7;
      goto LABEL_60;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      *a1 = 18;
      goto LABEL_60;
    }
    v14 = v13 - 2;
    if ( !v14 )
    {
      *a1 = 14;
      goto LABEL_60;
    }
    v15 = v14 - 5;
    if ( !v15 )
    {
      *a1 = 19;
      goto LABEL_60;
    }
    if ( v15 == 3 )
    {
      *a1 = 12;
      goto LABEL_60;
    }
    goto LABEL_16;
  }
  v16 = a2 - 77;
  if ( !v16 )
  {
    *a1 = 22;
    goto LABEL_60;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    *a1 = 22;
    goto LABEL_56;
  }
  v18 = v17 - 9;
  if ( !v18 )
  {
    *a1 = 16;
    goto LABEL_60;
  }
  v19 = v18 - 4;
  if ( !v19 )
  {
    *a1 = 16;
LABEL_56:
    a1[1] = 1;
    return a1;
  }
  v20 = v19 - 12;
  if ( v20 )
  {
    if ( v20 != 4 )
      goto LABEL_16;
    *a1 = 24;
  }
  else
  {
    *a1 = 23;
  }
  a1[1] = 2;
  return a1;
}
