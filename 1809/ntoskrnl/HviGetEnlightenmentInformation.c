/*
 * XREFs of HviGetEnlightenmentInformation @ 0x14017D890
 * Callers:
 *     HvlGetImplementedPhysicalBits @ 0x14017D800 (HvlGetImplementedPhysicalBits.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x14017D8C4 (KiDetectHardwareSpecControlFeatures.c)
 *     HvlpDetermineEnlightenments @ 0x140278EA4 (HvlpDetermineEnlightenments.c)
 *     PopIsRunningInVm @ 0x1402D6FB0 (PopIsRunningInVm.c)
 *     HvlQueryDetailInfo @ 0x140818718 (HvlQueryDetailInfo.c)
 *     ExGetVMType @ 0x1408CFD8C (ExGetVMType.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x14017DD10 (HviIsHypervisorMicrosoftCompatible.c)
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
