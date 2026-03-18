/*
 * XREFs of ACPIDetectFilterDevices @ 0x1C000CF60
 * Callers:
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1C008F850 (ACPIFilterIrpQueryDeviceRelations.c)
 *     ACPIBusIrpQueryBusRelations @ 0x1C00A1AF0 (ACPIBusIrpQueryBusRelations.c)
 *     ACPIRootIrpQueryDeviceRelations @ 0x1C00A1B90 (ACPIRootIrpQueryDeviceRelations.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001CF0 (ACPIInternalGetDeviceExtension.c)
 *     ACPIGet @ 0x1C0002200 (ACPIGet.c)
 *     ACPIBuildFilter @ 0x1C000AFD4 (ACPIBuildFilter.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C000CD58 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C000CD74 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     ACPIInitDereferenceDeviceExtensionLocked @ 0x1C000D830 (ACPIInitDereferenceDeviceExtensionLocked.c)
 *     ACPIDevicePowerFlushQueue @ 0x1C000EE90 (ACPIDevicePowerFlushQueue.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C00170E0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIBuildMissingChildren @ 0x1C00239F8 (ACPIBuildMissingChildren.c)
 *     AcpiQueryPciBusInterface @ 0x1C0093E0C (AcpiQueryPciBusInterface.c)
 *     ACPIFilterQueryBusD3ColdSupport @ 0x1C0093FF4 (ACPIFilterQueryBusD3ColdSupport.c)
 *     ACPIDetectFilterMatch @ 0x1C0096890 (ACPIDetectFilterMatch.c)
 *     ACPIBuildFlushQueue @ 0x1C0096E18 (ACPIBuildFlushQueue.c)
 *     EnableDisableRegions @ 0x1C009D1BC (EnableDisableRegions.c)
 *     ACPIInternalIsPci @ 0x1C00A2790 (ACPIInternalIsPci.c)
 */

