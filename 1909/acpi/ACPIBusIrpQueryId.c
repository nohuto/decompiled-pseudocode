/*
 * XREFs of ACPIBusIrpQueryId @ 0x1C008F640
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalSetFlags @ 0x1C0001884 (ACPIInternalSetFlags.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0001CF0 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C0001D50 (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsdLqss @ 0x1C0002068 (WPP_RECORDER_SF_qsdLqss.c)
 *     WPP_RECORDER_SF_qsdqss @ 0x1C002A8A4 (WPP_RECORDER_SF_qsdqss.c)
 *     ACPIBusAndFilterIrpQueryContainerId @ 0x1C002D980 (ACPIBusAndFilterIrpQueryContainerId.c)
 *     ACPIEmQueryFailDeviceResetOnOpenHandles @ 0x1C0060534 (ACPIEmQueryFailDeviceResetOnOpenHandles.c)
 *     ACPIBusIrpQueryHardwareId @ 0x1C008FB24 (ACPIBusIrpQueryHardwareId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C0097DE4 (ACPIBusIrpQueryDeviceId.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C009F364 (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIBusIrpQueryInstanceId @ 0x1C00A071C (ACPIBusIrpQueryInstanceId.c)
 *     ACPIEmQueryEnableD3ColdOnSurpriseRemovalRule @ 0x1C00B599C (ACPIEmQueryEnableD3ColdOnSurpriseRemovalRule.c)
 */

__int64 __fastcall ACPIBusIrpQueryId(ULONG_PTR a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  char v3; // si
  int Status; // r15d
  _WORD *v6; // r14
  __int64 DeviceExtension; // rax
  unsigned int Length; // ebx
  const char *v9; // r12
  _QWORD *v10; // rdi
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  char *v14; // rax
  const char *v15; // r8
  char *IrpText; // rax
  __int64 v18; // rdx
  const char *v19; // r8
  char v20; // r10
  const char *v21; // r11
  SIZE_T v22[2]; // [rsp+60h] [rbp-10h] BYREF
  unsigned __int8 MinorFunction; // [rsp+B8h] [rbp+48h]
  int v24; // [rsp+C0h] [rbp+50h] BYREF
  PVOID P; // [rsp+C8h] [rbp+58h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  Status = a2->IoStatus.Status;
  v22[0] = 0LL;
  v6 = 0LL;
  P = 0LL;
  MinorFunction = CurrentStackLocation->MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  Length = CurrentStackLocation->Parameters.Read.Length;
  v9 = byte_1C006FE7D;
  v10 = (_QWORD *)DeviceExtension;
  switch ( Length )
  {
    case 0u:
      v12 = ACPIBusIrpQueryDeviceId(&P, v22, DeviceExtension, 0x200000000000LL);
      goto LABEL_7;
    case 1u:
      v12 = ACPIBusIrpQueryHardwareId(&P, v22, DeviceExtension, 0x200000000000LL);
      goto LABEL_7;
    case 2u:
      v12 = ACPIBusIrpQueryCompatibleId(&P, v22, DeviceExtension, 0x200000000000LL);
      goto LABEL_7;
  }
  v11 = Length - 3;
  if ( Length == 3 )
  {
    v12 = ACPIBusIrpQueryInstanceId(&P, v22, DeviceExtension, 0x200000000000LL);
LABEL_7:
    v6 = P;
    Status = v12;
    goto LABEL_8;
  }
  if ( Length == 5 )
  {
    v12 = ACPIBusAndFilterIrpQueryContainerId(&P, v22, DeviceExtension);
    goto LABEL_7;
  }
  if ( DeviceExtension && (*(_QWORD *)(DeviceExtension + 8) & 0x200000000000LL) != 0 )
    v11 = 0x400000000000LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v11, MinorFunction);
    WPP_RECORDER_SF_qsdqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v18,
      (__int64)v19,
      0x29u,
      (__int64)&WPP_5ea0bed1d6f13f26cf29dd07beb1e62d_Traceguids,
      (char)a2,
      IrpText,
      Length,
      v20,
      v21,
      v19);
  }
LABEL_8:
  if ( (AcpiOverrideAttributes & 0x100000) != 0
    && Length - 1 <= 1
    && Status >= 0
    && v6
    && (int)ACPIEmQueryEnableD3ColdOnSurpriseRemovalRule(Length, v6, &v24) >= 0
    && v24 == 2 )
  {
    ACPIInternalSetFlags(v10 + 119, 0x800000uLL);
  }
  if ( (AcpiOverrideAttributes & 0x200000) != 0 && Length - 1 <= 1 )
  {
    if ( Status < 0 )
      goto LABEL_18;
    if ( v6 && (int)ACPIEmQueryFailDeviceResetOnOpenHandles(Length, v6) >= 0 && v24 == 2 )
      ACPIInternalSetFlags(v10 + 119, 0x40000000uLL);
  }
  if ( Status >= 0 )
  {
    a2->IoStatus.Information = (unsigned __int64)v6;
    goto LABEL_12;
  }
LABEL_18:
  if ( v6 )
    ExFreePoolWithTag(v6, 0x53706341u);
LABEL_12:
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  if ( v10 )
  {
    v13 = 0x200000000000LL;
    v3 = (char)v10;
    if ( (v10[1] & 0x200000000000LL) != 0 )
    {
      v9 = (const char *)v10[70];
      v13 = 0x400000000000LL;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = ACPIDebugGetIrpText(v13, MinorFunction);
    WPP_RECORDER_SF_qsdLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      (__int64)v15,
      0x2Au,
      (__int64)&WPP_5ea0bed1d6f13f26cf29dd07beb1e62d_Traceguids,
      (char)a2,
      v14,
      Length,
      Status,
      v3,
      v9,
      v15);
  }
  return (unsigned int)Status;
}
