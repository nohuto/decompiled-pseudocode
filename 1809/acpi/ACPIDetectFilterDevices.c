/*
 * XREFs of ACPIDetectFilterDevices @ 0x1C0018C64
 * Callers:
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1C008D7E0 (ACPIFilterIrpQueryDeviceRelations.c)
 *     ACPIBusIrpQueryBusRelations @ 0x1C009F63C (ACPIBusIrpQueryBusRelations.c)
 *     ACPIRootIrpQueryDeviceRelations @ 0x1C009F730 (ACPIRootIrpQueryDeviceRelations.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002830 (ACPIInternalGetDeviceExtension.c)
 *     ACPIGet @ 0x1C0003980 (ACPIGet.c)
 *     ACPIBuildFilter @ 0x1C0010694 (ACPIBuildFilter.c)
 *     ACPIBuildMissingChildren @ 0x1C0017160 (ACPIBuildMissingChildren.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C0017BC4 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C0017D68 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     ACPIInitDereferenceDeviceExtensionLocked @ 0x1C001952C (ACPIInitDereferenceDeviceExtensionLocked.c)
 *     ACPIDevicePowerFlushQueue @ 0x1C001C00C (ACPIDevicePowerFlushQueue.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0020560 (WPP_RECORDER_SF_Lqss.c)
 *     AcpiQueryPciBusInterface @ 0x1C0095B08 (AcpiQueryPciBusInterface.c)
 *     ACPIFilterQueryBusD3ColdSupport @ 0x1C0095CE0 (ACPIFilterQueryBusD3ColdSupport.c)
 *     EnableDisableRegions @ 0x1C009A358 (EnableDisableRegions.c)
 *     ACPIDetectFilterMatch @ 0x1C009A720 (ACPIDetectFilterMatch.c)
 *     ACPIBuildFlushQueue @ 0x1C009AD30 (ACPIBuildFlushQueue.c)
 *     ACPIInternalIsPci @ 0x1C009FC0C (ACPIInternalIsPci.c)
 */

