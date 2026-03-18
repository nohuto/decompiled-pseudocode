/*
 * XREFs of ?bSrcCopySRLE4D1@@YAHPEAUBLTINFO@@@Z @ 0x1C02AF2A0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall bSrcCopySRLE4D1(struct BLTINFO *a1)
{
  unsigned __int8 *v2; // r15
  __int64 v3; // rsi
  int v4; // r11d
  int v5; // r10d
  int v6; // edx
  int v7; // r8d
  int v8; // r13d
  int v9; // ebx
  __int64 v10; // rax
  unsigned int v11; // r14d
  __int64 v12; // rax
  unsigned int v13; // ecx
  __int64 v14; // r12
  __int64 result; // rax
  char v16; // r8
  struct BLTINFO *v17; // rdi
  int *v18; // rcx
  int v19; // eax
  __int64 v20; // rdx
  unsigned int v21; // r11d
  bool i; // cc
  unsigned int v23; // r14d
  unsigned __int8 *v24; // r15
  __int64 v25; // r12
  unsigned __int64 v26; // r9
  unsigned int v27; // r11d
  BOOL v28; // ecx
  char v29; // dl
  unsigned __int8 v30; // r11
  char v31; // al
  char v32; // cl
  __int64 v33; // rdx
  unsigned int v34; // r14d
  __int64 v35; // rdi
  int v36; // ebx
  unsigned int v37; // r10d
  unsigned __int8 v38; // cl
  unsigned __int64 v39; // rax
  __int64 v40; // rax
  char v41; // cl
  unsigned int v42; // eax
  unsigned __int8 *v43; // r15
  int v44; // r9d
  int v45; // edx
  unsigned int v46; // r14d
  int v47; // eax
  unsigned __int8 *v48; // r15
  int v49; // ecx
  int v50; // r9d
  unsigned int v51; // r11d
  unsigned __int8 v52; // r12
  __int64 v53; // rdx
  __int64 v54; // rcx
  unsigned int v55; // r9d
  unsigned int v56; // ebx
  __int64 v57; // r14
  __int64 v58; // r14
  char v59; // [rsp+20h] [rbp-88h]
  unsigned __int8 v60; // [rsp+21h] [rbp-87h]
  int v61; // [rsp+24h] [rbp-84h]
  char v62; // [rsp+28h] [rbp-80h]
  unsigned int v63; // [rsp+2Ch] [rbp-7Ch]
  int v64; // [rsp+30h] [rbp-78h]
  int v65; // [rsp+34h] [rbp-74h]
  int v66; // [rsp+38h] [rbp-70h]
  unsigned int v67; // [rsp+3Ch] [rbp-6Ch]
  unsigned int v68; // [rsp+40h] [rbp-68h]
  unsigned int v69; // [rsp+44h] [rbp-64h]
  int v70; // [rsp+48h] [rbp-60h]
  int v71; // [rsp+4Ch] [rbp-5Ch]
  unsigned int v72; // [rsp+50h] [rbp-58h]
  int v73; // [rsp+54h] [rbp-54h]
  __int64 v74; // [rsp+58h] [rbp-50h]
  unsigned __int8 v76; // [rsp+B8h] [rbp+10h]
  char v77; // [rsp+C0h] [rbp+18h]
  int v78; // [rsp+C8h] [rbp+20h]
  char v79; // [rsp+C8h] [rbp+20h]

  v2 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v3 = *((_QWORD *)a1 + 2);
  v4 = *((_DWORD *)a1 + 30);
  v5 = *((_DWORD *)a1 + 15);
  v6 = *((_DWORD *)a1 + 25);
  v7 = *((_DWORD *)a1 + 14);
  v8 = *((_DWORD *)a1 + 24);
  v9 = *((_DWORD *)a1 + 32);
  v70 = *((_DWORD *)a1 + 11);
  v10 = *((_QWORD *)a1 + 9);
  v64 = v6;
  v73 = v7;
  v66 = v5;
  v11 = *(_DWORD *)(v10 + 64);
  v12 = *(_QWORD *)a1;
  v13 = *((_DWORD *)a1 + 22);
  v69 = v11;
  v61 = v13;
  v14 = *(_QWORD *)(v12 + 16);
  LODWORD(v12) = *((_DWORD *)a1 + 23);
  v74 = v14;
  v71 = v12;
  if ( v5 < (int)v12 )
    return 1LL;
  v16 = 0;
  v72 = v13 >> 3;
  v76 = acBits[(v13 & 7) + 24];
  v63 = (unsigned int)(v8 - 1) >> 3;
  v17 = a1;
  v77 = ~acBits[(v8 & 7) + 24];
  if ( v5 >= v6 )
    goto LABEL_10;
  if ( v9 >= (int)v13 )
  {
    if ( v9 < v8 )
    {
      v16 = acBits[(v9 & 7) + 24] & *(_BYTE *)((unsigned int)(v9 >> 3) + v3);
      goto LABEL_10;
    }
    goto LABEL_8;
  }
  if ( v9 >= v8 )
  {
LABEL_8:
    v16 = *(_BYTE *)(((unsigned int)(v8 - 1) >> 3) + v3);
    goto LABEL_10;
  }
  v16 = v76 & *(_BYTE *)((v13 >> 3) + v3);
LABEL_10:
  v18 = (int *)(v14 + 4);
  v19 = 1;
  v20 = 15LL;
  do
  {
    *v18 = v19;
    v19 ^= 1u;
    ++v18;
    --v20;
  }
  while ( v20 );
  v21 = v4 + 2;
  for ( i = v21 <= v11; ; i = v21 <= v69 )
  {
    v67 = v21;
    if ( !i )
      return 0LL;
    v23 = *v2;
    v24 = v2 + 1;
    v25 = (unsigned int)(v9 >> 3);
    v78 = v5;
    v65 = v9 >> 3;
    v26 = *v24;
    v2 = v24 + 1;
    if ( v23 )
    {
      if ( v5 >= v64 || v9 >= v8 || (int)(v23 + v9) <= v61 )
      {
        v9 += v23;
      }
      else
      {
        if ( v9 >= v61 )
        {
          v51 = v9 >> 3;
        }
        else
        {
          v23 += v9 - v61;
          v9 = v61;
          v51 = v61 >> 3;
        }
        if ( (int)(v23 + v9) <= v8 )
        {
          v68 = 0;
        }
        else
        {
          v68 = v9 + v23 - v8;
          v23 = v8 - v9;
        }
        v53 = *(unsigned __int8 *)(v74 + 4 * (v26 >> 4));
        v60 = *(_BYTE *)(v74 + 4 * (v26 & 0xF));
        v59 = v53;
        v52 = acBits[2 * v53 + 16 + v60];
        LOBYTE(v53) = v9 & 7;
        v62 = v52;
        v79 = v9 & 7;
        v54 = (unsigned __int8)(7 - (v9 & 7));
        v65 = (unsigned __int8)(7 - (v9 & 7));
        if ( v23 >= (int)v54 + 1 )
          v55 = ((unsigned __int8)v23 - (int)v54 - 1) >> 3;
        else
          v55 = 0;
        v56 = v23 + v9;
        v57 = v23 - 8 * v55;
        if ( (int)v54 < (int)v57 )
        {
          *(_BYTE *)(v51 + v3) = v16 | ((unsigned __int8)(v52 & acBits[v54 + 25]) >> v79);
          LODWORD(v53) = v65;
          if ( (v65 & 1) == 0 )
          {
            v52 *= 2;
            if ( v62 < 0 )
              v52 |= 1u;
          }
          ++v51;
          v16 = 0;
          v58 = -1 - (unsigned __int8)v65 + (unsigned int)v57;
        }
        else
        {
          v52 &= acBits[v57 + 24];
          v16 |= v52 >> v53;
          v58 = 0LL;
        }
        if ( v55 )
        {
          LOBYTE(v53) = v52;
          memset((void *)(v3 + v51), v53, v55);
          v5 = v66;
          v16 = 0;
        }
        if ( (unsigned int)v58 < 9 )
          v16 |= v52 & acBits[v58 + 24];
        v9 = v68 + v56;
        v21 = v67;
      }
      goto LABEL_99;
    }
    if ( !(_DWORD)v26 )
    {
      v50 = v64;
      if ( v5 < v64 && (v9 & 7) != 0 )
      {
        if ( v9 < v61 )
        {
          if ( v9 < v8 )
            goto LABEL_72;
        }
        else if ( v9 < v8 )
        {
          *(_BYTE *)(v25 + v3) = v16 | *(_BYTE *)(v25 + v3) & ~acBits[(v9 & 7) + 24];
          goto LABEL_72;
        }
        *(_BYTE *)(v63 + v3) = v16 | v77 & *(_BYTE *)(v63 + v3);
      }
LABEL_72:
      --v5;
      v3 += v70;
      v9 = v73;
      v66 = v5;
      if ( v78 <= v71 )
      {
        *((_DWORD *)v17 + 34) = v73;
        goto LABEL_101;
      }
      if ( v5 < v50 )
        goto LABEL_74;
      goto LABEL_99;
    }
    if ( (_DWORD)v26 == 1 )
      break;
    if ( (_DWORD)v26 != 2 )
    {
      v27 = ((unsigned int)(v26 + 1) >> 1) + v21;
      v67 = v27;
      if ( v27 > v69 )
        return 0LL;
      v28 = (((_DWORD)v26 + 1) & 2) != 0;
      v65 = v28;
      if ( v5 >= v64 || v9 >= v8 || (int)v26 + v9 <= v61 )
      {
        v9 += v26;
        v43 = &v2[(unsigned __int64)(unsigned int)(v26 + 1) >> 1];
      }
      else
      {
        if ( v9 >= v61 )
        {
          v30 = acBits[(unsigned __int8)(7 - (v9 & 7)) + 40];
        }
        else
        {
          v29 = v61 - v9;
          LODWORD(v26) = v26 - (v61 - v9);
          v2 += (unsigned __int64)(unsigned int)(v61 - v9) >> 1;
          v25 = (unsigned int)(v61 >> 3);
          v9 = v61;
          v30 = acBits[(unsigned __int8)(7 - (v61 & 7)) + 40];
          if ( (v29 & 1) != 0 )
          {
            v31 = v16 | v30;
            v30 >>= 1;
            v32 = v31;
            v33 = *v2++ & 0xF;
            v9 = v61 + 1;
            LODWORD(v26) = v26 - 1;
            if ( !*(_BYTE *)(v74 + 4 * v33) )
              v32 = v16;
            v16 = v32;
          }
        }
        if ( (int)v26 + v9 <= v8 )
        {
          v34 = 0;
        }
        else
        {
          v34 = v9 + v26 - v8;
          LODWORD(v26) = v8 - v9;
        }
        v35 = v74;
        v36 = v26 + v9;
        v68 = v26 & 1;
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
                v59 = *(_BYTE *)(v35 + 4 * (v39 >> 4));
                v38 = v30;
                v60 = *(_BYTE *)(v35 + 4 * (v39 & 0xF));
              }
              v40 = v37;
              LODWORD(v26) = v26 - 1;
              v41 = v16 | v38;
              v37 ^= 1u;
              if ( !*(&v59 + v40) )
                v41 = v16;
              v30 >>= 1;
              v16 = v41;
            }
            while ( v30 );
            if ( v30 )
              continue;
          }
          *(_BYTE *)(v25 + v3) = v16;
          v30 = 0x80;
          v25 = (unsigned int)(v25 + 1);
          v16 = 0;
        }
        while ( (_DWORD)v26 );
        v42 = v34;
        v17 = a1;
        v5 = v66;
        if ( !v68 )
          v42 = v34 + 1;
        v27 = v67;
        v28 = v65;
        v43 = &v2[v42 >> 1];
        v9 = v34 + v36;
      }
      v21 = v28 + v27;
      v2 = &v43[v28];
      goto LABEL_99;
    }
    v44 = v64;
    v45 = v61;
    if ( v5 >= v64 )
    {
      v46 = v63;
    }
    else
    {
      if ( (v9 & 7) != 0 )
      {
        if ( v9 < v61 )
        {
          if ( v9 >= v8 )
          {
LABEL_53:
            v46 = v63;
            *(_BYTE *)(v63 + v3) = v16 | v77 & *(_BYTE *)(v63 + v3);
            goto LABEL_57;
          }
        }
        else
        {
          if ( v9 >= v8 )
            goto LABEL_53;
          *(_BYTE *)((unsigned int)v25 + v3) = v16 | *(_BYTE *)((unsigned int)v25 + v3) & ~acBits[(v9 & 7) + 24];
          v45 = v61;
        }
      }
      v46 = v63;
    }
LABEL_57:
    v21 += 2;
    if ( v21 > v69 )
      return 0LL;
    v47 = *v2;
    v48 = v2 + 1;
    v9 += v47;
    v49 = *v48;
    v2 = v48 + 1;
    v5 -= v49;
    v66 = v5;
    v3 += v70 * v49;
    if ( v5 < v71 )
    {
      *((_DWORD *)v17 + 34) = v9;
LABEL_101:
      *((_QWORD *)v17 + 14) = v3;
      result = 1LL;
      *((_QWORD *)v17 + 13) = v2;
      *((_DWORD *)v17 + 31) = v21;
      *((_DWORD *)v17 + 33) = v5;
      return result;
    }
    if ( v5 < v44 )
    {
      if ( v9 >= v45 )
      {
        if ( v9 < v8 )
        {
          v16 = acBits[(v9 & 7) + 24] & *(_BYTE *)((unsigned int)(v9 >> 3) + v3);
          goto LABEL_99;
        }
LABEL_64:
        v16 = *(_BYTE *)(v46 + v3);
        goto LABEL_99;
      }
      if ( v9 >= v8 )
        goto LABEL_64;
LABEL_74:
      v16 = v76 & *(_BYTE *)(v72 + v3);
    }
LABEL_99:
    v21 += 2;
  }
  if ( v5 < v64 && (v9 & 7) != 0 )
  {
    if ( v9 < v61 )
    {
      if ( v9 >= v8 )
        goto LABEL_109;
    }
    else
    {
      if ( v9 < v8 )
      {
        *(_BYTE *)(v25 + v3) = v16 | *(_BYTE *)(v25 + v3) & ~acBits[(v9 & 7) + 24];
        return 0LL;
      }
LABEL_109:
      *(_BYTE *)(v63 + v3) = v16 | v77 & *(_BYTE *)(v63 + v3);
    }
  }
  return 0LL;
}
