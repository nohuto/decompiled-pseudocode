/*
 * XREFs of BCryptCreateHash @ 0x140692574
 * Callers:
 *     WbHashData @ 0x140692308 (WbHashData.c)
 *     RtlGenerateClass5Guid @ 0x14073D080 (RtlGenerateClass5Guid.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x14010DC6C (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14010DC84 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall BCryptCreateHash(
        BCRYPT_ALG_HANDLE hAlgorithm,
        BCRYPT_HASH_HANDLE *phHash,
        PUCHAR pbHashObject,
        ULONG cbHashObject,
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
    v11 = (*(__int64 (__fastcall **)(BCRYPT_ALG_HANDLE, BCRYPT_HASH_HANDLE *, PUCHAR, _QWORD, _QWORD, _DWORD, _DWORD))(ExtensionTable + 40))(
            hAlgorithm,
            phHash,
            pbHashObject,
            cbHashObject,
            0LL,
            0,
            0);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  }
  return v11;
}
