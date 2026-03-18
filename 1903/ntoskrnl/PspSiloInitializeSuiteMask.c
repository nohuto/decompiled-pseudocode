/*
 * XREFs of PspSiloInitializeSuiteMask @ 0x1408C5D08
 * Callers:
 *     PspSiloInitializeUserSharedData @ 0x1408C5F14 (PspSiloInitializeUserSharedData.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 *     ExGetSuiteMask @ 0x1407764C0 (ExGetSuiteMask.c)
 *     PspSiloGetMultiUserTsFromRegistry @ 0x1408C5B94 (PspSiloGetMultiUserTsFromRegistry.c)
 *     PspSiloGetSuiteMaskStringFromRegistry @ 0x1408C5C24 (PspSiloGetSuiteMaskStringFromRegistry.c)
 */

__int64 __fastcall PspSiloInitializeSuiteMask(__int64 a1)
{
  int SuiteMaskStringFromRegistry; // ebx
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+48h] [rbp+10h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
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
