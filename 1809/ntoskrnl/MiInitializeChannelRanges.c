/*
 * XREFs of MiInitializeChannelRanges @ 0x1409E04CC
 * Callers:
 *     MiInitNucleus @ 0x1409BA108 (MiInitNucleus.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

unsigned __int64 MiInitializeChannelRanges()
{
  unsigned __int64 result; // rax
  __int64 v1; // rdx
  unsigned int v2; // r8d
  int v3; // r9d
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // r8d
  __int64 i; // r8
  unsigned __int16 v8; // ax
  unsigned int v9; // r10d
  unsigned int v10; // edx
  unsigned int v11; // r11d
  int v12; // ebx
  char *v13; // r14
  unsigned int v14; // edi
  unsigned int v15; // ecx
  char *v16; // rdx
  __int64 j; // r9
  unsigned int v18; // edx
  unsigned __int64 v19; // rax
  unsigned int v20; // edx
  unsigned int v21; // ecx
  unsigned int v22; // r10d
  int v23; // ebx
  char *v24; // rsi
  unsigned int v25; // r9d
  unsigned int v26; // eax
  unsigned int v27; // edi
  unsigned int v28; // ecx
  char *v29; // rdx
  __int64 k; // r8
  unsigned int v31; // edx
  unsigned int v32; // eax
  unsigned int v33; // ecx
  __int64 v34; // rdx
  unsigned int v35; // r8d
  int v36; // ecx
  char v37[8]; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v38; // [rsp+38h] [rbp-50h]
  signed __int32 v39[8]; // [rsp+48h] [rbp-40h] BYREF

  result = (unsigned __int64)memset(v39, 0, sizeof(v39));
  if ( dword_140541188 )
  {
    if ( byte_14043BF95 != 1 )
    {
      if ( dword_14054119C )
      {
        v38 = 256;
        result = ((__int64 (__fastcall *)(__int64, __int64, __int64 *, char *))off_140401458[0])(
                   31LL,
                   8LL,
                   &qword_14043B128,
                   v37);
        v1 = qword_14043B128;
        if ( qword_14043B128 )
        {
          v2 = 0;
          v3 = 0;
          if ( *(_QWORD *)qword_14043B128 == -1LL )
            goto LABEL_16;
          do
          {
            v4 = *(unsigned __int16 *)(v1 + 12);
            if ( v2 <= v4 )
              v2 = *(unsigned __int16 *)(v1 + 12);
            if ( *(_BYTE *)(v1 + 14) == 1 )
            {
              v3 = 1;
            }
            else
            {
              result = *(unsigned __int16 *)(v1 + 10);
              if ( (unsigned __int16)result < 0x40u && (unsigned __int16)v4 < 4u )
              {
                v5 = v4 + 4 * (unsigned __int16)result;
                result = (unsigned __int64)v39;
                _bittestandset(v39, v5);
              }
            }
            v1 += 16LL;
          }
          while ( *(_QWORD *)v1 != -1LL );
          if ( !v3 )
LABEL_16:
            v2 = 0;
          v6 = v2 + 1;
          MmNumberOfChannels = v6;
          if ( v6 == 1 )
          {
            qword_14043B128 = 0LL;
          }
          else
          {
            if ( v6 > 4 )
            {
              for ( i = qword_14043B128; *(_QWORD *)i != -1LL; i += 16LL )
              {
                if ( *(_WORD *)(i + 12) >= 4u )
                {
                  v8 = *(_WORD *)(i + 10);
                  if ( v8 < 0x40u )
                  {
                    v9 = 4 * v8;
                    v10 = v38 - 1;
                    v11 = v9 < v38 ? v9 : 0;
                    v12 = ((unsigned __int64)v39 & 4) != 0 ? 0x20 : 0;
                    v13 = (char *)v39 + (-(__int64)(((unsigned __int64)v39 & 4) != 0) & 0xFFFFFFFFFFFFFFFCuLL);
                    while ( 1 )
                    {
                      v14 = v12 + v10;
                      v15 = v12 + v11;
                      if ( v10 - v11 == -1 )
                        goto LABEL_27;
                      v16 = &v13[8 * ((unsigned __int64)v15 >> 6)];
                      for ( j = ~*(_QWORD *)v16 | ((1LL << (v15 & 0x3F)) - 1); j == -1; j = ~*(_QWORD *)v16 )
                      {
                        v16 += 8;
                        if ( v16 > &v13[8 * ((unsigned __int64)v14 >> 6)] )
                          goto LABEL_27;
                      }
                      _BitScanForward64(&v19, ~j);
                      v18 = v19 + ((unsigned int)((v16 - v13) >> 3) << 6);
                      if ( v18 > v14 )
                      {
LABEL_27:
                        v18 = -1;
                      }
                      else if ( v18 != -1 )
                      {
                        break;
                      }
                      if ( !v11 )
                        break;
                      v20 = v9 + 1;
                      if ( v9 + 1 > v38 )
                        v20 = v38;
                      v10 = v20 - 1;
                      v11 = 0;
                    }
                    v21 = v18 - v12;
                    if ( v18 == -1 )
                      v21 = -1;
                    if ( v21 < v9 || v21 >= v9 + 4 )
                    {
                      *(_BYTE *)(i + 14) = 0;
                      *(_WORD *)(i + 12) = 3;
                    }
                    else
                    {
                      *(_WORD *)(i + 12) = v21 & 3;
                    }
                  }
                }
              }
              MmNumberOfChannels = 4;
            }
            v22 = 0;
            v23 = ((unsigned __int64)v39 & 4) != 0 ? 0x20 : 0;
            v24 = (char *)v39 - (-(__int64)(((unsigned __int64)v39 & 4) != 0) & 4);
            while ( 1 )
            {
              v25 = v22 < v38 ? v22 : 0;
              v26 = v38 - 1;
              while ( 1 )
              {
                v27 = v23 + v26;
                v28 = v23 + v25;
                result = v26 - v25 + 1;
                if ( !(_DWORD)result )
                  goto LABEL_49;
                v29 = &v24[8 * ((unsigned __int64)v28 >> 6)];
                result = ~*(_QWORD *)v29;
                for ( k = result | ((1LL << (v28 & 0x3F)) - 1); k == -1; k = ~*(_QWORD *)v29 )
                {
                  v29 += 8;
                  if ( v29 > &v24[8 * ((unsigned __int64)v27 >> 6)] )
                    goto LABEL_49;
                }
                _BitScanForward64(&result, ~k);
                v31 = result + ((unsigned int)((v29 - v24) >> 3) << 6);
                if ( v31 <= v27 )
                {
                  if ( v31 != -1 )
                    break;
                }
                else
                {
LABEL_49:
                  v31 = -1;
                }
                if ( !v25 )
                  break;
                v32 = v22 + 1;
                if ( v22 + 1 > v38 )
                  v32 = v38;
                v26 = v32 - 1;
                v25 = 0;
              }
              v33 = v31 - v23;
              if ( v31 == -1 )
                v33 = -1;
              if ( v33 == -1 || v33 < v22 )
                break;
              v34 = qword_14043B128;
              v22 = v33 + 1;
              v35 = v33 >> 2;
              v36 = v33 & 3;
              while ( *(_QWORD *)v34 != -1LL )
              {
                if ( *(unsigned __int16 *)(v34 + 10) == v35 && *(unsigned __int16 *)(v34 + 12) == v36 )
                  *(_BYTE *)(v34 + 14) = 0;
                v34 += 16LL;
              }
            }
          }
        }
      }
    }
  }
  return result;
}
