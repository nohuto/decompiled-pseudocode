/*
 * XREFs of LdrpResolveDllName @ 0x180029CEC
 * Callers:
 *     LdrpFindLoadedDllInternal @ 0x1800219E8 (LdrpFindLoadedDllInternal.c)
 *     LdrpSearchPath @ 0x18002D8FC (LdrpSearchPath.c)
 *     LdrpMapDllFullPath @ 0x18002E4A8 (LdrpMapDllFullPath.c)
 *     LdrpAppCompatRedirect @ 0x18002E5E8 (LdrpAppCompatRedirect.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180028DF0 (RtlInitUnicodeStringEx.c)
 *     LdrpGetFullPath @ 0x180029974 (LdrpGetFullPath.c)
 *     LdrpGetNtPathFromDosPath @ 0x180029C14 (LdrpGetNtPathFromDosPath.c)
 *     LdrpAllocateUnicodeString @ 0x180029E90 (LdrpAllocateUnicodeString.c)
 *     LdrpFreeUnicodeString @ 0x18002E1A4 (LdrpFreeUnicodeString.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 *     LdrpLogDbgPrint @ 0x1800CE3D8 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpResolveDllName(
        unsigned __int16 *a1,
        _UNICODE_STRING *a2,
        _UNICODE_STRING *a3,
        _UNICODE_STRING *a4,
        __int16 a5)
{
  _UNICODE_STRING v9; // xmm0
  int v10; // ebx
  _UNICODE_STRING *v11; // rax
  __int64 Length; // rsi
  wchar_t *Buffer; // rbp
  NTSTATUS NtPathFromDosPath; // eax
  __m128i v15; // xmm0
  unsigned __int16 v16; // ax
  unsigned __int64 v17; // xmm0_8
  const WCHAR *i; // rdx
  int FullPath; // eax
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  _UNICODE_STRING Src; // [rsp+30h] [rbp-28h] BYREF

  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      1738,
      (unsigned int)"LdrpResolveDllName",
      3,
      (__int64)"DLL name: %wZ\n",
      a1);
  if ( (a5 & 0x200) != 0 )
  {
    v9 = *(_UNICODE_STRING *)a1;
    v10 = 0;
  }
  else
  {
    FullPath = LdrpGetFullPath(a1, (__int64)a2);
    v9 = *a2;
    v10 = FullPath;
  }
  Src = v9;
  if ( v10 >= 0 )
  {
    if ( (a5 & 0x200) != 0 || (v11 = a2 + 1, &a2[1] == (_UNICODE_STRING *)a2->Buffer) )
    {
      Length = Src.Length;
      Buffer = Src.Buffer;
      v10 = LdrpAllocateUnicodeString(&Src, Src.Length);
      if ( v10 >= 0 )
      {
        memmove(Src.Buffer, Buffer, Length + 2);
        Src.Length = Length;
      }
      a2->Length = 0;
    }
    else
    {
      a2->Buffer = &v11->Length;
      *(_DWORD *)&a2->Length = 0x1000000;
      v11->Length = 0;
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
        v15 = (__m128i)Src;
        v16 = _mm_cvtsi128_si32((__m128i)Src);
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
      (__int64)"Status: 0x%08lx\n",
      v10);
  return (unsigned int)v10;
}
