/*
 * XREFs of WPP_RECORDER_SF_Dqss @ 0x1C001D498
 * Callers:
 *     ACPIInternalRegisterPowerCallBack @ 0x1C000C8E0 (ACPIInternalRegisterPowerCallBack.c)
 *     ACPIProcessorStartDevice @ 0x1C000CDE0 (ACPIProcessorStartDevice.c)
 *     ACPIFanPowerCallback @ 0x1C000D000 (ACPIFanPowerCallback.c)
 *     ACPIInitStartDevice @ 0x1C000D6A8 (ACPIInitStartDevice.c)
 *     ACPIBuildProcessorExtension @ 0x1C0015CA4 (ACPIBuildProcessorExtension.c)
 *     ACPIInitDosDeviceName @ 0x1C00166A4 (ACPIInitDosDeviceName.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C0018130 (PciConfigSpaceHandlerWorker.c)
 *     ACPISystemPowerUpdateDeviceCapabilities @ 0x1C0019890 (ACPISystemPowerUpdateDeviceCapabilities.c)
 *     ACPIBuildProcessSpecialSynchronizationList @ 0x1C001CBE4 (ACPIBuildProcessSpecialSynchronizationList.c)
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C0025AEC (ACPIWakeRemoveDevicesAndUpdate.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C002E854 (ACPIWakeEnableDisableAsync.c)
 *     ACPIBuildThermalZoneExtension @ 0x1C002EC0C (ACPIBuildThermalZoneExtension.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C002F1B0 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPICMButtonNotify @ 0x1C004CC88 (ACPICMButtonNotify.c)
 *     ACPICMExperienceButtonHandleEvent @ 0x1C004D078 (ACPICMExperienceButtonHandleEvent.c)
 *     ACPICMLidPowerStateCallBack @ 0x1C004D130 (ACPICMLidPowerStateCallBack.c)
 *     ACPIFanEvent @ 0x1C0053500 (ACPIFanEvent.c)
 *     ACPIFanFSTCallback @ 0x1C00535C0 (ACPIFanFSTCallback.c)
 *     ACPIInitDeleteDeviceExtension @ 0x1C00545E8 (ACPIInitDeleteDeviceExtension.c)
 *     ACPIInternalEvaluateOST @ 0x1C0054E4C (ACPIInternalEvaluateOST.c)
 *     ACPIRootEvent @ 0x1C005C990 (ACPIRootEvent.c)
 *     ACPIProcessorGetInitialApicId @ 0x1C008EB78 (ACPIProcessorGetInitialApicId.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
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
