/*
 * XREFs of sub_1800A560C @ 0x1800A560C
 * Callers:
 *     sub_1800A9BE4 @ 0x1800A9BE4 (sub_1800A9BE4.c)
 * Callees:
 *     sub_18000E168 @ 0x18000E168 (sub_18000E168.c)
 *     memmove @ 0x180125BAC (memmove.c)
 */

_QWORD *__fastcall sub_1800A560C(_QWORD *a1, int a2, __int64 a3)
{
  __int64 v4; // rax
  int v5; // edx
  int v6; // edx
  int v7; // edx
  size_t v8; // rdx
  _BYTE *v9; // rsi
  const char *v10; // r9
  _BYTE *v11; // rsi
  const char *v12; // rdx
  _BYTE *v13; // rsi
  const char *v14; // rdx
  _BYTE *v15; // rsi
  int v16; // edx
  int v17; // edx
  int v18; // edx
  _BYTE *v19; // rsi
  _BYTE *v20; // rsi

  v4 = 5LL;
  if ( a2 <= 5 )
  {
    if ( a2 == 5 )
    {
      a1[2] = 0LL;
      a1[3] = 15LL;
      *(_BYTE *)a1 = 0;
      if ( a1[3] >= 5uLL )
      {
        v15 = a1;
        if ( a1[3] >= 0x10uLL )
          v15 = (_BYTE *)*a1;
        a1[2] = 5LL;
        memmove(v15, "Debug", 5uLL);
        v15[5] = 0;
        return a1;
      }
      v10 = "Debug";
    }
    else if ( a2 )
    {
      v5 = a2 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( v7 )
          {
            if ( v7 == 1 )
            {
              a1[2] = 0LL;
              v8 = 4LL;
              a1[3] = 15LL;
              *(_BYTE *)a1 = 0;
              if ( a1[3] >= 4uLL )
              {
                v9 = a1;
                if ( a1[3] >= 0x10uLL )
                  v9 = (_BYTE *)*a1;
                a1[2] = 4LL;
                memmove(v9, "View", 4uLL);
                v9[4] = 0;
                return a1;
              }
              v10 = "View";
LABEL_70:
              LOBYTE(a3) = 0;
              sub_18000E168(a1, v8, a3, v10);
              return a1;
            }
            goto LABEL_43;
          }
          a1[2] = 0LL;
          v8 = 8LL;
          a1[3] = 15LL;
          *(_BYTE *)a1 = 0;
          if ( a1[3] < 8uLL )
          {
            v10 = "Lighting";
            goto LABEL_70;
          }
          v11 = a1;
          if ( a1[3] >= 0x10uLL )
            v11 = (_BYTE *)*a1;
          a1[2] = 8LL;
          v12 = "Lighting";
        }
        else
        {
          a1[2] = 0LL;
          v8 = 8LL;
          a1[3] = 15LL;
          *(_BYTE *)a1 = 0;
          if ( a1[3] < 8uLL )
          {
            v10 = "Material";
            goto LABEL_70;
          }
          v11 = a1;
          if ( a1[3] >= 0x10uLL )
            v11 = (_BYTE *)*a1;
          a1[2] = 8LL;
          v12 = "Material";
        }
LABEL_17:
        memmove(v11, v12, 8uLL);
        v11[8] = 0;
        return a1;
      }
      a1[2] = 0LL;
      v4 = 6LL;
      a1[3] = 15LL;
      *(_BYTE *)a1 = 0;
      if ( a1[3] >= 6uLL )
      {
        v13 = a1;
        if ( a1[3] >= 0x10uLL )
          v13 = (_BYTE *)*a1;
        v14 = "Global";
LABEL_67:
        a1[2] = 6LL;
        memmove(v13, v14, 6uLL);
        v13[6] = 0;
        return a1;
      }
      v10 = "Global";
    }
    else
    {
      a1[2] = 0LL;
      v4 = 6LL;
      a1[3] = 15LL;
      *(_BYTE *)a1 = 0;
      if ( a1[3] >= 6uLL )
      {
        v13 = a1;
        if ( a1[3] >= 0x10uLL )
          v13 = (_BYTE *)*a1;
        v14 = "Object";
        goto LABEL_67;
      }
      v10 = "Object";
    }
LABEL_69:
    v8 = v4;
    goto LABEL_70;
  }
  v4 = 6LL;
  v16 = a2 - 6;
  if ( !v16 )
  {
    a1[2] = 0LL;
    a1[3] = 15LL;
    *(_BYTE *)a1 = 0;
    if ( a1[3] >= 6uLL )
    {
      v13 = a1;
      if ( a1[3] >= 0x10uLL )
        v13 = (_BYTE *)*a1;
      v14 = "Shader";
      goto LABEL_67;
    }
    v10 = "Shader";
    goto LABEL_69;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    a1[2] = 0LL;
    a1[3] = 15LL;
    *(_BYTE *)a1 = 0;
    if ( a1[3] >= 6uLL )
    {
      v13 = a1;
      if ( a1[3] >= 0x10uLL )
        v13 = (_BYTE *)*a1;
      v14 = "Volume";
      goto LABEL_67;
    }
    v10 = "Volume";
    goto LABEL_69;
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
    a1[2] = 0LL;
    v8 = 8LL;
    a1[3] = 15LL;
    *(_BYTE *)a1 = 0;
    if ( a1[3] < 8uLL )
    {
      v10 = "Skinning";
      goto LABEL_70;
    }
    v11 = a1;
    if ( a1[3] >= 0x10uLL )
      v11 = (_BYTE *)*a1;
    a1[2] = 8LL;
    v12 = "Skinning";
    goto LABEL_17;
  }
  if ( v18 == 1 )
  {
    a1[2] = 0LL;
    v8 = 14LL;
    a1[3] = 15LL;
    *(_BYTE *)a1 = 0;
    if ( a1[3] < 0xEuLL )
    {
      v10 = "LightingGlobal";
      goto LABEL_70;
    }
    v20 = a1;
    if ( a1[3] >= 0x10uLL )
      v20 = (_BYTE *)*a1;
    a1[2] = 14LL;
    memmove(v20, "LightingGlobal", 0xEuLL);
    v20[14] = 0;
    return a1;
  }
LABEL_43:
  a1[2] = 0LL;
  v8 = 9LL;
  a1[3] = 15LL;
  *(_BYTE *)a1 = 0;
  if ( a1[3] < 9uLL )
  {
    v10 = "<unknown>";
    goto LABEL_70;
  }
  v19 = a1;
  if ( a1[3] >= 0x10uLL )
    v19 = (_BYTE *)*a1;
  a1[2] = 9LL;
  memmove(v19, "<unknown>", 9uLL);
  v19[9] = 0;
  return a1;
}
