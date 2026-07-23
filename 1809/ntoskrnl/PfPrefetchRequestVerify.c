/*
 * XREFs of PfPrefetchRequestVerify @ 0x1406A3254
 * Callers:
 *     PfpPrefetchRequest @ 0x1406A2F7C (PfpPrefetchRequest.c)
 * Callees:
 *     PfPrefetchRequestVerifyRanges @ 0x1406A3170 (PfPrefetchRequestVerifyRanges.c)
 *     PfPrefetchRequestVerifyPath @ 0x1406A3494 (PfPrefetchRequestVerifyPath.c)
 *     PfRequestRangeCheck @ 0x1406A3520 (PfRequestRangeCheck.c)
 *     PfPrefetchRequestPrepareForVerify @ 0x1406A3560 (PfPrefetchRequestPrepareForVerify.c)
 */

__int64 __fastcall PfPrefetchRequestVerify(_DWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  int v4; // ecx
  int v5; // eax
  __int64 result; // rax
  __int64 v7; // r14
  char *v8; // rdi
  unsigned int v9; // r11d
  __int64 v10; // rsi
  int v11; // r11d
  __int64 v12; // r15
  char *v13; // r13
  char *v14; // rsi
  __int64 v15; // rdi
  int v16; // r11d
  char *v17; // rsi
  __int64 v18; // rdi
  _DWORD v19[4]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v20[12]; // [rsp+40h] [rbp-40h] BYREF
  char v21; // [rsp+4Ch] [rbp-34h] BYREF
  unsigned int v22; // [rsp+54h] [rbp-2Ch]
  char v23; // [rsp+64h] [rbp-1Ch] BYREF

  if ( (unsigned int)a2 < 0x80 )
    return 1000LL;
  if ( *a1 != 13 )
    return 1500LL;
  v3 = (unsigned int)a1[1];
  if ( (_DWORD)a2 != (_DWORD)v3 )
    return 2000LL;
  if ( (_DWORD *)((char *)a1 + v3) < a1 )
    return 2500LL;
  v4 = a1[7];
  if ( (unsigned __int16)v4 >= 8u )
    return 3000LL;
  if ( HIWORD(v4) >= 8u )
    return 3200LL;
  v5 = a1[20];
  if ( (v5 & 0xC0) != 0 )
    return 3400LL;
  if ( BYTE1(v5) >= 6u )
    return 3600LL;
  result = PfPrefetchRequestPrepareForVerify(a1, a2, v20);
  if ( !(_DWORD)result )
  {
    if ( (unsigned __int8)PfRequestRangeCheck((unsigned int)v20, a1[8], 40 * a1[2], 8, 1) )
    {
      _mm_lfence();
      v7 = 0LL;
      v8 = (char *)a1 + (unsigned int)a1[8];
      if ( a1[2] )
      {
        while ( 1 )
        {
          v19[0] = *(_DWORD *)&v8[40 * v7 + 32];
          v19[2] = *(_DWORD *)&v8[40 * v7 + 24];
          result = PfPrefetchRequestVerifyPath(a1, v20, v19);
          if ( (_DWORD)result )
            break;
          v9 = *(_DWORD *)&v8[40 * v7 + 12] >> 1;
          if ( *(_DWORD *)&v8[40 * v7 + 12] < 2u )
            return 13000LL;
          if ( v9 > v22 )
            return 14000LL;
          v10 = *(unsigned int *)&v8[40 * v7 + 16];
          if ( !(unsigned __int8)PfRequestRangeCheck((unsigned int)&v21, *(_DWORD *)&v8[40 * v7 + 16], 48 * v9, 8, 1) )
            return 15000LL;
          v12 = 0LL;
          v13 = (char *)a1 + v10;
          if ( v11 )
          {
            do
            {
              v14 = &v13[48 * v12];
              if ( *((_DWORD *)v14 + 8) || *((_DWORD *)v14 + 10) )
              {
                result = PfPrefetchRequestVerifyPath(a1, v20, v14 + 32);
                if ( (_DWORD)result )
                  return result;
              }
              result = PfPrefetchRequestVerifyRanges(
                         (__int64)a1,
                         (__int64)v20,
                         (unsigned int *)v14 + 4,
                         (*(_DWORD *)v14 & 1) != 0 ? 512 : 4096);
              if ( (_DWORD)result )
                return result;
              v12 = (unsigned int)(v12 + 1);
            }
            while ( (unsigned int)v12 < *(_DWORD *)&v8[40 * v7 + 12] >> 1 );
          }
          v7 = (unsigned int)(v7 + 1);
          if ( (unsigned int)v7 >= a1[2] )
            goto LABEL_22;
        }
      }
      else
      {
LABEL_22:
        v15 = (unsigned int)a1[14];
        if ( (unsigned __int8)PfRequestRangeCheck((unsigned int)&v23, a1[14], 40 * a1[5], 8, 1) )
        {
          v17 = (char *)a1 + v15;
          v18 = 0LL;
          if ( v16 )
          {
            while ( 1 )
            {
              result = PfPrefetchRequestVerifyRanges(
                         (__int64)a1,
                         (__int64)v20,
                         (unsigned int *)&v17[32 * v18 + 24 + 8 * (unsigned int)v18],
                         4096);
              if ( (_DWORD)result )
                break;
              v18 = (unsigned int)(v18 + 1);
              if ( (unsigned int)v18 >= a1[5] )
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
