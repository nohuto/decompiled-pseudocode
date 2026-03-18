/*
 * XREFs of PspSiloInitializeSuiteMask @ 0x1408C55E8
 * Callers:
 *     PspSiloInitializeUserSharedData @ 0x1408C57F4 (PspSiloInitializeUserSharedData.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     ExGetSuiteMask @ 0x140779AA0 (ExGetSuiteMask.c)
 *     PspSiloGetMultiUserTsFromRegistry @ 0x1408C5474 (PspSiloGetMultiUserTsFromRegistry.c)
 *     PspSiloGetSuiteMaskStringFromRegistry @ 0x1408C5504 (PspSiloGetSuiteMaskStringFromRegistry.c)
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
