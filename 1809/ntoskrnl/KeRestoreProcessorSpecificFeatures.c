/*
 * XREFs of KeRestoreProcessorSpecificFeatures @ 0x140143844
 * Callers:
 *     PopHandleNextState @ 0x14056A410 (PopHandleNextState.c)
 *     PnprQuiesceProcessorDpc @ 0x14057B350 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     KiRestoreFeatureBits @ 0x1401438A4 (KiRestoreFeatureBits.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiDisableCacheErrataSource @ 0x14029A610 (KiDisableCacheErrataSource.c)
 *     KiRestoreXSaveSupport @ 0x14056AA0C (KiRestoreXSaveSupport.c)
 *     KiSetPageAttributesTable @ 0x14056F464 (KiSetPageAttributesTable.c)
 */

__int64 KeRestoreProcessorSpecificFeatures()
{
  unsigned __int64 v6; // rax

  KiSetPageAttributesTable();
  if ( KiTLBCOverride )
    KiDisableCacheErrataSource();
  _RAX = 2147483649LL;
  __asm { cpuid }
  if ( (_RDX & 0x2000000) != 0 )
  {
    _RCX = 3221225600LL;
    v6 = __readmsr(0xC0000080) | 0x4000;
    _RDX = HIDWORD(v6);
    __writemsr(0xC0000080, v6);
  }
  KiRestoreXSaveSupport(_RCX, _RDX);
  return KiRestoreFeatureBits();
}
