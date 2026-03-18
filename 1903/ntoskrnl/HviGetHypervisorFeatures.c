/*
 * XREFs of HviGetHypervisorFeatures @ 0x14018B590
 * Callers:
 *     KiDetectHardwareSpecControlFeatures @ 0x14018B604 (KiDetectHardwareSpecControlFeatures.c)
 *     HvlpTryConfigureInterface @ 0x14019C588 (HvlpTryConfigureInterface.c)
 *     HvlSvmGetSystemCapabilities @ 0x140289FC0 (HvlSvmGetSystemCapabilities.c)
 *     HvlpDetermineEnlightenments @ 0x14028CF88 (HvlpDetermineEnlightenments.c)
 *     PopIsRunningInVm @ 0x1402F1928 (PopIsRunningInVm.c)
 *     HvipApertureDetectParameters @ 0x14031B3A8 (HvipApertureDetectParameters.c)
 *     HviGetIptFeatures @ 0x140343EE4 (HviGetIptFeatures.c)
 *     KiInitializeKernel @ 0x1405A1240 (KiInitializeKernel.c)
 *     HvlQueryDetailInfo @ 0x140851018 (HvlQueryDetailInfo.c)
 *     ExGetVMType @ 0x14090C0BC (ExGetVMType.c)
 *     EtwpTraceSystemInitialization @ 0x140A15EB0 (EtwpTraceSystemInitialization.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x14018B7F0 (HviIsHypervisorMicrosoftCompatible.c)
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
