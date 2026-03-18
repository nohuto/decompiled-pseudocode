/*
 * XREFs of DpiFdoInitializeGpuVirtualization @ 0x1C014C474
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01487C8 (DpiFdoStartAdapter.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000FAAC (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     DpiQueryMiniportInterface @ 0x1C014C220 (DpiQueryMiniportInterface.c)
 *     DxgkIsGpuParavirtualizationSupported @ 0x1C014E8CC (DxgkIsGpuParavirtualizationSupported.c)
 *     DxgkCheckGpuVirtualizationCaps @ 0x1C01C7D18 (DxgkCheckGpuVirtualizationCaps.c)
 *     DpiCreateSecurityDescriptorForGpuVirtualization @ 0x1C0263500 (DpiCreateSecurityDescriptorForGpuVirtualization.c)
 *     DpiFdoCleanupGpuVirtualization @ 0x1C02638B0 (DpiFdoCleanupGpuVirtualization.c)
 */

__int64 __fastcall DpiFdoInitializeGpuVirtualization(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rcx
  char v6; // bp
  __int64 v8; // rax
  __int64 v9; // rax
  NTSTATUS v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  NTSTATUS v18; // eax
  NTSTATUS v19; // eax
  __int64 v20; // rdx
  NTSTATUS v21; // eax
  NTSTATUS v22; // eax
  NTSTATUS v23; // eax
  NTSTATUS v24; // eax
  int v25; // eax
  NTSTATUS v26; // eax
  NTSTATUS v27; // eax
  NTSTATUS v28; // eax
  NTSTATUS v29; // eax
  NTSTATUS v30; // eax
  NTSTATUS v31; // eax
  NTSTATUS v32; // eax
  int v33; // [rsp+20h] [rbp-58h]
  __int64 v34; // [rsp+20h] [rbp-58h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-48h] BYREF
  struct _UNICODE_STRING ReferenceString; // [rsp+40h] [rbp-38h] BYREF
  PVOID P; // [rsp+80h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  LODWORD(v3) = 0;
  v4 = *(_QWORD *)(v1 + 3792);
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_GPUPartitioning__private_propertyCache,
    9280166LL,
    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C0065EC0,
    1,
    v33);
  if ( (**(_DWORD **)(v4 + 4112) & 0x100) != 0 )
  {
    v6 = 0;
    goto LABEL_6;
  }
  if ( !*(_BYTE *)(v1 + 4944) )
  {
    LODWORD(v3) = DpiQueryMiniportInterface(a1, (__int64)&GUID_DXGKDDI_GPU_PARTITION_INTERFACE, 128, 1, v34, v1 + 4952);
    if ( (int)v3 < 0 )
      goto LABEL_4;
    if ( !*(_QWORD *)(v1 + 5016)
      || !*(_QWORD *)(v1 + 5040)
      || !*(_QWORD *)(v1 + 4992)
      || !*(_QWORD *)(v1 + 5000)
      || !*(_QWORD *)(v1 + 5008)
      || !*(_QWORD *)(v1 + 5024)
      || !*(_QWORD *)(v1 + 5032)
      || !*(_QWORD *)(v1 + 5048)
      || !*(_QWORD *)(v1 + 5056)
      || !*(_QWORD *)(v1 + 5064)
      || !*(_QWORD *)(v1 + 5072)
      || !*(_QWORD *)(v1 + 4984) )
    {
LABEL_27:
      LODWORD(v3) = -1073741823;
      v8 = WdLogNewEntry5_WdError(v5);
      *(_QWORD *)(v8 + 24) = -1073741823LL;
      WdLogEvent5_WdError(v8);
      goto LABEL_28;
    }
    *(_BYTE *)(v1 + 4944) = 1;
  }
  if ( *(_BYTE *)(v1 + 4816) )
  {
LABEL_42:
    if ( !*(_BYTE *)(v1 + 5080) )
    {
      LODWORD(v3) = DpiQueryMiniportInterface(
                      a1,
                      (__int64)&GUID_DXGKDDI_MITIGABLE_DEVICE_INTERFACE,
                      48,
                      1,
                      v34,
                      v1 + 5088);
      if ( (int)v3 < 0 )
      {
        LODWORD(v3) = 0;
      }
      else
      {
        *(_BYTE *)(v1 + 5080) = 1;
        if ( !*(_QWORD *)(v1 + 5120) || !*(_QWORD *)(v1 + 5128) )
          goto LABEL_27;
      }
    }
    if ( !*(_BYTE *)(v1 + 5136) )
    {
      LODWORD(v3) = DpiQueryMiniportInterface(
                      a1,
                      (__int64)&GUID_DXGKDDI_FLEXIOV_DEVICE_INTERFACE,
                      56,
                      1,
                      v34,
                      v1 + 5144);
      if ( (int)v3 < 0 )
      {
        LODWORD(v3) = 0;
      }
      else
      {
        *(_BYTE *)(v1 + 5136) = 1;
        if ( !*(_QWORD *)(v1 + 5176) || !*(_QWORD *)(v1 + 5184) || !*(_QWORD *)(v1 + 5192) || *(_WORD *)(v1 + 5146) != 1 )
          goto LABEL_27;
      }
    }
    if ( *(_BYTE *)(v1 + 4944) )
    {
      v6 = 1;
      *(_BYTE *)(v1 + 4816) = 1;
      *(_BYTE *)(v1 + 5136) = 1;
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  LODWORD(v3) = DpiQueryMiniportInterface(a1, (__int64)&GUID_DXGKDDI_SRIOV_INTERFACE, 120, 1, v34, v1 + 4824);
  if ( (int)v3 >= 0 )
  {
    *(_BYTE *)(v1 + 4816) = 1;
    if ( !*(_QWORD *)(v1 + 4856)
      || !*(_QWORD *)(v1 + 4864)
      || !*(_QWORD *)(v1 + 4872)
      || !*(_QWORD *)(v1 + 4880)
      || !*(_QWORD *)(v1 + 4888)
      || !*(_QWORD *)(v1 + 4896)
      || !*(_QWORD *)(v1 + 4904)
      || !*(_QWORD *)(v1 + 4912)
      || !*(_QWORD *)(v1 + 4920)
      || !*(_QWORD *)(v1 + 4936)
      || !*(_QWORD *)(v1 + 4928) )
    {
      goto LABEL_27;
    }
    goto LABEL_42;
  }
LABEL_4:
  if ( !*(_BYTE *)(v1 + 4944) )
  {
LABEL_5:
    v6 = 0;
LABEL_6:
    if ( (unsigned __int8)DxgkIsGpuParavirtualizationSupported(*(_QWORD *)(v1 + 3792)) )
    {
      *(_BYTE *)(v1 + 4816) = 1;
      *(_BYTE *)(v1 + 5136) = 1;
      if ( !*(_QWORD *)(v1 + 2712) )
      {
        *(_QWORD *)&DestinationString.Length = 0LL;
        DestinationString.Buffer = 0LL;
        RtlInitUnicodeString(&DestinationString, L"GPUPARAV");
        v10 = IoRegisterDeviceInterface(
                *(PDEVICE_OBJECT *)(v1 + 152),
                &GUID_DEVINTERFACE_GPU_PARTITIONING_DEVICE,
                &DestinationString,
                (PUNICODE_STRING)(v1 + 2704));
        v12 = v10;
        if ( v10 < 0 )
        {
          v9 = WdLogNewEntry5_WdError(v11);
          *(_QWORD *)(v9 + 24) = v12;
          goto LABEL_97;
        }
      }
    }
    if ( v6 || *(_QWORD *)(v1 + 2712) )
    {
      *(_BYTE *)(v1 + 57) = 1;
      *(_QWORD *)(v1 + 120) = DpiFdoDispatchIoctl;
      *(_DWORD *)(v1 + 5408) = 0;
      *(_QWORD *)(v1 + 104) = &DpiFdoDispatchCreate;
      *(_QWORD *)(v1 + 96) = &DpiFdoDispatchCleanupAndClose;
      v13 = DpiCreateSecurityDescriptorForGpuVirtualization(&P);
      v3 = v13;
      if ( v13 < 0 )
      {
LABEL_96:
        v9 = WdLogNewEntry5_WdError(v14);
        *(_QWORD *)(v9 + 24) = v3;
        goto LABEL_97;
      }
      v15 = ObSetSecurityObjectByPointer(a1, 4LL, P);
      v3 = v15;
      if ( v15 < 0 )
      {
        v17 = WdLogNewEntry5_WdError(v16);
        *(_QWORD *)(v17 + 24) = v3;
        WdLogEvent5_WdError(v17);
      }
      ExFreePoolWithTag(P, 0);
    }
    if ( (int)v3 < 0 )
    {
      LODWORD(v3) = 0;
      goto LABEL_11;
    }
    if ( !v6
      || (*(_QWORD *)(v1 + 2696)
       || (v18 = IoRegisterDeviceInterface(
                   *(PDEVICE_OBJECT *)(v1 + 152),
                   &GUID_DEVINTERFACE_GPU_PARTITIONING_DEVICE,
                   0LL,
                   (PUNICODE_STRING)(v1 + 2688)),
           v3 = v18,
           v18 >= 0))
      && (*(_QWORD *)(v1 + 2728)
       || (v19 = IoRegisterDeviceInterface(
                   *(PDEVICE_OBJECT *)(v1 + 152),
                   &GUID_DEVINTERFACE_VIRTUALIZABLE_DEVICE,
                   0LL,
                   (PUNICODE_STRING)(v1 + 2720)),
           v3 = v19,
           v19 >= 0)) )
    {
      if ( !(unsigned __int8)DxgkIsGpuParavirtualizationSupported(*(_QWORD *)(v1 + 3792))
        || *(_QWORD *)(v1 + 2744)
        || (*(_QWORD *)&ReferenceString.Length = 0LL,
            ReferenceString.Buffer = 0LL,
            RtlInitUnicodeString(&ReferenceString, L"GPUPARAV"),
            v21 = IoRegisterDeviceInterface(
                    *(PDEVICE_OBJECT *)(v1 + 152),
                    &GUID_DEVINTERFACE_VIRTUALIZABLE_DEVICE,
                    &ReferenceString,
                    (PUNICODE_STRING)(v1 + 2736)),
            v3 = v21,
            v21 >= 0) )
      {
        if ( *(_QWORD *)(v1 + 2760)
          || (v22 = IoRegisterDeviceInterface(
                      *(PDEVICE_OBJECT *)(v1 + 152),
                      &GUID_MITIGABLE_DEVICE_INTERFACE,
                      0LL,
                      (PUNICODE_STRING)(v1 + 2752)),
              v3 = v22,
              v22 >= 0) )
        {
          if ( *(_QWORD *)(v1 + 2776)
            || (v23 = IoRegisterDeviceInterface(
                        *(PDEVICE_OBJECT *)(v1 + 152),
                        &GUID_SRIOV_DEVICE_INTERFACE_STANDARD,
                        0LL,
                        (PUNICODE_STRING)(v1 + 2768)),
                v3 = v23,
                v23 >= 0) )
          {
            if ( *(_QWORD *)(v1 + 2792)
              || (v24 = IoRegisterDeviceInterface(
                          *(PDEVICE_OBJECT *)(v1 + 152),
                          &GUID_FLEXIBLE_IOV_INTERFACE,
                          0LL,
                          (PUNICODE_STRING)(v1 + 2784)),
                  v3 = v24,
                  v24 >= 0) )
            {
              LOBYTE(v20) = v6;
              v25 = DxgkCheckGpuVirtualizationCaps(*(_QWORD *)(v1 + 3792), v20, v1 + 5393);
              v3 = v25;
              if ( v25 >= 0 )
              {
                if ( !*(_BYTE *)(v1 + 4944)
                  || (v26 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v1 + 2688), 1u), v3 = v26, v26 >= 0) )
                {
                  if ( !*(_QWORD *)(v1 + 2712)
                    || (v27 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v1 + 2704), 1u), v3 = v27, v27 >= 0) )
                  {
                    if ( !*(_QWORD *)(v1 + 2728)
                      || (v28 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v1 + 2720), 1u), v3 = v28, v28 >= 0) )
                    {
                      if ( !*(_QWORD *)(v1 + 2744)
                        || (v29 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v1 + 2736), 1u), v3 = v29, v29 >= 0) )
                      {
                        if ( !*(_QWORD *)(v1 + 2760)
                          || (v30 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v1 + 2752), 1u), v3 = v30, v30 >= 0) )
                        {
                          if ( !*(_QWORD *)(v1 + 2776)
                            || (v31 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v1 + 2768), 1u), v3 = v31, v31 >= 0) )
                          {
                            if ( !*(_QWORD *)(v1 + 2792) )
                              goto LABEL_11;
                            v32 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v1 + 2784), 1u);
                            v3 = v32;
                            if ( v32 >= 0 )
                              return (unsigned int)v3;
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
    goto LABEL_96;
  }
  v9 = WdLogNewEntry5_WdError(v5);
  *(_QWORD *)(v9 + 24) = (int)v3;
LABEL_97:
  WdLogEvent5_WdError(v9);
LABEL_11:
  if ( (int)v3 < 0 )
LABEL_28:
    DpiFdoCleanupGpuVirtualization(v1);
  return (unsigned int)v3;
}
