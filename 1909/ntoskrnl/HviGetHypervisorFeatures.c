/*
 * XREFs of HviGetHypervisorFeatures @ 0x14018BF20
 * Callers:
 *     KiDetectHardwareSpecControlFeatures @ 0x14018BF94 (KiDetectHardwareSpecControlFeatures.c)
 *     HvlpTryConfigureInterface @ 0x14019CD08 (HvlpTryConfigureInterface.c)
 *     HvlSvmGetSystemCapabilities @ 0x140289D20 (HvlSvmGetSystemCapabilities.c)
 *     HvlpDetermineEnlightenments @ 0x14028CCE8 (HvlpDetermineEnlightenments.c)
 *     PopIsRunningInVm @ 0x1402F1688 (PopIsRunningInVm.c)
 *     HvipApertureDetectParameters @ 0x14031ADF8 (HvipApertureDetectParameters.c)
 *     HviGetIptFeatures @ 0x140343944 (HviGetIptFeatures.c)
 *     KiInitializeKernel @ 0x1405A1220 (KiInitializeKernel.c)
 *     HvlQueryDetailInfo @ 0x140850718 (HvlQueryDetailInfo.c)
 *     ExGetVMType @ 0x14090BB1C (ExGetVMType.c)
 *     EtwpTraceSystemInitialization @ 0x140A16090 (EtwpTraceSystemInitialization.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x14018C180 (HviIsHypervisorMicrosoftCompatible.c)
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