__int64 __fastcall ACPIDetectFilterDevices(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rax
  __int64 v3; // rdi
  KIRQL v4; // bl
  __int64 v5; // rdx
  int v6; // edx
  int v7; // ebx
  KIRQL v8; // dl
  __int64 v9; // rsi
  __int64 *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // eax
  char v14; // r8
  KIRQL v15; // dl
  __int64 v16; // rax
  KIRQL v17; // bl
  NTSTATUS v19; // eax
  ULONG_PTR v20; // rbx
  __int64 v21; // rax
  void *v22; // rbp
  void *v23; // rcx
  int v24; // r9d
  __int64 v25; // rax
  __int64 v26; // rax
  void *v27; // rdx
  void *v28; // rcx
  int v29; // r9d
  __int64 v30; // rax
  __int64 v31; // [rsp+38h] [rbp-70h]
  __int64 v32; // [rsp+50h] [rbp-58h]
  struct _DEVICE_OBJECT *v35; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v36; // [rsp+C8h] [rbp+20h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v35 = 0LL;
  v3 = DeviceExtension;
  v4 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  if ( (*(_QWORD *)(v3 + 8) & 0x20000000000LL) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 8), 0xFFFFFDFFFFFFFFFFuLL);
    ACPIBuildMissingChildren(v3);
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v4);
  LOBYTE(v5) = 1;
  v7 = ACPIBuildFlushQueue(v3, v5);
  if ( v7 < 0 )
  {
    v21 = *(_QWORD *)(v3 + 8);
    v22 = &unk_1C006FE7D;
    v23 = &unk_1C006FE7D;
    if ( (v21 & 0x200000000000LL) != 0 )
    {
      v22 = *(void **)(v3 + 560);
      if ( (v21 & 0x400000000000LL) != 0 )
        v23 = *(void **)(v3 + 568);
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)v7;
    v24 = 16;
    goto LABEL_33;
  }
  v7 = ACPIDevicePowerFlushQueue(v3);
  if ( v7 < 0 )
  {
    v25 = *(_QWORD *)(v3 + 8);
    v22 = &unk_1C006FE7D;
    v23 = &unk_1C006FE7D;
    if ( (v25 & 0x200000000000LL) != 0 )
    {
      v22 = *(void **)(v3 + 560);
      if ( (v25 & 0x400000000000LL) != 0 )
        v23 = *(void **)(v3 + 568);
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)v7;
    v24 = 17;
LABEL_33:
    LOBYTE(v6) = 2;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      22,
      v24,
      (__int64)&WPP_5d4fefc32e4d3e8f8429787c7cbc17dc_Traceguids,
      v7,
      v3,
      (__int64)v22,
      (__int64)v23);
    return (unsigned int)v7;
  }
  v8 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v9 = *(_QWORD *)(v3 + 752);
  if ( v9 == v3 + 752 )
  {
    v10 = 0LL;
  }
  else
  {
    v10 = (__int64 *)(v9 - 768);
    ACPIInitReferenceDeviceExtension((__int64)v10);
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v8);
  if ( v10 )
  {
    while ( 1 )
    {
      v36 = 0LL;
      if ( (int)ACPIGet(v10, 1096045407, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v36, 0LL) >= 0
        && ((v10[1] & 0x2000000000002LL) == 0
         || (AcpiOverrideAttributes & 0x800000) != 0 && (*(_DWORD *)(v3 + 8) & 0x2000000) != 0) )
      {
        v13 = ACPIDetectFilterMatch(v10, a2, &v35);
        v14 = v13;
        if ( v13 < 0 )
        {
          v30 = v10[1];
          v27 = &unk_1C006FE7D;
          v28 = &unk_1C006FE7D;
          if ( (v30 & 0x200000000000LL) != 0 )
          {
            v27 = (void *)v10[70];
            if ( (v30 & 0x400000000000LL) != 0 )
              v28 = (void *)v10[71];
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v29 = 19;
            goto LABEL_52;
          }
        }
        else
        {
          if ( !v35 )
            goto LABEL_12;
          v19 = ACPIBuildFilter(*(struct _DRIVER_OBJECT **)(a1 + 8), (__int64)v10, v35);
          v14 = v19;
          if ( v19 < 0 )
          {
            v26 = v10[1];
            v27 = &unk_1C006FE7D;
            v28 = &unk_1C006FE7D;
            if ( (v26 & 0x200000000000LL) != 0 )
            {
              v27 = (void *)v10[70];
              if ( (v26 & 0x400000000000LL) != 0 )
                v28 = (void *)v10[71];
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v29 = 18;
LABEL_52:
              v31 = (__int64)v27;
              LOBYTE(v27) = 2;
              WPP_RECORDER_SF_Lqss(
                WPP_GLOBAL_Control->DeviceExtension,
                (_DWORD)v27,
                22,
                v29,
                (__int64)&WPP_5d4fefc32e4d3e8f8429787c7cbc17dc_Traceguids,
                v14,
                (char)v10,
                v31,
                (__int64)v28);
            }
          }
          else
          {
            v20 = v10[90];
            if ( (int)AcpiQueryPciBusInterface(v20) >= 0 )
              ACPIInternalIsPci(v20);
            ACPIFilterQueryBusD3ColdSupport(v20);
          }
        }
      }
LABEL_12:
      v15 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
      v16 = v10[96];
      v32 = v16;
      if ( v16 == v3 + 752 )
      {
        KeReleaseSpinLock(&AcpiDeviceTreeLock, v15);
        ACPIInitDereferenceDeviceExtensionUnlocked((ULONG_PTR)v10);
        break;
      }
      if ( *(_DWORD *)(v16 - 84) )
        _InterlockedIncrement((volatile signed __int32 *)(v16 - 84));
      KeReleaseSpinLock(&AcpiDeviceTreeLock, v15);
      v17 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
      KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
      ACPIInitDereferenceDeviceExtensionLocked((ULONG_PTR)v10);
      KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
      KeReleaseSpinLock(&AcpiPowerLock, v17);
      v10 = (__int64 *)(v32 - 768);
    }
  }
  if ( (*(_DWORD *)(v3 + 8) & 0x2000000) != 0 || (*(_QWORD *)(v3 + 952) & 0x8000LL) != 0 )
  {
    LOBYTE(v11) = 1;
    LOBYTE(v12) = (*(_QWORD *)(v3 + 952) & 0x8000) != 0;
    EnableDisableRegions(*(_QWORD *)(v3 + 712), v11, v12);
  }
  return 0LL;
}
