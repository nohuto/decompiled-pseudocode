/*
 * XREFs of WPP_RECORDER_SF_qsLqss @ 0x1C00028B0
 * Callers:
 *     ACPIRootIrpCompleteRoutine @ 0x1C0002BE0 (ACPIRootIrpCompleteRoutine.c)
 *     ACPICMButtonStartWorker @ 0x1C000CAD0 (ACPICMButtonStartWorker.c)
 *     ACPIFilterIrpDeviceUsageNotificationCompletion @ 0x1C000E180 (ACPIFilterIrpDeviceUsageNotificationCompletion.c)
 *     ACPIBusIrpUnhandled @ 0x1C002AB00 (ACPIBusIrpUnhandled.c)
 *     ACPIFilterIrpRemoveDevice @ 0x1C002DAE0 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIBusIrpStartDeviceCompletion @ 0x1C002F7C0 (ACPIBusIrpStartDeviceCompletion.c)
 *     ACPICMButtonStartCompletion @ 0x1C0030880 (ACPICMButtonStartCompletion.c)
 *     ACPIDockIrpRemoveDevice @ 0x1C0048D70 (ACPIDockIrpRemoveDevice.c)
 *     ACPIBusIrpRemoveDevice @ 0x1C004B990 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C004BFA0 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIEcStartDeviceCompletion @ 0x1C0051D80 (ACPIEcStartDeviceCompletion.c)
 *     ACPIEcStartDeviceWorker @ 0x1C0051EE0 (ACPIEcStartDeviceWorker.c)
 *     ACPIFilterIrpStopDeviceCompletion @ 0x1C0053A60 (ACPIFilterIrpStopDeviceCompletion.c)
 *     ACPIProcessorContainerStartDeviceCompletion @ 0x1C005B4F0 (ACPIProcessorContainerStartDeviceCompletion.c)
 *     ACPIProcessorContainerStartDeviceWorker @ 0x1C005B650 (ACPIProcessorContainerStartDeviceWorker.c)
 *     ACPIRootIrpRemoveDevice @ 0x1C005CC10 (ACPIRootIrpRemoveDevice.c)
 *     ACPIBusIrpQueryDeviceRelations @ 0x1C008D050 (ACPIBusIrpQueryDeviceRelations.c)
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1C008D7E0 (ACPIFilterIrpQueryDeviceRelations.c)
 *     ACPIFanStartDevice @ 0x1C008ED70 (ACPIFanStartDevice.c)
 *     ACPIFilterIrpStartDevice @ 0x1C008EF70 (ACPIFilterIrpStartDevice.c)
 *     ACPIRootIrpQueryInterface @ 0x1C0095F20 (ACPIRootIrpQueryInterface.c)
 *     ACPIBusIrpDeviceEnumerated @ 0x1C00966F0 (ACPIBusIrpDeviceEnumerated.c)
 *     ACPIFilterIrpFilterResourceRequirements @ 0x1C00988D0 (ACPIFilterIrpFilterResourceRequirements.c)
 *     ACPIBusIrpQueryResources @ 0x1C0098CC0 (ACPIBusIrpQueryResources.c)
 *     ACPIBusIrpQueryResourceRequirements @ 0x1C0099070 (ACPIBusIrpQueryResourceRequirements.c)
 *     ACPIRootIrpQueryBusRelations @ 0x1C009A588 (ACPIRootIrpQueryBusRelations.c)
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1C009B140 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C009B4E0 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIInternalDeviceQueryDeviceRelations @ 0x1C009DB00 (ACPIInternalDeviceQueryDeviceRelations.c)
 *     ACPIFilterIrpStartDeviceWorker @ 0x1C009DEE0 (ACPIFilterIrpStartDeviceWorker.c)
 *     ACPIRootIrpQueryCapabilities @ 0x1C009E6C0 (ACPIRootIrpQueryCapabilities.c)
 *     ACPIFilterIrpDeviceUsageNotification @ 0x1C009E980 (ACPIFilterIrpDeviceUsageNotification.c)
 *     ACPIBusIrpDeviceUsageNotification @ 0x1C009F270 (ACPIBusIrpDeviceUsageNotification.c)
 *     ACPIRootIrpQueryDeviceRelations @ 0x1C009F730 (ACPIRootIrpQueryDeviceRelations.c)
 *     ACPIBusIrpStartDeviceWorker @ 0x1C009FA60 (ACPIBusIrpStartDeviceWorker.c)
 *     ACPIDockIrpQueryCapabilities @ 0x1C00A7D30 (ACPIDockIrpQueryCapabilities.c)
 *     ACPIDockIrpQueryDeviceRelations @ 0x1C00A7FC0 (ACPIDockIrpQueryDeviceRelations.c)
 *     ACPIDockIrpQueryInterface @ 0x1C00A86D0 (ACPIDockIrpQueryInterface.c)
 *     ACPIDockIrpQueryPnpDeviceState @ 0x1C00A8880 (ACPIDockIrpQueryPnpDeviceState.c)
 *     ACPIBusAndFilterIrpEject @ 0x1C00A9A50 (ACPIBusAndFilterIrpEject.c)
 *     ACPIBusAndFilterIrpSetLock @ 0x1C00A9E50 (ACPIBusAndFilterIrpSetLock.c)
 *     ACPIBusIrpCancelRemoveOrStopDevice @ 0x1C00A9F20 (ACPIBusIrpCancelRemoveOrStopDevice.c)
 *     ACPIBusIrpQueryRemoveOrStopDevice @ 0x1C00AA190 (ACPIBusIrpQueryRemoveOrStopDevice.c)
 *     ACPIBusIrpStopDevice @ 0x1C00AA300 (ACPIBusIrpStopDevice.c)
 *     ACPIFilterIrpQueryIdCompletion @ 0x1C00ABB50 (ACPIFilterIrpQueryIdCompletion.c)
 *     ACPIFilterIrpStopDevice @ 0x1C00ABD90 (ACPIFilterIrpStopDevice.c)
 *     ACPIRootIrpCancelRemoveOrStopDevice @ 0x1C00B0E20 (ACPIRootIrpCancelRemoveOrStopDevice.c)
 *     ACPIRootIrpQueryRemoveOrStopDevice @ 0x1C00B0F50 (ACPIRootIrpQueryRemoveOrStopDevice.c)
 *     ACPIRootIrpStopDevice @ 0x1C00B1090 (ACPIRootIrpStopDevice.c)
 *     ACPIRootIrpStartDevice @ 0x1C00B7190 (ACPIRootIrpStartDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qsLqss(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        const char *a7,
        char a8,
        char a9,
        const char *a10,
        const char *a11)
{
  __int64 v12; // rsi
  __int64 v14; // rbp
  const char *v15; // rdi
  unsigned __int64 v17; // r14
  __int64 v18; // rbx
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rcx
  char *v23; // r14
  __int64 v24; // r9
  __int64 v25; // r9
  const char *v26; // r11
  __int64 v27; // r8
  __int64 v28; // r8
  const char *v29; // r10
  __int64 v30; // rcx
  __int64 v31; // rcx
  const char *v32; // rdx
  int v33; // [rsp+20h] [rbp-98h]

  v12 = (__int64)a11;
  v14 = (__int64)a10;
  v15 = a7;
  v17 = (unsigned __int64)a3 >> 16;
  v18 = -1LL;
  v19 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v17 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v19, ((_BYTE)a3 - 1) & 0x1F) )
  {
    v23 = (char *)WPP_GLOBAL_Control + 80 * v17;
    if ( (unsigned __int8)v23[41] >= a2 )
    {
      if ( a11 )
      {
        v24 = -1LL;
        do
          ++v24;
        while ( a11[v24] );
        v25 = v24 + 1;
      }
      else
      {
        v25 = 5LL;
      }
      v26 = a11;
      if ( !a11 )
        v26 = "NULL";
      if ( a10 )
      {
        v27 = -1LL;
        do
          ++v27;
        while ( a10[v27] );
        v28 = v27 + 1;
      }
      else
      {
        v28 = 5LL;
      }
      v29 = a10;
      if ( !a10 )
        v29 = "NULL";
      if ( a7 )
      {
        v30 = -1LL;
        do
          ++v30;
        while ( a7[v30] );
        v31 = v30 + 1;
      }
      else
      {
        v31 = 5LL;
      }
      v32 = a7;
      if ( !a7 )
        v32 = "NULL";
      ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, const char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
        *((_QWORD *)v23 + 3),
        43LL,
        a5,
        a4,
        &a6,
        8LL,
        v32,
        v31,
        &a8,
        4LL,
        &a9,
        8LL,
        v29,
        v28,
        v26,
        v25,
        0LL);
    }
  }
  if ( v12 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( *(_BYTE *)(v12 + v20) );
  }
  if ( v14 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( *(_BYTE *)(v21 + v14) );
  }
  if ( v15 )
  {
    do
      ++v18;
    while ( v15[v18] );
  }
  else
  {
    v15 = "NULL";
  }
  LOWORD(v33) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v33, &a6, 8LL, v15);
}
