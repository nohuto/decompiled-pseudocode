/*
 * XREFs of BCryptOpenAlgorithmProvider @ 0x14073C080
 * Callers:
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x140286438 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_SymmetricEncryptionSetup @ 0x1402869E4 (SecureDump_SymmetricEncryptionSetup.c)
 *     sub_14073BDF0 @ 0x14073BDF0 (sub_14073BDF0.c)
 *     RtlGenerateClass5Guid @ 0x14073BE90 (RtlGenerateClass5Guid.c)
 *     SmCrEncStart @ 0x1408AE6F8 (SmCrEncStart.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x14010DBEC (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14010DC04 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
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
