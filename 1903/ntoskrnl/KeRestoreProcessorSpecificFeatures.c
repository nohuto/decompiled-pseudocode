/*
 * XREFs of KeRestoreProcessorSpecificFeatures @ 0x14015F4B8
 * Callers:
 *     PopHandleNextState @ 0x140598DD0 (PopHandleNextState.c)
 *     PnprQuiesceProcessorDpc @ 0x1405AA190 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     KiRestoreFeatureBits @ 0x14015F518 (KiRestoreFeatureBits.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiDisableCacheErrataSource @ 0x1402B1720 (KiDisableCacheErrataSource.c)
 *     KiRestoreXSaveSupport @ 0x14059A6EC (KiRestoreXSaveSupport.c)
 *     KiSetPageAttributesTable @ 0x14059DC10 (KiSetPageAttributesTable.c)
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
