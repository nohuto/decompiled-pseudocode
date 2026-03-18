/*
 * XREFs of ACPIBusIrpDeviceEnumerated @ 0x1C00966F0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDispatchForwardIrp @ 0x1C0001ED0 (ACPIDispatchForwardIrp.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0002830 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C0002890 (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00028B0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIQueryPhysicalDeviceLocation @ 0x1C00968FC (ACPIQueryPhysicalDeviceLocation.c)
 *     ACPIQueryDeviceBiosName @ 0x1C0096A84 (ACPIQueryDeviceBiosName.c)
 *     AcpiQueryPciDeviceChassisLabel @ 0x1C0096BC0 (AcpiQueryPciDeviceChassisLabel.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C0096E00 (ACPIQueryCacheCoherencyAttribute.c)
 */

__int64 __fastcall ACPIBusIrpDeviceEnumerated(ULONG_PTR BugCheckParameter3, PIRP Irp)
{
  unsigned __int8 MinorFunction; // r12
  __int64 DeviceExtension; // rax
  char v6; // di
  const char *v7; // r14
  ULONG_PTR v8; // rbx
  int v9; // esi
  __int64 v11; // rcx
  char *v12; // rax
  const char *v13; // r8
  __int64 v14; // rcx
  char *IrpText; // rax
  const char *v16; // r8
  char v17; // r10
  const char *v18; // r11
  char *v19; // rax
  const char *v20; // r8
  const char *v21; // r10
  __int64 v22; // [rsp+60h] [rbp-38h] BYREF
  PVOID P; // [rsp+68h] [rbp-30h]

  MinorFunction = Irp->Tail.Overlay.CurrentStackLocation->MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension(BugCheckParameter3);
  v6 = 0;
  v7 = byte_1C006E28A;
  v8 = DeviceExtension;
  if ( DeviceExtension )
  {
    ACPIQueryPhysicalDeviceLocation(DeviceExtension);
    if ( (*(_QWORD *)(v8 + 8) & 0x8000000000000LL) == 0 )
    {
      v22 = 0LL;
      P = 0LL;
      if ( (int)ACPIQueryDeviceBiosName(*(_QWORD *)(v8 + 720), &v22) >= 0 )
      {
        if ( P )
        {
          IoSetDevicePropertyData(
            *(PDEVICE_OBJECT *)(v8 + 736),
            &DEVPKEY_Device_BiosDeviceName,
            0,
            0,
            0x12u,
            (unsigned __int16)v22 + 2,
            P);
          ExFreePoolWithTag(P, 0x53706341u);
        }
      }
    }
    if ( (*(_QWORD *)(v8 + 8) & 0x102000000LL) != 0 && (int)AcpiQueryPciDeviceChassisLabel(v8) < 0 )
    {
      IrpText = ACPIDebugGetIrpText(*(_QWORD *)(v8 + 8), 0x19u);
      WPP_RECORDER_SF_qsLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        0x1Au,
        (__int64)&WPP_5ea0bed1d6f13f26cf29dd07beb1e62d_Traceguids,
        (char)Irp,
        IrpText,
        v17,
        v8,
        v18,
        v16);
    }
    if ( *(_QWORD *)(v8 + 744) == RootDeviceExtension )
    {
      v9 = ACPIQueryCacheCoherencyAttribute(v8);
      if ( v9 < 0 )
      {
        if ( (*(_QWORD *)(v8 + 8) & 0x200000000000LL) != 0 )
          v14 = 0x400000000000LL;
        v19 = ACPIDebugGetIrpText(v14, 0x19u);
        WPP_RECORDER_SF_qsLqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          5u,
          0x1Bu,
          (__int64)&WPP_5ea0bed1d6f13f26cf29dd07beb1e62d_Traceguids,
          (char)Irp,
          v19,
          v9,
          v8,
          v21,
          v20);
      }
    }
    else
    {
      v9 = 0;
    }
    if ( (*(_BYTE *)(v8 + 8) & 0x50) != 0 )
      return ACPIDispatchForwardIrp(BugCheckParameter3, Irp);
  }
  else
  {
    v9 = -1073741823;
  }
  Irp->IoStatus.Status = v9;
  IofCompleteRequest(Irp, 0);
  if ( v8 )
  {
    v6 = v8;
    if ( (*(_QWORD *)(v8 + 8) & 0x200000000000LL) != 0 )
    {
      v7 = *(const char **)(v8 + 560);
      v11 = 0x400000000000LL;
    }
  }
  v12 = ACPIDebugGetIrpText(v11, MinorFunction);
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0x1Cu,
    (__int64)&WPP_5ea0bed1d6f13f26cf29dd07beb1e62d_Traceguids,
    (char)Irp,
    v12,
    v9,
    v6,
    v7,
    v13);
  return (unsigned int)v9;
}
