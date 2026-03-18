/*
 * XREFs of WPP_RECORDER_SF_qLqss @ 0x1C001DC64
 * Callers:
 *     ACPIDeviceIrpForwardRequest @ 0x1C000CD00 (ACPIDeviceIrpForwardRequest.c)
 *     ACPIDeviceIrpCompleteRequest @ 0x1C000DE20 (ACPIDeviceIrpCompleteRequest.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C001B320 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase4 @ 0x1C001B5C0 (ACPIDevicePowerProcessPhase5DeviceSubPhase4.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C001BAA0 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase1 @ 0x1C001BEC0 (ACPIDevicePowerProcessPhase0DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase1 @ 0x1C001DFE0 (ACPIDevicePowerProcessPhase5DeviceSubPhase1.c)
 *     ACPIDeviceCompleteRequest @ 0x1C001E634 (ACPIDeviceCompleteRequest.c)
 *     ACPIDeviceIrpWaitWakeRequestPending @ 0x1C0024D60 (ACPIDeviceIrpWaitWakeRequestPending.c)
 *     ACPICMButtonSetPower @ 0x1C004CDD0 (ACPICMButtonSetPower.c)
 *     ACPIDeviceIrpDelayedDeviceOffRequest @ 0x1C004EA40 (ACPIDeviceIrpDelayedDeviceOffRequest.c)
 *     ACPIDeviceIrpDelayedDeviceOnRequest @ 0x1C004EB80 (ACPIDeviceIrpDelayedDeviceOnRequest.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase1 @ 0x1C004FDF0 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x1C004FF90 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase2.c)
 *     ACPIRootIrpQueryPower @ 0x1C005CA70 (ACPIRootIrpQueryPower.c)
 *     ACPIBusIrpQueryTargetRelation @ 0x1C008D1CC (ACPIBusIrpQueryTargetRelation.c)
 *     ACPIFilterIrpFilterResourceRequirements @ 0x1C00988D0 (ACPIFilterIrpFilterResourceRequirements.c)
 *     ACPIBusIrpQueryResources @ 0x1C0098CC0 (ACPIBusIrpQueryResources.c)
 *     ACPIFilterIrpQueryResourceRequirements @ 0x1C0098FF0 (ACPIFilterIrpQueryResourceRequirements.c)
 *     ACPIBusIrpQueryResourceRequirements @ 0x1C0099070 (ACPIBusIrpQueryResourceRequirements.c)
 *     ACPIBusIrpQueryBusRelations @ 0x1C009F63C (ACPIBusIrpQueryBusRelations.c)
 *     ACPIDockIrpQueryEjectRelations @ 0x1C00A81CC (ACPIDockIrpQueryEjectRelations.c)
 *     ACPIDockIrpStartDevice @ 0x1C00A89A0 (ACPIDockIrpStartDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qLqss(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        char a7,
        char a8,
        const char *a9,
        const char *a10)
{
  __int64 v11; // rdi
  __int64 v13; // rsi
  unsigned __int64 v15; // r14
  __int64 v16; // rbx
  int v17; // eax
  unsigned __int8 v18; // cf
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v22; // r8
  const char *v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rdx
  const char *v26; // rcx
  int v27; // [rsp+20h] [rbp-88h]
  __int64 v28; // [rsp+B0h] [rbp+8h]

  v28 = a1;
  v11 = (__int64)a10;
  v13 = (__int64)a9;
  v15 = (unsigned __int64)a3 >> 16;
  v16 = -1LL;
  v17 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v15 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  v18 = _bittest(&v17, ((_BYTE)a3 - 1) & 0x1F);
  v19 = 5LL;
  if ( v18 && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v15 + 1) >= a2 )
  {
    if ( a10 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( a10[v22] );
      v19 = v22 + 1;
    }
    v23 = a10;
    if ( !a10 )
      v23 = "NULL";
    if ( a9 )
    {
      v24 = -1LL;
      do
        ++v24;
      while ( a9[v24] );
      v25 = v24 + 1;
    }
    else
    {
      v25 = 5LL;
    }
    v26 = a9;
    if ( !a9 )
      v26 = "NULL";
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v15),
      43LL,
      a5,
      a4,
      &a6,
      8LL,
      &a7,
      4LL,
      &a8,
      8LL,
      v26,
      v25,
      v23,
      v19,
      0LL);
    a1 = v28;
  }
  if ( v11 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( *(_BYTE *)(v11 + v20) );
  }
  if ( v13 )
  {
    do
      ++v16;
    while ( *(_BYTE *)(v13 + v16) );
  }
  LOWORD(v27) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v27, &a6);
}
