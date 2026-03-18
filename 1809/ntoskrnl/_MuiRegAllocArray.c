/*
 * XREFs of _MuiRegAllocArray @ 0x14018254C
 * Callers:
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x140182840 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     RtlpLoadInstallLanguageFallback @ 0x14073C9E4 (RtlpLoadInstallLanguageFallback.c)
 *     _RtlpMuiRegValidateInstalled @ 0x14073E4D0 (_RtlpMuiRegValidateInstalled.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x14073EB20 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x140906A38 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1409071B0 (RtlpMuiRegLangInfoMatchesSpec.c)
 * Callees:
 *     memset @ 0x1401D1780 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall MuiRegAllocArray(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rax
  unsigned int v4; // esi
  PVOID PoolWithTag; // rax
  PVOID v6; // rdi

  v2 = 0LL;
  v3 = 2LL * a2;
  if ( v3 <= 0xFFFFFFFF && (_DWORD)v3 )
  {
    v4 = 2 * a2;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v3, 0x72746C6Du);
    v6 = PoolWithTag;
    if ( PoolWithTag )
      memset(PoolWithTag, 0, v4);
    return v6;
  }
  return (PVOID)v2;
}
