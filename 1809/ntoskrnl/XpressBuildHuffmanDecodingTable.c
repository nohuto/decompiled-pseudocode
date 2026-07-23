/*
 * XREFs of XpressBuildHuffmanDecodingTable @ 0x1400F7E60
 * Callers:
 *     RtlDecompressBufferXpressHuff @ 0x1400F7940 (RtlDecompressBufferXpressHuff.c)
 *     RtlDecompressBufferXpressHuffProgress @ 0x1402FA240 (RtlDecompressBufferXpressHuffProgress.c)
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
  unsigned __int64 v19; // r8
  bool v20; // zf
  __int16 *v21; // rdx
  int v22; // ebx
  unsigned __int16 *v23; // rsi
  __int64 v24; // rdx
  __int64 k; // r10
  int v26; // ecx
  unsigned __int64 v27; // rdi
  __int64 v29; // rcx
  _WORD *v30; // rax
  __int64 v31; // rcx
  _WORD *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  _WORD *v35; // rax
  __int16 *v36; // rdx
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
      v36 = &a1[v13 + 1552];
      v13 -= (unsigned __int16)(((unsigned __int16)(v12 - v16 - 1) >> 1) + 1);
      do
      {
        *v36-- = v16;
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
      v33 = (__int64)&a1[v13 + 1552];
      do
      {
        v33 -= 2LL;
        --v13;
        *(_WORD *)(v33 + 2) = v14 + 16 * v18;
        v18 = (unsigned __int16)a1[v18];
      }
      while ( v18 != 512 );
    }
    --v14;
    v12 = -(__int16)v13;
    --v15;
    if ( v14 <= 0xA )
    {
      v19 = 1023LL;
      v20 = v16 == v12;
      if ( v16 < v12 )
      {
        v21 = a1 + 1551;
        v19 = 1023LL - (unsigned __int16)(((unsigned __int16)(v12 - v16 - 1) >> 1) + 1);
        do
        {
          *v21-- = v16;
          v16 += 2;
          v20 = v16 == v12;
        }
        while ( v16 < v12 );
      }
      if ( !v20 )
      {
        v22 = 0;
        v23 = a1 + 522;
        v24 = 10LL;
        do
        {
          for ( k = *v23; k != 512; --v19 )
          {
            v4 = v24 + 16 * k;
            if ( v22 )
              return 3221226050LL;
            v26 = 10 - v24;
            if ( (v19 + 1) << (10 - (unsigned __int8)v24) > 0x400 )
              return 3221226050LL;
            v27 = v19 << v26;
            switch ( v26 )
            {
              case 0:
                goto LABEL_25;
              case 1:
                goto LABEL_24;
              case 2:
                goto LABEL_33;
              case 3:
                a1[v27 + 535] = v4;
                a1[v27 + 534] = v4;
                a1[v27 + 533] = v4;
                a1[v27 + 532] = v4;
LABEL_33:
                a1[v27 + 531] = v4;
                a1[v27 + 530] = v4;
LABEL_24:
                a1[v27 + 529] = v4;
LABEL_25:
                a1[v27 + 528] = v4;
                break;
              case 4:
                v29 = 4LL;
                v30 = &a1[v27 + 529];
                do
                {
                  *(v30 - 1) = v4;
                  *v30 = v4;
                  v30[1] = v4;
                  v30[2] = v4;
                  v30 += 4;
                  --v29;
                }
                while ( v29 );
                break;
              case 5:
                v31 = 8LL;
                v32 = &a1[v27 + 529];
                do
                {
                  *(v32 - 1) = v4;
                  *v32 = v4;
                  v32[1] = v4;
                  v32[2] = v4;
                  v32 += 4;
                  --v31;
                }
                while ( v31 );
                break;
              case 6:
                v34 = 16LL;
                v35 = &a1[v27 + 529];
                do
                {
                  *(v35 - 1) = v4;
                  *v35 = v4;
                  v35[1] = v4;
                  v35[2] = v4;
                  v35 += 4;
                  --v34;
                }
                while ( v34 );
                break;
              case 7:
                v37 = 32LL;
                v38 = &a1[v27 + 529];
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
              case 8:
                v39 = 64LL;
                v40 = &a1[v27 + 529];
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
              case 9:
                v41 = 128LL;
                v42 = &a1[v27 + 529];
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
            if ( !v19 )
              v22 = 1;
            k = (unsigned __int16)a1[k];
          }
          v19 >>= 1;
          --v23;
          --v24;
        }
        while ( v24 );
        if ( v22 )
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
