/*
 * XREFs of LdrpAddRedirectedFunction @ 0x1800D7210
 * Callers:
 *     LdrpBuildImportRedirection @ 0x1800D7534 (LdrpBuildImportRedirection.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18000C120 (RtlInitUnicodeStringEx.c)
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     NtdllpFreeStringRoutine @ 0x1800178B0 (NtdllpFreeStringRoutine.c)
 *     RtlRbInsertNodeEx @ 0x18001F940 (RtlRbInsertNodeEx.c)
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x1800230BC (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     LdrpPreprocessDllName @ 0x180025FA8 (LdrpPreprocessDllName.c)
 *     RtlInitAnsiStringEx @ 0x1800265E0 (RtlInitAnsiStringEx.c)
 *     LdrpHashUnicodeString @ 0x1800714C4 (LdrpHashUnicodeString.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     LdrpCompareRedirectedFunction @ 0x1800D7668 (LdrpCompareRedirectedFunction.c)
 *     LdrpHashAsciizString @ 0x1800D7AC4 (LdrpHashAsciizString.c)
 */

__int64 __fastcall LdrpAddRedirectedFunction(__int64 a1)
{
  const char *v1; // rdx
  int inited; // esi
  __int64 v4; // r8
  unsigned __int64 v5; // xmm0_8
  unsigned __int64 v6; // rdx
  _WORD *i; // rdi
  int v8; // eax
  unsigned __int64 v9; // rbx
  int v10; // r14d
  int v11; // eax
  unsigned __int64 v12; // rax
  __int64 Heap; // rax
  _QWORD *v14; // r14
  size_t v15; // r8
  __int64 v16; // rbx
  bool v17; // r8
  int v18; // edi
  __int64 v19; // rax
  int v21; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v22; // [rsp+30h] [rbp-D8h] BYREF
  __m128i v23; // [rsp+40h] [rbp-C8h] BYREF
  STRING DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  __m128i v25; // [rsp+68h] [rbp-A0h] BYREF
  _WORD v26[128]; // [rsp+78h] [rbp-90h] BYREF
  int v27; // [rsp+178h] [rbp+70h] BYREF
  _WORD *v28; // [rsp+180h] [rbp+78h]
  _WORD v29[128]; // [rsp+188h] [rbp+80h] BYREF

  v1 = *(const char **)a1;
  v25.m128i_i64[1] = (__int64)v26;
  v25.m128i_i32[0] = 0x1000000;
  v28 = v29;
  v26[0] = 0;
  v27 = 0x1000000;
  v29[0] = 0;
  inited = RtlInitAnsiStringEx(&DestinationString, v1);
  if ( inited >= 0 )
    inited = LdrpAppendAnsiStringToFilenameBuffer((unsigned __int16 *)&v27, &DestinationString);
  if ( inited >= 0 )
  {
    v21 = 0;
    inited = LdrpPreprocessDllName((unsigned __int16 *)&v27, (unsigned __int16 *)&v25, 0, &v21);
    if ( inited >= 0 )
    {
      v4 = 2LL;
      v23 = v25;
      v5 = _mm_srli_si128(v25, 8).m128i_u64[0];
      v6 = v5;
      i = (_WORD *)v5;
      if ( (v21 & 0x20) == 0 )
      {
        for ( i = (_WORD *)(v5 + v25.m128i_u16[0] - 2LL); (unsigned __int64)i >= v5; --i )
        {
          if ( *i == 92 || *i == 47 )
          {
            ++i;
            break;
          }
        }
        RtlInitUnicodeStringEx((__int64)&v23, (__int64)i);
      }
      *((_QWORD *)&v22 + 1) = *(_QWORD *)(a1 + 8);
      LODWORD(v22) = LdrpHashAsciizString(*((_QWORD *)&v22 + 1), v6, v4);
      v8 = LdrpHashUnicodeString((unsigned __int16 *)&v23);
      v9 = LdrpRedirectionTree;
      DWORD1(v22) = v8;
      if ( (qword_1801661A0 & 1) != 0 )
      {
        if ( LdrpRedirectionTree )
          v9 = (unsigned __int64)&LdrpRedirectionTree ^ LdrpRedirectionTree;
        else
          v9 = 0LL;
      }
      v10 = qword_1801661A0 & 1;
      if ( !v9 )
        goto LABEL_30;
      do
      {
        v11 = LdrpCompareRedirectedFunction(&v22, v9);
        if ( v11 >= 0 )
        {
          if ( v11 <= 0 )
            break;
          v12 = *(_QWORD *)(v9 + 8);
        }
        else
        {
          v12 = *(_QWORD *)v9;
        }
        if ( v10 && v12 )
          v9 ^= v12;
        else
          v9 = v12;
      }
      while ( v9 );
      if ( v9 )
      {
        inited = -1073739509;
      }
      else
      {
LABEL_30:
        Heap = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 0x40000, v23.m128i_u16[0] + 66LL);
        v14 = (_QWORD *)Heap;
        if ( Heap )
        {
          *(_OWORD *)(Heap + 24) = v22;
          *(__m128i *)(Heap + 40) = v23;
          *(_QWORD *)(Heap + 56) = *(_QWORD *)(a1 + 16);
          v15 = *(unsigned __int16 *)(Heap + 40);
          *(_QWORD *)(Heap + 48) = Heap + 64;
          v15 += 2LL;
          *(_WORD *)(Heap + 42) = v15;
          memmove((void *)(Heap + 64), i, v15);
          v16 = LdrpRedirectionTree;
          if ( (qword_1801661A0 & 1) != 0 )
          {
            if ( LdrpRedirectionTree )
              v16 = (unsigned __int64)&LdrpRedirectionTree ^ LdrpRedirectionTree;
            else
              v16 = 0LL;
          }
          v17 = 0;
          v18 = qword_1801661A0 & 1;
          if ( v16 )
          {
            while ( 1 )
            {
              if ( (int)LdrpCompareRedirectedFunction(v14 + 3, v16) < 0 )
              {
                v19 = *(_QWORD *)v16;
                if ( v18 )
                {
                  if ( !v19 )
                    goto LABEL_48;
                  v19 ^= v16;
                }
                if ( !v19 )
                {
LABEL_48:
                  v17 = 0;
                  break;
                }
              }
              else
              {
                v19 = *(_QWORD *)(v16 + 8);
                if ( v18 )
                {
                  if ( !v19 )
                    goto LABEL_42;
                  v19 ^= v16;
                }
                if ( !v19 )
                {
LABEL_42:
                  v17 = 1;
                  break;
                }
              }
              v16 = v19;
            }
          }
          RtlRbInsertNodeEx((unsigned __int64)&LdrpRedirectionTree, v16, v17, v14);
        }
        else
        {
          inited = -1073741801;
        }
      }
    }
  }
  if ( v26 != (_WORD *)v25.m128i_i64[1] )
    NtdllpFreeStringRoutine(v25.m128i_i64[1]);
  v25.m128i_i64[1] = (__int64)v26;
  v25.m128i_i32[0] = 0x1000000;
  v26[0] = 0;
  if ( v29 != v28 )
    NtdllpFreeStringRoutine((__int64)v28);
  return (unsigned int)inited;
}
