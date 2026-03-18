/*
 * XREFs of vSrcTranCopyS1D4 @ 0x1C028B7B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall vSrcTranCopyS1D4(__int64 a1, int a2, int a3, __int64 a4, int a5, int a6, int a7, int a8, int a9)
{
  __int64 v9; // r10
  int v11; // r13d
  int v12; // edi
  __int64 v13; // rbp
  int v15; // esi
  char v16; // r11
  __int64 v17; // r14
  unsigned int v18; // r9d
  unsigned __int8 *v19; // r8
  int v20; // edx
  unsigned __int64 v21; // rax
  int v22; // ebx
  _BYTE *v23; // r10
  __int64 v24; // rax
  __int64 v25; // r15
  __int64 v26; // rbx
  unsigned __int8 *v27; // rdi
  unsigned int v28; // edx
  char v29; // al
  char v30; // cl
  _BYTE *v31; // rdx
  int v32; // r9d
  _BYTE *v33; // r10
  __int64 v34; // r12
  _BYTE *v35; // r15
  unsigned __int8 v36; // r8
  _BYTE *v37; // rbx
  int v38; // edi
  unsigned __int64 v39; // rbp
  unsigned __int64 v40; // rax
  int v41; // r13d
  _BYTE *v42; // r8
  _BYTE *v43; // rbp
  __int64 v44; // r15
  char v45; // r10
  int v46; // ebx
  char *v47; // r8
  _BYTE *v48; // rdx
  __int64 v49; // rbp
  char *v50; // rsi
  char v51; // di
  unsigned int v52; // ebx
  unsigned __int64 v53; // r10
  unsigned __int8 *v55; // [rsp+8h] [rbp-50h]
  __int64 v56; // [rsp+10h] [rbp-48h]
  __int64 v57; // [rsp+60h] [rbp+8h]
  int v58; // [rsp+68h] [rbp+10h]
  __int64 v59; // [rsp+78h] [rbp+20h]

  v59 = a4;
  v9 = a4;
  v11 = a5;
  v12 = a7;
  v13 = a2;
  v15 = a2 & 7;
  v16 = a9 | (16 * a9);
  v58 = -1044736;
  a9 = a6 - a5 + a2;
  v17 = a3 * (__int64)a8;
  v18 = ((_BYTE)a6 - (_BYTE)a5 + (_BYTE)a2) & 7;
  v57 = a3;
  v19 = (unsigned __int8 *)(a1 + ((__int64)(a2 + 7) >> 3));
  a8 = 8 - v15;
  v20 = v15 != 0 ? 8 - v15 : 0;
  LOBYTE(v21) = v18 + v20;
  v22 = a6 - a5 - (v18 + v20);
  if ( v22 > 0 )
  {
    v55 = &v19[v17];
    v23 = (_BYTE *)(v59 + ((__int64)(v20 + a5) >> 1));
    v24 = a3 - (v22 >> 3);
    v25 = a7 - (v22 >> 1);
    v26 = (__int64)v22 >> 3;
    v56 = v24;
    do
    {
      v27 = &v19[v26];
      do
      {
        v28 = *v19++;
        *v23 = v16 & *((_BYTE *)&v58 + ((unsigned __int64)v28 >> 6)) | *v23 & ~*((_BYTE *)&v58
                                                                               + ((unsigned __int64)v28 >> 6));
        v29 = *((_BYTE *)&v58 + ((v28 >> 4) & 3));
        v23[1] = v16 & v29 | v23[1] & ~v29;
        v30 = *((_BYTE *)&v58 + (v28 & 3));
        v23[2] = v16 & *((_BYTE *)&v58 + ((v28 >> 2) & 3)) | v23[2] & ~*((_BYTE *)&v58 + ((v28 >> 2) & 3));
        LOBYTE(v21) = v16 & v30 | v23[3] & ~v30;
        v23[3] = v21;
        v23 += 4;
      }
      while ( v19 != v27 );
      v19 += v56;
      v23 += v25;
    }
    while ( v19 != v55 );
    v12 = a7;
    v11 = a5;
    v9 = v59;
  }
  if ( v15 )
  {
    LOBYTE(v21) = v13 ^ a9;
    v31 = (_BYTE *)(v9 + ((__int64)v11 >> 1));
    if ( (((unsigned int)v13 ^ a9) & 0xFFFFFFF8) == 0 )
    {
      v32 = v18 - v15;
      if ( v32 > 0 )
      {
        v33 = (_BYTE *)(a1 + (v13 >> 3));
        v34 = v12;
        v35 = &v33[v17];
        do
        {
          v36 = *v33 << v15;
          v37 = v31;
          v38 = v32;
          if ( (v15 & 1) != 0 )
          {
            if ( (v36 & 0x80u) != 0 )
              *v31 ^= (v16 ^ *v31) & 0xF;
            v36 *= 2;
            v37 = v31 + 1;
            v38 = v32 - 1;
          }
          if ( v38 >= 2 )
          {
            v39 = (unsigned __int64)(unsigned int)v38 >> 1;
            v38 -= 2 * ((unsigned int)v38 >> 1);
            do
            {
              v40 = (unsigned __int64)v36 >> 6;
              v36 *= 4;
              *v37 = v16 & *((_BYTE *)&v58 + v40) | *v37 & ~*((_BYTE *)&v58 + v40);
              ++v37;
              --v39;
            }
            while ( v39 );
          }
          LOBYTE(v21) = (v38 & 1) != 0;
          if ( ((unsigned __int8)v21 & (v36 >> 7)) != 0 )
          {
            LOBYTE(v21) = v16 ^ (v16 ^ *v37) & 0xF;
            *v37 = v21;
          }
          v33 += v57;
          v31 += v34;
        }
        while ( v33 != v35 );
      }
      return v21;
    }
    v41 = a8;
    v42 = (_BYTE *)(a1 + (v13 >> 3));
    LODWORD(v21) = v12 - ((9 - v15) >> 1);
    v43 = &v42[v17];
    v44 = (int)v21;
    do
    {
      v45 = *v42 << v15;
      v46 = v41;
      if ( (v41 & 1) != 0 )
      {
        if ( v45 < 0 )
        {
          LOBYTE(v21) = (v16 ^ *v31) & 0xF;
          *v31 ^= v21;
        }
        v45 *= 2;
        ++v31;
        v46 = v41 - 1;
      }
      for ( ; v46; v46 -= 2 )
      {
        v21 = (unsigned __int64)(unsigned __int8)v45 >> 6;
        v45 *= 4;
        LOBYTE(v21) = v16 & *((_BYTE *)&v58 + v21) | *v31 & ~*((_BYTE *)&v58 + v21);
        *v31++ = v21;
      }
      v42 += v57;
      v31 += v44;
    }
    while ( v42 != v43 );
    v12 = a7;
  }
  if ( v18 )
  {
    v47 = (char *)(a1 + ((__int64)a9 >> 3));
    v48 = (_BYTE *)(v59 + ((__int64)(int)(a6 - v18) >> 1));
    LODWORD(v21) = (v18 + 1) >> 1;
    v49 = v12 - (int)v21;
    v50 = &v47[v17];
    do
    {
      v51 = *v47;
      v52 = v18;
      if ( v18 >= 2 )
      {
        v53 = (unsigned __int64)v18 >> 1;
        v52 = v18 - 2 * v53;
        do
        {
          v21 = (unsigned __int64)(unsigned __int8)v51 >> 6;
          v51 *= 4;
          LOBYTE(v21) = v16 & *((_BYTE *)&v58 + v21) | *v48 & ~*((_BYTE *)&v58 + v21);
          *v48++ = v21;
          --v53;
        }
        while ( v53 );
      }
      if ( v52 )
      {
        if ( v51 < 0 )
        {
          LOBYTE(v21) = v16 ^ (v16 ^ *v48) & 0xF;
          *v48 = v21;
        }
        ++v48;
      }
      v47 += v57;
      v48 += v49;
    }
    while ( v47 != v50 );
  }
  return v21;
}
