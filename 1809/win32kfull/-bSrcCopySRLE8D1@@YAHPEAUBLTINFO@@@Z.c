/*
 * XREFs of ?bSrcCopySRLE8D1@@YAHPEAUBLTINFO@@@Z @ 0x1C02ADE50
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall bSrcCopySRLE8D1(struct BLTINFO *a1)
{
  unsigned __int8 *v2; // r12
  __int64 v3; // rsi
  int v4; // edx
  int v5; // r10d
  int v6; // r9d
  int v7; // r13d
  int v8; // ebx
  unsigned int v9; // r14d
  __int64 v10; // rax
  unsigned int v11; // ecx
  __int64 result; // rax
  char v13; // r8
  struct BLTINFO *v14; // rdi
  int v15; // ecx
  __int64 i; // rax
  unsigned int v17; // edx
  bool j; // cc
  __int64 v19; // r14
  unsigned __int8 *v20; // r12
  __int64 v21; // r11
  int v22; // r15d
  __int64 v23; // r9
  unsigned int v24; // edx
  int v25; // r15d
  __int64 v26; // rax
  int v27; // r10d
  __int64 v28; // rcx
  int v29; // ebx
  unsigned __int8 v30; // r14
  __int64 v31; // rdx
  char v32; // cl
  unsigned __int8 *v33; // r12
  unsigned int v34; // r11d
  int v35; // eax
  unsigned __int8 *v36; // r12
  int v37; // ecx
  char v38; // cl
  int v39; // ebx
  int v40; // edx
  int v41; // r9d
  char v42; // al
  __int64 v44; // rcx
  unsigned int v45; // r15d
  char v46; // r8
  unsigned int v47; // r11d
  __int64 v48; // r14
  unsigned int v49; // [rsp+20h] [rbp-88h]
  unsigned int v50; // [rsp+24h] [rbp-84h]
  unsigned int v51; // [rsp+24h] [rbp-84h]
  int v52; // [rsp+28h] [rbp-80h]
  int v53; // [rsp+2Ch] [rbp-7Ch]
  unsigned int v54; // [rsp+30h] [rbp-78h]
  int v55; // [rsp+34h] [rbp-74h]
  int v56; // [rsp+38h] [rbp-70h]
  unsigned int v57; // [rsp+3Ch] [rbp-6Ch]
  int v58; // [rsp+40h] [rbp-68h]
  int v59; // [rsp+44h] [rbp-64h]
  int v60; // [rsp+48h] [rbp-60h]
  __int64 v61; // [rsp+50h] [rbp-58h]
  char v63; // [rsp+B8h] [rbp+10h]
  char v64; // [rsp+C0h] [rbp+18h]
  int v65; // [rsp+C8h] [rbp+20h]

  v2 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v3 = *((_QWORD *)a1 + 2);
  v4 = *((_DWORD *)a1 + 30);
  v5 = *((_DWORD *)a1 + 15);
  v6 = *((_DWORD *)a1 + 25);
  v7 = *((_DWORD *)a1 + 24);
  v8 = *((_DWORD *)a1 + 32);
  v55 = *((_DWORD *)a1 + 11);
  v52 = v6;
  v59 = *((_DWORD *)a1 + 14);
  v53 = v5;
  v9 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v10 = *(_QWORD *)a1;
  v11 = *((_DWORD *)a1 + 22);
  v54 = v9;
  v65 = v11;
  v61 = *(_QWORD *)(v10 + 16);
  v56 = *((_DWORD *)a1 + 23);
  if ( v5 < v56 )
    return 1LL;
  v13 = 0;
  v57 = v11 >> 3;
  v64 = EndMask[v11 & 7];
  v49 = (unsigned int)(v7 - 1) >> 3;
  v14 = a1;
  v63 = ~EndMask[v7 & 7];
  if ( v5 >= v6 )
    goto LABEL_10;
  if ( v8 >= (int)v11 )
  {
    if ( v8 < v7 )
    {
      v13 = EndMask[v8 & 7] & *(_BYTE *)((unsigned int)(v8 >> 3) + v3);
      goto LABEL_10;
    }
    goto LABEL_8;
  }
  if ( v8 >= v7 )
  {
LABEL_8:
    v13 = *(_BYTE *)(((unsigned int)(v7 - 1) >> 3) + v3);
    goto LABEL_10;
  }
  v13 = EndMask[v11 & 7] & *(_BYTE *)((v11 >> 3) + v3);
LABEL_10:
  v15 = 1;
  for ( i = 1LL; i < 256; ++i )
  {
    *(_DWORD *)(v61 + 4 * i) = v15;
    v15 ^= 1u;
  }
  v17 = v4 + 2;
  for ( j = v17 <= v9; ; j = v17 <= v54 )
  {
    v51 = v17;
    if ( !j )
      return 0LL;
    v19 = *v2;
    v20 = v2 + 1;
    v21 = (unsigned int)(v8 >> 3);
    v22 = v5;
    v23 = *v20;
    v2 = v20 + 1;
    if ( (_DWORD)v19 )
    {
      if ( v5 >= v52 || v8 >= v7 || (int)v19 + v8 <= v65 )
      {
        v8 += v19;
      }
      else
      {
        if ( v8 < v65 )
        {
          v19 = (unsigned int)(v8 - v65 + v19);
          v8 = v65;
          v21 = (unsigned int)(v65 >> 3);
        }
        if ( (int)v19 + v8 <= v7 )
        {
          v58 = 0;
        }
        else
        {
          v58 = v8 + v19 - v7;
          v19 = (unsigned int)(v7 - v8);
        }
        v38 = v8 & 7;
        v39 = v19 + v8;
        LOBYTE(v40) = 7 - v38;
        v41 = *(_DWORD *)(v61 + 4 * v23);
        v60 = v41;
        if ( (unsigned __int8)(7 - v38) < (unsigned __int8)v19 )
        {
          v40 = (unsigned __int8)v40;
          v44 = 7LL - (unsigned __int8)v40;
          v45 = ((unsigned __int8)v19 - (unsigned __int8)v40 - 1) >> 3;
          if ( v41 )
            v46 = ~EndMask[v44] | v13;
          else
            v46 = EndMask[v44] & v13;
          *(_BYTE *)(v21 + v3) = v46;
          v47 = v21 + 1;
          v48 = -1 - (unsigned __int8)v40 + (unsigned int)v19;
          if ( v45 )
          {
            LOBYTE(v40) = -(v41 != 0);
            memset((void *)(v3 + v47), v40, v45);
            v5 = v53;
            v41 = v60;
            v48 = (unsigned int)v48 - 8 * v45;
          }
          v13 = 0;
          if ( (_DWORD)v48 && v41 && (unsigned int)v48 < 9 )
            v13 = EndMask[v48];
        }
        else if ( (unsigned int)v19 < 9 )
        {
          v42 = EndMask[v19] >> v38;
          if ( v41 )
            v13 |= v42;
          else
            v13 &= ~v42;
        }
        v8 = v58 + v39;
        v17 = v51;
      }
      goto LABEL_90;
    }
    if ( !(_DWORD)v23 )
      break;
    if ( (_DWORD)v23 == 1 )
    {
      if ( v5 >= v52 || (v8 & 7) == 0 )
        return 0LL;
      if ( v8 < v65 )
      {
        if ( v8 < v7 )
          return 0LL;
      }
      else if ( v8 < v7 )
      {
        *(_BYTE *)(v21 + v3) = v13 | *(_BYTE *)(v21 + v3) & ~EndMask[v8 & 7];
        return 0LL;
      }
      *(_BYTE *)(v49 + v3) = v13 | v63 & *(_BYTE *)(v49 + v3);
      return 0LL;
    }
    if ( (_DWORD)v23 != 2 )
    {
      v24 = v23 + v17;
      v50 = v24;
      if ( v24 > v54 )
        return 0LL;
      v25 = v23 & 1;
      if ( v5 >= v52 || v8 >= v7 || (int)v23 + v8 <= v65 )
      {
        v8 += v23;
        v33 = &v2[v23];
      }
      else
      {
        if ( v8 < v65 )
        {
          v26 = (unsigned int)(v65 - v8);
          v21 = (unsigned int)(v65 >> 3);
          LODWORD(v23) = v23 - v26;
          v8 = v65;
          v2 += v26;
        }
        if ( (int)v23 + v8 <= v7 )
        {
          v27 = 0;
        }
        else
        {
          v27 = v8 + v23 - v7;
          LODWORD(v23) = v7 - v8;
        }
        v28 = (unsigned __int8)(7 - (v8 & 7));
        v29 = v23 + v8;
        v30 = EndMask[v28 + 16];
        do
        {
          if ( v30 )
          {
            do
            {
              if ( !(_DWORD)v23 )
                break;
              v31 = *v2++;
              LODWORD(v23) = v23 - 1;
              v32 = v13 | v30;
              if ( !*(_DWORD *)(v61 + 4 * v31) )
                v32 = v13;
              v30 >>= 1;
              v13 = v32;
            }
            while ( v30 );
            if ( v30 )
              continue;
          }
          *(_BYTE *)(v21 + v3) = v13;
          v30 = 0x80;
          v21 = (unsigned int)(v21 + 1);
          v13 = 0;
        }
        while ( (_DWORD)v23 );
        v14 = a1;
        v24 = v50;
        v33 = &v2[v27];
        v8 = v27 + v29;
        v5 = v53;
      }
      v17 = v25 + v24;
      v2 = &v33[v25];
      goto LABEL_90;
    }
    if ( v5 >= v52 )
    {
      v34 = (unsigned int)(v7 - 1) >> 3;
    }
    else
    {
      if ( (v8 & 7) != 0 )
      {
        if ( v8 < v65 )
        {
          if ( v8 >= v7 )
          {
LABEL_44:
            v34 = (unsigned int)(v7 - 1) >> 3;
            *(_BYTE *)(v49 + v3) = v13 | v63 & *(_BYTE *)(v49 + v3);
            goto LABEL_48;
          }
        }
        else
        {
          if ( v8 >= v7 )
            goto LABEL_44;
          *(_BYTE *)(v21 + v3) = v13 | *(_BYTE *)(v21 + v3) & ~EndMask[v8 & 7];
        }
      }
      v34 = (unsigned int)(v7 - 1) >> 3;
    }
LABEL_48:
    v17 += 2;
    if ( v17 > v54 )
      return 0LL;
    v35 = *v2;
    v36 = v2 + 1;
    v8 += v35;
    v37 = *v36;
    v2 = v36 + 1;
    v5 -= v37;
    v53 = v5;
    v3 += v55 * v37;
    if ( v5 < v56 )
    {
      *((_DWORD *)v14 + 34) = v8;
      goto LABEL_94;
    }
    if ( v5 < v52 )
    {
      if ( v8 >= v65 )
      {
        if ( v8 < v7 )
        {
          v13 = EndMask[v8 & 7] & *(_BYTE *)((unsigned int)(v8 >> 3) + v3);
          goto LABEL_90;
        }
LABEL_55:
        v13 = *(_BYTE *)(v34 + v3);
        goto LABEL_90;
      }
      if ( v8 >= v7 )
        goto LABEL_55;
LABEL_65:
      v13 = v64 & *(_BYTE *)(v57 + v3);
    }
LABEL_90:
    v17 += 2;
  }
  if ( v5 < v52 && (v8 & 7) != 0 )
  {
    if ( v8 < v65 )
    {
      if ( v8 >= v7 )
        goto LABEL_62;
    }
    else
    {
      if ( v8 < v7 )
      {
        *(_BYTE *)(v21 + v3) = v13 | *(_BYTE *)(v21 + v3) & ~EndMask[v8 & 7];
        goto LABEL_63;
      }
LABEL_62:
      *(_BYTE *)(v49 + v3) = v13 | v63 & *(_BYTE *)(v49 + v3);
    }
  }
LABEL_63:
  --v5;
  v3 += v55;
  v8 = v59;
  v53 = v5;
  if ( v22 > v56 )
  {
    if ( v5 >= v52 )
      goto LABEL_90;
    goto LABEL_65;
  }
  *((_DWORD *)v14 + 34) = v59;
LABEL_94:
  *((_QWORD *)v14 + 14) = v3;
  result = 1LL;
  *((_QWORD *)v14 + 13) = v2;
  *((_DWORD *)v14 + 31) = v17;
  *((_DWORD *)v14 + 33) = v5;
  return result;
}
