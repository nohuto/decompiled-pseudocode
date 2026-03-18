/*
 * XREFs of ?bSrcCopySRLE4D1@@YAHPEAUBLTINFO@@@Z @ 0x1C02C5800
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall bSrcCopySRLE4D1(struct BLTINFO *a1)
{
  unsigned __int8 *v2; // r15
  __int64 v3; // rsi
  int v4; // r12d
  int v5; // r10d
  int v6; // r13d
  int v7; // edx
  int v8; // r8d
  int v9; // ebx
  __int64 v10; // rax
  unsigned int v11; // r14d
  __int64 v12; // rax
  unsigned int v13; // ecx
  __int64 result; // rax
  char v15; // r8
  char v16; // bp
  struct BLTINFO *v17; // rdi
  int v18; // eax
  int *v19; // rcx
  __int64 v20; // rdx
  unsigned int v21; // r12d
  bool i; // cc
  unsigned int v23; // r14d
  unsigned __int8 *v24; // r15
  __int64 v25; // r11
  unsigned __int64 v26; // r9
  unsigned int v27; // r12d
  BOOL v28; // ecx
  char v29; // dl
  unsigned __int8 v30; // r10
  char v31; // al
  char v32; // cl
  __int64 v33; // rdx
  unsigned int v34; // r14d
  __int64 v35; // r13
  int v36; // ebx
  unsigned int v37; // edi
  unsigned __int8 v38; // cl
  unsigned __int64 v39; // rax
  __int64 v40; // rax
  char v41; // cl
  unsigned int v42; // eax
  unsigned __int8 *v43; // r15
  int v44; // edx
  unsigned int v45; // r9d
  int v46; // eax
  unsigned __int8 *v47; // r15
  int v48; // ecx
  int v49; // eax
  unsigned __int8 v50; // r12
  __int64 v51; // rdx
  __int64 v52; // rcx
  unsigned int v53; // r9d
  unsigned int v54; // ebx
  __int64 v55; // r14
  __int64 v56; // r14
  char v57; // [rsp+20h] [rbp-98h]
  unsigned __int8 v58; // [rsp+21h] [rbp-97h]
  int v59; // [rsp+24h] [rbp-94h]
  int v60; // [rsp+28h] [rbp-90h]
  char v61; // [rsp+2Ch] [rbp-8Ch]
  unsigned int v62; // [rsp+30h] [rbp-88h]
  int v63; // [rsp+34h] [rbp-84h]
  unsigned int v64; // [rsp+38h] [rbp-80h]
  unsigned int v65; // [rsp+3Ch] [rbp-7Ch]
  unsigned int v66; // [rsp+40h] [rbp-78h]
  int v67; // [rsp+44h] [rbp-74h]
  int v68; // [rsp+48h] [rbp-70h]
  unsigned int v69; // [rsp+4Ch] [rbp-6Ch]
  __int64 v70; // [rsp+50h] [rbp-68h]
  int v71; // [rsp+58h] [rbp-60h]
  int v72; // [rsp+5Ch] [rbp-5Ch]
  int v73; // [rsp+60h] [rbp-58h]
  char v75; // [rsp+C8h] [rbp+10h]
  int v76; // [rsp+D8h] [rbp+20h]
  char v77; // [rsp+D8h] [rbp+20h]

  v2 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v3 = *((_QWORD *)a1 + 2);
  v4 = *((_DWORD *)a1 + 30);
  v5 = *((_DWORD *)a1 + 15);
  v6 = *((_DWORD *)a1 + 24);
  v7 = *((_DWORD *)a1 + 25);
  v8 = *((_DWORD *)a1 + 14);
  v9 = *((_DWORD *)a1 + 32);
  v67 = *((_DWORD *)a1 + 11);
  v10 = *((_QWORD *)a1 + 9);
  v71 = v6;
  v59 = v7;
  v72 = v8;
  v11 = *(_DWORD *)(v10 + 64);
  v12 = *(_QWORD *)a1;
  v13 = *((_DWORD *)a1 + 22);
  v66 = v11;
  v60 = v13;
  v70 = *(_QWORD *)(v12 + 16);
  v68 = *((_DWORD *)a1 + 23);
  v63 = v5;
  if ( v5 < v68 )
    return 1LL;
  v15 = 0;
  v69 = v13 >> 3;
  v16 = EndMask[v13 & 7];
  v62 = (unsigned int)(v6 - 1) >> 3;
  v17 = a1;
  v75 = ~EndMask[v6 & 7];
  if ( v5 >= v7 )
    goto LABEL_10;
  if ( v9 >= (int)v13 )
  {
    if ( v9 < v6 )
    {
      v15 = EndMask[v9 & 7] & *(_BYTE *)((unsigned int)(v9 >> 3) + v3);
      goto LABEL_10;
    }
    goto LABEL_8;
  }
  if ( v9 >= v6 )
  {
LABEL_8:
    v15 = *(_BYTE *)(((unsigned int)(v6 - 1) >> 3) + v3);
    goto LABEL_10;
  }
  v15 = v16 & *(_BYTE *)((v13 >> 3) + v3);
LABEL_10:
  v18 = 1;
  v19 = (int *)(v70 + 4);
  v20 = 15LL;
  do
  {
    *v19 = v18;
    v18 ^= 1u;
    ++v19;
    --v20;
  }
  while ( v20 );
  v21 = v4 + 2;
  for ( i = v21 <= v11; ; i = v21 <= v66 )
  {
    v65 = v21;
    if ( !i )
      return 0LL;
    v23 = *v2;
    v24 = v2 + 1;
    v25 = (unsigned int)(v9 >> 3);
    v76 = v5;
    v26 = *v24;
    v2 = v24 + 1;
    if ( v23 )
    {
      if ( v5 >= v59 || v9 >= v6 || (int)(v23 + v9) <= v60 )
      {
        v9 += v23;
      }
      else
      {
        if ( v9 < v60 )
        {
          v23 += v9 - v60;
          v9 = v60;
          v25 = (unsigned int)(v60 >> 3);
        }
        if ( (int)(v23 + v9) <= v6 )
        {
          v64 = 0;
        }
        else
        {
          v64 = v9 + v23 - v6;
          v23 = v6 - v9;
        }
        v51 = *(unsigned __int8 *)(v70 + 4 * (v26 >> 4));
        v58 = *(_BYTE *)(v70 + 4 * (v26 & 0xF));
        v57 = v51;
        v50 = byte_1C02F0C58[2 * v51 + 12 + v58];
        LOBYTE(v51) = v9 & 7;
        v61 = v50;
        v77 = v9 & 7;
        v52 = (unsigned __int8)(7 - (v9 & 7));
        v73 = (unsigned __int8)(7 - (v9 & 7));
        if ( v23 >= (int)v52 + 1 )
          v53 = ((unsigned __int8)v23 - (int)v52 - 1) >> 3;
        else
          v53 = 0;
        v54 = v23 + v9;
        v55 = v23 - 8 * v53;
        if ( (int)v52 < (int)v55 )
        {
          *(_BYTE *)(v25 + v3) = v15 | ((unsigned __int8)(v50 & EndMask[v52 + 1]) >> v77);
          LODWORD(v51) = v73;
          if ( (v73 & 1) == 0 )
          {
            v50 *= 2;
            if ( v61 < 0 )
              v50 |= 1u;
          }
          LODWORD(v25) = v25 + 1;
          v15 = 0;
          v56 = -1 - (unsigned __int8)v73 + (unsigned int)v55;
        }
        else
        {
          v50 &= EndMask[v55];
          v15 |= v50 >> v51;
          v56 = 0LL;
        }
        if ( v53 )
        {
          LOBYTE(v51) = v50;
          memset((void *)(v3 + (unsigned int)v25), v51, v53);
          v5 = v63;
          v15 = 0;
        }
        if ( (unsigned int)v56 < 9 )
          v15 |= v50 & EndMask[v56];
        v9 = v64 + v54;
        v21 = v65;
      }
      goto LABEL_97;
    }
    if ( !(_DWORD)v26 )
      break;
    if ( (_DWORD)v26 == 1 )
    {
      if ( v5 >= v59 || (v9 & 7) == 0 )
        return 0LL;
      if ( v9 < v60 )
      {
        if ( v9 < v6 )
          return 0LL;
      }
      else if ( v9 < v6 )
      {
        *(_BYTE *)(v25 + v3) = v15 | *(_BYTE *)(v25 + v3) & ~EndMask[v9 & 7];
        return 0LL;
      }
      *(_BYTE *)(v62 + v3) = v15 | v75 & *(_BYTE *)(v62 + v3);
      return 0LL;
    }
    if ( (_DWORD)v26 == 2 )
    {
      v44 = v60;
      if ( v5 >= v59 )
      {
        v45 = v62;
      }
      else
      {
        if ( (v9 & 7) == 0 )
          goto LABEL_55;
        if ( v9 < v60 )
        {
          if ( v9 >= v6 )
            goto LABEL_52;
LABEL_55:
          v45 = v62;
        }
        else
        {
          if ( v9 < v6 )
          {
            *(_BYTE *)((unsigned int)v25 + v3) = v15 | *(_BYTE *)((unsigned int)v25 + v3) & ~EndMask[v9 & 7];
            v44 = v60;
            goto LABEL_55;
          }
LABEL_52:
          v45 = v62;
          *(_BYTE *)(v62 + v3) = v15 | v75 & *(_BYTE *)(v62 + v3);
        }
      }
      v21 += 2;
      if ( v21 > v66 )
        return 0LL;
      v46 = *v2;
      v47 = v2 + 1;
      v9 += v46;
      v48 = *v47;
      v2 = v47 + 1;
      v5 -= v48;
      v63 = v5;
      v3 += v67 * v48;
      if ( v5 < v68 )
      {
        *((_DWORD *)v17 + 34) = v9;
        goto LABEL_101;
      }
      if ( v9 >= v44 )
      {
        if ( v9 < v6 )
        {
          v15 = EndMask[v9 & 7] & *(_BYTE *)((unsigned int)(v9 >> 3) + v3);
          goto LABEL_97;
        }
LABEL_62:
        v15 = *(_BYTE *)(v45 + v3);
        goto LABEL_97;
      }
      if ( v9 >= v6 )
        goto LABEL_62;
LABEL_73:
      v15 = v16 & *(_BYTE *)(v69 + v3);
      goto LABEL_97;
    }
    v27 = ((unsigned int)(v26 + 1) >> 1) + v21;
    if ( v27 > v66 )
      return 0LL;
    v28 = (((_DWORD)v26 + 1) & 2) != 0;
    v64 = v28;
    if ( v5 >= v59 || v9 >= v6 || (int)v26 + v9 <= v60 )
    {
      v9 += v26;
      v43 = &v2[(unsigned __int64)(unsigned int)(v26 + 1) >> 1];
    }
    else
    {
      if ( v9 >= v60 )
      {
        v30 = byte_1C02F0C58[(unsigned __int8)(7 - (v9 & 7))];
      }
      else
      {
        v29 = v60 - v9;
        LODWORD(v26) = v26 - (v60 - v9);
        v2 += (unsigned __int64)(unsigned int)(v60 - v9) >> 1;
        v25 = (unsigned int)(v60 >> 3);
        v9 = v60;
        v30 = byte_1C02F0C58[(unsigned __int8)(7 - (v60 & 7))];
        if ( (v29 & 1) != 0 )
        {
          v31 = v15 | v30;
          v30 >>= 1;
          v32 = v31;
          v33 = *v2++ & 0xF;
          v9 = v60 + 1;
          LODWORD(v26) = v26 - 1;
          if ( !*(_BYTE *)(v70 + 4 * v33) )
            v32 = v15;
          v15 = v32;
        }
      }
      if ( (int)v26 + v9 <= v6 )
      {
        v34 = 0;
      }
      else
      {
        v34 = v9 + v26 - v6;
        LODWORD(v26) = v6 - v9;
      }
      v35 = v70;
      v36 = v26 + v9;
      v65 = v26 & 1;
      v37 = 0;
      do
      {
        if ( v30 )
        {
          do
          {
            v38 = v30;
            if ( !(_DWORD)v26 )
              break;
            if ( !v37 )
            {
              v39 = *v2++;
              v57 = *(_BYTE *)(v35 + 4 * (v39 >> 4));
              v38 = v30;
              v58 = *(_BYTE *)(v35 + 4 * (v39 & 0xF));
            }
            v40 = v37;
            LODWORD(v26) = v26 - 1;
            v41 = v15 | v38;
            v37 ^= 1u;
            if ( !*(&v57 + v40) )
              v41 = v15;
            v30 >>= 1;
            v15 = v41;
          }
          while ( v30 );
          if ( v30 )
            continue;
        }
        *(_BYTE *)(v25 + v3) = v15;
        v30 = 0x80;
        v25 = (unsigned int)(v25 + 1);
        v15 = 0;
      }
      while ( (_DWORD)v26 );
      v42 = v34;
      v17 = a1;
      v6 = v71;
      if ( !v65 )
        v42 = v34 + 1;
      v5 = v63;
      v28 = v64;
      v43 = &v2[v42 >> 1];
      v9 = v34 + v36;
    }
    v21 = v28 + v27;
    v2 = &v43[v28];
LABEL_97:
    v21 += 2;
  }
  v49 = v59;
  if ( v5 < v59 )
  {
    if ( (v9 & 7) == 0 )
      goto LABEL_70;
    if ( v9 < v60 )
    {
      if ( v9 >= v6 )
        goto LABEL_69;
    }
    else
    {
      if ( v9 < v6 )
      {
        *(_BYTE *)(v25 + v3) = v15 | *(_BYTE *)(v25 + v3) & ~EndMask[v9 & 7];
        goto LABEL_70;
      }
LABEL_69:
      *(_BYTE *)(v62 + v3) = v15 | v75 & *(_BYTE *)(v62 + v3);
    }
LABEL_70:
    v49 = v59;
  }
  --v5;
  v3 += v67;
  v9 = v72;
  v63 = v5;
  if ( v76 > v68 )
  {
    if ( v5 >= v49 )
      goto LABEL_97;
    goto LABEL_73;
  }
  *((_DWORD *)v17 + 34) = v72;
LABEL_101:
  *((_QWORD *)v17 + 14) = v3;
  result = 1LL;
  *((_QWORD *)v17 + 13) = v2;
  *((_DWORD *)v17 + 31) = v21;
  *((_DWORD *)v17 + 33) = v5;
  return result;
}
