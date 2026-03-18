/*
 * XREFs of WPP_RECORDER_SF_qqss @ 0x1C001DB18
 * Callers:
 *     ACPIFanDeviceControl @ 0x1C000D120 (ACPIFanDeviceControl.c)
 *     ACPIFanCompletePendingIrps @ 0x1C000D45C (ACPIFanCompletePendingIrps.c)
 *     ACPIDetectDuplicateHID @ 0x1C001A9C8 (ACPIDetectDuplicateHID.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase6 @ 0x1C001B700 (ACPIDevicePowerProcessPhase5DeviceSubPhase6.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C001BAA0 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase4 @ 0x1C001BD30 (ACPIDevicePowerProcessPhase1DeviceSubPhase4.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase5 @ 0x1C001DE20 (ACPIDevicePowerProcessPhase5DeviceSubPhase5.c)
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase2 @ 0x1C001E480 (ACPIDevicePowerProcessPhase0DeviceSubPhase2.c)
 *     ACPIWakeWaitIrp @ 0x1C002CF40 (ACPIWakeWaitIrp.c)
 *     ACPIMatchKernelPorts @ 0x1C00305C8 (ACPIMatchKernelPorts.c)
 *     ACPIDockIrpQueryPower @ 0x1C0048C20 (ACPIDockIrpQueryPower.c)
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1C004B530 (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     ACPIDeviceCancelWaitWakeIrp @ 0x1C004E500 (ACPIDeviceCancelWaitWakeIrp.c)
 *     ACPIDevicePowerProcessPhase0SystemSubPhase1 @ 0x1C004F1A0 (ACPIDevicePowerProcessPhase0SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase1 @ 0x1C004F690 (ACPIDevicePowerProcessPhase5SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase2 @ 0x1C004F790 (ACPIDevicePowerProcessPhase5SystemSubPhase2.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C004F850 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C004F9F0 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase5 @ 0x1C004FBB0 (ACPIDevicePowerProcessPhase5SystemSubPhase5.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase6 @ 0x1C004FCB0 (ACPIDevicePowerProcessPhase5SystemSubPhase6.c)
 *     ACPIFanCancelRequest @ 0x1C00533E0 (ACPIFanCancelRequest.c)
 *     ACPIQueryGedDeviceInterface @ 0x1C0054A28 (ACPIQueryGedDeviceInterface.c)
 *     ACPIThermalStartDevice @ 0x1C00972D0 (ACPIThermalStartDevice.c)
 *     ACPIBusIrpQueryResources @ 0x1C0098CC0 (ACPIBusIrpQueryResources.c)
 *     ACPIDockIrpEject @ 0x1C00A7AA0 (ACPIDockIrpEject.c)
 *     ACPIDockIrpQueryCapabilities @ 0x1C00A7D30 (ACPIDockIrpQueryCapabilities.c)
 *     ACPIDockIrpQueryEjectRelations @ 0x1C00A81CC (ACPIDockIrpQueryEjectRelations.c)
 *     ACPIDockIrpQueryID @ 0x1C00A83B0 (ACPIDockIrpQueryID.c)
 *     ACPIDockIrpStartDevice @ 0x1C00A89A0 (ACPIDockIrpStartDevice.c)
 *     ACPIBusAndFilterIrpEject @ 0x1C00A9A50 (ACPIBusAndFilterIrpEject.c)
 *     ACPIRootIrpStartDevice @ 0x1C00B7190 (ACPIRootIrpStartDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
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
