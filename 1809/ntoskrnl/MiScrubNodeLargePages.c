/*
 * XREFs of MiScrubNodeLargePages @ 0x140860954
 * Callers:
 *     MiScrubNode @ 0x1402CF8B8 (MiScrubNode.c)
 * Callees:
 *     MiInitializePageColorBase @ 0x14002C4C0 (MiInitializePageColorBase.c)
 *     MiGetNextPageColor @ 0x140031260 (MiGetNextPageColor.c)
 *     MiDeleteUltraThreadContext @ 0x1400E188C (MiDeleteUltraThreadContext.c)
 *     MiCreateUltraThreadContext @ 0x14013CBE4 (MiCreateUltraThreadContext.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiGetLargePageListHeadBase @ 0x1402CCB08 (MiGetLargePageListHeadBase.c)
 *     MiScrubNodeLargePageList @ 0x1402CCD80 (MiScrubNodeLargePageList.c)
 */

__int64 __fastcall MiScrubNodeLargePages(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 *v7; // r9
  __int64 v8; // r12
  unsigned __int64 v9; // r11
  _QWORD *v10; // r8
  __int64 v11; // r10
  __int64 v12; // rdx
  int v13; // esi
  unsigned int NextPageColor; // eax
  unsigned int v15; // r14d
  int *v16; // r13
  _QWORD *v17; // rbp
  int v18; // r15d
  int i; // ebx
  unsigned int j; // edi
  _QWORD *LargePageListHeadBase; // rsi
  unsigned int v22; // r12d
  unsigned int k; // eax
  int v24; // eax
  int v25; // [rsp+50h] [rbp-128h]
  int v26; // [rsp+54h] [rbp-124h]
  unsigned __int64 v28; // [rsp+60h] [rbp-118h]
  unsigned __int64 v29; // [rsp+68h] [rbp-110h]
  unsigned __int64 v30; // [rsp+70h] [rbp-108h] BYREF
  __int64 v31; // [rsp+78h] [rbp-100h]
  __int64 v32; // [rsp+80h] [rbp-F8h]
  __int64 v33; // [rsp+88h] [rbp-F0h]
  __int64 v34; // [rsp+90h] [rbp-E8h]
  _BYTE v35[24]; // [rsp+98h] [rbp-E0h] BYREF
  _BYTE v36[128]; // [rsp+B0h] [rbp-C8h] BYREF

  v4 = a3;
  v33 = a2;
  v32 = a1;
  v31 = a4;
  result = (__int64)memset(v36, 0, sizeof(v36));
  v7 = MiLargePageSizes;
  v8 = *(_QWORD *)(a2 + 16) + 1984 * v4;
  v9 = 0LL;
  v34 = v8;
  v10 = (_QWORD *)v8;
  v11 = 3LL;
  do
  {
    v12 = *v10 + v10[1];
    if ( v12 )
      v9 += *v7 * v12;
    v10 += 34;
    ++v7;
    --v11;
  }
  while ( v11 );
  v29 = v9;
  if ( v9 )
  {
    v13 = 0;
    v28 = 0LL;
    v25 = 0;
    MiInitializePageColorBase(0LL, v4 + 1, (__int64)v35);
    NextPageColor = MiGetNextPageColor((__int64)v35);
    result = MiCreateUltraThreadContext((__int64)v36, NextPageColor, 7);
    if ( (_DWORD)result )
    {
      v15 = 0;
      v16 = dword_14043B1C0;
      v17 = (_QWORD *)v8;
      do
      {
        if ( *v17 + v17[1] )
        {
          v18 = 0;
          v26 = *v16;
          do
          {
            for ( i = 1; ; --i )
            {
              if ( !i && !v13 )
              {
                _InterlockedIncrement(&dword_14043BF90);
                v25 = 1;
              }
              for ( j = 0; j < MmNumberOfChannels; ++j )
              {
                LargePageListHeadBase = (_QWORD *)MiGetLargePageListHeadBase(v18, v8, v15, j, i);
                v22 = 0;
                for ( k = v26; v22 < k; LargePageListHeadBase += 3 )
                {
                  if ( (_QWORD *)*LargePageListHeadBase != LargePageListHeadBase )
                  {
                    v30 = v29 - v28;
                    v24 = MiScrubNodeLargePageList(v33, a3, v15, v18, i, j, &v30, v32, v31, (__int64)v36);
                    v28 += v30;
                    if ( v28 >= v29 || !v24 )
                      goto LABEL_26;
                    k = v26;
                  }
                  ++v22;
                }
                v8 = v34;
              }
              v13 = v25;
              if ( !i )
                break;
            }
            ++v18;
          }
          while ( v18 <= 1 );
        }
        ++v15;
        v17 += 34;
        ++v16;
      }
      while ( v15 < 3 );
LABEL_26:
      if ( v25 == 1 )
        _InterlockedDecrement(&dword_14043BF90);
      return MiDeleteUltraThreadContext((__int64)v36);
    }
  }
  return result;
}
