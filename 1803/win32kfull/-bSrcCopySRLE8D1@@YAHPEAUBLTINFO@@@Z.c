/*
 * XREFs of ?bSrcCopySRLE8D1@@YAHPEAUBLTINFO@@@Z @ 0x1C029A1F0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall bSrcCopySRLE8D1(struct BLTINFO *a1)
{
  unsigned __int8 *v2; // r12
  __int64 v3; // rbp
  int v4; // r13d
  int v5; // r10d
  int v6; // r14d
  int v7; // r9d
  int v8; // ebx
  unsigned int v9; // esi
  __int64 v10; // rax
  unsigned int v11; // ecx
  __int64 result; // rax
  char v13; // r8
  int v14; // ecx
  __int64 i; // rax
  unsigned int v16; // r13d
  bool j; // cc
  __int64 v18; // rsi
  unsigned __int8 *v19; // r12
  __int64 v20; // r11
  __int64 v21; // r9
  int v22; // r13d
  __int64 v23; // rax
  int v24; // r10d
  __int64 v25; // rcx
  int v26; // ebx
  unsigned __int8 v27; // si
  __int64 v28; // rdx
  char v29; // cl
  unsigned __int8 *v30; // r12
  unsigned int v31; // r11d
  int v32; // eax
  unsigned __int8 *v33; // r12
  int v34; // ecx
  int v35; // r12d
  char v36; // cl
  int v37; // ebx
  int v38; // edx
  int v39; // r13d
  char v40; // dl
  __int64 v41; // rcx
  unsigned int v42; // r14d
  char v43; // r8
  unsigned int v44; // r11d
  __int64 v45; // rsi
  int v46; // [rsp+20h] [rbp-88h]
  int v47; // [rsp+24h] [rbp-84h]
  int v48; // [rsp+28h] [rbp-80h]
  int v49; // [rsp+2Ch] [rbp-7Ch]
  unsigned int v50; // [rsp+30h] [rbp-78h]
  int v51; // [rsp+34h] [rbp-74h]
  int v52; // [rsp+38h] [rbp-70h]
  unsigned int v53; // [rsp+3Ch] [rbp-6Ch]
  int v54; // [rsp+40h] [rbp-68h]
  __int64 v55; // [rsp+48h] [rbp-60h]
  unsigned __int8 *v56; // [rsp+50h] [rbp-58h]
  char v57; // [rsp+B0h] [rbp+8h]
  char v58; // [rsp+B8h] [rbp+10h]
  unsigned int v59; // [rsp+C0h] [rbp+18h]
  int v60; // [rsp+C8h] [rbp+20h]
  unsigned int v61; // [rsp+C8h] [rbp+20h]

  v2 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v3 = *((_QWORD *)a1 + 2);
  v4 = *((_DWORD *)a1 + 30);
  v5 = *((_DWORD *)a1 + 15);
  v6 = *((_DWORD *)a1 + 24);
  v7 = *((_DWORD *)a1 + 25);
  v8 = *((_DWORD *)a1 + 32);
  v51 = *((_DWORD *)a1 + 11);
  v54 = *((_DWORD *)a1 + 14);
  v47 = v6;
  v48 = v7;
  v9 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v10 = *(_QWORD *)a1;
  v11 = *((_DWORD *)a1 + 22);
  v50 = v9;
  v46 = v11;
  v55 = *(_QWORD *)(v10 + 16);
  v52 = *((_DWORD *)a1 + 23);
  v49 = v5;
  if ( v5 < v52 )
    return 1LL;
  v13 = 0;
  v53 = v11 >> 3;
  v57 = EndMask[v11 & 7];
  v59 = (unsigned int)(v6 - 1) >> 3;
  v58 = ~EndMask[v6 & 7];
  if ( v5 >= v7 )
    goto LABEL_10;
  if ( v8 >= (int)v11 )
  {
    if ( v8 < v6 )
    {
      v13 = EndMask[v8 & 7] & *(_BYTE *)((unsigned int)(v8 >> 3) + v3);
      goto LABEL_10;
    }
    goto LABEL_8;
  }
  if ( v8 >= v6 )
  {
LABEL_8:
    v13 = *(_BYTE *)(((unsigned int)(v6 - 1) >> 3) + v3);
    goto LABEL_10;
  }
  v13 = v57 & *(_BYTE *)((v11 >> 3) + v3);
LABEL_10:
  v14 = 1;
  for ( i = 1LL; i < 256; ++i )
  {
    *(_DWORD *)(v55 + 4 * i) = v14;
    v14 ^= 1u;
  }
  v16 = v4 + 2;
  for ( j = v16 <= v9; ; j = v16 <= v50 )
  {
    v61 = v16;
    if ( !j )
      return 0LL;
    v18 = *v2;
    v19 = v2 + 1;
    v20 = (unsigned int)(v8 >> 3);
    v21 = *v19;
    v2 = v19 + 1;
    v56 = v2;
    if ( !(_DWORD)v18 )
      break;
    if ( v5 < v48 && v8 < v6 && (int)v18 + v8 > v46 )
    {
      if ( v8 < v46 )
      {
        v18 = (unsigned int)(v18 - (v46 - v8));
        v8 = v46;
        v20 = (unsigned int)(v46 >> 3);
      }
      if ( (int)v18 + v8 <= v6 )
      {
        v35 = 0;
      }
      else
      {
        v35 = v8 + v18 - v6;
        v18 = (unsigned int)(v6 - v8);
      }
      v36 = v8 & 7;
      v38 = 7;
      v37 = v18 + v8;
      LOBYTE(v38) = 7 - v36;
      v39 = *(_DWORD *)(v55 + 4 * v21);
      if ( (unsigned __int8)(7 - v36) < (unsigned __int8)v18 )
      {
        v41 = 7 - (unsigned __int8)v38;
        v42 = ((unsigned __int8)v18 - (unsigned __int8)v38 - 1) >> 3;
        if ( v39 )
          v43 = ~EndMask[v41] | v13;
        else
          v43 = EndMask[v41] & v13;
        *(_BYTE *)(v20 + v3) = v43;
        v44 = v20 + 1;
        v45 = -1 - (unsigned __int8)v38 + (unsigned int)v18;
        if ( v42 )
        {
          LOBYTE(v38) = -(v39 != 0);
          memset((void *)(v3 + v44), v38, v42);
          v5 = v49;
          v45 = (unsigned int)v45 - 8 * v42;
        }
        v13 = 0;
        if ( (_DWORD)v45 && v39 )
        {
          v6 = v47;
          if ( (unsigned int)v45 < 9 )
            v13 = EndMask[v45];
        }
        else
        {
          v6 = v47;
        }
      }
      else if ( (unsigned int)v18 < 9 )
      {
        v40 = EndMask[v18] >> v36;
        if ( v39 )
          v13 |= v40;
        else
          v13 &= ~v40;
      }
      v8 = v35 + v37;
      v2 = v56;
LABEL_90:
      v16 = v61;
      goto LABEL_92;
    }
    v8 += v18;
LABEL_92:
    v16 += 2;
  }
  if ( (_DWORD)v21 )
  {
    if ( (_DWORD)v21 == 1 )
    {
      if ( v5 >= v48 || (v8 & 7) == 0 )
        return 0LL;
      if ( v8 < v46 )
      {
        if ( v8 < v6 )
          return 0LL;
      }
      else if ( v8 < v6 )
      {
        *(_BYTE *)(v20 + v3) = v13 | *(_BYTE *)(v20 + v3) & ~EndMask[v8 & 7];
        return 0LL;
      }
      *(_BYTE *)(v59 + v3) = v13 | v58 & *(_BYTE *)(v59 + v3);
      return 0LL;
    }
    if ( (_DWORD)v21 != 2 )
    {
      v60 = v21 + v16;
      if ( (unsigned int)v21 + v16 > v50 )
        return 0LL;
      v22 = v21 & 1;
      if ( v5 >= v48 || v8 >= v6 || (int)v21 + v8 <= v46 )
      {
        v8 += v21;
        v30 = &v2[v21];
      }
      else
      {
        if ( v8 < v46 )
        {
          v23 = (unsigned int)(v46 - v8);
          LODWORD(v21) = v21 - v23;
          v8 = v46;
          v20 = (unsigned int)(v46 >> 3);
          v2 += v23;
        }
        if ( (int)v21 + v8 <= v6 )
        {
          v24 = 0;
        }
        else
        {
          v24 = v8 + v21 - v6;
          LODWORD(v21) = v6 - v8;
        }
        v25 = (unsigned __int8)(7 - (v8 & 7));
        v26 = v21 + v8;
        v27 = byte_1C02EC450[v25];
        do
        {
          if ( v27 )
          {
            do
            {
              if ( !(_DWORD)v21 )
                break;
              v28 = *v2++;
              LODWORD(v21) = v21 - 1;
              v29 = v13 | v27;
              if ( !*(_DWORD *)(v55 + 4 * v28) )
                v29 = v13;
              v27 >>= 1;
              v13 = v29;
            }
            while ( v27 );
            if ( v27 )
              continue;
          }
          *(_BYTE *)(v20 + v3) = v13;
          v27 = 0x80;
          v20 = (unsigned int)(v20 + 1);
          v13 = 0;
        }
        while ( (_DWORD)v21 );
        v6 = v47;
        v30 = &v2[v24];
        v8 = v24 + v26;
        v5 = v49;
      }
      v61 = v22 + v60;
      v2 = &v30[v22];
      goto LABEL_90;
    }
    if ( v5 >= v48 )
    {
      v31 = v59;
LABEL_48:
      v16 += 2;
      if ( v16 > v50 )
        return 0LL;
      v32 = *v2;
      v33 = v2 + 1;
      v8 += v32;
      v34 = *v33;
      v2 = v33 + 1;
      v5 -= v34;
      v49 = v5;
      v3 += v51 * v34;
      if ( v5 < v52 )
      {
        *((_DWORD *)a1 + 34) = v8;
        goto LABEL_104;
      }
      if ( v5 < v48 )
      {
        if ( v8 >= v46 )
        {
          if ( v8 < v6 )
          {
            v13 = EndMask[v8 & 7] & *(_BYTE *)((unsigned int)(v8 >> 3) + v3);
            goto LABEL_92;
          }
LABEL_55:
          v13 = *(_BYTE *)(v31 + v3);
          goto LABEL_92;
        }
        if ( v8 >= v6 )
          goto LABEL_55;
LABEL_65:
        v13 = v57 & *(_BYTE *)(v53 + v3);
        goto LABEL_92;
      }
      goto LABEL_92;
    }
    if ( (v8 & 7) != 0 )
    {
      if ( v8 < v46 )
      {
        if ( v8 < v6 )
          goto LABEL_47;
      }
      else if ( v8 < v6 )
      {
        *(_BYTE *)(v20 + v3) = v13 | *(_BYTE *)(v20 + v3) & ~EndMask[v8 & 7];
        goto LABEL_47;
      }
      v31 = v59;
      *(_BYTE *)(v59 + v3) = v13 | v58 & *(_BYTE *)(v59 + v3);
      goto LABEL_48;
    }
LABEL_47:
    v31 = v59;
    goto LABEL_48;
  }
  if ( v5 < v48 && (v8 & 7) != 0 )
  {
    if ( v8 < v46 )
    {
      if ( v8 >= v6 )
        goto LABEL_62;
    }
    else
    {
      if ( v8 < v6 )
      {
        *(_BYTE *)(v20 + v3) = v13 | *(_BYTE *)(v20 + v3) & ~EndMask[v8 & 7];
        goto LABEL_63;
      }
LABEL_62:
      *(_BYTE *)(v59 + v3) = v13 | v58 & *(_BYTE *)(v59 + v3);
    }
  }
LABEL_63:
  --v5;
  v3 += v51;
  v8 = v54;
  v49 = v5;
  if ( v5 >= v52 )
  {
    if ( v5 >= v48 )
      goto LABEL_92;
    goto LABEL_65;
  }
  *((_DWORD *)a1 + 34) = v54;
LABEL_104:
  result = 1LL;
  *((_DWORD *)a1 + 33) = v5;
  *((_QWORD *)a1 + 14) = v3;
  *((_QWORD *)a1 + 13) = v2;
  *((_DWORD *)a1 + 31) = v16;
  return result;
}
