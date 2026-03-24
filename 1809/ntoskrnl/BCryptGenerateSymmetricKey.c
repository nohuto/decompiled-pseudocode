/*
 * XREFs of BCryptGenerateSymmetricKey @ 0x14089B954
 * Callers:
 *     SecureDump_SymmetricEncryptionSetup @ 0x1402869E4 (SecureDump_SymmetricEncryptionSetup.c)
 *     SmCrEncStart @ 0x1408AE6F8 (SmCrEncStart.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x14010DBEC (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14010DC04 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall BCryptGenerateSymmetricKey(
        BCRYPT_ALG_HANDLE hAlgorithm,
        BCRYPT_KEY_HANDLE *phKey,
        PUCHAR pbKeyObject,
        ULONG cbKeyObject,
        PUCHAR pbSecret,
        ULONG cbSecret,
        ULONG dwFlags)
{
  NTSTATUS v11; // ebx
  unsigned __int64 ExtensionTable; // rax

  v11 = -1073741822;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  if ( ExtensionTable )
  {
    v11 = (*(__int64 (__fastcall **)(BCRYPT_ALG_HANDLE, BCRYPT_KEY_HANDLE *, PUCHAR, _QWORD, PUCHAR, ULONG, _DWORD))(ExtensionTable + 152))(
            hAlgorithm,
            phKey,
            pbKeyObject,
            cbKeyObject,
            pbSecret,
            cbSecret,
            0);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  }
  return v11;
}
