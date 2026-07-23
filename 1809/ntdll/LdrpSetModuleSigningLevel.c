/*
 * XREFs of LdrpSetModuleSigningLevel @ 0x18008F4E0
 * Callers:
 *     LdrpMapDllNtFileName @ 0x18002ABA0 (LdrpMapDllNtFileName.c)
 *     LdrpValidateIntegrityContinuity @ 0x180086FF0 (LdrpValidateIntegrityContinuity.c)
 * Callees:
 *     NtCompareSigningLevels @ 0x1800A1630 (NtCompareSigningLevels.c)
 *     NtGetCachedSigningLevel @ 0x1800A2030 (NtGetCachedSigningLevel.c)
 *     ZwSetCachedSigningLevel @ 0x1800A3330 (ZwSetCachedSigningLevel.c)
 */

__int64 __fastcall LdrpSetModuleSigningLevel(void *a1, __int64 a2, ULONG *a3, SE_SIGNING_LEVEL a4, _BYTE *a5)
{
  SE_SIGNING_LEVEL *v5; // rsi
  _BYTE *v6; // r14
  NTSTATUS CachedSigningLevel; // ebx
  HANDLE SourceFiles; // [rsp+40h] [rbp+8h] BYREF

  SourceFiles = a1;
  v5 = (SE_SIGNING_LEVEL *)(a2 + 284);
  v6 = a5;
  *a5 = 0;
  CachedSigningLevel = NtGetCachedSigningLevel(a1, a3, (PSE_SIGNING_LEVEL)(a2 + 284), 0LL, 0LL, 0LL);
  if ( CachedSigningLevel < 0 || NtCompareSigningLevels(*v5, a4) < 0 )
  {
    CachedSigningLevel = ZwSetCachedSigningLevel(4u, a4, &SourceFiles, 1u, SourceFiles);
    if ( CachedSigningLevel < 0 )
      *v6 = 1;
    else
      *v5 = a4;
  }
  return (unsigned int)CachedSigningLevel;
}
