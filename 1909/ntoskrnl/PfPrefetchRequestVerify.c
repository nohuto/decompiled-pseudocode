/*
 * XREFs of PfPrefetchRequestVerify @ 0x1406ABDD4
 * Callers:
 *     PfpPrefetchRequest @ 0x1406AAC08 (PfpPrefetchRequest.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     PfPrefetchRequestVerifyRanges @ 0x1406ABCF0 (PfPrefetchRequestVerifyRanges.c)
 *     PfPrefetchRequestVerifyPath @ 0x1406AC058 (PfPrefetchRequestVerifyPath.c)
 *     PfRequestRangeCheck @ 0x1406AC0E4 (PfRequestRangeCheck.c)
 *     PfPrefetchRequestPrepareForVerify @ 0x1406AC124 (PfPrefetchRequestPrepareForVerify.c)
 */

__int64 __fastcall PfPrefetchRequestVerify(unsigned __int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // r14
  unsigned __int64 v7; // rdi
  unsigned int v8; // r11d
  __int64 v9; // rsi
  int v10; // r11d
  __int64 v11; // r15
  __int64 v12; // r13
  _DWORD *v13; // rsi
  __int64 v14; // rdi
  int v15; // r11d
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // [rsp+30h] [rbp-50h] BYREF
  __int64 v19; // [rsp+38h] [rbp-48h]
  _DWORD v20[16]; // [rsp+40h] [rbp-40h] BYREF

  memset(v20, 0, 0x3CuLL);
  v18 = 0LL;
  v19 = 0LL;
  if ( a2 < 0x80 )
    return 1000LL;
  if ( *(_DWORD *)a1 != 13 )
    return 1500LL;
  v4 = *(unsigned int *)(a1 + 4);
  if ( a2 != (_DWORD)v4 )
    return 2000LL;
  if ( a1 + v4 < a1 )
    return 2500LL;
  if ( (unsigned __int16)*(_DWORD *)(a1 + 28) >= 8u )
    return 3000LL;
  if ( *(_WORD *)(a1 + 30) >= 8u )
    return 3200LL;
  if ( (*(_DWORD *)(a1 + 80) & 0xC0) != 0 )
    return 3400LL;
  if ( *(_BYTE *)(a1 + 81) >= 6u )
    return 3600LL;
  result = PfPrefetchRequestPrepareForVerify(a1, a2, v20);
  if ( !(_DWORD)result )
  {
    if ( (unsigned __int8)PfRequestRangeCheck((unsigned int)v20, *(_DWORD *)(a1 + 32), 40 * *(_DWORD *)(a1 + 8), 8, 1) )
    {
      _mm_lfence();
      v6 = 0LL;
      v7 = a1 + *(unsigned int *)(a1 + 32);
      if ( *(_DWORD *)(a1 + 8) )
      {
        while ( 1 )
        {
          LODWORD(v18) = *(_DWORD *)(v7 + 40 * v6 + 32);
          LODWORD(v19) = *(_DWORD *)(v7 + 40 * v6 + 24);
          result = PfPrefetchRequestVerifyPath(a1, v20, &v18);
          if ( (_DWORD)result )
            break;
          v8 = *(_DWORD *)(v7 + 40 * v6 + 12) >> 1;
          if ( *(_DWORD *)(v7 + 40 * v6 + 12) < 2u )
            return 13000LL;
          if ( v8 > v20[5] )
            return 14000LL;
          v9 = *(unsigned int *)(v7 + 40 * v6 + 16);
          if ( !(unsigned __int8)PfRequestRangeCheck(
                                   (unsigned int)&v20[3],
                                   *(_DWORD *)(v7 + 40 * v6 + 16),
                                   48 * v8,
                                   8,
                                   1) )
            return 15000LL;
          v11 = 0LL;
          v12 = a1 + v9;
          if ( v10 )
          {
            do
            {
              v13 = (_DWORD *)(v12 + 48 * v11);
              if ( v13[8] || v13[10] )
              {
                result = PfPrefetchRequestVerifyPath(a1, v20, v13 + 8);
                if ( (_DWORD)result )
                  return result;
              }
              result = PfPrefetchRequestVerifyRanges(a1, (__int64)v20, v13 + 4, (*v13 & 1) != 0 ? 512 : 4096);
              if ( (_DWORD)result )
                return result;
              v11 = (unsigned int)(v11 + 1);
            }
            while ( (unsigned int)v11 < *(_DWORD *)(v7 + 40 * v6 + 12) >> 1 );
          }
          v6 = (unsigned int)(v6 + 1);
          if ( (unsigned int)v6 >= *(_DWORD *)(a1 + 8) )
            goto LABEL_22;
        }
      }
      else
      {
LABEL_22:
        v14 = *(unsigned int *)(a1 + 56);
        if ( (unsigned __int8)PfRequestRangeCheck(
                                (unsigned int)&v20[9],
                                *(_DWORD *)(a1 + 56),
                                40 * *(_DWORD *)(a1 + 20),
                                8,
                                1) )
        {
          v16 = a1 + v14;
          v17 = 0LL;
          if ( v15 )
          {
            while ( 1 )
            {
              result = PfPrefetchRequestVerifyRanges(
                         a1,
                         (__int64)v20,
                         (unsigned int *)(v16 + 8 * ((unsigned int)v17 + 3LL + 4 * v17)),
                         4096);
              if ( (_DWORD)result )
                break;
              v17 = (unsigned int)(v17 + 1);
              if ( (unsigned int)v17 >= *(_DWORD *)(a1 + 20) )
                return 0LL;
            }
          }
          else
          {
            return 0LL;
          }
        }
        else
        {
          return 40000LL;
        }
      }
    }
    else
    {
      return 12500LL;
    }
  }
  return result;
}
