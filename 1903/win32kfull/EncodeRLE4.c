/*
 * XREFs of EncodeRLE4 @ 0x1C02C717C
 * Callers:
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C00346F0 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 * Callees:
 *     ?WriteEncoded8@@YAHEPEAEIPEBE@Z @ 0x1C02C45BC (-WriteEncoded8@@YAHEPEAEIPEBE@Z.c)
 *     ?WriteAbsolute4@@YAHPEBEPEAEH0@Z @ 0x1C02C586C (-WriteAbsolute4@@YAHPEBEPEAEH0@Z.c)
 */

__int64 __fastcall EncodeRLE4(__int64 a1, unsigned __int8 *a2, int a3, unsigned int a4, int a5)
{
  unsigned int v5; // eax
  unsigned __int8 *v6; // rbx
  __int64 v7; // r10
  int v8; // r15d
  int v9; // edi
  unsigned __int8 *v10; // r9
  unsigned int v11; // ecx
  unsigned int v12; // edx
  unsigned __int8 *v13; // r11
  unsigned __int8 v14; // r10
  unsigned __int8 *v15; // r13
  int v16; // esi
  int v17; // ecx
  char *i; // r14
  char v19; // r12
  int v20; // eax
  int v21; // eax
  bool v23; // zf
  int v24; // r8d
  int v25; // eax
  int v26; // eax
  unsigned int v27; // [rsp+20h] [rbp-48h]
  unsigned __int8 *v28; // [rsp+28h] [rbp-40h]
  int v30; // [rsp+80h] [rbp+18h]
  unsigned int v32; // [rsp+90h] [rbp+28h]

  v30 = a3;
  v5 = a4;
  v6 = a2;
  v7 = a1;
  v8 = 0;
  v9 = 0;
  v10 = &a2[a5];
  v28 = v10;
  v11 = ((unsigned int)(a3 + 7) >> 1) & 0x7FFFFFFC;
  v27 = v11;
  v12 = 0;
  while ( 1 )
  {
    v32 = v12;
    if ( v12 >= v5 )
      break;
    v13 = (unsigned __int8 *)(v7 + v11 * v12);
    v14 = *v13;
    v15 = &v13[(unsigned __int64)(unsigned int)(a3 + 1) >> 1];
    v16 = 0;
    v17 = 2;
    for ( i = (char *)(v13 + 1); i <= (char *)v15; ++i )
    {
      v19 = -1;
      if ( i != (char *)v15 )
        v19 = *i;
      if ( !v16 )
      {
        v16 = (v19 == (char)v14) + 1;
LABEL_33:
        v14 = v19;
        goto LABEL_34;
      }
      if ( v16 == 1 )
      {
        if ( v19 == v14 || v17 == 254 )
        {
          if ( v17 == 254 )
          {
            if ( i == (char *)v15 && (a3 & 1) != 0 )
              v8 = 1;
            v16 = 0;
          }
          else
          {
            v16 = 2;
            v8 = 2;
          }
          v21 = WriteAbsolute4(v13, v6, v17 - v8, v10);
          if ( v6 )
          {
            if ( !v21 )
              return 0LL;
            v6 += v21;
          }
          v9 += v21;
          v13 = (unsigned __int8 *)i;
          v17 = v8;
          v8 = 0;
        }
        goto LABEL_33;
      }
      if ( v16 == 2 && (v19 != v14 || v17 == 254) )
      {
        if ( i == (char *)v15 && (a3 & 1) != 0 )
          LOBYTE(v17) = v17 - 1;
        v20 = WriteEncoded8(v14, v6, v17, v10);
        if ( v6 )
        {
          if ( !v20 )
            return 0LL;
          v6 += v20;
        }
        v9 += v20;
        v13 = (unsigned __int8 *)i;
        v17 = 0;
        v16 = 0;
        goto LABEL_33;
      }
LABEL_34:
      v17 += 2;
      v10 = v28;
      a3 = v30;
    }
    if ( v17 > 3 )
    {
      v23 = (a3 & 1) == 0;
      v24 = v17 - 1;
      if ( v23 )
        v24 = v17;
      if ( v16 == 1 )
        v25 = WriteAbsolute4(v13, v6, v24 - 2, v10);
      else
        v25 = WriteEncoded8(v14, v6, (unsigned __int8)v24 - 2, v10);
      if ( v6 )
      {
        if ( v25 )
        {
          v6 += v25;
          goto LABEL_44;
        }
        return 0LL;
      }
LABEL_44:
      v9 += v25;
      v10 = v28;
      a3 = v30;
    }
    v26 = v9 + 2;
    if ( v6 > v10 )
      v26 = v9;
    v9 = v26;
    if ( v6 )
    {
      *(_WORD *)v6 = 0;
      v6 += 2;
    }
    v12 = v32 + 1;
    v11 = v27;
    v5 = a4;
    v7 = a1;
  }
  if ( v6 )
  {
    if ( v6 + 2 > v10 )
      return 0LL;
    *v6 = 0;
    v6[1] = 1;
  }
  return (unsigned int)(v9 + 2);
}
