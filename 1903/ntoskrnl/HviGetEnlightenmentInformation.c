/*
 * XREFs of HviGetEnlightenmentInformation @ 0x14018B5D0
 * Callers:
 *     HvlGetImplementedPhysicalBits @ 0x14018B538 (HvlGetImplementedPhysicalBits.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x14018B604 (KiDetectHardwareSpecControlFeatures.c)
 *     HvlpDetermineEnlightenments @ 0x14028CF88 (HvlpDetermineEnlightenments.c)
 *     PopIsRunningInVm @ 0x1402F1928 (PopIsRunningInVm.c)
 *     HvlQueryDetailInfo @ 0x140851018 (HvlQueryDetailInfo.c)
 *     ExGetVMType @ 0x14090C0BC (ExGetVMType.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x14018B7F0 (HviIsHypervisorMicrosoftCompatible.c)
 */

__int64 __fastcall HviGetEnlightenmentInformation(_DWORD *a1)
{
  __int64 result; // rax

  result = HviIsHypervisorMicrosoftCompatible();
  if ( (_BYTE)result )
  {
    _RAX = 1073741828LL;
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
