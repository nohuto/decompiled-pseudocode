/*
 * XREFs of KeRestoreProcessorSpecificFeatures @ 0x140143744
 * Callers:
 *     PopHandleNextState @ 0x140569410 (PopHandleNextState.c)
 *     PnprQuiesceProcessorDpc @ 0x14057A350 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     KiRestoreFeatureBits @ 0x1401437A4 (KiRestoreFeatureBits.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     KiDisableCacheErrataSource @ 0x14029A420 (KiDisableCacheErrataSource.c)
 *     KiRestoreXSaveSupport @ 0x140569A0C (KiRestoreXSaveSupport.c)
 *     KiSetPageAttributesTable @ 0x14056E464 (KiSetPageAttributesTable.c)
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
