/*
 * XREFs of BCryptOpenAlgorithmProvider @ 0x14073C0A0
 * Callers:
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x140286338 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_SymmetricEncryptionSetup @ 0x1402868E4 (SecureDump_SymmetricEncryptionSetup.c)
 *     sub_14073BE10 @ 0x14073BE10 (sub_14073BE10.c)
 *     RtlGenerateClass5Guid @ 0x14073BEB0 (RtlGenerateClass5Guid.c)
 *     SmCrEncStart @ 0x1408AE718 (SmCrEncStart.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x14010DBCC (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14010DBE4 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall BCryptOpenAlgorithmProvider(
        BCRYPT_ALG_HANDLE *phAlgorithm,
        LPCWSTR pszAlgId,
        LPCWSTR pszImplementation,
        ULONG dwFlags)
{
  NTSTATUS v8; // ebx
  unsigned __int64 ExtensionTable; // rax

  v8 = -1073741822;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  if ( ExtensionTable )
  {
    v8 = (*(__int64 (__fastcall **)(BCRYPT_ALG_HANDLE *, LPCWSTR, LPCWSTR, _QWORD))(ExtensionTable + 200))(
           phAlgorithm,
           pszAlgId,
           pszImplementation,
           dwFlags);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  }
  return v8;
}
