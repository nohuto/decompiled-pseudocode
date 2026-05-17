/*
 * XREFs of XpressBuildHuffmanDecodingTable @ 0x180059534
 * Callers:
 *     RtlDecompressBufferXpressHuff @ 0x180059020 (RtlDecompressBufferXpressHuff.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XpressBuildHuffmanDecodingTable(_WORD *a1, __int64 a2)
{
  _WORD *v2; // rdi
  __int16 v5; // r8
  unsigned __int64 v6; // rdx
  __int64 i; // rcx
  unsigned __int64 v8; // rcx
  unsigned __int8 v9; // al
  __int64 v10; // rdi
  unsigned __int64 v11; // rdi
  __int16 v12; // dx
  unsigned __int16 *v13; // rbx
  unsigned __int64 v14; // r11
  __int64 v15; // rdi
  __int16 v16; // cx
  bool v17; // zf
  __int64 v18; // rdx
  _WORD *v19; // r10
  unsigned __int64 v20; // r10
  bool v21; // zf
  __int16 *v22; // rdi
  int v23; // edx
  unsigned __int16 *v24; // rbx
  __int64 v25; // rdi
  __int64 v26; // r11
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned __int64 v29; // rax
  unsigned int v30; // ecx
  _WORD *v32; // rcx
  __int64 v33; // rax
  __int16 *v34; // r10
  _WORD *v35; // rcx
  __int64 v36; // rax
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  _WORD *v39; // rcx
  __int64 v40; // rax
  _WORD *v41; // rcx
  __int64 v42; // rax
  _WORD *v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  _WORD *j; // rax
  _WORD *v48; // rdi
  __int64 k; // rcx

  v2 = a1 + 512;
  v5 = 0;
  v6 = 0LL;
  for ( i = 16LL; i; --i )
    *v2++ = 512;
  v8 = 0LL;
  do
  {
    v9 = *(_BYTE *)(v6 + a2);
    v10 = v9 & 0xF;
    if ( (v9 & 0xF) != 0 )
    {
      a1[2 * v6] = a1[v10 + 512];
      a1[v10 + 512] = 2 * v8;
      v9 = *(_BYTE *)(v6 + a2);
    }
    v11 = (unsigned __int64)v9 >> 4;
    if ( v11 )
    {
      a1[2 * v6 + 1] = a1[v11 + 512];
      a1[v11 + 512] = 2 * v8 + 1;
    }
    v6 = v8 + 1;
    v8 = v6;
  }
  while ( v6 < 0x100 );
  v12 = -1024;
  v13 = a1 + 527;
  v14 = 15LL;
  v15 = 1024LL;
  v16 = -1023;
  do
  {
    v17 = v16 == v12;
    if ( v16 < v12 )
    {
      v34 = &a1[v15 + 1552];
      v15 -= (unsigned __int16)(((unsigned __int16)(v12 - v16 - 1) >> 1) + 1);
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
    v18 = *v13;
    if ( v18 != 512 )
    {
      v19 = &a1[v15 + 1552];
      do
      {
        --v15;
        *v19-- = v14 + 16 * v18;
        v18 = (unsigned __int16)a1[v18];
      }
      while ( v18 != 512 );
    }
    --v14;
    v12 = -(__int16)v15;
    --v13;
  }
  while ( v14 > 0xA );
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
    while ( 1 )
    {
      v26 = *v24;
      while ( v26 != 512 )
      {
        v5 = v25 + 16 * v26;
        if ( v23 )
          return 3221226050LL;
        v28 = 10 - v25;
        if ( (v20 + 1) << (10 - (unsigned __int8)v25) > 0x400 )
          return 3221226050LL;
        v29 = v20 << v28;
        if ( v28 == 5 )
        {
          v35 = &a1[v29 + 529];
          v36 = 8LL;
          do
          {
            *(v35 - 1) = v5;
            *v35 = v5;
            v35[1] = v5;
            v35[2] = v5;
            v35 += 4;
            --v36;
          }
          while ( v36 );
          goto LABEL_27;
        }
        if ( v28 > 5 )
        {
          v37 = v28 - 6;
          if ( v37 )
          {
            v38 = v37 - 1;
            if ( v38 )
            {
              v17 = v38 == 1;
              v39 = &a1[v29 + 529];
              if ( v17 )
              {
                v40 = 64LL;
                do
                {
                  *(v39 - 1) = v5;
                  *v39 = v5;
                  v39[1] = v5;
                  v39[2] = v5;
                  v39 += 4;
                  --v40;
                }
                while ( v40 );
              }
              else
              {
                v45 = 128LL;
                do
                {
                  *(v39 - 1) = v5;
                  *v39 = v5;
                  v39[1] = v5;
                  v39[2] = v5;
                  v39 += 4;
                  --v45;
                }
                while ( v45 );
              }
            }
            else
            {
              v43 = &a1[v29 + 529];
              v44 = 32LL;
              do
              {
                *(v43 - 1) = v5;
                *v43 = v5;
                v43[1] = v5;
                v43[2] = v5;
                v43 += 4;
                --v44;
              }
              while ( v44 );
            }
          }
          else
          {
            v41 = &a1[v29 + 529];
            v42 = 16LL;
            do
            {
              *(v41 - 1) = v5;
              *v41 = v5;
              v41[1] = v5;
              v41[2] = v5;
              v41 += 4;
              --v42;
            }
            while ( v42 );
          }
          goto LABEL_27;
        }
        if ( v28 )
        {
          v30 = v28 - 1;
          if ( v30 )
          {
            v27 = v30 - 1;
            if ( v27 )
            {
              if ( v27 != 1 )
              {
                v32 = &a1[v29 + 529];
                v33 = 4LL;
                do
                {
                  *(v32 - 1) = v5;
                  *v32 = v5;
                  v32[1] = v5;
                  v32[2] = v5;
                  v32 += 4;
                  --v33;
                }
                while ( v33 );
                goto LABEL_27;
              }
              a1[v29 + 535] = v5;
              a1[v29 + 534] = v5;
              a1[v29 + 533] = v5;
              a1[v29 + 532] = v5;
            }
            a1[v29 + 531] = v5;
            a1[v29 + 530] = v5;
          }
          a1[v29 + 529] = v5;
        }
        a1[v29 + 528] = v5;
LABEL_27:
        v26 = (unsigned __int16)a1[v26];
        if ( !v20 )
          v23 = 1;
        --v20;
      }
      v20 >>= 1;
      --v24;
      if ( !--v25 )
      {
        if ( v23 )
          return 0LL;
        v46 = 2LL;
        for ( j = a1 + 514; *j == 512; ++j )
        {
          if ( (unsigned __int64)++v46 > 0xF )
          {
            if ( a1[513] == 512 )
              return 3221226050LL;
            v48 = a1 + 528;
            for ( k = 512LL; k; --k )
              *v48++ = v5;
            return 0LL;
          }
        }
        return 3221226050LL;
      }
    }
  }
  return 3221226050LL;
}
