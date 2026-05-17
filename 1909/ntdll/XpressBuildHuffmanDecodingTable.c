/*
 * XREFs of XpressBuildHuffmanDecodingTable @ 0x180060420
 * Callers:
 *     RtlDecompressBufferXpressHuff @ 0x18005FF00 (RtlDecompressBufferXpressHuff.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XpressBuildHuffmanDecodingTable(_WORD *a1, __int64 a2)
{
  _WORD *v3; // rdi
  __int16 v4; // r9
  __int64 i; // rcx
  unsigned __int64 v6; // rdi
  unsigned __int64 j; // rax
  unsigned __int8 v9; // cl
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  __int16 v12; // cx
  __int64 v13; // r8
  unsigned __int64 v14; // r10
  unsigned __int16 *v15; // rbx
  __int16 v16; // di
  bool v17; // zf
  __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned __int64 v20; // r8
  bool v21; // zf
  __int16 *v22; // rdx
  int v23; // ebx
  unsigned __int16 *v24; // rsi
  __int64 v25; // rdx
  __int64 k; // r10
  int v27; // ecx
  unsigned __int64 v28; // rdi
  __int64 v30; // rcx
  _WORD *v31; // rax
  __int64 v32; // rcx
  _WORD *v33; // rax
  __int16 *v34; // rdx
  __int64 v35; // rcx
  _WORD *v36; // rax
  __int64 v37; // rcx
  _WORD *v38; // rax
  __int64 v39; // rcx
  _WORD *v40; // rax
  __int64 v41; // rcx
  _WORD *v42; // rax
  __int64 v43; // rax
  _WORD *m; // rdx
  _WORD *v45; // rdi
  __int64 n; // rcx

  v3 = a1 + 512;
  v4 = 0;
  for ( i = 16LL; i; --i )
    *v3++ = 512;
  v6 = 0LL;
  for ( j = 0LL; j < 0x100; v6 = j )
  {
    v9 = *(_BYTE *)(j + a2);
    v10 = v9 & 0xF;
    if ( (v9 & 0xF) != 0 )
    {
      a1[2 * j] = a1[v10 + 512];
      a1[v10 + 512] = 2 * v6;
      v9 = *(_BYTE *)(j + a2);
    }
    v11 = (unsigned __int64)v9 >> 4;
    if ( v11 )
    {
      a1[2 * j + 1] = a1[v11 + 512];
      a1[v11 + 512] = 2 * v6 + 1;
    }
    j = v6 + 1;
  }
  v12 = -1024;
  v13 = 1024LL;
  v14 = 15LL;
  v15 = a1 + 527;
  v16 = -1023;
  while ( 1 )
  {
    v17 = v16 == v12;
    if ( v16 < v12 )
    {
      v34 = &a1[v13 + 1552];
      v13 -= (unsigned __int16)(((unsigned __int16)(v12 - v16 - 1) >> 1) + 1);
      do
      {
        *v34-- = v16;
        v16 += 2;
        v17 = v16 == v12;
      }
      while ( v16 < v12 );
    }
    if ( v17 )
      return 3221226050LL;
    v16 = v12 + 1;
    v18 = *v15;
    if ( v18 != 512 )
    {
      v19 = (__int64)&a1[v13 + 1552];
      do
      {
        v19 -= 2LL;
        --v13;
        *(_WORD *)(v19 + 2) = v14 + 16 * v18;
        v18 = (unsigned __int16)a1[v18];
      }
      while ( v18 != 512 );
    }
    --v14;
    v12 = -(__int16)v13;
    --v15;
    if ( v14 <= 0xA )
    {
      v20 = 1023LL;
      v21 = v16 == v12;
      if ( v16 < v12 )
      {
        v22 = a1 + 1551;
        v20 = 1023LL - (unsigned __int16)(((unsigned __int16)(v12 - v16 - 1) >> 1) + 1);
        do
        {
          *v22-- = v16;
          v16 += 2;
          v21 = v16 == v12;
        }
        while ( v16 < v12 );
      }
      if ( !v21 )
      {
        v23 = 0;
        v24 = a1 + 522;
        v25 = 10LL;
        do
        {
          for ( k = *v24; k != 512; --v20 )
          {
            v4 = v25 + 16 * k;
            if ( v23 )
              return 3221226050LL;
            v27 = 10 - v25;
            if ( (v20 + 1) << (10 - (unsigned __int8)v25) > 0x400 )
              return 3221226050LL;
            v28 = v20 << v27;
            switch ( v27 )
            {
              case 0:
                goto LABEL_27;
              case 1:
                goto LABEL_26;
              case 2:
                goto LABEL_35;
              case 3:
                a1[v28 + 535] = v4;
                a1[v28 + 534] = v4;
                a1[v28 + 533] = v4;
                a1[v28 + 532] = v4;
LABEL_35:
                a1[v28 + 531] = v4;
                a1[v28 + 530] = v4;
LABEL_26:
                a1[v28 + 529] = v4;
LABEL_27:
                a1[v28 + 528] = v4;
                break;
              case 4:
                v30 = 4LL;
                v31 = &a1[v28 + 529];
                do
                {
                  *(v31 - 1) = v4;
                  *v31 = v4;
                  v31[1] = v4;
                  v31[2] = v4;
                  v31 += 4;
                  --v30;
                }
                while ( v30 );
                break;
              case 5:
                v32 = 8LL;
                v33 = &a1[v28 + 529];
                do
                {
                  *(v33 - 1) = v4;
                  *v33 = v4;
                  v33[1] = v4;
                  v33[2] = v4;
                  v33 += 4;
                  --v32;
                }
                while ( v32 );
                break;
              case 6:
                v35 = 16LL;
                v36 = &a1[v28 + 529];
                do
                {
                  *(v36 - 1) = v4;
                  *v36 = v4;
                  v36[1] = v4;
                  v36[2] = v4;
                  v36 += 4;
                  --v35;
                }
                while ( v35 );
                break;
              case 7:
                v39 = 32LL;
                v40 = &a1[v28 + 529];
                do
                {
                  *(v40 - 1) = v4;
                  *v40 = v4;
                  v40[1] = v4;
                  v40[2] = v4;
                  v40 += 4;
                  --v39;
                }
                while ( v39 );
                break;
              case 8:
                v37 = 64LL;
                v38 = &a1[v28 + 529];
                do
                {
                  *(v38 - 1) = v4;
                  *v38 = v4;
                  v38[1] = v4;
                  v38[2] = v4;
                  v38 += 4;
                  --v37;
                }
                while ( v37 );
                break;
              case 9:
                v41 = 128LL;
                v42 = &a1[v28 + 529];
                do
                {
                  *(v42 - 1) = v4;
                  *v42 = v4;
                  v42[1] = v4;
                  v42[2] = v4;
                  v42 += 4;
                  --v41;
                }
                while ( v41 );
                break;
              default:
                __fastfail(0x25u);
            }
            if ( !v20 )
              v23 = 1;
            k = (unsigned __int16)a1[k];
          }
          v20 >>= 1;
          --v24;
          --v25;
        }
        while ( v25 );
        if ( v23 )
          return 0LL;
        v43 = 2LL;
        for ( m = a1 + 514; *m == 512; ++m )
        {
          if ( (unsigned __int64)++v43 > 0xF )
          {
            if ( a1[513] == 512 )
              return 3221226050LL;
            v45 = a1 + 528;
            for ( n = 512LL; n; --n )
              *v45++ = v4;
            return 0LL;
          }
        }
      }
      return 3221226050LL;
    }
  }
}
