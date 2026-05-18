/*
 * XREFs of sub_1800A51E4 @ 0x1800A51E4
 * Callers:
 *     sub_1800F8BC4 @ 0x1800F8BC4 (sub_1800F8BC4.c)
 * Callees:
 *     sub_18000E118 @ 0x18000E118 (sub_18000E118.c)
 *     memmove @ 0x180125A9C (memmove.c)
 */

_QWORD *__fastcall sub_1800A51E4(_QWORD *a1, int a2)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  size_t v7; // rdx
  _BYTE *v8; // rsi
  const char *v9; // r9
  _BYTE *v10; // rsi
  const char *v11; // rdx
  _BYTE *v12; // rsi
  const char *v13; // rdx

  a1[3] = 15LL;
  v3 = a2 - 1;
  if ( !v3 )
  {
    a1[2] = 0LL;
    v7 = 13LL;
    *(_BYTE *)a1 = 0;
    if ( a1[3] < 0xDuLL )
    {
      v9 = "ShaderModel50";
      goto LABEL_38;
    }
    v12 = a1;
    if ( a1[3] >= 0x10uLL )
      v12 = (_BYTE *)*a1;
    a1[2] = 13LL;
    v13 = "ShaderModel50";
    goto LABEL_36;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    a1[2] = 0LL;
    v7 = 13LL;
    *(_BYTE *)a1 = 0;
    if ( a1[3] < 0xDuLL )
    {
      v9 = "ShaderModel41";
      goto LABEL_38;
    }
    v12 = a1;
    if ( a1[3] >= 0x10uLL )
      v12 = (_BYTE *)*a1;
    a1[2] = 13LL;
    v13 = "ShaderModel41";
    goto LABEL_36;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    a1[2] = 0LL;
    v7 = 13LL;
    *(_BYTE *)a1 = 0;
    if ( a1[3] < 0xDuLL )
    {
      v9 = "ShaderModel40";
      goto LABEL_38;
    }
    v12 = a1;
    if ( a1[3] >= 0x10uLL )
      v12 = (_BYTE *)*a1;
    a1[2] = 13LL;
    v13 = "ShaderModel40";
LABEL_36:
    memmove(v12, v13, 0xDuLL);
    v12[13] = 0;
    return a1;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    a1[2] = 0LL;
    v7 = 21LL;
    *(_BYTE *)a1 = 0;
    if ( a1[3] < 0x15uLL )
    {
      v9 = "ShaderModel40_Level93";
      goto LABEL_38;
    }
    v10 = a1;
    if ( a1[3] >= 0x10uLL )
      v10 = (_BYTE *)*a1;
    a1[2] = 21LL;
    v11 = "ShaderModel40_Level93";
    goto LABEL_15;
  }
  a1[2] = 0LL;
  *(_BYTE *)a1 = 0;
  if ( v6 == 1 )
  {
    v7 = 21LL;
    if ( a1[3] < 0x15uLL )
    {
      v9 = "ShaderModel40_Level91";
      goto LABEL_38;
    }
    v10 = a1;
    if ( a1[3] >= 0x10uLL )
      v10 = (_BYTE *)*a1;
    a1[2] = 21LL;
    v11 = "ShaderModel40_Level91";
LABEL_15:
    memmove(v10, v11, 0x15uLL);
    v10[21] = 0;
    return a1;
  }
  v7 = 9LL;
  if ( a1[3] < 9uLL )
  {
    v9 = "<invalid>";
LABEL_38:
    sub_18000E118(a1, v7, 0LL, v9);
    return a1;
  }
  v8 = a1;
  if ( a1[3] >= 0x10uLL )
    v8 = (_BYTE *)*a1;
  a1[2] = 9LL;
  memmove(v8, "<invalid>", 9uLL);
  v8[9] = 0;
  return a1;
}
