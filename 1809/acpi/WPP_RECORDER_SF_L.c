/*
 * XREFs of WPP_RECORDER_SF_L @ 0x1C00025B8
 * Callers:
 *     ACPIBuildDeviceExtension @ 0x1C001B100 (ACPIBuildDeviceExtension.c)
 *     ACPIDeviceRecordDependencies @ 0x1C0028878 (ACPIDeviceRecordDependencies.c)
 *     ACPIDeviceDiscoverDependencies @ 0x1C0028A64 (ACPIDeviceDiscoverDependencies.c)
 *     ACPIPowerNodeDiscoverDependencies @ 0x1C0028B04 (ACPIPowerNodeDiscoverDependencies.c)
 *     ACPIBuildPowerResourceExtension @ 0x1C002CE3C (ACPIBuildPowerResourceExtension.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C002D678 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     OSOpenHandle @ 0x1C008D2B4 (OSOpenHandle.c)
 *     OSOpenUnicodeHandle @ 0x1C008D33C (OSOpenUnicodeHandle.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1C008D3EC (ACPIRegReadAMLRegistryEntry.c)
 *     PnpCmResourcesToBiosResources @ 0x1C008E450 (PnpCmResourcesToBiosResources.c)
 *     ACPIBusIrpStartDevice @ 0x1C008E9D0 (ACPIBusIrpStartDevice.c)
 *     ACPIFilterIrpStartDevice @ 0x1C008EF70 (ACPIFilterIrpStartDevice.c)
 *     OSCreateHandle @ 0x1C0093C84 (OSCreateHandle.c)
 *     OSWriteRegValue @ 0x1C0093D78 (OSWriteRegValue.c)
 *     OSReadRegValue @ 0x1C00945C8 (OSReadRegValue.c)
 *     PnpBiosResourcesToNtResources @ 0x1C0099A10 (PnpBiosResourcesToNtResources.c)
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1C009A0DC (PnpiBiosAddressDoubleToIoDescriptor.c)
 *     ACPIProcessHardwareInformation @ 0x1C009BB88 (ACPIProcessHardwareInformation.c)
 *     PnpiBiosAddressToIoDescriptor @ 0x1C009F444 (PnpiBiosAddressToIoDescriptor.c)
 *     ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1C00AE314 (ACPIRegGetTableFromSimulatorRegistryEntry.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1C00AF5C0 (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1C00AF9C0 (PnpiBiosAddressQuadToIoDescriptor.c)
 *     OSReadAcpiConfigurationData @ 0x1C00B8204 (OSReadAcpiConfigurationData.c)
 *     ACPIInitializeAMLI @ 0x1C00B8A7C (ACPIInitializeAMLI.c)
 *     OSInterruptVector @ 0x1C00B9728 (OSInterruptVector.c)
 *     ACPILoadProcessRSDT @ 0x1C00BA420 (ACPILoadProcessRSDT.c)
 *     ACPILoadProcessFACS @ 0x1C00BA7D4 (ACPILoadProcessFACS.c)
 *     ACPIDispatchAddDevice @ 0x1C00BA890 (ACPIDispatchAddDevice.c)
 *     ACPIInitialize @ 0x1C00BAE7C (ACPIInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
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
