/*
 * XREFs of ?vSrcCopyS1D1RtoL@@YAXPEAUBLTINFO@@@Z @ 0x1C02AB0B0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0163300 (memmove.c)
 */

void __fastcall vSrcCopyS1D1RtoL(struct BLTINFO *a1)
{
  __int64 v1; // r9
  struct BLTINFO *v2; // r13
  __int64 v3; // r10
  _BYTE *v4; // rbx
  unsigned int v5; // edi
  unsigned int v6; // esi
  __int64 v7; // r15
  __int64 v8; // r12
  char v9; // cl
  BOOL v10; // ebp
  char v11; // dl
  int v12; // r8d
  char v13; // al
  char v14; // r11
  int v15; // edx
  __int64 v16; // r8
  unsigned __int8 *v17; // r10
  int v18; // r9d
  _BYTE *v19; // r8
  unsigned __int8 v20; // dl
  char v21; // dl
  unsigned __int8 v22; // al
  unsigned __int8 v23; // dl
  char v24; // cl
  int v25; // eax
  int v26; // r9d
  char v27; // r10
  __int64 v28; // rcx
  int v29; // ebp
  _BYTE *v30; // rsi
  unsigned __int8 *v31; // rdi
  __int64 v32; // rax
  int v33; // ecx
  int v34; // edx
  size_t v35; // rcx
  __int64 v36; // r13
  __int64 v37; // r14
  __int64 v38; // rax
  size_t v39; // r15
  __int64 v40; // r12
  char v41; // r8
  unsigned __int8 *v42; // r9
  char v43; // al
  unsigned __int8 v44; // r8
  unsigned int v45; // edx
  char v46; // r14
  __int64 v47; // rax
  int v48; // r9d
  unsigned __int8 *v49; // r8
  unsigned int v50; // eax
  unsigned __int8 v51; // dl
  unsigned __int8 v52; // al
  unsigned __int8 v53; // dl
  char v54; // al
  char v55; // [rsp+20h] [rbp-78h]
  int v56; // [rsp+28h] [rbp-70h]
  int v57; // [rsp+30h] [rbp-68h]
  int v58; // [rsp+34h] [rbp-64h]
  __int64 v59; // [rsp+48h] [rbp-50h]
  char v61; // [rsp+A8h] [rbp+10h]
  int v62; // [rsp+B0h] [rbp+18h]
  int v63; // [rsp+B8h] [rbp+20h]

  v1 = *((int *)a1 + 14);
  v2 = a1;
  v3 = *((int *)a1 + 12);
  v4 = 0LL;
  v5 = *((_DWORD *)a1 + 14) & 7;
  v6 = *((_DWORD *)a1 + 12) & 7;
  v7 = *((int *)a1 + 11);
  v8 = *((int *)a1 + 10);
  v57 = *((_DWORD *)a1 + 11);
  v9 = (*((_BYTE *)a1 + 48) & 7) - (*((_BYTE *)a1 + 56) & 7);
  v10 = 1;
  v11 = v9 + 8;
  v12 = *((_DWORD *)v2 + 7);
  if ( v6 >= v5 )
    v11 = v9;
  v13 = 8 - v11;
  v61 = v11;
  v55 = 8 - v11;
  v14 = -1 << (7 - v5);
  v58 = v1 - v12;
  v62 = (int)v1 >> 3;
  v63 = ((int)v1 - v12) >> 3;
  if ( v63 == (int)v1 >> 3 )
  {
    v14 &= 255 >> ((v58 + 1) & 7);
    if ( v6 < v5 )
      v10 = (int)(v6 - v12) < -1;
  }
  v15 = ((_BYTE)v5 + 1) & 7;
  v56 = v15;
  if ( v15 | (v63 == v62) )
  {
    v16 = v1;
    v17 = (unsigned __int8 *)(*((_QWORD *)v2 + 1) + (v3 >> 3));
    v18 = *((_DWORD *)v2 + 8);
    v19 = (_BYTE *)(*((_QWORD *)v2 + 2) + (v16 >> 3));
    if ( v6 <= v5 )
    {
      if ( v6 >= v5 )
      {
        if ( !v18 )
          goto LABEL_22;
        do
        {
          v24 = *v17 & v14 | ~v14 & *v19;
          v17 += v8;
          *v19 = v24;
          v19 += v7;
          --v18;
        }
        while ( v18 );
      }
      else
      {
        if ( v10 )
        {
          if ( !v18 )
            goto LABEL_22;
          do
          {
            v21 = *(v17 - 1);
            v22 = *v17;
            v17 += v8;
            *v19 = ~v14 & *v19 | v14 & ((v22 >> v55) | (v21 << v61));
            v19 += v7;
            --v18;
          }
          while ( v18 );
        }
        else
        {
          if ( !v18 )
            goto LABEL_22;
          do
          {
            v23 = *v17;
            v17 += v8;
            *v19 = ~v14 & *v19 | v14 & (v23 >> v13);
            v19 += v7;
            --v18;
          }
          while ( v18 );
        }
        v2 = a1;
      }
    }
    else
    {
      if ( !v18 )
        goto LABEL_22;
      do
      {
        v20 = *v17;
        v17 += v8;
        *v19 = ~v14 & *v19 | v14 & (v20 << v61);
        v19 += v7;
        --v18;
      }
      while ( v18 );
    }
    v15 = v56;
  }
LABEL_22:
  v25 = v62;
  v26 = v63;
  v27 = v61;
  if ( v63 != v62 )
  {
    v28 = *((_QWORD *)v2 + 2);
    v29 = *((_DWORD *)v2 + 8);
    v30 = (_BYTE *)(v28 + ((__int64)(*((_DWORD *)v2 + 14) - 7) >> 3));
    v4 = (_BYTE *)(v28 + ((__int64)v58 >> 3));
    v31 = (unsigned __int8 *)(*((_QWORD *)v2 + 1) + ((__int64)(*((_DWORD *)v2 + 12) - v15) >> 3));
    LODWORD(v32) = ((*((_DWORD *)v2 + 14) - 7) >> 3) - (v58 >> 3);
    v33 = v32 + v7;
    v34 = v32 + v8;
    if ( v61 )
    {
      if ( v29 )
      {
        v32 = (int)v32;
        v59 = (int)v32;
        do
        {
          v41 = *v31 >> v55;
          v42 = &v31[-v32];
          --v29;
          if ( v31 != &v31[-v32] )
          {
            do
            {
              v43 = v41 | (*--v31 << v61);
              v44 = *v31;
              *v30-- = v43;
              v41 = v44 >> v55;
            }
            while ( v31 != v42 );
            v32 = v59;
          }
          v30 += v33;
          v31 += v34;
        }
        while ( v29 );
        goto LABEL_34;
      }
    }
    else if ( v29 )
    {
      v35 = (int)v32;
      v36 = v8;
      v37 = (int)v32 - 1;
      v38 = (int)v7;
      v39 = v35;
      v40 = v38;
      do
      {
        memmove(&v30[-v37], &v31[-v37], v39);
        v30 += v40;
        v31 += v36;
        --v29;
      }
      while ( v29 );
      LODWORD(v8) = v36;
      v2 = a1;
LABEL_34:
      v26 = v63;
      v27 = v61;
      LODWORD(v7) = v57;
    }
    v25 = v62;
  }
  v45 = ((_BYTE)v58 + 1) & 7;
  v46 = -1 << (8 - v45);
  if ( (((_BYTE)v58 + 1) & 7) != 0 && v26 != v25 )
  {
    v47 = *((int *)v2 + 13);
    v48 = *((_DWORD *)v2 + 8);
    v49 = (unsigned __int8 *)(*((_QWORD *)v2 + 1) + ((v47 + 1) >> 3));
    v50 = ((_BYTE)v47 + 1) & 7;
    if ( v50 <= v45 )
    {
      if ( v50 >= v45 )
      {
        for ( ; v48; --v48 )
        {
          v54 = *v49 & ~v46;
          v49 += (int)v8;
          *v4 = v54 | v46 & *v4;
          v4 += (int)v7;
        }
      }
      else
      {
        for ( ; v48; --v48 )
        {
          v53 = *v49;
          v49 += (int)v8;
          *v4 = v46 & *v4 | ~v46 & (v53 >> v55);
          v4 += (int)v7;
        }
      }
    }
    else
    {
      for ( ; v48; --v48 )
      {
        v51 = v49[1];
        v52 = *v49;
        v49 += (int)v8;
        *v4 = v46 & *v4 | ~v46 & ((v52 << v27) | (v51 >> v55));
        v4 += (int)v7;
      }
    }
  }
}
