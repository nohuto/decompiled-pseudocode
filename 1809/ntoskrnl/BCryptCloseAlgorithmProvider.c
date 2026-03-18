/*
 * XREFs of BCryptCloseAlgorithmProvider @ 0x140181D20
 * Callers:
 *     SecureDump_Init @ 0x140180D20 (SecureDump_Init.c)
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x140286338 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SmCrEncCleanup @ 0x1406A3740 (SmCrEncCleanup.c)
 *     RtlGenerateClass5Guid @ 0x14073BEB0 (RtlGenerateClass5Guid.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExGetExtensionTable @ 0x14010DBE4 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall BCryptCloseAlgorithmProvider(BCRYPT_ALG_HANDLE hAlgorithm, ULONG dwFlags)
{
  NTSTATUS v3; // ebx
  unsigned __int64 ExtensionTable; // rax

  v3 = -1073741822;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  if ( ExtensionTable )
  {
    v3 = (*(__int64 (__fastcall **)(BCRYPT_ALG_HANDLE, _QWORD))(ExtensionTable + 32))(hAlgorithm, 0LL);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(SepBCryptExtensionHost + 64));
  }
  return v3;
}
