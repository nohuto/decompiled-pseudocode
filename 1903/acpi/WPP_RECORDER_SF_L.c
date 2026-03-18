/*
 * XREFs of WPP_RECORDER_SF_L @ 0x1C0001A78
 * Callers:
 *     ACPIBuildDeviceExtension @ 0x1C00104F4 (ACPIBuildDeviceExtension.c)
 *     ACPIDeviceDiscoverDependencies @ 0x1C0027D54 (ACPIDeviceDiscoverDependencies.c)
 *     ACPIPowerNodeDiscoverDependencies @ 0x1C0027DF4 (ACPIPowerNodeDiscoverDependencies.c)
 *     ACPIDispatchAddDevice @ 0x1C002CF60 (ACPIDispatchAddDevice.c)
 *     ACPIBuildPowerResourceExtension @ 0x1C002D880 (ACPIBuildPowerResourceExtension.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C002E608 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     OSOpenHandle @ 0x1C008F2F0 (OSOpenHandle.c)
 *     OSOpenUnicodeHandle @ 0x1C008F38C (OSOpenUnicodeHandle.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1C008F42C (ACPIRegReadAMLRegistryEntry.c)
 *     OSReadRegValue @ 0x1C0090BC8 (OSReadRegValue.c)
 *     ACPIFilterIrpStartDevice @ 0x1C0093BE0 (ACPIFilterIrpStartDevice.c)
 *     PnpBiosResourcesToNtResources @ 0x1C0095CE4 (PnpBiosResourcesToNtResources.c)
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1C00964A4 (PnpiBiosAddressDoubleToIoDescriptor.c)
 *     OSCreateHandle @ 0x1C009C988 (OSCreateHandle.c)
 *     OSWriteRegValue @ 0x1C009CA98 (OSWriteRegValue.c)
 *     ACPIProcessHardwareInformation @ 0x1C009CD70 (ACPIProcessHardwareInformation.c)
 *     PnpiBiosAddressToIoDescriptor @ 0x1C00A172C (PnpiBiosAddressToIoDescriptor.c)
 *     PnpCmResourcesToBiosResources @ 0x1C00A215C (PnpCmResourcesToBiosResources.c)
 *     ACPIBusIrpStartDevice @ 0x1C00A2450 (ACPIBusIrpStartDevice.c)
 *     ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1C00B1B14 (ACPIRegGetTableFromSimulatorRegistryEntry.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1C00B2E88 (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1C00B32E0 (PnpiBiosAddressQuadToIoDescriptor.c)
 *     ACPIInitializeAMLI @ 0x1C00BC504 (ACPIInitializeAMLI.c)
 *     OSReadAcpiConfigurationData @ 0x1C00BD1D0 (OSReadAcpiConfigurationData.c)
 *     ACPILoadProcessFACS @ 0x1C00BD728 (ACPILoadProcessFACS.c)
 *     ACPILoadProcessRSDT @ 0x1C00BDC94 (ACPILoadProcessRSDT.c)
 *     ACPIInitialize @ 0x1C00BE114 (ACPIInitialize.c)
 *     OSInterruptVector @ 0x1C00BE308 (OSInterruptVector.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_L(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v8; // rdi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-38h]
  va_list va; // [rsp+88h] [rbp+30h] BYREF

  va_start(va, a5);
  v8 = (unsigned __int64)a3 >> 16;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v8 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v8 + 1) >= a2 )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v8),
      43LL,
      a5,
      a4,
      va,
      4LL,
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v12, va, 4LL, 0LL);
}
