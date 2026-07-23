/*
 * XREFs of LdrpResolveDllName @ 0x180029BD8
 * Callers:
 *     LdrpFindLoadedDllInternal @ 0x180022ADC (LdrpFindLoadedDllInternal.c)
 *     LdrpSearchPath @ 0x18002A61C (LdrpSearchPath.c)
 *     LdrpMapDllFullPath @ 0x180070F28 (LdrpMapDllFullPath.c)
 *     LdrpAppCompatRedirect @ 0x180071068 (LdrpAppCompatRedirect.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18000C120 (RtlInitUnicodeStringEx.c)
 *     LdrpGetFullPath @ 0x180028FE4 (LdrpGetFullPath.c)
 *     LdrpGetNtPathFromDosPath @ 0x180029D7C (LdrpGetNtPathFromDosPath.c)
 *     LdrpAllocateUnicodeString @ 0x18002A580 (LdrpAllocateUnicodeString.c)
 *     LdrpFreeUnicodeString @ 0x1800713F4 (LdrpFreeUnicodeString.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     LdrpLogDbgPrint @ 0x1800CFAF8 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpResolveDllName(unsigned __int16 *a1, __int64 a2, _UNICODE_STRING *a3, _OWORD *a4, __int16 a5)
{
  __m128i v9; // xmm0
  int v10; // ebx
  _WORD *v11; // rax
  __int64 v12; // rsi
  const void *v13; // rbp
  int NtPathFromDosPath; // eax
  __m128i v15; // xmm0
  unsigned __int16 v16; // ax
  unsigned __int64 v17; // xmm0_8
  const WCHAR *i; // rdx
  int FullPath; // eax
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  __m128i Src; // [rsp+30h] [rbp-28h] BYREF

  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      1738,
      (unsigned int)"LdrpResolveDllName",
      3,
      "DLL name: %wZ\n",
      a1);
  if ( (a5 & 0x200) != 0 )
  {
    v9 = *(__m128i *)a1;
    v10 = 0;
  }
  else
  {
    FullPath = LdrpGetFullPath(a1, a2);
    v9 = *(__m128i *)a2;
    v10 = FullPath;
  }
  Src = v9;
  if ( v10 >= 0 )
  {
    if ( (a5 & 0x200) != 0 || (v11 = (_WORD *)(a2 + 16), a2 + 16 == *(_QWORD *)(a2 + 8)) )
    {
      v12 = Src.m128i_u16[0];
      v13 = (const void *)Src.m128i_i64[1];
      v10 = LdrpAllocateUnicodeString(&Src, Src.m128i_u16[0]);
      if ( v10 >= 0 )
      {
        memmove((void *)Src.m128i_i64[1], v13, v12 + 2);
        Src.m128i_i16[0] = v12;
      }
      *(_WORD *)a2 = 0;
    }
    else
    {
      *(_QWORD *)(a2 + 8) = v11;
      *(_DWORD *)a2 = 0x1000000;
      *v11 = 0;
    }
    if ( v10 >= 0 )
    {
      NtPathFromDosPath = LdrpGetNtPathFromDosPath(&Src, a2);
      v10 = NtPathFromDosPath;
      if ( NtPathFromDosPath < 0 )
      {
        v21 = (unsigned int)(NtPathFromDosPath + 1073741809);
        if ( (unsigned int)v21 <= 0x2C && (v22 = 0x1C3000000011LL, _bittest64(&v22, v21))
          || v10 == -2147483632
          || v10 == -1073741661 )
        {
          v10 = -1073741515;
        }
        LdrpFreeUnicodeString(&Src);
      }
      else
      {
        v15 = Src;
        v16 = _mm_cvtsi128_si32(Src);
        *a4 = Src;
        v17 = _mm_srli_si128(v15, 8).m128i_u64[0];
        for ( i = (const WCHAR *)(v16 + v17 - 2); (unsigned __int64)i >= v17; --i )
        {
          if ( *i == 92 || *i == 47 )
          {
            ++i;
            break;
          }
        }
        RtlInitUnicodeStringEx(a3, i);
      }
    }
  }
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      1849,
      (unsigned int)"LdrpResolveDllName",
      4,
      "Status: 0x%08lx\n",
      v10);
  return (unsigned int)v10;
}
