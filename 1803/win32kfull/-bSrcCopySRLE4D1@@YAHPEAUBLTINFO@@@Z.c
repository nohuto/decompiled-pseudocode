/*
 * XREFs of ?bSrcCopySRLE4D1@@YAHPEAUBLTINFO@@@Z @ 0x1C029B900
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall bSrcCopySRLE4D1(struct BLTINFO *a1)
{
  unsigned __int8 *v2; // r15
  __int64 v3; // rsi
  int v4; // r12d
  int v5; // edx
  int v6; // r11d
  int v7; // r13d
  int v8; // r9d
  int v9; // ebx
  __int64 v10; // rax
  unsigned int v11; // r14d
  __int64 v12; // rax
  unsigned int v13; // ecx
  __int64 result; // rax
  char v15; // r8
  struct BLTINFO *v16; // rdi
  int v17; // eax
  int *v18; // rcx
  __int64 v19; // rdx
  unsigned int v20; // r12d
  bool i; // cc
  unsigned int v22; // r14d
  unsigned __int8 *v23; // r15
  __int64 v24; // r10
  unsigned __int64 v25; // r9
  unsigned int v26; // r12d
  BOOL v27; // ecx
  unsigned int v28; // edx
  unsigned __int8 v29; // r14
  unsigned __int8 v30; // dl
  char v31; // al
  char v32; // cl
  unsigned int v33; // r11d
  __int64 v34; // r13
  int v35; // ebx
  unsigned int v36; // edi
  unsigned __int8 v37; // cl
  unsigned __int64 v38; // rax
  __int64 v39; // rax
  char v40; // cl
  unsigned int v41; // eax
  unsigned __int8 *v42; // r15
  unsigned int v43; // r9d
  int v44; // eax
  unsigned __int8 *v45; // r15
  int v46; // ecx
  int v47; // eax
  __int64 v48; // rcx
  int v49; // edx
  unsigned __int8 v50; // r12
  int v51; // ecx
  unsigned int v52; // r9d
  unsigned int v53; // ebx
  __int64 v54; // r14
  __int64 v55; // r14
  char v56; // [rsp+20h] [rbp-98h]
  unsigned __int8 v57; // [rsp+21h] [rbp-97h]
  int v58; // [rsp+24h] [rbp-94h]
  char v59; // [rsp+28h] [rbp-90h]
  unsigned int v60; // [rsp+2Ch] [rbp-8Ch]
  int v61; // [rsp+30h] [rbp-88h]
  int v62; // [rsp+34h] [rbp-84h]
  unsigned int v63; // [rsp+38h] [rbp-80h]
  unsigned int v64; // [rsp+3Ch] [rbp-7Ch]
  unsigned int v65; // [rsp+40h] [rbp-78h]
  int v66; // [rsp+44h] [rbp-74h]
  int v67; // [rsp+48h] [rbp-70h]
  unsigned int v68; // [rsp+4Ch] [rbp-6Ch]
  __int64 v69; // [rsp+50h] [rbp-68h]
  int v70; // [rsp+58h] [rbp-60h]
  int v71; // [rsp+5Ch] [rbp-5Ch]
  int v72; // [rsp+60h] [rbp-58h]
  char v74; // [rsp+C8h] [rbp+10h]
  char v75; // [rsp+D0h] [rbp+18h]
  char v76; // [rsp+D8h] [rbp+20h]

  v2 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v3 = *((_QWORD *)a1 + 2);
  v4 = *((_DWORD *)a1 + 30);
  v5 = *((_DWORD *)a1 + 14);
  v6 = *((_DWORD *)a1 + 15);
  v7 = *((_DWORD *)a1 + 24);
  v8 = *((_DWORD *)a1 + 25);
  v9 = *((_DWORD *)a1 + 32);
  v66 = *((_DWORD *)a1 + 11);
  v10 = *((_QWORD *)a1 + 9);
  v71 = v5;
  v70 = v7;
  v58 = v8;
  v11 = *(_DWORD *)(v10 + 64);
  v12 = *(_QWORD *)a1;
  v13 = *((_DWORD *)a1 + 22);
  v65 = v11;
  v61 = v13;
  v69 = *(_QWORD *)(v12 + 16);
  v67 = *((_DWORD *)a1 + 23);
  v62 = v6;
  if ( v6 < v67 )
    return 1LL;
  v15 = 0;
  v68 = v13 >> 3;
  v74 = EndMask[v13 & 7];
  v60 = (unsigned int)(v7 - 1) >> 3;
  v16 = a1;
  v75 = ~EndMask[v7 & 7];
  if ( v6 >= v8 )
    goto LABEL_10;
  if ( v9 >= (int)v13 )
  {
    if ( v9 < v7 )
    {
      v15 = EndMask[v9 & 7] & *(_BYTE *)((unsigned int)(v9 >> 3) + v3);
      goto LABEL_10;
    }
    goto LABEL_8;
  }
  if ( v9 >= v7 )
  {
LABEL_8:
    v15 = *(_BYTE *)(((unsigned int)(v7 - 1) >> 3) + v3);
    goto LABEL_10;
  }
  v15 = v74 & *(_BYTE *)((v13 >> 3) + v3);
LABEL_10:
  v17 = 1;
  v18 = (int *)(v69 + 4);
  v19 = 15LL;
  do
  {
    *v18 = v17;
    v17 ^= 1u;
    ++v18;
    --v19;
  }
  while ( v19 );
  v20 = v4 + 2;
  for ( i = v20 <= v11; ; i = v20 <= v65 )
  {
    v64 = v20;
    if ( !i )
      return 0LL;
    v22 = *v2;
    v23 = v2 + 1;
    v24 = (unsigned int)(v9 >> 3);
    v25 = *v23;
    v2 = v23 + 1;
    if ( v22 )
    {
      if ( v6 >= v58 || v9 >= v7 || (int)(v22 + v9) <= v61 )
      {
        v9 += v22;
      }
      else
      {
        if ( v9 < v61 )
        {
          v22 -= v61 - v9;
          v9 = v61;
          v24 = (unsigned int)(v61 >> 3);
        }
        if ( (int)(v22 + v9) <= v7 )
        {
          v63 = 0;
        }
        else
        {
          v63 = v9 + v22 - v7;
          v22 = v7 - v9;
        }
        v49 = *(unsigned __int8 *)(v69 + 4 * (v25 >> 4));
        v57 = *(_BYTE *)(v69 + 4 * (v25 & 0xF));
        v56 = v49;
        v48 = (unsigned int)v57 + 2 * v49;
        LOBYTE(v49) = v9 & 7;
        v50 = byte_1C02EC448[v48];
        v59 = v50;
        v51 = (unsigned __int8)(7 - (v9 & 7));
        v72 = v51;
        v76 = v9 & 7;
        if ( v22 >= v51 + 1 )
          v52 = ((unsigned __int8)v22 - v51 - 1) >> 3;
        else
          v52 = 0;
        v53 = v22 + v9;
        v54 = v22 - 8 * v52;
        if ( v51 < (int)v54 )
        {
          *(_BYTE *)(v24 + v3) = v15 | ((unsigned __int8)(v50 & EndMask[v51 + 1]) >> v76);
          v49 = v72;
          if ( (v72 & 1) == 0 )
          {
            v50 *= 2;
            if ( v59 < 0 )
              v50 |= 1u;
          }
          LODWORD(v24) = v24 + 1;
          v15 = 0;
          v55 = -1 - (unsigned __int8)v72 + (unsigned int)v54;
        }
        else
        {
          v50 &= EndMask[v54];
          v15 |= v50 >> v49;
          v55 = 0LL;
        }
        if ( v52 )
        {
          LOBYTE(v49) = v50;
          memset((void *)(v3 + (unsigned int)v24), v49, v52);
          v6 = v62;
          v15 = 0;
        }
        if ( (unsigned int)v55 < 9 )
          v15 |= v50 & EndMask[v55];
        v9 = v63 + v53;
        v20 = v64;
      }
      goto LABEL_97;
    }
    if ( !(_DWORD)v25 )
      break;
    if ( (_DWORD)v25 == 1 )
    {
      if ( v6 >= v58 || (v9 & 7) == 0 )
        return 0LL;
      if ( v9 < v61 )
      {
        if ( v9 < v7 )
          return 0LL;
      }
      else if ( v9 < v7 )
      {
        *(_BYTE *)(v24 + v3) = v15 | *(_BYTE *)(v24 + v3) & ~EndMask[v9 & 7];
        return 0LL;
      }
      *(_BYTE *)(v60 + v3) = v15 | v75 & *(_BYTE *)(v60 + v3);
      return 0LL;
    }
    if ( (_DWORD)v25 == 2 )
    {
      if ( v6 >= v58 )
      {
        v43 = v60;
      }
      else
      {
        if ( (v9 & 7) == 0 )
          goto LABEL_55;
        if ( v9 < v61 )
        {
          if ( v9 >= v7 )
            goto LABEL_52;
LABEL_55:
          v43 = v60;
        }
        else
        {
          if ( v9 < v7 )
          {
            *(_BYTE *)((unsigned int)v24 + v3) = v15 | *(_BYTE *)((unsigned int)v24 + v3) & ~EndMask[v9 & 7];
            goto LABEL_55;
          }
LABEL_52:
          v43 = v60;
          *(_BYTE *)(v60 + v3) = v15 | v75 & *(_BYTE *)(v60 + v3);
        }
      }
      v20 += 2;
      if ( v20 > v65 )
        return 0LL;
      v44 = *v2;
      v45 = v2 + 1;
      v9 += v44;
      v46 = *v45;
      v2 = v45 + 1;
      v6 -= v46;
      v62 = v6;
      v3 += v66 * v46;
      if ( v6 < v67 )
      {
        *((_DWORD *)v16 + 34) = v9;
        goto LABEL_109;
      }
      if ( v9 >= v61 )
      {
        if ( v9 < v7 )
        {
          v15 = EndMask[v9 & 7] & *(_BYTE *)((unsigned int)(v9 >> 3) + v3);
          goto LABEL_97;
        }
LABEL_62:
        v15 = *(_BYTE *)(v43 + v3);
        goto LABEL_97;
      }
      if ( v9 >= v7 )
        goto LABEL_62;
LABEL_73:
      v15 = v74 & *(_BYTE *)(v68 + v3);
      goto LABEL_97;
    }
    v26 = ((unsigned int)(v25 + 1) >> 1) + v20;
    if ( v26 > v65 )
      return 0LL;
    v27 = (((_DWORD)v25 + 1) & 2) != 0;
    v63 = v27;
    if ( v6 >= v58 || v9 >= v7 || (int)v25 + v9 <= v61 )
    {
      v9 += v25;
      v42 = &v2[(unsigned __int64)(unsigned int)(v25 + 1) >> 1];
    }
    else
    {
      if ( v9 >= v61 )
      {
        v29 = byte_1C02EC450[(unsigned __int8)(7 - (v9 & 7))];
      }
      else
      {
        v28 = v61 - v9;
        v9 = v61;
        v2 += (unsigned __int64)v28 >> 1;
        v24 = (unsigned int)(v61 >> 3);
        LODWORD(v25) = v25 - v28;
        v29 = byte_1C02EC450[(unsigned __int8)(7 - (v61 & 7))];
        if ( (v28 & 1) != 0 )
        {
          v30 = *v2;
          v31 = v15 | v29;
          v29 >>= 1;
          v32 = v31;
          ++v2;
          v9 = v61 + 1;
          LODWORD(v25) = v25 - 1;
          if ( !*(_BYTE *)(v69 + 4LL * (v30 & 0xF)) )
            v32 = v15;
          v15 = v32;
        }
      }
      if ( (int)v25 + v9 <= v7 )
      {
        v33 = 0;
      }
      else
      {
        v33 = v9 + v25 - v7;
        LODWORD(v25) = v7 - v9;
      }
      v34 = v69;
      v35 = v25 + v9;
      v64 = v25 & 1;
      v36 = 0;
      do
      {
        if ( v29 )
        {
          do
          {
            v37 = v29;
            if ( !(_DWORD)v25 )
              break;
            if ( !v36 )
            {
              v38 = *v2++;
              v56 = *(_BYTE *)(v34 + 4 * (v38 >> 4));
              v37 = v29;
              v57 = *(_BYTE *)(v34 + 4 * (v38 & 0xF));
            }
            v39 = v36;
            LODWORD(v25) = v25 - 1;
            v40 = v15 | v37;
            v36 ^= 1u;
            if ( !*(&v56 + v39) )
              v40 = v15;
            v29 >>= 1;
            v15 = v40;
          }
          while ( v29 );
          if ( v29 )
            continue;
        }
        *(_BYTE *)(v24 + v3) = v15;
        v29 = 0x80;
        v24 = (unsigned int)(v24 + 1);
        v15 = 0;
      }
      while ( (_DWORD)v25 );
      v41 = v33;
      v16 = a1;
      v7 = v70;
      if ( !v64 )
        v41 = v33 + 1;
      v27 = v63;
      v42 = &v2[v41 >> 1];
      v9 = v33 + v35;
      v6 = v62;
    }
    v20 = v27 + v26;
    v2 = &v42[v27];
LABEL_97:
    v20 += 2;
  }
  v47 = v58;
  if ( v6 < v58 )
  {
    if ( (v9 & 7) == 0 )
      goto LABEL_70;
    if ( v9 < v61 )
    {
      if ( v9 >= v7 )
        goto LABEL_69;
    }
    else
    {
      if ( v9 < v7 )
      {
        *(_BYTE *)(v24 + v3) = v15 | *(_BYTE *)(v24 + v3) & ~EndMask[v9 & 7];
        goto LABEL_70;
      }
LABEL_69:
      *(_BYTE *)(v60 + v3) = v15 | v75 & *(_BYTE *)(v60 + v3);
    }
LABEL_70:
    v47 = v58;
  }
  --v6;
  v3 += v66;
  v9 = v71;
  v62 = v6;
  if ( v6 >= v67 )
  {
    if ( v6 >= v47 )
      goto LABEL_97;
    goto LABEL_73;
  }
  *((_DWORD *)v16 + 34) = v71;
LABEL_109:
  result = 1LL;
  *((_DWORD *)v16 + 33) = v6;
  *((_QWORD *)v16 + 14) = v3;
  *((_QWORD *)v16 + 13) = v2;
  *((_DWORD *)v16 + 31) = v20;
  return result;
}
