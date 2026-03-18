/*
 * XREFs of DpiFdoInitializeGpuVirtualization @ 0x1C01613F0
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C015F448 (DpiFdoStartAdapter.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000CF44 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00E2644 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     DxgkIsGpuParavirtualizationSupported @ 0x1C0161518 (DxgkIsGpuParavirtualizationSupported.c)
 *     DpiQueryMiniportInterface @ 0x1C0163FF8 (DpiQueryMiniportInterface.c)
 *     DxgkCheckGpuVirtualizationCaps @ 0x1C01F6854 (DxgkCheckGpuVirtualizationCaps.c)
 *     DpiCreateSecurityDescriptorForGpuVirtualization @ 0x1C029E94C (DpiCreateSecurityDescriptorForGpuVirtualization.c)
 *     DpiFdoCleanupGpuVirtualization @ 0x1C029ED0C (DpiFdoCleanupGpuVirtualization.c)
 */

__int64 __fastcall DpiFdoInitializeGpuVirtualization(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // ebx
  char v8; // r14
  int v10; // eax
  DXGADAPTER *v11; // rbx
  const GUID *v12; // r8
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // eax
  struct _DEVICE_OBJECT *v17; // rcx
  struct _DEVICE_OBJECT *v18; // rcx
  __int64 v19; // rax
  NTSTATUS v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rbx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  NTSTATUS v34; // eax
  NTSTATUS v35; // eax
  NTSTATUS v36; // eax
  NTSTATUS v37; // eax
  NTSTATUS v38; // eax
  NTSTATUS v39; // eax
  int v40; // eax
  NTSTATUS v41; // eax
  NTSTATUS v42; // eax
  NTSTATUS v43; // eax
  NTSTATUS v44; // eax
  NTSTATUS v45; // eax
  NTSTATUS v46; // eax
  NTSTATUS v47; // eax
  DEVPROPTYPE Type; // [rsp+20h] [rbp-59h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-39h] BYREF
  struct _UNICODE_STRING ReferenceString; // [rsp+50h] [rbp-29h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v51; // [rsp+60h] [rbp-19h] BYREF
  PVOID P; // [rsp+E8h] [rbp+6Fh] BYREF
  char Data; // [rsp+F0h] [rbp+77h] BYREF
  char v55; // [rsp+F8h] [rbp+7Fh] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  LODWORD(v2) = 0;
  LOBYTE(P) = 0;
  v3 = *(_QWORD *)(v1 + 3896);
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_GPUPartitioning__private_propertyCache,
    9280166LL,
    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C006C578,
    1,
    Type);
  if ( (**(_DWORD **)(v3 + 2456) & 0x100) != 0 )
  {
    v8 = 0;
    goto LABEL_6;
  }
  v7 = a1;
  if ( !*(_BYTE *)(v1 + 5072) )
  {
    LODWORD(v2) = DpiQueryMiniportInterface(a1, (unsigned int)&GUID_DXGKDDI_GPU_PARTITION_INTERFACE, 128, 1);
    if ( (int)v2 < 0 )
      goto LABEL_4;
    if ( !*(_QWORD *)(v1 + 5144)
      || !*(_QWORD *)(v1 + 5168)
      || !*(_QWORD *)(v1 + 5120)
      || !*(_QWORD *)(v1 + 5128)
      || !*(_QWORD *)(v1 + 5136)
      || !*(_QWORD *)(v1 + 5152)
      || !*(_QWORD *)(v1 + 5160)
      || !*(_QWORD *)(v1 + 5176)
      || !*(_QWORD *)(v1 + 5184)
      || !*(_QWORD *)(v1 + 5192)
      || !*(_QWORD *)(v1 + 5200)
      || !*(_QWORD *)(v1 + 5112) )
    {
      goto LABEL_47;
    }
    v10 = *(_DWORD *)(v1 + 3912);
    *(_BYTE *)(v1 + 5072) = 1;
    if ( v10 >= 9728 || (unsigned int)(v10 - 8454) <= 0xF9 )
    {
      memset(&v51, 0, sizeof(v51));
      v11 = *(DXGADAPTER **)(v1 + 3896);
      v51.Type = DXGKQAITYPE_DEVICE_TYPE_CAPS|DXGKQAITYPE_QUERYSEGMENT;
      v51.pOutputData = (void *)(v1 + 5520);
      v51.OutputDataSize = 4;
      DXGADAPTER::IsCoreResourceSharedOwner(v11);
      v13 = DXGADAPTER::DdiQueryAdapterInfo(v11, &v51, v12);
      v2 = v13;
      if ( v13 >= 0 )
      {
        v16 = *(_DWORD *)(v1 + 5520);
        if ( v16 >= 4 )
        {
          LODWORD(v2) = -1073741811;
          v15 = WdLogNewEntry5_WdError(v5, v4, v6);
          *(_QWORD *)(v15 + 24) = -1073741811LL;
          goto LABEL_48;
        }
        if ( (v16 & 1) != 0 )
        {
          v17 = *(struct _DEVICE_OBJECT **)(v1 + 152);
          Data = -1;
          IoSetDevicePropertyData(v17, &DEVPKEY_Gpup_Supports_Guest_Hibernation, 0, 0, 0x11u, 1u, &Data);
          v16 = *(_DWORD *)(v1 + 5520);
        }
        if ( (v16 & 2) != 0 )
        {
          v18 = *(struct _DEVICE_OBJECT **)(v1 + 152);
          v55 = -1;
          IoSetDevicePropertyData(v18, &DEVPKEY_Gpup_Supports_Hot_Driver_Update, 0, 0, 0x11u, 1u, &v55);
        }
      }
      else
      {
        v14 = WdLogNewEntry5_WdWarning(v5, v4, v6);
        *(_QWORD *)(v14 + 24) = v2;
        WdLogEvent5_WdWarning(v14);
        LODWORD(v2) = 0;
      }
      v7 = a1;
    }
  }
  if ( !*(_BYTE *)(v1 + 4944) )
  {
    LODWORD(v2) = DpiQueryMiniportInterface(v7, (unsigned int)&GUID_DXGKDDI_SRIOV_INTERFACE, 120, 1);
    if ( (int)v2 < 0 )
      goto LABEL_4;
    *(_BYTE *)(v1 + 4944) = 1;
    if ( !*(_QWORD *)(v1 + 4984)
      || !*(_QWORD *)(v1 + 4992)
      || !*(_QWORD *)(v1 + 5000)
      || !*(_QWORD *)(v1 + 5008)
      || !*(_QWORD *)(v1 + 5016)
      || !*(_QWORD *)(v1 + 5024)
      || !*(_QWORD *)(v1 + 5032)
      || !*(_QWORD *)(v1 + 5040)
      || !*(_QWORD *)(v1 + 5048)
      || !*(_QWORD *)(v1 + 5064)
      || !*(_QWORD *)(v1 + 5056) )
    {
      goto LABEL_47;
    }
  }
  if ( !*(_BYTE *)(v1 + 5208) )
  {
    LODWORD(v2) = DpiQueryMiniportInterface(v7, (unsigned int)&GUID_DXGKDDI_MITIGABLE_DEVICE_INTERFACE, 48, 1);
    if ( (int)v2 < 0 )
    {
      LODWORD(v2) = 0;
    }
    else
    {
      *(_BYTE *)(v1 + 5208) = 1;
      if ( !*(_QWORD *)(v1 + 5248) || !*(_QWORD *)(v1 + 5256) )
        goto LABEL_47;
    }
  }
  if ( !*(_BYTE *)(v1 + 5264) )
  {
    LODWORD(v2) = DpiQueryMiniportInterface(v7, (unsigned int)&GUID_DXGKDDI_FLEXIOV_DEVICE_INTERFACE, 56, 1);
    if ( (int)v2 < 0 )
    {
      LODWORD(v2) = 0;
    }
    else
    {
      *(_BYTE *)(v1 + 5264) = 1;
      if ( !*(_QWORD *)(v1 + 5304) || !*(_QWORD *)(v1 + 5312) || !*(_QWORD *)(v1 + 5320) || *(_WORD *)(v1 + 5274) != 1 )
      {
LABEL_47:
        LODWORD(v2) = -1073741823;
        v15 = WdLogNewEntry5_WdError(v5, v4, v6);
        *(_QWORD *)(v15 + 24) = -1073741823LL;
LABEL_48:
        WdLogEvent5_WdError(v15);
        goto LABEL_49;
      }
    }
  }
  if ( (int)v2 >= 0 )
  {
    if ( *(_BYTE *)(v1 + 5072) )
    {
      v8 = 1;
      *(_BYTE *)(v1 + 4944) = 1;
      *(_BYTE *)(v1 + 5264) = 1;
      goto LABEL_6;
    }
LABEL_5:
    v8 = (char)P;
LABEL_6:
    if ( (unsigned __int8)DxgkIsGpuParavirtualizationSupported(*(_QWORD *)(v1 + 3896)) )
    {
      *(_BYTE *)(v1 + 4944) = 1;
      *(_BYTE *)(v1 + 5264) = 1;
      if ( !*(_QWORD *)(v1 + 2784) )
      {
        *(_QWORD *)&DestinationString.Length = 0LL;
        DestinationString.Buffer = 0LL;
        RtlInitUnicodeString(&DestinationString, L"GPUPARAV");
        v20 = IoRegisterDeviceInterface(
                *(PDEVICE_OBJECT *)(v1 + 152),
                &GUID_DEVINTERFACE_GPU_PARTITIONING_DEVICE,
                &DestinationString,
                (PUNICODE_STRING)(v1 + 2776));
        v24 = v20;
        if ( v20 < 0 )
        {
          v19 = WdLogNewEntry5_WdError(v22, v21, v23);
          *(_QWORD *)(v19 + 24) = v24;
          goto LABEL_108;
        }
      }
    }
    if ( v8 || *(_QWORD *)(v1 + 2784) )
    {
      *(_BYTE *)(v1 + 57) = 1;
      *(_QWORD *)(v1 + 120) = DpiFdoDispatchIoctl;
      *(_DWORD *)(v1 + 5536) = 0;
      *(_QWORD *)(v1 + 104) = &DpiFdoDispatchCreate;
      *(_QWORD *)(v1 + 96) = &DpiFdoDispatchCleanupAndClose;
      v25 = DpiCreateSecurityDescriptorForGpuVirtualization(&P);
      v2 = v25;
      if ( v25 < 0 )
      {
LABEL_107:
        v19 = WdLogNewEntry5_WdError(v27, v26, v28);
        *(_QWORD *)(v19 + 24) = v2;
        goto LABEL_108;
      }
      v29 = ObSetSecurityObjectByPointer(a1, 4LL, P);
      v2 = v29;
      if ( v29 < 0 )
      {
        v33 = WdLogNewEntry5_WdError(v31, v30, v32);
        *(_QWORD *)(v33 + 24) = v2;
        WdLogEvent5_WdError(v33);
      }
      ExFreePoolWithTag(P, 0);
    }
    if ( (int)v2 < 0 )
    {
      LODWORD(v2) = 0;
      goto LABEL_11;
    }
    if ( !v8
      || (*(_QWORD *)(v1 + 2768)
       || (v34 = IoRegisterDeviceInterface(
                   *(PDEVICE_OBJECT *)(v1 + 152),
                   &GUID_DEVINTERFACE_GPU_PARTITIONING_DEVICE,
                   0LL,
                   (PUNICODE_STRING)(v1 + 2760)),
           v2 = v34,
           v34 >= 0))
      && (*(_QWORD *)(v1 + 2800)
       || (v35 = IoRegisterDeviceInterface(
                   *(PDEVICE_OBJECT *)(v1 + 152),
                   &GUID_DEVINTERFACE_VIRTUALIZABLE_DEVICE,
                   0LL,
                   (PUNICODE_STRING)(v1 + 2792)),
           v2 = v35,
           v35 >= 0)) )
    {
      if ( !(unsigned __int8)DxgkIsGpuParavirtualizationSupported(*(_QWORD *)(v1 + 3896))
        || *(_QWORD *)(v1 + 2816)
        || (*(_QWORD *)&ReferenceString.Length = 0LL,
            ReferenceString.Buffer = 0LL,
            RtlInitUnicodeString(&ReferenceString, L"GPUPARAV"),
            v36 = IoRegisterDeviceInterface(
                    *(PDEVICE_OBJECT *)(v1 + 152),
                    &GUID_DEVINTERFACE_VIRTUALIZABLE_DEVICE,
                    &ReferenceString,
                    (PUNICODE_STRING)(v1 + 2808)),
            v2 = v36,
            v36 >= 0) )
      {
        if ( *(_QWORD *)(v1 + 2832)
          || (v37 = IoRegisterDeviceInterface(
                      *(PDEVICE_OBJECT *)(v1 + 152),
                      &GUID_MITIGABLE_DEVICE_INTERFACE,
                      0LL,
                      (PUNICODE_STRING)(v1 + 2824)),
              v2 = v37,
              v37 >= 0) )
        {
          if ( *(_QWORD *)(v1 + 2848)
            || (v38 = IoRegisterDeviceInterface(
                        *(PDEVICE_OBJECT *)(v1 + 152),
                        &GUID_SRIOV_DEVICE_INTERFACE_STANDARD,
                        0LL,
                        (PUNICODE_STRING)(v1 + 2840)),
                v2 = v38,
                v38 >= 0) )
          {
            if ( *(_QWORD *)(v1 + 2864)
              || (v39 = IoRegisterDeviceInterface(
                          *(PDEVICE_OBJECT *)(v1 + 152),
                          &GUID_FLEXIBLE_IOV_INTERFACE,
                          0LL,
                          (PUNICODE_STRING)(v1 + 2856)),
                  v2 = v39,
                  v39 >= 0) )
            {
              LOBYTE(v26) = v8;
              v40 = DxgkCheckGpuVirtualizationCaps(*(_QWORD *)(v1 + 3896), v26, v1 + 5525);
              v2 = v40;
              if ( v40 >= 0 )
              {
                if ( !*(_BYTE *)(v1 + 5072)
                  || (v41 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v1 + 2760), 1u), v2 = v41, v41 >= 0) )
                {
                  if ( !*(_QWORD *)(v1 + 2784)
                    || (v42 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v1 + 2776), 1u), v2 = v42, v42 >= 0) )
                  {
                    if ( !*(_QWORD *)(v1 + 2800)
                      || (v43 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v1 + 2792), 1u), v2 = v43, v43 >= 0) )
                    {
                      if ( !*(_QWORD *)(v1 + 2816)
                        || (v44 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v1 + 2808), 1u), v2 = v44, v44 >= 0) )
                      {
                        if ( !*(_QWORD *)(v1 + 2832)
                          || (v45 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v1 + 2824), 1u), v2 = v45, v45 >= 0) )
                        {
                          if ( !*(_QWORD *)(v1 + 2848)
                            || (v46 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v1 + 2840), 1u), v2 = v46, v46 >= 0) )
                          {
                            if ( !*(_QWORD *)(v1 + 2864) )
                              goto LABEL_11;
                            v47 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v1 + 2856), 1u);
                            v2 = v47;
                            if ( v47 >= 0 )
                              return (unsigned int)v2;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_107;
  }
LABEL_4:
  if ( !*(_BYTE *)(v1 + 5072) )
    goto LABEL_5;
  v19 = WdLogNewEntry5_WdError(v5, v4, v6);
  *(_QWORD *)(v19 + 24) = (int)v2;
LABEL_108:
  WdLogEvent5_WdError(v19);
LABEL_11:
  if ( (int)v2 < 0 )
LABEL_49:
    DpiFdoCleanupGpuVirtualization(v1);
  return (unsigned int)v2;
}
