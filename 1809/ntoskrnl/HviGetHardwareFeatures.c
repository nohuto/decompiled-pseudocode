/*
 * XREFs of HviGetHardwareFeatures @ 0x140322350
 * Callers:
 *     HvlSvmGetSystemCapabilities @ 0x140275E40 (HvlSvmGetSystemCapabilities.c)
 *     HvlpDetermineEnlightenments @ 0x140278CB4 (HvlpDetermineEnlightenments.c)
 *     HvipApertureDetectParameters @ 0x1402FC804 (HvipApertureDetectParameters.c)
 *     HviIsIommuInUse @ 0x1403224B0 (HviIsIommuInUse.c)
 *     HvlQueryDetailInfo @ 0x140817518 (HvlQueryDetailInfo.c)
 *     HvlQueryVsmProtectionInfo @ 0x140817634 (HvlQueryVsmProtectionInfo.c)
 *     EtwpTraceSystemInitialization @ 0x1409D1A58 (EtwpTraceSystemInitialization.c)
 * Callees:
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     HviGetHypervisorVendorAndMaxFunction @ 0x1403223C0 (HviGetHypervisorVendorAndMaxFunction.c)
 */

__int64 __fastcall HviGetHardwareFeatures(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  unsigned int v10[4]; // [rsp+20h] [rbp-28h] BYREF

  HviGetHypervisorVendorAndMaxFunction(v10, a2, a3, a4);
  _RAX = 1073741830LL;
  if ( v10[0] < 0x40000006 )
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
