/*
 * XREFs of MiScrubNodeLargePages @ 0x14089B754
 * Callers:
 *     MiScrubNode @ 0x1402EC820 (MiScrubNode.c)
 * Callees:
 *     MiInitializePageColorBase @ 0x1400938D8 (MiInitializePageColorBase.c)
 *     MiGetNextPageColor @ 0x1400BAD8C (MiGetNextPageColor.c)
 *     MiCreateUltraThreadContext @ 0x1400F8D40 (MiCreateUltraThreadContext.c)
 *     MiDeleteUltraThreadContext @ 0x1400F92EC (MiDeleteUltraThreadContext.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiGetLargePageListHeadBase @ 0x1402E6860 (MiGetLargePageListHeadBase.c)
 *     MiScrubNodeLargePageList @ 0x1402E6B20 (MiScrubNodeLargePageList.c)
 */

__int64 __fastcall MiScrubNodeLargePages(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 *v7; // r8
  __int64 v8; // rdi
  unsigned __int64 v9; // r11
  _QWORD *v10; // rdx
  __int64 v11; // r10
  __int64 v12; // r9
  int v13; // r14d
  unsigned int NextPageColor; // eax
  int *v15; // rcx
  unsigned int v16; // r12d
  _QWORD *v17; // r15
  int v18; // r13d
  int i; // edi
  unsigned int j; // esi
  __int64 LargePageListHeadBase; // rax
  unsigned int v22; // ecx
  _QWORD *v23; // r14
  unsigned int v24; // eax
  int v25; // eax
  int v26; // [rsp+50h] [rbp-B0h]
  int v27; // [rsp+54h] [rbp-ACh]
  unsigned int k; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v29; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v30; // [rsp+68h] [rbp-98h]
  unsigned __int64 v31; // [rsp+70h] [rbp-90h] BYREF
  int *v32; // [rsp+78h] [rbp-88h]
  __int64 v33; // [rsp+80h] [rbp-80h]
  __int64 v34; // [rsp+88h] [rbp-78h]
  __int64 v35; // [rsp+90h] [rbp-70h]
  __int64 v36; // [rsp+98h] [rbp-68h]
  _QWORD v37[2]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v38[128]; // [rsp+B0h] [rbp-50h] BYREF

  v4 = a3;
  v36 = a2;
  v35 = a1;
  v37[0] = 0LL;
  v37[1] = 0LL;
  v34 = a4;
  result = (__int64)memset(v38, 0, sizeof(v38));
  v7 = MiLargePageSizes;
  v8 = *(_QWORD *)(a2 + 16) + 1984 * v4;
  v9 = 0LL;
  v33 = v8;
  v10 = (_QWORD *)v8;
  v11 = 3LL;
  do
  {
    v12 = *v10 + v10[1];
    if ( v12 )
    {
      result = v12 * *v7;
      v9 += result;
    }
    v10 += 34;
    ++v7;
    --v11;
  }
  while ( v11 );
  v30 = v9;
  if ( v9 )
  {
    v13 = 0;
    v29 = 0LL;
    v26 = 0;
    MiInitializePageColorBase(0LL, v4 + 1, (__int64)v37);
    NextPageColor = MiGetNextPageColor((__int64)v37);
    result = MiCreateUltraThreadContext((__int64)v38, NextPageColor, 7);
    if ( (_DWORD)result )
    {
      v15 = dword_140465840;
      v16 = 0;
      v32 = dword_140465840;
      v17 = (_QWORD *)v8;
      do
      {
        if ( *v17 + v17[1] )
        {
          v18 = 0;
          v27 = *v15;
          do
          {
            for ( i = 1; ; --i )
            {
              if ( !i && !v13 )
              {
                _InterlockedIncrement(&dword_140466650);
                v26 = 1;
              }
              for ( j = 0; j < MmNumberOfChannels; ++j )
              {
                LargePageListHeadBase = MiGetLargePageListHeadBase(v18, v33, v16, j, i);
                v22 = v27;
                v23 = (_QWORD *)LargePageListHeadBase;
                v24 = 0;
                for ( k = 0; v24 < v22; k = v24 )
                {
                  if ( (_QWORD *)*v23 != v23 )
                  {
                    v31 = v30 - v29;
                    v25 = MiScrubNodeLargePageList(v36, v4, v16, v18, i, j, &v31, v35, v34, (__int64)v38);
                    v29 += v31;
                    if ( v29 >= v30 || !v25 )
                      goto LABEL_27;
                    v24 = k;
                    v22 = v27;
                  }
                  ++v24;
                  v23 += 3;
                }
              }
              v13 = v26;
              if ( !i )
                break;
            }
            ++v18;
          }
          while ( v18 <= 1 );
          v15 = v32;
        }
        ++v15;
        ++v16;
        v17 += 34;
        v32 = v15;
      }
      while ( v16 < 3 );
LABEL_27:
      if ( v26 == 1 )
        _InterlockedDecrement(&dword_140466650);
      return MiDeleteUltraThreadContext((__int64)v38);
    }
  }
  return result;
}
