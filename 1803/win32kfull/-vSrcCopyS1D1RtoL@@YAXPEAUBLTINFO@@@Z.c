/*
 * XREFs of ?vSrcCopyS1D1RtoL@@YAXPEAUBLTINFO@@@Z @ 0x1C02973D0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C013D380 (memmove.c)
 */

void __fastcall vSrcCopyS1D1RtoL(struct BLTINFO *a1)
{
  _BYTE *v1; // rbx
  int v2; // r10d
  unsigned int v3; // r9d
  unsigned int v4; // r8d
  char v5; // si
  BOOL v6; // r14d
  struct BLTINFO *v7; // r13
  int v8; // r11d
  __int64 v9; // r12
  int v10; // edx
  char v11; // bp
  int v12; // r11d
  unsigned __int8 *v13; // rdi
  int v14; // r10d
  _BYTE *v15; // r11
  __int64 v16; // r14
  unsigned __int8 v17; // dl
  int v18; // r8d
  int v19; // r9d
  int v20; // r10d
  __int64 v21; // rcx
  int v22; // ebp
  _BYTE *v23; // r14
  unsigned __int8 *v24; // rdi
  __int64 v25; // rax
  int v26; // ecx
  int v27; // edx
  size_t v28; // r15
  __int64 v29; // r12
  __int64 v30; // rbx
  __int64 v31; // r13
  char v32; // dl
  unsigned __int8 v33; // al
  __int64 v34; // r14
  unsigned __int8 v35; // dl
  char v36; // al
  char v37; // r8
  unsigned __int8 *v38; // r9
  char v39; // al
  unsigned __int8 v40; // r8
  unsigned int v41; // edx
  char v42; // r15
  int v43; // r8d
  int v44; // eax
  __int64 v45; // r9
  unsigned int v46; // eax
  unsigned __int8 *v47; // r9
  unsigned __int8 v48; // dl
  unsigned __int8 v49; // al
  unsigned __int8 v50; // dl
  char v51; // al
  int v52; // [rsp+20h] [rbp-68h]
  char v53; // [rsp+24h] [rbp-64h]
  int v54; // [rsp+28h] [rbp-60h]
  int v55; // [rsp+2Ch] [rbp-5Ch]
  _BYTE *v56; // [rsp+38h] [rbp-50h]
  int v58; // [rsp+98h] [rbp+10h]
  int v59; // [rsp+A0h] [rbp+18h]
  __int64 v60; // [rsp+A0h] [rbp+18h]
  int v61; // [rsp+A8h] [rbp+20h]

  v1 = 0LL;
  v2 = *((_DWORD *)a1 + 14);
  v3 = *((_DWORD *)a1 + 12) & 7;
  v4 = v2 & 7;
  v5 = (*((_BYTE *)a1 + 48) & 7) - (*((_BYTE *)a1 + 56) & 7);
  v6 = 1;
  v7 = a1;
  if ( v3 < v4 )
    v5 += 8;
  v8 = *((_DWORD *)a1 + 7);
  v9 = *((int *)a1 + 11);
  v10 = *((_DWORD *)a1 + 10);
  v53 = 8 - v5;
  v55 = v2 - v8;
  v61 = v2 >> 3;
  v54 = *((_DWORD *)a1 + 11);
  v11 = -1 << (7 - v4);
  v58 = v10;
  v52 = (v2 - v8) >> 3;
  if ( v52 == v2 >> 3 )
  {
    v11 &= 255 >> ((v55 + 1) & 7);
    v10 = *((_DWORD *)a1 + 10);
    if ( v3 < v4 )
      v6 = (int)(v3 - v8) < -1;
  }
  v12 = ((_BYTE)v4 + 1) & 7;
  v59 = v12;
  if ( !(v12 | (v52 == v61)) )
    goto LABEL_12;
  v13 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + ((__int64)*((int *)a1 + 12) >> 3));
  v14 = *((_DWORD *)a1 + 8);
  v15 = (_BYTE *)(*((_QWORD *)a1 + 2) + ((__int64)*((int *)a1 + 14) >> 3));
  if ( v3 > v4 )
  {
    if ( v14 )
    {
      v16 = v10;
      do
      {
        v17 = *v13;
        v13 += v16;
        *v15 = ~v11 & *v15 | v11 & (v17 << v5);
        v15 += v9;
        --v14;
      }
      while ( v14 );
    }
    goto LABEL_11;
  }
  if ( v3 < v4 )
  {
    if ( v6 )
    {
      if ( v14 )
      {
        v31 = v10;
        do
        {
          v32 = *(v13 - 1);
          v33 = *v13;
          v13 += v31;
          *v15 = ~v11 & *v15 | v11 & ((v33 >> v53) | (v32 << v5));
          v15 += v9;
          --v14;
        }
        while ( v14 );
        v7 = a1;
      }
    }
    else if ( v14 )
    {
      v34 = v10;
      do
      {
        v35 = *v13;
        v13 += v34;
        *v15 = ~v11 & *v15 | v11 & (v35 >> (8 - v5));
        v15 += v9;
        --v14;
      }
      while ( v14 );
      v7 = a1;
    }
    goto LABEL_11;
  }
  if ( !v14 )
  {
LABEL_11:
    v12 = v59;
LABEL_12:
    v18 = v58;
    goto LABEL_13;
  }
  v18 = *((_DWORD *)a1 + 10);
  do
  {
    v36 = *v13 & v11;
    v13 += v58;
    *v15 = v36 | ~v11 & *v15;
    v15 += v9;
    --v14;
  }
  while ( v14 );
  v12 = v59;
