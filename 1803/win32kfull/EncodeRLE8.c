/*
 * XREFs of EncodeRLE8 @ 0x1C029B248
 * Callers:
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C00A6594 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 * Callees:
 *     ?WriteAbsolute8@@YAHPEAE0H0@Z @ 0x1C0299E8C (-WriteAbsolute8@@YAHPEAE0H0@Z.c)
 *     ?WriteEncoded4@@YAHEPEAEI0@Z @ 0x1C029B554 (-WriteEncoded4@@YAHEPEAEI0@Z.c)
 */

__int64 __fastcall EncodeRLE8(__int64 a1, unsigned __int8 *a2, int a3, unsigned int a4, int a5)
{
  unsigned int v5; // eax
  unsigned __int8 *v6; // rbx
  __int64 v7; // r9
  int v8; // r13d
  int v9; // edi
  unsigned __int8 *v10; // r12
  unsigned int v11; // ecx
  unsigned int v12; // edx
  unsigned __int8 *v13; // r10
  unsigned __int8 v14; // cl
  unsigned __int8 *v15; // rax
  int v16; // esi
  signed int v17; // r8d
  char *i; // r15
  char v19; // r14
  int v20; // eax
  int v21; // eax
  unsigned int v23; // r8d
  int v24; // eax
  int v25; // eax
  unsigned int v26; // [rsp+20h] [rbp-48h]
  unsigned __int8 *v27; // [rsp+28h] [rbp-40h]
  int v29; // [rsp+80h] [rbp+18h]
  unsigned int v31; // [rsp+90h] [rbp+28h]

  v29 = a3;
  v5 = a4;
  v6 = a2;
  v7 = a1;
  v8 = 0;
  v9 = 0;
  v10 = &a2[a5];
  v11 = (a3 + 3) & 0xFFFFFFFC;
  v26 = v11;
  v12 = 0;
  while ( 1 )
  {
    v31 = v12;
    if ( v12 >= v5 )
      break;
    v13 = (unsigned __int8 *)(v7 + v11 * v12);
    v14 = *v13;
    v15 = &v13[a3];
    v27 = v15;
    v16 = 0;
    v17 = 1;
    for ( i = (char *)(v13 + 1); i <= (char *)v15; ++i )
    {
      v19 = -1;
      if ( i != (char *)v15 )
        v19 = *i;
      if ( !v16 )
      {
        v16 = (v19 == (char)v14) + 1;
LABEL_24:
        v14 = v19;
        goto LABEL_25;
      }
      if ( v16 == 1 )
      {
        if ( v19 == v14 || v17 == 255 )
        {
          LOBYTE(v8) = v17 != 255;
          v16 = v17 != 255 ? 2 : 0;
          v21 = WriteAbsolute8(v13, v6, v17 - v8, v10);
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
        goto LABEL_24;
      }
      if ( v16 == 2 && (v19 != v14 || v17 == 255) )
      {
        v20 = WriteEncoded4(v14, v6, v17, v10);
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
        goto LABEL_24;
      }
LABEL_25:
      ++v17;
      v15 = v27;
    }
    if ( v17 > 1 )
    {
      v23 = v17 - 1;
      if ( v16 == 1 )
        v24 = WriteAbsolute8(v13, v6, v23, v10);
      else
        v24 = WriteEncoded4(v14, v6, v23, v10);
      if ( v6 )
      {
        if ( v24 )
        {
          v6 += v24;
          goto LABEL_33;
        }
        return 0LL;
      }
LABEL_33:
      v9 += v24;
    }
    v25 = v9 + 2;
    if ( v6 > v10 )
      v25 = v9;
    v9 = v25;
    if ( v6 )
    {
      *(_WORD *)v6 = 0;
      v6 += 2;
    }
    v12 = v31 + 1;
    v11 = v26;
    a3 = v29;
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
