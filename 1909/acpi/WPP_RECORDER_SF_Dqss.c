/*
 * XREFs of WPP_RECORDER_SF_Dqss @ 0x1C001A938
 * Callers:
 *     ACPIProcessorStartDevice @ 0x1C0007460 (ACPIProcessorStartDevice.c)
 *     ACPIFanPowerCallback @ 0x1C0007680 (ACPIFanPowerCallback.c)
 *     ACPIInitDosDeviceName @ 0x1C000B17C (ACPIInitDosDeviceName.c)
 *     ACPIInitStartDevice @ 0x1C000BF1C (ACPIInitStartDevice.c)
 *     ACPIBuildProcessSpecialSynchronizationList @ 0x1C001CC84 (ACPIBuildProcessSpecialSynchronizationList.c)
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C0021EFC (ACPIWakeRemoveDevicesAndUpdate.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C0022A70 (PciConfigSpaceHandlerWorker.c)
 *     ACPIInternalRegisterPowerCallBack @ 0x1C00248B8 (ACPIInternalRegisterPowerCallBack.c)
 *     ACPISystemPowerUpdateDeviceCapabilities @ 0x1C0027000 (ACPISystemPowerUpdateDeviceCapabilities.c)
 *     ACPIBuildProcessorExtension @ 0x1C002C704 (ACPIBuildProcessorExtension.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C002F19C (ACPIWakeEnableDisableAsync.c)
 *     ACPIBuildThermalZoneExtension @ 0x1C002F77C (ACPIBuildThermalZoneExtension.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C002FDA0 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPICMButtonNotify @ 0x1C004E488 (ACPICMButtonNotify.c)
 *     ACPICMExperienceButtonHandleEvent @ 0x1C004E8EC (ACPICMExperienceButtonHandleEvent.c)
 *     ACPICMLidPowerStateCallBack @ 0x1C004E9C0 (ACPICMLidPowerStateCallBack.c)
 *     ACPIFanEvent @ 0x1C0054EF0 (ACPIFanEvent.c)
 *     ACPIFanFSTCallback @ 0x1C0054FC0 (ACPIFanFSTCallback.c)
 *     ACPIInitDeleteDeviceExtension @ 0x1C0056058 (ACPIInitDeleteDeviceExtension.c)
 *     ACPIInternalEvaluateOST @ 0x1C00568FC (ACPIInternalEvaluateOST.c)
 *     ACPIRootEvent @ 0x1C005E740 (ACPIRootEvent.c)
 *     ACPIProcessorGetInitialApicId @ 0x1C0091424 (ACPIProcessorGetInitialApicId.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_Dqss(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        char a7,
        const char *a8,
        const char *a9)
{
  __int64 v10; // rdi
  __int64 v12; // rsi
  unsigned __int64 v14; // r14
  __int64 v15; // rbx
  int v16; // eax
  unsigned __int8 v17; // cf
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v21; // r8
  const char *v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rdx
  const char *v25; // rcx
  int v26; // [rsp+20h] [rbp-78h]
  __int64 v27; // [rsp+A0h] [rbp+8h]

  v27 = a1;
  v10 = (__int64)a9;
  v12 = (__int64)a8;
  v14 = (unsigned __int64)a3 >> 16;
  v15 = -1LL;
  v16 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v14 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  v17 = _bittest(&v16, ((_BYTE)a3 - 1) & 0x1F);
  v18 = 5LL;
  if ( v17 && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v14 + 1) >= a2 )
  {
    if ( a9 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( a9[v21] );
      v18 = v21 + 1;
    }
    v22 = a9;
    if ( !a9 )
      v22 = "NULL";
    if ( a8 )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( a8[v23] );
      v24 = v23 + 1;
    }
    else
    {
      v24 = 5LL;
    }
    v25 = a8;
    if ( !a8 )
      v25 = "NULL";
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v14),
      43LL,
      a5,
      a4,
      &a6,
      4LL,
      &a7,
      8LL,
      v25,
      v24,
      v22,
      v18,
      0LL);
    a1 = v27;
  }
  if ( v10 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( *(_BYTE *)(v10 + v19) );
  }
  if ( v12 )
  {
    do
      ++v15;
    while ( *(_BYTE *)(v12 + v15) );
  }
  LOWORD(v26) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v26, &a6);
}