LABEL_13:
  v19 = v61;
  v20 = v52;
  if ( v52 != v61 )
  {
    v21 = *((_QWORD *)v7 + 2);
    v22 = *((_DWORD *)v7 + 8);
    v23 = (_BYTE *)(v21 + ((__int64)(*((_DWORD *)v7 + 14) - 7) >> 3));
    v1 = (_BYTE *)(v21 + ((__int64)v55 >> 3));
    v24 = (unsigned __int8 *)(*((_QWORD *)v7 + 1) + ((__int64)(*((_DWORD *)v7 + 12) - v12) >> 3));
    LODWORD(v25) = ((*((_DWORD *)v7 + 14) - 7) >> 3) - (v55 >> 3);
    v56 = v1;
    v26 = v25 + v9;
    v27 = v25 + v18;
    if ( v5 )
    {
      if ( v22 )
      {
        v25 = (int)v25;
        v60 = (int)v25;
        do
        {
          v37 = *v24 >> v53;
          v38 = &v24[-v25];
          --v22;
          if ( v24 != &v24[-v25] )
          {
            do
            {
              v39 = v37 | (*--v24 << v5);
              v40 = *v24;
              *v23-- = v39;
              v37 = v40 >> v53;
            }
            while ( v24 != v38 );
            v25 = v60;
          }
          v23 += v26;
          v24 += v27;
        }
        while ( v22 );
        goto LABEL_39;
      }
    }
    else if ( v22 )
    {
      v28 = (int)v25;
      v29 = (int)v25 - 1;
      v30 = v18;
      do
      {
        memmove(&v23[-v29], &v24[-v29], v28);
        v23 += v54;
        v24 += v30;
        --v22;
      }
      while ( v22 );
      v1 = v56;
LABEL_39:
      v20 = v52;
      v19 = v61;
      LODWORD(v9) = v54;
      v7 = a1;
    }
  }
  v41 = ((_BYTE)v55 + 1) & 7;
  v42 = -1 << (8 - v41);
  if ( (((_BYTE)v55 + 1) & 7) != 0 && v20 != v19 )
  {
    v43 = *((_DWORD *)v7 + 8);
    v44 = *((_DWORD *)v7 + 13) + 1;
    v45 = v44;
    v46 = v44 & 7;
    v47 = (unsigned __int8 *)(*((_QWORD *)v7 + 1) + (v45 >> 3));
    if ( v46 <= v41 )
    {
      if ( v46 >= v41 )
      {
        for ( ; v43; --v43 )
        {
          v51 = *v47 & ~v42;
          v47 += v58;
          *v1 = v51 | v42 & *v1;
          v1 += (int)v9;
        }
      }
      else
      {
        for ( ; v43; --v43 )
        {
          v50 = *v47;
          v47 += v58;
          *v1 = v42 & *v1 | ~v42 & (v50 >> v53);
          v1 += (int)v9;
        }
      }
    }
    else
    {
      for ( ; v43; --v43 )
      {
        v48 = v47[1];
        v49 = *v47;
        v47 += v58;
        *v1 = v42 & *v1 | ~v42 & ((v49 << v5) | (v48 >> v53));
        v1 += (int)v9;
      }
    }
  }
}
