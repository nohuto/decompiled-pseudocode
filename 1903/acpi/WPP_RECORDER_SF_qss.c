/*
 * XREFs of WPP_RECORDER_SF_qss @ 0x1C001AA84
 * Callers:
 *     ACPICMButtonStartWorker @ 0x1C0007290 (ACPICMButtonStartWorker.c)
 *     ACPIInitStartDevice @ 0x1C000BF1C (ACPIInitStartDevice.c)
 *     ACPIDeviceInternalSynchronizeRequest @ 0x1C000EF0C (ACPIDeviceInternalSynchronizeRequest.c)
 *     ACPIBuildProcessDevicePhaseEjd @ 0x1C000F920 (ACPIBuildProcessDevicePhaseEjd.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C0015700 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C0015C50 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIFilterFastIoDetachCallback @ 0x1C002BA80 (ACPIFilterFastIoDetachCallback.c)
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1C004CCA0 (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     ACPIFanFSTCallback @ 0x1C0054FC0 (ACPIFanFSTCallback.c)
 *     ACPIQueryGedDeviceInterface @ 0x1C00564A8 (ACPIQueryGedDeviceInterface.c)
 *     ACPIInternalEvaluateOST @ 0x1C00568FC (ACPIInternalEvaluateOST.c)
 *     OSNotifyDeviceWake @ 0x1C005891C (OSNotifyDeviceWake.c)
 *     ACPIDevicePowerDetermineSupportedDeviceStates @ 0x1C009EB50 (ACPIDevicePowerDetermineSupportedDeviceStates.c)
 *     PcisuppReleasePciInterfaces @ 0x1C00B5C78 (PcisuppReleasePciInterfaces.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qss(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        const char *a7,
        const char *a8)
{
  __int64 v9; // rdi
  __int64 v11; // rsi
  unsigned __int64 v13; // r14
  __int64 v14; // rbx
  int v15; // eax
  unsigned __int8 v16; // cf
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v20; // r8
  const char *v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rdx
  const char *v24; // rcx
  int v25; // [rsp+20h] [rbp-68h]
  __int64 v26; // [rsp+90h] [rbp+8h]

  v26 = a1;
  v9 = (__int64)a8;
  v11 = (__int64)a7;
  v13 = (unsigned __int64)a3 >> 16;
  v14 = -1LL;
  v15 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v13 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  v16 = _bittest(&v15, ((_BYTE)a3 - 1) & 0x1F);
  v17 = 5LL;
  if ( v16 && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v13 + 1) >= a2 )
  {
    if ( a8 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( a8[v20] );
      v17 = v20 + 1;
    }
    v21 = a8;
    if ( !a8 )
      v21 = "NULL";
    if ( a7 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( a7[v22] );
      v23 = v22 + 1;
    }
    else
    {
      v23 = 5LL;
    }
    v24 = a7;
    if ( !a7 )
      v24 = "NULL";
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v13),
      43LL,
      a5,
      a4,
      &a6,
      8LL,
      v24,
      v23,
      v21,
      v17,
      0LL);
    a1 = v26;
  }
  if ( v9 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( *(_BYTE *)(v9 + v18) );
  }
  if ( v11 )
  {
    do
      ++v14;
    while ( *(_BYTE *)(v11 + v14) );
  }
  LOWORD(v25) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v25, &a6);
}
