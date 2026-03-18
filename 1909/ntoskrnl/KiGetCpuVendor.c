/*
 * XREFs of KiGetCpuVendor @ 0x14059DB24
 * Callers:
 *     HvlpProcessIommu @ 0x1401711CC (HvlpProcessIommu.c)
 *     KiGetIptInfo @ 0x140195AF0 (KiGetIptInfo.c)
 *     KiGetProcessorSignature @ 0x14059FEDC (KiGetProcessorSignature.c)
 *     KiIsNXSupported @ 0x1405A30DC (KiIsNXSupported.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x1408F6C60 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1408F7BF8 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromRegistry @ 0x1408F8378 (EtwpRemoveMicroarchitecturalPmcFromRegistry.c)
 *     KiInitializeNxSupportDiscard @ 0x140A20C6C (KiInitializeNxSupportDiscard.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     strncmp @ 0x14019FC70 (strncmp.c)
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
