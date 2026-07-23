/*
 * XREFs of KiRestoreFeatureBits @ 0x1401438A4
 * Callers:
 *     KeRestoreProcessorSpecificFeatures @ 0x140143844 (KeRestoreProcessorSpecificFeatures.c)
 * Callees:
 *     KeInitializeCatRegisters @ 0x1401439E0 (KeInitializeCatRegisters.c)
 *     KiSetVirtualMitigationControl @ 0x1401B49B4 (KiSetVirtualMitigationControl.c)
 *     KiApplyProcessorErrata @ 0x1401B4A28 (KiApplyProcessorErrata.c)
 *     KiCheckMicrocode @ 0x14056FFB8 (KiCheckMicrocode.c)
 */

unsigned int KiRestoreFeatureBits()
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int16 BpbCurrentSpecCtrl; // cx
  unsigned __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned __int64 MsrIa32TsxCtrl; // rax
  unsigned __int64 v5; // rax
  unsigned int result; // eax
  unsigned __int64 v7; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->CpuVendor == 2 )
    __writemsr(0x1A0u, KiIa32MiscEnable);
  if ( (CurrentPrcb->FeatureBits & 0x400000000LL) != 0 )
    __writemsr(0xC0000103, CurrentPrcb->GroupIndex | ((unsigned __int64)CurrentPrcb->Group << 8));
  BpbCurrentSpecCtrl = CurrentPrcb->BpbCurrentSpecCtrl;
  if ( BpbCurrentSpecCtrl || (KeFeatureBits2 & 0x600) != 0 )
    __writemsr(0x48u, BpbCurrentSpecCtrl);
  KiSetVirtualMitigationControl(CurrentPrcb);
  if ( (KeFeatureBits2 & 0x8000) != 0 )
  {
    v3 = 290LL;
    MsrIa32TsxCtrl = CurrentPrcb->MsrIa32TsxCtrl;
    v2 = HIDWORD(MsrIa32TsxCtrl);
    __writemsr(0x122u, MsrIa32TsxCtrl);
  }
  KeInitializeCatRegisters(v3, v2);
  __writemsr(0x174u, 0LL);
  __writemsr(0x176u, 0LL);
  __writemsr(0x175u, 0LL);
  KiApplyProcessorErrata(CurrentPrcb, 0LL);
  if ( KiFlushPcid && !VslVsmEnabled )
  {
    v5 = __readcr3();
    __writecr3(v5 | 2);
  }
  result = KiCheckMicrocode(CurrentPrcb);
  if ( (CurrentPrcb->FeatureBits & 0x400000000000LL) != 0 )
  {
    v7 = __readmsr(0x5A1u);
    result = v7 & 0x7FFFFFFF;
    __writemsr(0x5A1u, result);
  }
  return result;
}
