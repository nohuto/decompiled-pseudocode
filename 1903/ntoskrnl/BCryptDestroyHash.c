/*
 * XREFs of BCryptDestroyHash @ 0x1406AE8B4
 * Callers:
 *     WbHashData @ 0x1406AE70C (WbHashData.c)
 *     RtlGenerateClass5Guid @ 0x1407542A0 (RtlGenerateClass5Guid.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x1400FB6A8 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x1400FB6C0 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall BCryptDestroyHash(BCRYPT_HASH_HANDLE hHash)
{
  NTSTATUS v2; // ebx
  unsigned __int64 ExtensionTable; // rax

  v2 = -1073741822;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  if ( ExtensionTable )
  {
    v2 = (*(__int64 (__fastcall **)(BCRYPT_HASH_HANDLE))(ExtensionTable + 56))(hHash);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  }
  return v2;
}
