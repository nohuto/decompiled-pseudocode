/*
 * XREFs of ACPIDispatchAddDevice @ 0x1C00BA890
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C00025B8 (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E5F0 (WPP_RECORDER_SF_qq.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1C001C1C4 (ExAllocateFromNPagedLookasideList.c)
 *     WPP_RECORDER_SF_ @ 0x1C001D030 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0020560 (WPP_RECORDER_SF_Lqss.c)
 *     RtlStringCchCopyA @ 0x1C002292C (RtlStringCchCopyA.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     ExFreeToNPagedLookasideList @ 0x1C004ADD8 (ExFreeToNPagedLookasideList.c)
 *     WPP_RECORDER_SF_sL @ 0x1C004AF5C (WPP_RECORDER_SF_sL.c)
 *     ACPICreateRootSymbolicLink @ 0x1C009BE2C (ACPICreateRootSymbolicLink.c)
 *     AcpiSetupNativeMethodInterface @ 0x1C009BF24 (AcpiSetupNativeMethodInterface.c)
 *     ACPIGetPortRangeInterfaces @ 0x1C00BAD78 (ACPIGetPortRangeInterfaces.c)
 */

__int64 __fastcall ACPIDispatchAddDevice(PDRIVER_OBJECT DriverObject, struct _DEVICE_OBJECT *a2)
{
  char v2; // bl
  _QWORD *v4; // rdi
  struct _DEVICE_OBJECT *v5; // r15
  char *PoolWithTag; // rax
  char *v7; // r12
  char *v8; // rax
  char *v9; // r13
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  int v12; // esi
  _QWORD *v13; // rax
  KIRQL v14; // al
  KIRQL v15; // al
  void *v16; // rax
  void *v17; // r8
  __int64 v18; // rcx
  PDEVICE_OBJECT *DeviceObject; // [rsp+30h] [rbp-58h]
  PDEVICE_OBJECT SourceDevice; // [rsp+A0h] [rbp+18h] BYREF

  v2 = 0;
  SourceDevice = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xEuLL, 0x53706341u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    RtlStringCchCopyA(PoolWithTag, 0xEuLL, "ACPI\\PNP0C08");
    v8 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xBuLL, 0x53706341u);
    v9 = v8;
    if ( v8 )
    {
      RtlStringCchCopyA(v8, 0xBuLL, "0x5F534750");
      v10 = IoCreateDevice(DriverObject, 0, 0LL, 0x32u, 0x100u, 0, &SourceDevice);
      v12 = v10;
      if ( v10 < 0 )
      {
        LODWORD(DeviceObject) = v10;
        WPP_RECORDER_SF_sL(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v11,
          6u,
          0xDu,
          (__int64)&WPP_ab258ff9f03f3cf3ffad82b9e12a3728_Traceguids,
          v7,
          DeviceObject);
        SourceDevice = 0LL;
        goto LABEL_9;
      }
      v5 = IoAttachDeviceToDeviceStack(SourceDevice, a2);
      if ( !v5 )
      {
        WPP_RECORDER_SF_qq(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          6u,
          0xEu,
          (__int64)&WPP_ab258ff9f03f3cf3ffad82b9e12a3728_Traceguids,
          SourceDevice,
          a2);
        v12 = -1073741810;
        goto LABEL_19;
      }
      v13 = ExAllocateFromNPagedLookasideList(&DeviceExtensionLookAsideList);
      v4 = v13;
      if ( v13 )
      {
        memset(v13, 0, 0x3C0uLL);
        *((_DWORD *)v4 + 171) = 1;
        _InterlockedIncrement((volatile signed __int32 *)v4 + 170);
        v14 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
        SourceDevice->DeviceExtension = v4;
        v4[90] = SourceDevice;
        v4[92] = a2;
        v4[3] = &AcpiFdoIrpDispatch;
        v4[91] = v5;
        *((_DWORD *)v4 + 4) = 1599293264;
        v4[70] = v7;
        v4[71] = v9;
        *((_DWORD *)v4 + 116) = 1;
        *((_DWORD *)v4 + 117) = 1;
        *((_DWORD *)v4 + 118) = 1;
        *((_DWORD *)v4 + 119) = 1;
        *((_DWORD *)v4 + 125) = 1;
        *((_DWORD *)v4 + 120) = 4;
        *(_QWORD *)((char *)v4 + 484) = 4LL;
        *((_DWORD *)v4 + 115) = 0;
        *((_DWORD *)v4 + 123) = 0;
        KeReleaseSpinLock(&AcpiDeviceTreeLock, v14);
        _InterlockedOr64(v4 + 1, 0x1E00000200010uLL);
        v4[95] = v4 + 94;
        v4[94] = v4 + 94;
        v4[97] = v4 + 96;
        v4[96] = v4 + 96;
        v4[99] = v4 + 98;
        v4[98] = v4 + 98;
        v4[101] = v4 + 100;
        v4[100] = v4 + 100;
        v4[68] = v4 + 67;
        v4[67] = v4 + 67;
        *((_DWORD *)v4 + 164) = -1;
        v4[84] = v4 + 83;
        v4[83] = v4 + 83;
        *v4 = &gAcpiTriageInfo;
        v15 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
        RootDeviceExtension = (ULONG_PTR)v4;
        KeReleaseSpinLock(&AcpiDeviceTreeLock, v15);
        ACPIGetPortRangeInterfaces(a2);
        if ( IoWMIRegistrationControl(SourceDevice, 1u) < 0 )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            0xAu,
            (__int64)&WPP_2bd5b8f060d2313f062dd09aad0687a8_Traceguids);
        AcpiSetupNativeMethodInterface();
        SourceDevice->Flags &= ~0x80u;
        ACPICreateRootSymbolicLink(a2);
LABEL_9:
        if ( v12 >= 0 )
          goto LABEL_10;
        goto LABEL_19;
      }
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x16u,
        0xFu,
        (__int64)&WPP_ab258ff9f03f3cf3ffad82b9e12a3728_Traceguids);
    }
    else
    {
      WPP_RECORDER_SF_L(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        6u,
        0xCu,
        (__int64)&WPP_ab258ff9f03f3cf3ffad82b9e12a3728_Traceguids,
        11);
    }
    v12 = -1073741670;
LABEL_19:
    ExFreePoolWithTag(v7, 0);
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
    if ( v5 )
      IoDetachDevice(v5);
    goto LABEL_23;
  }
  WPP_RECORDER_SF_L(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    2u,
    6u,
    0xBu,
    (__int64)&WPP_ab258ff9f03f3cf3ffad82b9e12a3728_Traceguids,
    14);
  v12 = -1073741670;
LABEL_23:
  if ( SourceDevice )
    IoDeleteDevice(SourceDevice);
  if ( v4 )
    ExFreeToNPagedLookasideList(&DeviceExtensionLookAsideList, v4);
LABEL_10:
  v16 = &unk_1C00B6BB3;
  v17 = &unk_1C00B6BB3;
  if ( v4 )
  {
    v18 = v4[1];
    v2 = (char)v4;
    if ( (v18 & 0x200000000000LL) != 0 )
    {
      v16 = (void *)v4[70];
      if ( (v18 & 0x400000000000LL) != 0 )
        v17 = (void *)v4[71];
    }
  }
  WPP_RECORDER_SF_Lqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    6u,
    0x10u,
    (__int64)&WPP_ab258ff9f03f3cf3ffad82b9e12a3728_Traceguids,
    v12,
    v2,
    (__int64)v16,
    (__int64)v17);
  return (unsigned int)v12;
}
