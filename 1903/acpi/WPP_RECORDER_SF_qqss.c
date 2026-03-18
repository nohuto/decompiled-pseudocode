/*
 * XREFs of WPP_RECORDER_SF_qqss @ 0x1C0017224
 * Callers:
 *     ACPIFanDeviceControl @ 0x1C00077B0 (ACPIFanDeviceControl.c)
 *     ACPIFanCompletePendingIrps @ 0x1C0007AF8 (ACPIFanCompletePendingIrps.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase6 @ 0x1C000EB70 (ACPIDevicePowerProcessPhase5DeviceSubPhase6.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase4 @ 0x1C000ECB0 (ACPIDevicePowerProcessPhase1DeviceSubPhase4.c)
 *     ACPIDetectDuplicateHID @ 0x1C00120AC (ACPIDetectDuplicateHID.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C0029070 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase2 @ 0x1C0029AC0 (ACPIDevicePowerProcessPhase0DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase5 @ 0x1C0029BB0 (ACPIDevicePowerProcessPhase5DeviceSubPhase5.c)
 *     ACPIWakeWaitIrp @ 0x1C002DF30 (ACPIWakeWaitIrp.c)
 *     ACPIMatchKernelPorts @ 0x1C0031278 (ACPIMatchKernelPorts.c)
 *     ACPIDockIrpQueryPower @ 0x1C004A1E0 (ACPIDockIrpQueryPower.c)
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1C004CCA0 (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     ACPIDeviceCancelWaitWakeIrp @ 0x1C004FDF0 (ACPIDeviceCancelWaitWakeIrp.c)
 *     ACPIDevicePowerProcessPhase0SystemSubPhase1 @ 0x1C0050A30 (ACPIDevicePowerProcessPhase0SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase1 @ 0x1C0050F90 (ACPIDevicePowerProcessPhase5SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase2 @ 0x1C00510A0 (ACPIDevicePowerProcessPhase5SystemSubPhase2.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C0051170 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C0051310 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase5 @ 0x1C00514E0 (ACPIDevicePowerProcessPhase5SystemSubPhase5.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase6 @ 0x1C00515F0 (ACPIDevicePowerProcessPhase5SystemSubPhase6.c)
 *     ACPIFanCancelRequest @ 0x1C0054DC0 (ACPIFanCancelRequest.c)
 *     ACPIQueryGedDeviceInterface @ 0x1C00564A8 (ACPIQueryGedDeviceInterface.c)
 *     ACPIThermalStartDevice @ 0x1C0091630 (ACPIThermalStartDevice.c)
 *     ACPIBusIrpQueryResources @ 0x1C00940E0 (ACPIBusIrpQueryResources.c)
 *     ACPIDockIrpEject @ 0x1C00AAF40 (ACPIDockIrpEject.c)
 *     ACPIDockIrpQueryCapabilities @ 0x1C00AB1F0 (ACPIDockIrpQueryCapabilities.c)
 *     ACPIDockIrpQueryEjectRelations @ 0x1C00AB6F8 (ACPIDockIrpQueryEjectRelations.c)
 *     ACPIDockIrpQueryID @ 0x1C00AB910 (ACPIDockIrpQueryID.c)
 *     ACPIDockIrpStartDevice @ 0x1C00ABF60 (ACPIDockIrpStartDevice.c)
 *     ACPIBusAndFilterIrpEject @ 0x1C00AD080 (ACPIBusAndFilterIrpEject.c)
 *     ACPIRootIrpStartDevice @ 0x1C00BB190 (ACPIRootIrpStartDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qqss(
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
      8LL,
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
