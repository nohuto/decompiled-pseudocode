/*
 * XREFs of ?vSrcCopyS1D1LtoR@@YAXPEAUBLTINFO@@@Z @ 0x1C00F1160
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0163300 (memmove.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

void __fastcall vSrcCopyS1D1LtoR(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r10
  int v2; // r8d
  _BYTE *v3; // rdi
  unsigned int v4; // ebx
  __int64 v5; // r13
  BOOL v6; // r14d
  __int64 v7; // r15
  int v8; // r12d
  int v9; // edx
  char v10; // cl
  char v11; // bp
  char v12; // al
  __int64 v13; // rcx
  int v14; // ebp
  _BYTE *v15; // r14
  char *v16; // rbx
  __int64 v17; // rdx
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // r12
  size_t v21; // r13
  int v22; // r9d
  int v23; // r11d
  int v24; // esi
  __int64 v25; // rax
  unsigned __int8 *v26; // r9
  unsigned int v27; // ecx
  int v28; // r8d
  unsigned int v29; // edx
  int v30; // r12d
  char v31; // al
  _BYTE *v32; // r9
  int v33; // r8d
  unsigned __int8 *v34; // r10
  unsigned __int8 v35; // cl
  __int64 v36; // rax
  __int64 v37; // r11
  char *v38; // r9
  char v39; // r8
  char v40; // al
  char v41; // r8
  unsigned __int8 v42; // dl
  char v43; // dl
  unsigned __int8 v44; // al
  unsigned __int8 v45; // dl
  __int64 v46; // rax
  __int64 v47; // r11
  char *v48; // r9
  char v49; // r8
  char v50; // al
  __int64 v51; // rax
  __int64 v52; // rbx
  size_t v53; // r8
  int i; // ecx
  char v55; // al
  unsigned __int8 v56; // dl
  unsigned __int8 v57; // al
  unsigned __int8 v58; // dl
  unsigned __int8 v59; // dl
  unsigned __int8 v60; // cl
  unsigned __int8 v61; // dl
  unsigned __int8 v62; // al
  unsigned __int8 v63; // dl
  char v64; // r11
  int v65; // r12d
  char v66; // si
  unsigned __int8 v67; // dl
  char v68; // dl
  unsigned __int8 v69; // al
  unsigned __int8 v70; // cl
  int v71; // [rsp+20h] [rbp-88h]
  unsigned int v72; // [rsp+24h] [rbp-84h]
  char v73; // [rsp+2Ch] [rbp-7Ch]
  int v74; // [rsp+30h] [rbp-78h]
  int v75; // [rsp+34h] [rbp-74h]
  int v76; // [rsp+38h] [rbp-70h]
  __int64 v77; // [rsp+38h] [rbp-70h]
  __int64 v78; // [rsp+38h] [rbp-70h]
  int v79; // [rsp+40h] [rbp-68h]
  int v80; // [rsp+44h] [rbp-64h]
  unsigned int v81; // [rsp+48h] [rbp-60h]
  __int64 v82; // [rsp+50h] [rbp-58h]
  __int64 v84; // [rsp+B8h] [rbp+10h]
  __int64 v85; // [rsp+B8h] [rbp+10h]
  int v86; // [rsp+C0h] [rbp+18h]
  char v87; // [rsp+C8h] [rbp+20h]

  v1 = a1;
  v2 = *((_DWORD *)a1 + 12);
  v3 = 0LL;
  v4 = v2 & 7;
  v5 = *((int *)a1 + 10);
  v6 = 1;
  v7 = *((int *)a1 + 11);
  v72 = v4;
  v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 4LL) | (2 * **(_DWORD **)(*(_QWORD *)a1 + 16LL));
  v9 = *((_DWORD *)a1 + 14);
  v74 = v8;
  v81 = v9 & 7;
  v10 = (*((_BYTE *)a1 + 48) & 7) - (*((_BYTE *)a1 + 56) & 7);
  v75 = v5;
  v11 = v10 + 8;
  if ( v4 >= v81 )
    v11 = v10;
  v73 = 8 - v11;
  v79 = *((_DWORD *)v1 + 7);
  v12 = v9 + v79;
  v87 = v11;
  v71 = v9 + v79;
  v86 = v9 >> 3;
  v80 = (v9 + v79) >> 3;
  if ( v80 != v9 >> 3 )
  {
    v13 = *((_QWORD *)v1 + 2);
    v14 = *((_DWORD *)v1 + 8);
    v3 = (_BYTE *)(v13 + ((__int64)v71 >> 3));
    v15 = (_BYTE *)(v13 + ((__int64)(v9 + 7) >> 3));
    v16 = (char *)(*((_QWORD *)v1 + 1) + ((__int64)(v2 + (-(v9 & 7) & 7)) >> 3));
    LODWORD(v17) = (v71 >> 3) - ((v9 + 7) >> 3);
    v18 = v7 - v17;
    v76 = v17;
    v19 = v5 - v17;
    if ( v87 && v8 && v8 != 3 )
    {
      if ( v8 != 1 )
      {
        if ( v8 == 2 && v14 )
        {
          v17 = (int)v17;
          v46 = v19;
          v78 = (int)v17;
          v85 = v19;
          v47 = v18;
          do
          {
            v48 = &v16[v17];
            --v14;
            v49 = *v16 << v87;
            if ( v16 != &v16[v17] )
            {
              do
              {
                v50 = ~(v49 | ((unsigned __int8)*++v16 >> v73));
                v49 = *v16 << v87;
                *v15++ = v50;
              }
              while ( v16 != v48 );
              v46 = v85;
              v17 = v78;
            }
            v15 += v47;
            v16 += v46;
          }
          while ( v14 );
        }
        goto LABEL_12;
      }
      if ( v14 )
      {
        v17 = (int)v17;
        v36 = v19;
        v77 = (int)v17;
        v84 = v19;
        v37 = v18;
        do
        {
          v38 = &v16[v17];
          --v14;
          v39 = *v16 << v87;
          if ( v16 != &v16[v17] )
          {
            do
            {
              v40 = v39 | ((unsigned __int8)*++v16 >> v73);
              v41 = *v16;
              *v15++ = v40;
              v39 = v41 << v87;
            }
            while ( v16 != v38 );
            v36 = v84;
            v17 = v77;
          }
          v15 += v37;
          v16 += v36;
        }
        while ( v14 );
        goto LABEL_11;
      }
      goto LABEL_12;
    }
    if ( v8 )
    {
      if ( v8 == 1 )
      {
        if ( v14 )
        {
          v20 = v5;
          v21 = (int)v17;
          do
          {
            memmove(v15, v16, v21);
            v15 += v7;
            v16 += v20;
            --v14;
          }
          while ( v14 );
          v8 = v74;
LABEL_11:
          LODWORD(v5) = v75;
        }
LABEL_12:
        v12 = v71;
        v1 = a1;
        v6 = 1;
        v11 = v87;
        v4 = v72;
        goto LABEL_13;
      }
      if ( v8 == 2 )
      {
        for ( ; v14; v16 += v19 )
        {
          --v14;
          for ( i = v17; i; --i )
          {
            v55 = *v16++;
            *v15++ = ~v55;
          }
          v15 += v18;
        }
        goto LABEL_12;
      }
      if ( v8 != 3 )
        goto LABEL_12;
    }
    if ( !v14 )
      goto LABEL_12;
    v51 = v18;
    v82 = v18;
    do
    {
      --v14;
      if ( (_DWORD)v17 )
      {
        v52 = (unsigned int)v17;
        v53 = (unsigned int)v17;
        LOBYTE(v17) = -(v8 != 0);
        memset(v15, v17, v53);
        LODWORD(v17) = v76;
        v15 += v52;
        v51 = v82;
      }
      v15 += v51;
    }
    while ( v14 );
    goto LABEL_11;
  }
LABEL_13:
  v22 = v86;
  v23 = 255 >> v81;
  if ( v80 == v86 )
  {
    LOBYTE(v23) = (-1 << (8 - (v12 & 7))) & v23;
    v6 = (int)(v4 + v79) > 8;
  }
  if ( v81 | (v80 == v86) )
  {
    v32 = (_BYTE *)(*((_QWORD *)v1 + 2) + ((__int64)*((int *)v1 + 14) >> 3));
    v33 = *((_DWORD *)a1 + 8);
    v34 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + ((__int64)*((int *)v1 + 12) >> 3));
    switch ( v8 )
    {
      case 0:
        if ( v33 )
        {
          v64 = ~(_BYTE)v23;
          do
          {
            *v32 &= v64;
            v32 += v7;
            --v33;
          }
          while ( v33 );
        }
        goto LABEL_32;
      case 1:
        if ( v4 >= v81 )
        {
          if ( v4 <= v81 )
          {
            for ( ; v33; --v33 )
            {
              v35 = *v34;
              v34 += (int)v5;
              *v32 = ~(_BYTE)v23 & *v32 | v23 & v35;
              v32 += v7;
            }
            goto LABEL_32;
          }
          if ( !v6 )
          {
            for ( ; v33; --v33 )
            {
              v63 = *v34;
              v34 += (int)v5;
              *v32 = ~(_BYTE)v23 & *v32 | v23 & (v63 << v11);
              v32 += v7;
            }
            goto LABEL_32;
          }
          if ( v33 )
          {
            do
            {
              v61 = v34[1];
              v62 = *v34;
              v34 += (int)v5;
              *v32 = ~(_BYTE)v23 & *v32 | v23 & ((v62 << v11) | (v61 >> v73));
              v32 += v7;
              --v33;
            }
            while ( v33 );
LABEL_82:
            v8 = v74;
            LODWORD(v5) = v75;
            goto LABEL_32;
          }
          goto LABEL_32;
        }
        if ( !v33 )
          goto LABEL_32;
        do
        {
          v45 = *v34;
          v34 += (int)v5;
          *v32 = ~(_BYTE)v23 & *v32 | v23 & (v45 >> v73);
          v32 += v7;
          --v33;
        }
        while ( v33 );
        break;
      case 2:
        if ( v4 > v81 )
        {
          if ( !v6 )
          {
            for ( ; v33; --v33 )
            {
              v58 = *v34;
              v34 += (int)v5;
              *v32 = ~(_BYTE)v23 & *v32 | v23 & ~(v58 << v11);
              v32 += v7;
            }
            goto LABEL_32;
          }
          if ( v33 )
          {
            do
            {
              v56 = v34[1];
              v57 = *v34;
              v34 += (int)v5;
              *v32 = ~(_BYTE)v23 & *v32 | v23 & ~((v57 << v11) | (v56 >> v73));
              v32 += v7;
              --v33;
            }
            while ( v33 );
            goto LABEL_82;
          }
LABEL_32:
          v22 = v86;
          goto LABEL_16;
        }
        if ( v4 >= v81 )
        {
          for ( ; v33; --v33 )
          {
            v60 = *v34;
            v34 += (int)v5;
            *v32 = ~(_BYTE)v23 & *v32 | v23 & ~v60;
            v32 += v7;
          }
          goto LABEL_32;
        }
        if ( !v33 )
          goto LABEL_32;
        do
        {
          v59 = *v34;
          v34 += (int)v5;
          *v32 = ~(_BYTE)v23 & *v32 | v23 & ~(v59 >> v73);
          v32 += v7;
          --v33;
        }
        while ( v33 );
        break;
      default:
        if ( v8 == 3 && v33 )
        {
          do
          {
            *v32 |= v23;
            v32 += v7;
            --v33;
          }
          while ( v33 );
        }
        goto LABEL_32;
    }
    v8 = v74;
    goto LABEL_32;
  }
LABEL_16:
  v24 = 255 >> ((*((_BYTE *)a1 + 56) + v79) & 7);
  if ( (v71 & 7) != 0 && v80 != v22 )
  {
    v25 = *((int *)a1 + 13);
    v26 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + ((v25 - 1) >> 3));
    v27 = ((_BYTE)v25 - 1) & 7;
    v28 = *((_DWORD *)a1 + 8);
    v29 = ((_BYTE)v71 - 1) & 7;
    if ( v8 )
    {
      v30 = v8 - 1;
      if ( v30 )
      {
        v65 = v30 - 1;
        if ( v65 )
        {
          if ( v65 == 1 && v28 )
          {
            v66 = ~(_BYTE)v24;
            do
            {
              *v3 |= v66;
              v3 += v7;
              --v28;
            }
            while ( v28 );
          }
        }
        else if ( v27 <= v29 )
        {
          if ( v27 >= v29 )
          {
            for ( ; v28; --v28 )
            {
              v70 = *v26;
              v26 += (int)v5;
              *v3 = v24 & *v3 | ~(v24 | v70);
              v3 += v7;
            }
          }
          else
          {
            for ( ; v28; --v28 )
            {
              v68 = *(v26 - 1);
              v69 = *v26;
              v26 += (int)v5;
              *v3 = v24 & *v3 | ~(v24 | (v69 >> v73) | (v68 << v87));
              v3 += v7;
            }
          }
        }
        else
        {
          for ( ; v28; --v28 )
          {
            v67 = *v26;
            v26 += (int)v5;
            *v3 = v24 & *v3 | ~(v24 | (v67 << v87));
            v3 += v7;
          }
        }
      }
      else if ( v27 > v29 )
      {
        for ( ; v28; --v28 )
        {
          v42 = *v26;
          v26 += (int)v5;
          *v3 = v24 & *v3 | ~(_BYTE)v24 & (v42 << v87);
          v3 += v7;
        }
      }
      else if ( v27 < v29 )
      {
        for ( ; v28; --v28 )
        {
          v43 = *(v26 - 1);
          v44 = *v26;
          v26 += (int)v5;
          *v3 = v24 & *v3 | ~(_BYTE)v24 & ((v44 >> v73) | (v43 << v87));
          v3 += v7;
        }
      }
      else
      {
        for ( ; v28; --v28 )
        {
          v31 = ~(_BYTE)v24 & *v26;
          v26 += (int)v5;
          *v3 = v31 | v24 & *v3;
          v3 += v7;
        }
      }
    }
    else
    {
      for ( ; v28; --v28 )
      {
        *v3 &= v24;
        v3 += v7;
      }
    }
  }
}
