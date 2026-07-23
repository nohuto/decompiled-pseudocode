/*
 * XREFs of HviGetHypervisorFeatures @ 0x14017D850
 * Callers:
 *     HvlpTryConfigureInterface @ 0x14017C468 (HvlpTryConfigureInterface.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x14017D8C4 (KiDetectHardwareSpecControlFeatures.c)
 *     KiIsHyperVCr3RspErrataPresent @ 0x1401B4DE8 (KiIsHyperVCr3RspErrataPresent.c)
 *     HvlSvmGetSystemCapabilities @ 0x140276030 (HvlSvmGetSystemCapabilities.c)
 *     HvlpDetermineEnlightenments @ 0x140278EA4 (HvlpDetermineEnlightenments.c)
 *     PopIsRunningInVm @ 0x1402D6FB0 (PopIsRunningInVm.c)
 *     HvipApertureDetectParameters @ 0x1402FC9F4 (HvipApertureDetectParameters.c)
 *     KiInitializeKernel @ 0x140572310 (KiInitializeKernel.c)
 *     HvlQueryDetailInfo @ 0x140818718 (HvlQueryDetailInfo.c)
 *     ExGetVMType @ 0x1408CFD8C (ExGetVMType.c)
 *     EtwpTraceSystemInitialization @ 0x1409D2A58 (EtwpTraceSystemInitialization.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x14017DD10 (HviIsHypervisorMicrosoftCompatible.c)
 */

__int64 __fastcall HviGetHypervisorFeatures(_DWORD *a1)
{
  __int64 result; // rax

  result = HviIsHypervisorMicrosoftCompatible();
  if ( (_BYTE)result )
  {
    _RAX = 1073741827LL;
    __asm { cpuid }
    *a1 = result;
    a1[1] = _RBX;
    a1[2] = _RCX;
    a1[3] = _RDX;
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *((_QWORD *)a1 + 1) = 0LL;
  }
  return result;
}
