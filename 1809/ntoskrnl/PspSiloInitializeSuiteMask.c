/*
 * XREFs of PspSiloInitializeSuiteMask @ 0x14088796C
 * Callers:
 *     PspSiloInitializeUserSharedData @ 0x140887B58 (PspSiloInitializeUserSharedData.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x140623790 (RtlFreeAnsiString.c)
 *     ExGetSuiteMask @ 0x1407550F0 (ExGetSuiteMask.c)
 *     PspSiloGetMultiUserTsFromRegistry @ 0x1408877F8 (PspSiloGetMultiUserTsFromRegistry.c)
 *     PspSiloGetSuiteMaskStringFromRegistry @ 0x140887888 (PspSiloGetSuiteMaskStringFromRegistry.c)
 */

__int64 __fastcall PspSiloInitializeSuiteMask(__int64 a1)
{
  int SuiteMaskStringFromRegistry; // ebx
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+48h] [rbp+10h] BYREF

  SuiteMaskStringFromRegistry = PspSiloGetSuiteMaskStringFromRegistry(&UnicodeString);
  if ( SuiteMaskStringFromRegistry >= 0 )
  {
    SuiteMaskStringFromRegistry = PspSiloGetMultiUserTsFromRegistry(&v5);
    if ( SuiteMaskStringFromRegistry >= 0 )
      *(_DWORD *)(a1 + 20) = ExGetSuiteMask((__int64)UnicodeString.Buffer, v5);
    if ( UnicodeString.Buffer )
      RtlFreeAnsiString(&UnicodeString);
  }
  return (unsigned int)SuiteMaskStringFromRegistry;
}
