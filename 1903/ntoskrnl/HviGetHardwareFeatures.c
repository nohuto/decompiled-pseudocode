/*
 * XREFs of HviGetHardwareFeatures @ 0x140343D80
 * Callers:
 *     HvlSvmGetSystemCapabilities @ 0x140289FC0 (HvlSvmGetSystemCapabilities.c)
 *     HvlpDetermineEnlightenments @ 0x14028CF88 (HvlpDetermineEnlightenments.c)
 *     HvipApertureDetectParameters @ 0x14031B3A8 (HvipApertureDetectParameters.c)
 *     HviIsIommuInUse @ 0x140343F90 (HviIsIommuInUse.c)
 *     HvlQueryVsmProtectionInfo @ 0x14072CCA4 (HvlQueryVsmProtectionInfo.c)
 *     HvlQueryDetailInfo @ 0x140851018 (HvlQueryDetailInfo.c)
 *     EtwpTraceSystemInitialization @ 0x140A15EB0 (EtwpTraceSystemInitialization.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     HviGetHypervisorVendorAndMaxFunction @ 0x140343E00 (HviGetHypervisorVendorAndMaxFunction.c)
 */

__int64 __fastcall HviGetHardwareFeatures(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  _QWORD v10[2]; // [rsp+20h] [rbp-28h] BYREF

  v10[0] = 0LL;
  v10[1] = 0LL;
  HviGetHypervisorVendorAndMaxFunction(v10, a2, a3, a4);
  _RAX = 1073741830LL;
  if ( LODWORD(v10[0]) < 0x40000006 )
  {
    result = 0LL;
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  else
  {
    __asm { cpuid }
    *(_DWORD *)a1 = result;
    *(_DWORD *)(a1 + 4) = _RBX;
    *(_DWORD *)(a1 + 8) = _RCX;
    *(_DWORD *)(a1 + 12) = _RDX;
  }
  return result;
}
