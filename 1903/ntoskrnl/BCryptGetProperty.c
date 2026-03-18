/*
 * XREFs of BCryptGetProperty @ 0x1406AE828
 * Callers:
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x14029B798 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_SymmetricEncryptionSetup @ 0x14029BD44 (SecureDump_SymmetricEncryptionSetup.c)
 *     WbHashData @ 0x1406AE70C (WbHashData.c)
 *     RtlGenerateClass5Guid @ 0x1407542A0 (RtlGenerateClass5Guid.c)
 *     SmCrEncStart @ 0x1408EB6F8 (SmCrEncStart.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x1400FB6A8 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x1400FB6C0 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
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
