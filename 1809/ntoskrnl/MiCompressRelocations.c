/*
 * XREFs of MiCompressRelocations @ 0x140652190
 * Callers:
 *     MiRelocateImage @ 0x140651084 (MiRelocateImage.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

char *__fastcall MiCompressRelocations(__int64 a1, int a2)
{
  __int64 v2; // r14
  char v3; // r12
  char v5; // bl
  __int64 v7; // rdi
  __int64 v8; // r15
  __int64 v9; // rcx
  _WORD *v10; // r10
  __int16 v11; // r11
  unsigned int v12; // r8d
  unsigned __int16 v13; // r9
  unsigned int v14; // esi
  __int16 v15; // dx
  unsigned __int16 v16; // ax
  __int16 v17; // ax
  __int64 v18; // rax
  unsigned int v19; // ecx
  unsigned int v20; // eax
  char *PoolWithTag; // rax
  char *v22; // r12
  _QWORD *v23; // r8
  _QWORD *v24; // rsi
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rdx
  __int64 v27; // rdi
  __int64 v28; // r13
  __int64 v29; // r14
  __int64 v30; // r15
  unsigned __int64 v31; // rbp
  unsigned __int64 v32; // rax
  bool v34; // cf
  bool v35; // zf
  __int64 v36; // rcx
  _WORD *v37; // r8
  __int16 v38; // ax
  __int16 v39; // bx
  unsigned int v40; // r11d
  unsigned int v41; // r9d
  __int16 v42; // cx
  unsigned __int16 v43; // dx
  __int64 v45; // [rsp+80h] [rbp+18h]
  char *v46; // [rsp+88h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 32);
  v3 = 0;
  v5 = 0;
  v7 = 0LL;
  v8 = 0LL;
  do
  {
    v9 = *(unsigned int *)(v2 + 4);
    v10 = (_WORD *)(v2 + 8);
    v8 += v9;
    a2 -= v9;
    v2 += v9;
    v11 = 4;
    v12 = (unsigned int)(v9 - 8) >> 1;
    v13 = 0;
    v14 = 0;
    if ( v12 )
    {
      do
      {
        v15 = *v10 >> 12;
        if ( v15 )
        {
          if ( v5 != (_BYTE)v15 )
          {
            if ( v3 )
              return (char *)a1;
            v5 = v15;
            v3 = 1;
          }
          v16 = *v10 & 0xFFF;
          if ( v16 <= v13 && v13 )
            return (char *)a1;
          v17 = v16 - v13;
          if ( v17 == v11 )
          {
            v18 = v7 + 2;
            v19 = v14 + 1;
            if ( v14 != 254 )
              v18 = v7;
            v7 = v18;
            v20 = v14;
            v14 = 0;
            if ( v20 != 254 )
              v14 = v19;
          }
          else
          {
            if ( v14 )
            {
              v34 = v14 < 4;
              v35 = v14 == 4;
              v14 = 0;
              v7 += (!v34 && !v35) + 1LL;
            }
            v11 = v17;
            if ( (unsigned __int16)v17 >= 0xEBu )
              v7 += 2LL;
            else
              ++v7;
          }
          --v12;
          v13 = *v10 & 0xFFF;
        }
        else
        {
          --v12;
        }
        ++v10;
      }
      while ( v12 );
      if ( v14 )
      {
        if ( v14 > 4 )
          v7 += 2LL;
        else
          ++v7;
      }
    }
    v7 += (((_BYTE)v7 + 2) & 1) + 2LL;
  }
  while ( a2 );
  if ( !v3 )
    return (char *)a1;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v7 + 8 * (*(_QWORD *)(a1 + 56) + 13LL), 0x65526D4Du);
  v46 = PoolWithTag;
  v22 = PoolWithTag;
  if ( !PoolWithTag )
    return (char *)a1;
  v23 = (_QWORD *)a1;
  v24 = PoolWithTag + 104;
  v25 = *(_QWORD *)(a1 + 32) - *(_QWORD *)a1;
  *(_OWORD *)PoolWithTag = *(_OWORD *)a1;
  v26 = v25 >> 3;
  *((_OWORD *)PoolWithTag + 1) = *(_OWORD *)(a1 + 16);
  *((_OWORD *)PoolWithTag + 2) = *(_OWORD *)(a1 + 32);
  *((_OWORD *)PoolWithTag + 3) = *(_OWORD *)(a1 + 48);
  *((_OWORD *)PoolWithTag + 4) = *(_OWORD *)(a1 + 64);
  *((_OWORD *)PoolWithTag + 5) = *(_OWORD *)(a1 + 80);
  *((_QWORD *)PoolWithTag + 12) = *(_QWORD *)(a1 + 96);
  PoolWithTag[68] = v5;
  *(_QWORD *)PoolWithTag = PoolWithTag + 104;
  v27 = (__int64)&PoolWithTag[8 * *(_QWORD *)(a1 + 56) + 104];
  *((_QWORD *)PoolWithTag + 4) = v27;
  v28 = *(_QWORD *)(a1 + 32);
  if ( (_DWORD)v26 )
  {
    v29 = (unsigned int)v26;
    v30 = a1 - (_QWORD)PoolWithTag;
    v31 = 0LL;
    v45 = a1 - (_QWORD)PoolWithTag;
    do
    {
      if ( v31 < v23[7] )
      {
        v32 = *(_QWORD *)((char *)v24 + v30);
        if ( v32 > 1 )
        {
          *v24 = v27;
          if ( (*((_BYTE *)v24 + v30) & 1) != 0 )
            *v24 = v27 | 1;
          v36 = *(unsigned int *)(v28 + 4);
          v37 = (_WORD *)(v28 + 8);
          v28 += v36;
          v38 = 0;
          v39 = 4;
          v40 = 0;
          v41 = (unsigned int)(v36 - 8) >> 1;
          if ( v41 )
          {
            do
            {
              if ( *v37 >= 0x1000u )
              {
                v42 = *v37 & 0xFFF;
                v43 = v42 - v38;
                if ( v42 - v38 == v39 )
                {
                  if ( ++v40 == 255 )
                  {
                    *(_WORD *)v27 = -17;
                    v40 = 0;
                    v27 += 2LL;
                  }
                }
                else
                {
                  if ( v40 )
                  {
                    if ( v40 > 4 )
                    {
                      *(_BYTE *)v27 = -17;
                      *(_BYTE *)(v27 + 1) = v40;
                      v27 += 2LL;
                    }
                    else
                    {
                      *(_BYTE *)v27++ = -17 - v40;
                    }
                    v40 = 0;
                  }
                  v39 = v42 - v38;
                  if ( v43 >= 0xEBu )
                  {
                    *(_BYTE *)v27 = v43 | 0xF0;
                    *(_BYTE *)(v27 + 1) = v43 >> 4;
                    v27 += 2LL;
                  }
                  else
                  {
                    *(_BYTE *)v27++ = v43;
                  }
                }
                v38 = v42;
              }
              ++v37;
              --v41;
            }
            while ( v41 );
            v30 = v45;
            if ( v40 )
            {
              if ( v40 > 4 )
              {
                *(_BYTE *)v27 = -17;
                *(_BYTE *)(v27 + 1) = v40;
                v27 += 2LL;
              }
              else
              {
                *(_BYTE *)v27++ = -17 - v40;
              }
            }
          }
          v23 = (_QWORD *)a1;
          *(_WORD *)v27 = 240;
          v27 += 2LL;
          if ( (v27 & 1) != 0 )
            ++v27;
        }
        else
        {
          *v24 = v32;
        }
      }
      ++v31;
      ++v24;
      --v29;
    }
    while ( v29 );
    v22 = v46;
  }
  ExFreePoolWithTag(v23, 0);
  return v22;
}
