/*
 * XREFs of FindNext @ 0x1C02C1CA8
 * Callers:
 *     fsc_OverscaleToBold @ 0x1C02C1EB0 (fsc_OverscaleToBold.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindNext(
        unsigned __int16 a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        _BYTE *a4,
        _BYTE *a5,
        unsigned __int8 a6,
        unsigned __int8 **a7,
        unsigned __int8 *a8)
{
  __int64 v8; // r8
  unsigned __int8 *v9; // r10
  unsigned __int8 v10; // dl
  char *v11; // rsi
  unsigned __int8 v12; // r12
  char v13; // r15
  char v14; // r14
  unsigned __int8 v15; // di
  char v16; // dl
  char v18; // r9
  char *v19; // rdx
  char v20; // r9
  char v21; // cl
  bool v22; // cc
  char *v23; // rsi
  char v24; // r8
  char *v25; // rbp
  char v26; // r9
  unsigned __int8 v27; // r8
  char v28; // r9
  char v29; // [rsp+28h] [rbp+8h] BYREF

  v29 = 0;
  if ( a3 >= a1 - 1 )
    return 0LL;
  v8 = (__int64)&a4[a2 - 1];
  v9 = &a5[a2];
  if ( a5 == (_BYTE *)v8 )
    v10 = 0;
  else
    v10 = v9[1];
  v11 = &v29;
  v12 = *v9;
  if ( a5 != (_BYTE *)v8 )
    v11 = (char *)(v9 + 1);
  v13 = a6 + 1;
  v14 = 7 - a6;
  v15 = (v10 >> (7 - a6)) | (*v9 << (a6 + 1));
  v16 = v15 & 0x80;
  if ( (v12 & *((_BYTE *)&glyphBits + a6)) != 0 )
  {
    if ( !v16 )
    {
      *a8 = a6;
      *a7 = v9;
      return 1LL;
    }
LABEL_12:
    v18 = byte_1C02ECC40[v15];
    if ( v18 <= 4 )
    {
      v19 = &v29;
      if ( a5 != (_BYTE *)v8 )
        v19 = a5 + 1;
      if ( ((unsigned __int8)((*a5 << v13) | ((unsigned __int8)*v19 >> v14)) & EndMask[v18 + 1]) == 0 )
      {
        v20 = a6 + 1 + v18;
        v21 = v20;
        v22 = v20 < 8;
        if ( v20 >= 8 )
        {
          v21 = v20 - 8;
          v22 = v20 < 8;
        }
        if ( !v22 )
          v9 = (unsigned __int8 *)v11;
LABEL_34:
        *a8 = v21;
        *a7 = v9;
        return 1LL;
      }
    }
    return 0LL;
  }
  if ( v16 )
    goto LABEL_12;
  v23 = &v29;
  if ( a5 == a4 )
  {
    v24 = 0;
  }
  else
  {
    v23 = a5 - 1;
    v24 = *(v9 - 1);
  }
  v25 = &v29;
  if ( a5 != a4 )
    v25 = (char *)(v9 - 1);
  v26 = StartMask[((unsigned __int8)(v24 << v13) | ((unsigned __int64)v12 >> v14)) + 272];
  if ( v26 < 8 && v26 >= 2 )
  {
    v27 = StartMask[v26 + 1];
    if ( (v27 & (unsigned __int8)((*v23 << v13) | (*a5 >> v14))) == v27 )
    {
      v28 = a6 - 7 + v26;
      if ( v28 < 0 )
        v21 = v28 + 8;
      else
        v21 = v28;
      if ( v28 < 0 )
        v9 = (unsigned __int8 *)v25;
      goto LABEL_34;
    }
  }
  return 0LL;
}
