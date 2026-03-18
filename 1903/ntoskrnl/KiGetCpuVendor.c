/*
 * XREFs of KiGetCpuVendor @ 0x14059DB44
 * Callers:
 *     HvlpProcessIommu @ 0x140170ADC (HvlpProcessIommu.c)
 *     KiGetIptInfo @ 0x140195310 (KiGetIptInfo.c)
 *     KiGetProcessorSignature @ 0x14059FEFC (KiGetProcessorSignature.c)
 *     KiIsNXSupported @ 0x1405A30FC (KiIsNXSupported.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x1408F72F0 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1408F8214 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromRegistry @ 0x1408F8994 (EtwpRemoveMicroarchitecturalPmcFromRegistry.c)
 *     KiInitializeNxSupportDiscard @ 0x140A20A8C (KiInitializeNxSupportDiscard.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     strncmp @ 0x14019F550 (strncmp.c)
 */

__int64 KiGetCpuVendor()
{
  struct _KPRCB *CurrentPrcb; // r8
  char Str1_4[8]; // [rsp+24h] [rbp-1Ch] BYREF
  int v8; // [rsp+2Ch] [rbp-14h]

  _RAX = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentPrcb->VendorString[0] = 0;
  __asm { cpuid }
  *(_QWORD *)Str1_4 = __PAIR64__(_RDX, _RBX);
  v8 = _RCX;
  *(_QWORD *)CurrentPrcb->VendorString = __PAIR64__(_RDX, _RBX);
  *(_DWORD *)&CurrentPrcb->VendorString[8] = v8;
  CurrentPrcb->VendorString[12] = 0;
  if ( !strncmp(Str1_4, "AuthenticAMD", 0xCuLL) )
    return 1LL;
  if ( !strncmp(Str1_4, "GenuineIntel", 0xCuLL) )
    return 2LL;
  if ( !strncmp(Str1_4, "CentaurHauls", 0xCuLL) )
    return 3LL;
  return !strncmp(Str1_4, "HygonGenuine", 0xCuLL);
}
