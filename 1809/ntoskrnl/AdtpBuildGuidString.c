/*
 * XREFs of AdtpBuildGuidString @ 0x1408EFD1C
 * Callers:
 *     AdtpBuildObjectTypeStrings @ 0x1408F1608 (AdtpBuildObjectTypeStrings.c)
 * Callees:
 *     StringCchPrintfW @ 0x140134BD4 (StringCchPrintfW.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AdtpBuildGuidString(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4, int a5, _BYTE *a6)
{
  PVOID PoolWithTag; // rbp
  __int64 result; // rax

  if ( !a2 )
    return 3221225485LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x4EuLL, 0x6B416553u);
  if ( !PoolWithTag )
    return 3221225495LL;
  *a6 = 1;
  if ( StringCchPrintfW(
         (STRSAFE_LPWSTR)PoolWithTag,
         0x27uLL,
         L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
         *a1,
         *((unsigned __int16 *)a1 + 2),
         *((unsigned __int16 *)a1 + 3),
         *((unsigned __int8 *)a1 + 8),
         *((unsigned __int8 *)a1 + 9),
         *((unsigned __int8 *)a1 + 10),
         *((unsigned __int8 *)a1 + 11),
         *((unsigned __int8 *)a1 + 12),
         *((unsigned __int8 *)a1 + 13),
         *((unsigned __int8 *)a1 + 14),
         *((unsigned __int8 *)a1 + 15)) < 0 )
  {
    if ( *a6 == 1 )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
      *a6 = 0;
    }
    return 3221225485LL;
  }
  *(_DWORD *)a2 = 5111884;
  result = 0LL;
  *(_QWORD *)(a2 + 8) = PoolWithTag;
  return result;
}
