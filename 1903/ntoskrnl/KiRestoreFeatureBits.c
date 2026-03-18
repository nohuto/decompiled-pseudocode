/*
 * XREFs of KiRestoreFeatureBits @ 0x14015F518
 * Callers:
 *     KeRestoreProcessorSpecificFeatures @ 0x14015F4B8 (KeRestoreProcessorSpecificFeatures.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1401806F0 (HviIsAnyHypervisorPresent.c)
 *     KeInitializeCatRegisters @ 0x140181FC8 (KeInitializeCatRegisters.c)
 *     KiCheckMicrocode @ 0x14059E9EC (KiCheckMicrocode.c)
 */

unsigned int KiRestoreFeatureBits()
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v1; // rcx
  unsigned int v2; // eax
  unsigned __int64 v3; // rdx
  char CpuType; // al
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned int result; // eax
  unsigned __int64 v8; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->CpuVendor == 2 )
    __writemsr(0x1A0u, KiIa32MiscEnable);
  v1 = 0x400000000LL;
  if ( (CurrentPrcb->FeatureBits & 0x400000000LL) != 0 )
  {
    v1 = 3221225731LL;
    __writemsr(0xC0000103, CurrentPrcb->GroupIndex | ((unsigned __int64)CurrentPrcb->Group << 8));
  }
  LOBYTE(v1) = CurrentPrcb->BpbCurrentSpecCtrl;
  if ( (_BYTE)v1 || (KeFeatureBits2 & 0x600) != 0 )
  {
    v2 = (unsigned __int8)v1;
    v1 = 72LL;
    __writemsr(0x48u, v2);
  }
  if ( (KeFeatureBits2 & 0x8000) != 0 )
  {
    v1 = 290LL;
    __writemsr(0x122u, CurrentPrcb->MsrIa32TsxCtrl);
  }
  KeInitializeCatRegisters(v1);
  v3 = 0LL;
  __writemsr(0x174u, 0LL);
  __writemsr(0x176u, 0LL);
  __writemsr(0x175u, 0LL);
  if ( CurrentPrcb->CpuVendor == 1 )
  {
    CpuType = CurrentPrcb->CpuType;
    if ( CpuType > 15 && CpuType != 17 && !(unsigned __int8)HviIsAnyHypervisorPresent(373LL, 0LL) )
    {
      v5 = __readmsr(0xC0011029) | 2;
      v3 = HIDWORD(v5);
      __writemsr(0xC0011029, v5);
    }
  }
  if ( KiFlushPcid && !VslVsmEnabled )
  {
    v6 = __readcr3();
    __writecr3(v6 | 2);
  }
  result = KiCheckMicrocode(CurrentPrcb, v3);
  if ( (CurrentPrcb->FeatureBits & 0x400000000000LL) != 0 )
  {
    v8 = __readmsr(0x5A1u);
    result = v8 & 0x7FFFFFFF;
    __writemsr(0x5A1u, result);
  }
  return result;
}