__int64 __fastcall ACPIDetectFilterDevices(ULONG_PTR a1, __int64 a2)
{
  ULONG_PTR v2; // r13
  __int64 DeviceExtension; // rax
  __int64 v4; // rdi
  KIRQL v5; // bl
  __int64 v6; // rdx
  int v7; // edx
  int v8; // ebx
  KIRQL v9; // dl
  __int64 v10; // rsi
  __int64 *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // eax
  char v15; // r8
  KIRQL v16; // al
  __int64 v17; // r13
  KIRQL v18; // bl
  NTSTATUS v20; // eax
  ULONG_PTR v21; // rbx
  __int64 v22; // rcx
  void *v23; // rbp
  void *v24; // rax
  int v25; // r9d
  __int64 v26; // rcx
  __int64 v27; // rax
  void *v28; // rdx
  void *v29; // rcx
  int v30; // r9d
  __int64 v31; // rax
  __int64 v32; // [rsp+38h] [rbp-60h]
  struct _DEVICE_OBJECT *v35; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v36; // [rsp+B8h] [rbp+20h] BYREF

  v2 = a1;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v35 = 0LL;
  v4 = DeviceExtension;
  v5 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  if ( (*(_QWORD *)(v4 + 8) & 0x20000000000LL) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 8), 0xFFFFFDFFFFFFFFFFuLL);
    ACPIBuildMissingChildren(v4);
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v5);
  LOBYTE(v6) = 1;
  v8 = ACPIBuildFlushQueue(v4, v6);
  if ( v8 < 0 )
  {
    v22 = *(_QWORD *)(v4 + 8);
    v23 = &unk_1C006E28A;
    v24 = &unk_1C006E28A;
    if ( (v22 & 0x200000000000LL) != 0 )
    {
      v23 = *(void **)(v4 + 560);
      if ( (v22 & 0x400000000000LL) != 0 )
        v24 = *(void **)(v4 + 568);
    }
    v25 = 16;
    goto LABEL_33;
  }
  v8 = ACPIDevicePowerFlushQueue(v4);
  if ( v8 < 0 )
  {
    v26 = *(_QWORD *)(v4 + 8);
    v23 = &unk_1C006E28A;
    v24 = &unk_1C006E28A;
    if ( (v26 & 0x200000000000LL) != 0 )
    {
      v23 = *(void **)(v4 + 560);
      if ( (v26 & 0x400000000000LL) != 0 )
        v24 = *(void **)(v4 + 568);
    }
    v25 = 17;
LABEL_33:
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      22,
      v25,
      (__int64)&WPP_5d4fefc32e4d3e8f8429787c7cbc17dc_Traceguids,
      v8,
      v4,
      (__int64)v23,
      (__int64)v24);
    return (unsigned int)v8;
  }
  v9 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v10 = *(_QWORD *)(v4 + 752);
  if ( v10 == v4 + 752 )
  {
    v11 = 0LL;
  }
  else
  {
    v11 = (__int64 *)(v10 - 768);
    ACPIInitReferenceDeviceExtension((__int64)v11);
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v9);
  if ( v11 )
  {
    while ( 1 )
    {
      v36 = 0LL;
      if ( (int)ACPIGet(v11, 1096045407, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v36, 0LL) >= 0
        && ((v11[1] & 0x2000000000002LL) == 0
         || (AcpiOverrideAttributes & 0x800000) != 0 && (*(_DWORD *)(v4 + 8) & 0x2000000) != 0) )
      {
        v14 = ACPIDetectFilterMatch(v11, a2, &v35);
        v15 = v14;
        if ( v14 < 0 )
        {
          v31 = v11[1];
          v28 = &unk_1C006E28A;
          v29 = &unk_1C006E28A;
          if ( (v31 & 0x200000000000LL) != 0 )
          {
            v28 = (void *)v11[70];
            if ( (v31 & 0x400000000000LL) != 0 )
              v29 = (void *)v11[71];
          }
          v30 = 19;
          goto LABEL_47;
        }
        if ( !v35 )
          goto LABEL_12;
        v20 = ACPIBuildFilter(*(struct _DRIVER_OBJECT **)(v2 + 8), (__int64)v11, v35);
        v15 = v20;
        if ( v20 < 0 )
        {
          v27 = v11[1];
          v28 = &unk_1C006E28A;
          v29 = &unk_1C006E28A;
          if ( (v27 & 0x200000000000LL) != 0 )
          {
            v28 = (void *)v11[70];
            if ( (v27 & 0x400000000000LL) != 0 )
              v29 = (void *)v11[71];
          }
          v30 = 18;
LABEL_47:
          v32 = (__int64)v28;
          LOBYTE(v28) = 2;
          WPP_RECORDER_SF_Lqss(
            WPP_GLOBAL_Control->DeviceExtension,
            (_DWORD)v28,
            22,
            v30,
            (__int64)&WPP_5d4fefc32e4d3e8f8429787c7cbc17dc_Traceguids,
            v15,
            (char)v11,
            v32,
            (__int64)v29);
          goto LABEL_12;
        }
        v21 = v11[90];
        if ( (int)AcpiQueryPciBusInterface(v21) >= 0 )
          ACPIInternalIsPci(v21);
        ACPIFilterQueryBusD3ColdSupport(v21);
      }
LABEL_12:
      v16 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
      v17 = v11[96];
      if ( v17 == v4 + 752 )
      {
        KeReleaseSpinLock(&AcpiDeviceTreeLock, v16);
        ACPIInitDereferenceDeviceExtensionUnlocked((ULONG_PTR)v11);
        break;
      }
      if ( *(_DWORD *)(v17 - 84) )
        _InterlockedIncrement((volatile signed __int32 *)(v17 - 84));
      KeReleaseSpinLock(&AcpiDeviceTreeLock, v16);
      v18 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
      KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
      ACPIInitDereferenceDeviceExtensionLocked((ULONG_PTR)v11);
      KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
      KeReleaseSpinLock(&AcpiPowerLock, v18);
      v11 = (__int64 *)(v17 - 768);
      v2 = a1;
    }
  }
  if ( (*(_DWORD *)(v4 + 8) & 0x2000000) != 0 || (*(_QWORD *)(v4 + 952) & 0x8000LL) != 0 )
  {
    LOBYTE(v12) = 1;
    LOBYTE(v13) = (*(_QWORD *)(v4 + 952) & 0x8000) != 0;
    EnableDisableRegions(*(_QWORD *)(v4 + 712), v12, v13);
  }
  return 0LL;
}
