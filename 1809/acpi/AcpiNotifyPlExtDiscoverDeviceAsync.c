/*
 * XREFs of AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C002A0EC
 * Callers:
 *     ACPIBuildProcessDevicePhasePep @ 0x1C001A070 (ACPIBuildProcessDevicePhasePep.c)
 *     ACPIBuildProcessRunMethodPhaseCheckPep @ 0x1C001F930 (ACPIBuildProcessRunMethodPhaseCheckPep.c)
 *     ACPIRootDeviceNotifyPepDiscoverDevice @ 0x1C0029D1C (ACPIRootDeviceNotifyPepDiscoverDevice.c)
 *     ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice @ 0x1C0029FDC (ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice.c)
 *     ACPIBuildProcessPowerResourcePhasePep @ 0x1C002D4A0 (ACPIBuildProcessPowerResourcePhasePep.c)
 *     ACPIBuildProcessThermalZonePep @ 0x1C002FFF0 (ACPIBuildProcessThermalZonePep.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C0010510 (ACPIAmliBuildObjectPathnameUnicode.c)
 *     WPP_RECORDER_SF_qD @ 0x1C00195FC (WPP_RECORDER_SF_qD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     AcpiCreateDiscoveryDeleteParameters @ 0x1C0058FB4 (AcpiCreateDiscoveryDeleteParameters.c)
 *     AcpiNotifyDiscoverDeleteMainCompletion @ 0x1C00593A0 (AcpiNotifyDiscoverDeleteMainCompletion.c)
 */

__int64 __fastcall AcpiNotifyPlExtDiscoverDeviceAsync(__int64 a1, __int64 a2, __int64 a3)
{
  void *v3; // rsi
  PVOID v4; // rbp
  char v5; // r13
  char *v6; // rdi
  int v10; // ebx
  unsigned __int8 v12; // si
  void *DeviceExtension; // rcx
  unsigned __int16 v14; // ax
  char *PoolWithTag; // rax
  __int64 v16; // rdx
  __int128 v17; // xmm0
  char v18; // al
  int v19; // eax
  int v20; // edx
  __int128 v21; // [rsp+40h] [rbp-38h] BYREF
  PVOID P; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  v5 = 0;
  P = 0LL;
  v6 = 0LL;
  v21 = 0uLL;
  if ( qword_1C007FBC8 && (*((unsigned __int8 (**)(void))&xmmword_1C007FBD0 + 1))() )
  {
    v10 = ACPIAmliBuildObjectPathnameUnicode(a1, (__int64)&v21);
    if ( v10 >= 0 )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x4E706341u);
      v6 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v10 = -1073741670;
LABEL_25:
        v3 = (void *)*((_QWORD *)&v21 + 1);
        goto LABEL_4;
      }
      memset(PoolWithTag, 0, 0x48uLL);
      v17 = v21;
      v18 = gdwfAMLI;
      *((_QWORD *)v6 + 1) = v6;
      *(_QWORD *)v6 = v6;
      *(_OWORD *)(v6 + 56) = v17;
      *((_QWORD *)v6 + 5) = a2;
      *((_QWORD *)v6 + 6) = a3;
      dword_1C0080868 = 0;
      pszDest = 0;
      v12 = 4;
      if ( (v18 & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
      v5 = 1;
      *((_QWORD *)v6 + 2) = a1;
      LOBYTE(v16) = 1;
      v19 = AcpiCreateDiscoveryDeleteParameters(v6, v16, &P);
      v10 = v19;
      v20 = v19;
      if ( v19 < 0 )
      {
        v12 = 2;
        v4 = P;
        DeviceExtension = WPP_GLOBAL_Control->DeviceExtension;
        v14 = 12;
        goto LABEL_24;
      }
      v4 = P;
      v10 = ((__int64 (__fastcall *)(PVOID, _QWORD))xmmword_1C007FBD0)(P, (unsigned int)v19);
      if ( v10 != 259 )
      {
        AcpiNotifyDiscoverDeleteMainCompletion(v4);
        v10 = 259;
      }
      DeviceExtension = WPP_GLOBAL_Control->DeviceExtension;
      v14 = 13;
    }
    else
    {
      v12 = 2;
      DeviceExtension = WPP_GLOBAL_Control->DeviceExtension;
      v14 = 11;
    }
    v20 = v10;
LABEL_24:
    WPP_RECORDER_SF_qD(
      (__int64)DeviceExtension,
      v12,
      0x13u,
      v14,
      (__int64)&WPP_48b43c805f5e38c1fd22948a62472a9f_Traceguids,
      a1,
      v20);
    if ( v10 == 259 )
      return (unsigned int)v10;
    goto LABEL_25;
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
