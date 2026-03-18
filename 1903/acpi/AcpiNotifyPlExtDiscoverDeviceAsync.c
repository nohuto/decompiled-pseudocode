/*
 * XREFs of AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C0006210
 * Callers:
 *     ACPIRootDeviceNotifyPepDiscoverDevice @ 0x1C0005DF8 (ACPIRootDeviceNotifyPepDiscoverDevice.c)
 *     ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice @ 0x1C00060E4 (ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice.c)
 *     ACPIBuildProcessDevicePhasePep @ 0x1C000F7E0 (ACPIBuildProcessDevicePhasePep.c)
 *     ACPIBuildProcessRunMethodPhaseCheckPep @ 0x1C0016450 (ACPIBuildProcessRunMethodPhaseCheckPep.c)
 *     ACPIBuildProcessPowerResourcePhasePep @ 0x1C002E330 (ACPIBuildProcessPowerResourcePhasePep.c)
 *     ACPIBuildProcessThermalZonePep @ 0x1C0030CE0 (ACPIBuildProcessThermalZonePep.c)
 * Callees:
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C000ABA0 (ACPIAmliBuildObjectPathnameUnicode.c)
 *     WPP_RECORDER_SF_qD @ 0x1C000D900 (WPP_RECORDER_SF_qD.c)
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 *     AcpiCreateDiscoveryDeleteParameters @ 0x1C005AC48 (AcpiCreateDiscoveryDeleteParameters.c)
 *     AcpiNotifyDiscoverDeleteMainCompletion @ 0x1C005B050 (AcpiNotifyDiscoverDeleteMainCompletion.c)
 */

__int64 __fastcall AcpiNotifyPlExtDiscoverDeviceAsync(__int64 a1, __int64 a2, __int64 a3)
{
  void *v3; // rsi
  PVOID v4; // rbp
  char v5; // r13
  void *v6; // rdi
  int v10; // ebx
  int v12; // edx
  int v13; // r9d
  char *PoolWithTag; // rax
  __int64 v15; // rdx
  __int128 v16; // xmm0
  int v17; // edx
  __int128 v18; // [rsp+40h] [rbp-38h] BYREF
  PVOID P; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  v5 = 0;
  P = 0LL;
  v6 = 0LL;
  v18 = 0uLL;
  if ( qword_1C0081BC8 && (*((unsigned __int8 (**)(void))&xmmword_1C0081BD0 + 1))() )
  {
    v10 = ACPIAmliBuildObjectPathnameUnicode(a1, &v18, 1LL);
    if ( v10 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_28;
      v13 = 11;
      LOBYTE(v12) = 2;
      goto LABEL_27;
    }
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x4E706341u);
    v6 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v10 = -1073741670;
LABEL_29:
      v3 = (void *)*((_QWORD *)&v18 + 1);
      goto LABEL_4;
    }
    *((_QWORD *)PoolWithTag + 2) = 0LL;
    *((_QWORD *)PoolWithTag + 3) = 0LL;
    *((_QWORD *)PoolWithTag + 4) = 0LL;
    v16 = v18;
    *((_QWORD *)PoolWithTag + 1) = PoolWithTag;
    *(_QWORD *)PoolWithTag = PoolWithTag;
    *(_OWORD *)(PoolWithTag + 56) = v16;
    *((_QWORD *)PoolWithTag + 5) = a2;
    *((_QWORD *)PoolWithTag + 6) = a3;
    dword_1C0082858 = 0;
    pszDest = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
    v5 = 1;
    *((_QWORD *)PoolWithTag + 2) = a1;
    LOBYTE(v15) = 1;
    v10 = AcpiCreateDiscoveryDeleteParameters(PoolWithTag, v15, &P);
    if ( v10 >= 0 )
    {
      v4 = P;
      v10 = ((__int64 (__fastcall *)(PVOID))xmmword_1C0081BD0)(P);
      if ( v10 != 259 )
      {
        AcpiNotifyDiscoverDeleteMainCompletion(v4);
        v10 = 259;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = 13;
        LOBYTE(v12) = 4;
LABEL_27:
        WPP_RECORDER_SF_qD(
          WPP_GLOBAL_Control->DeviceExtension,
          v12,
          19,
          v13,
          (__int64)&WPP_48b43c805f5e38c1fd22948a62472a9f_Traceguids,
          a1,
          v10);
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v17) = 2;
        WPP_RECORDER_SF_qD(
          WPP_GLOBAL_Control->DeviceExtension,
          v17,
          19,
          12,
          (__int64)&WPP_48b43c805f5e38c1fd22948a62472a9f_Traceguids,
          a1,
          v10);
      }
      v4 = P;
    }
LABEL_28:
    if ( v10 == 259 )
      return (unsigned int)v10;
    goto LABEL_29;
  }
  v10 = 0;
LABEL_4:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x53706341u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x4E706341u);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x4E706341u);
  if ( v10 < 0 && v5 )
    AMLIDereferenceHandleEx(a1);
  return (unsigned int)v10;
}
