/*
 * XREFs of SdbpCheckMatchingWildcardRegistryEntry @ 0x1408E80BC
 * Callers:
 *     SdbpCheckMatchingWildcardRegistry @ 0x1408E7F90 (SdbpCheckMatchingWildcardRegistry.c)
 * Callees:
 *     SdbpCheckMatchingRegistryValue @ 0x1408E7428 (SdbpCheckMatchingRegistryValue.c)
 *     AslRegWildcardFindClose @ 0x1408EC7C0 (AslRegWildcardFindClose.c)
 *     AslRegWildcardFindFirst @ 0x1408EC840 (AslRegWildcardFindFirst.c)
 *     AslRegWildcardFindNext @ 0x1408EC908 (AslRegWildcardFindNext.c)
 */

__int64 __fastcall SdbpCheckMatchingWildcardRegistryEntry(
        __int64 a1,
        wchar_t *a2,
        int a3,
        WCHAR *a4,
        int a5,
        __int64 a6,
        void *Buf1,
        size_t Size,
        _DWORD *a9)
{
  HANDLE KeyHandle; // [rsp+50h] [rbp-38h] BYREF
  PVOID P; // [rsp+58h] [rbp-30h] BYREF

  P = 0LL;
  KeyHandle = 0LL;
  *a9 = 0;
  if ( (int)AslRegWildcardFindFirst(&KeyHandle, &P, a1) >= 0 )
  {
    while ( (!(unsigned int)SdbpCheckMatchingRegistryValue(KeyHandle, a2, a3, a4, a5, a6, Buf1, Size, a9) || !*a9)
         && (int)AslRegWildcardFindNext(&KeyHandle, P) >= 0 )
      ;
  }
  AslRegWildcardFindClose(P);
  return 1LL;
}
