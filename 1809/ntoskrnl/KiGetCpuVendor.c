/*
 * XREFs of KiGetCpuVendor @ 0x1405706EC
 * Callers:
 *     HvlpProcessIommu @ 0x140278384 (HvlpProcessIommu.c)
 *     KiGetIptInfo @ 0x140294728 (KiGetIptInfo.c)
 *     KiIsNXSupported @ 0x1405705E0 (KiIsNXSupported.c)
 *     KiGetProcessorSignature @ 0x14057062C (KiGetProcessorSignature.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x1408BBA60 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1408BC920 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromRegistry @ 0x1408BD034 (EtwpRemoveMicroarchitecturalPmcFromRegistry.c)
 *     KiInitializeNxSupportDiscard @ 0x1409B0820 (KiInitializeNxSupportDiscard.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     strncmp @ 0x140194F40 (strncmp.c)
 */

__int64 KiGetCpuVendor()
{
  struct _KPRCB *CurrentPrcb; // r8
  char Str1[8]; // [rsp+24h] [rbp-24h] BYREF
  int v8; // [rsp+2Ch] [rbp-1Ch]

  CurrentPrcb = KeGetCurrentPrcb();
  _RAX = 0LL;
  __asm { cpuid }
  CurrentPrcb->VendorString[0] = 0;
  *(_QWORD *)Str1 = __PAIR64__(_RDX, _RBX);
  v8 = _RCX;
  *(_QWORD *)CurrentPrcb->VendorString = __PAIR64__(_RDX, _RBX);
  *(_DWORD *)&CurrentPrcb->VendorString[8] = v8;
  CurrentPrcb->VendorString[12] = 0;
  if ( !strncmp(Str1, "AuthenticAMD", 0xCuLL) )
    return 1LL;
  if ( !strncmp(Str1, "GenuineIntel", 0xCuLL) )
    return 2LL;
  if ( !strncmp(Str1, "CentaurHauls", 0xCuLL) )
    return 3LL;
  return !strncmp(Str1, "HygonGenuine", 0xCuLL);
}
