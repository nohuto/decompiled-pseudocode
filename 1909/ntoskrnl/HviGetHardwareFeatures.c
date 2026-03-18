/*
 * XREFs of HviGetHardwareFeatures @ 0x1403437E0
 * Callers:
 *     HvlSvmGetSystemCapabilities @ 0x140289D20 (HvlSvmGetSystemCapabilities.c)
 *     HvlpDetermineEnlightenments @ 0x14028CCE8 (HvlpDetermineEnlightenments.c)
 *     HvipApertureDetectParameters @ 0x14031ADF8 (HvipApertureDetectParameters.c)
 *     HviIsIommuInUse @ 0x1403439F0 (HviIsIommuInUse.c)
 *     HvlQueryVsmProtectionInfo @ 0x14072EB44 (HvlQueryVsmProtectionInfo.c)
 *     HvlQueryDetailInfo @ 0x140850718 (HvlQueryDetailInfo.c)
 *     EtwpTraceSystemInitialization @ 0x140A16090 (EtwpTraceSystemInitialization.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     HviGetHypervisorVendorAndMaxFunction @ 0x140343860 (HviGetHypervisorVendorAndMaxFunction.c)
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
