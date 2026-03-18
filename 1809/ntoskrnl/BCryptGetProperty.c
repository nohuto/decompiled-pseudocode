/*
 * XREFs of BCryptGetProperty @ 0x140691284
 * Callers:
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x140286338 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_SymmetricEncryptionSetup @ 0x1402868E4 (SecureDump_SymmetricEncryptionSetup.c)
 *     WbHashData @ 0x140691168 (WbHashData.c)
 *     RtlGenerateClass5Guid @ 0x14073BEB0 (RtlGenerateClass5Guid.c)
 *     SmCrEncStart @ 0x1408AE718 (SmCrEncStart.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x14010DBCC (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14010DBE4 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall BCryptGetProperty(
        BCRYPT_HANDLE hObject,
        LPCWSTR pszProperty,
        PUCHAR pbOutput,
        ULONG cbOutput,
        ULONG *pcbResult,
        ULONG dwFlags)
{
  NTSTATUS v9; // ebx
  unsigned __int64 ExtensionTable; // rax

  v9 = -1073741822;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  if ( ExtensionTable )
  {
    v9 = (*(__int64 (__fastcall **)(BCRYPT_HANDLE, LPCWSTR, PUCHAR, __int64, ULONG *, _DWORD))(ExtensionTable + 168))(
           hObject,
           pszProperty,
           pbOutput,
           4LL,
           pcbResult,
           0);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  }
  return v9;
}
