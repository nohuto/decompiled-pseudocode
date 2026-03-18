/*
 * XREFs of ACPIInternalDeviceQueryDeviceRelations @ 0x1C009F160
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001CF0 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C0001D50 (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0001D70 (WPP_RECORDER_SF_qsLqss.c)
 *     WPP_RECORDER_SF_qsdqss @ 0x1C002A8A4 (WPP_RECORDER_SF_qsdqss.c)
 *     ACPIBusIrpQueryTargetRelation @ 0x1C008F1A8 (ACPIBusIrpQueryTargetRelation.c)
 */

__int64 __fastcall ACPIInternalDeviceQueryDeviceRelations(PVOID Object, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  char v3; // bp
  unsigned __int64 v6; // r12
  __int64 DeviceExtension; // rax
  unsigned int Length; // r13d
  const char *v9; // r14
  __int64 v10; // rsi
  int Status; // ebx
  unsigned __int8 v12; // r15
  char *IrpText; // rax
  __int64 v14; // rdx
  const char *v15; // r8
  char v16; // r10
  const char *v17; // r11
  __int64 v18; // rcx
  char *v19; // rax
  const char *v20; // r8
  int TargetRelation; // eax
  unsigned __int8 MinorFunction; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v24; // [rsp+B0h] [rbp+18h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  v24 = 0LL;
  v6 = 0LL;
  MinorFunction = CurrentStackLocation->MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)Object);
  Length = CurrentStackLocation->Parameters.Read.Length;
  v9 = byte_1C006FE7D;
  v10 = DeviceExtension;
  if ( Length == 4 )
  {
    TargetRelation = ACPIBusIrpQueryTargetRelation(Object, (char)Irp, (PVOID *)&v24);
    v6 = v24;
    Status = TargetRelation;
  }
  else
  {
    Status = -1073741637;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = MinorFunction;
      IrpText = ACPIDebugGetIrpText((__int64)&WPP_RECORDER_INITIALIZED, MinorFunction);
      WPP_RECORDER_SF_qsdqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v14,
        (__int64)v15,
        0xBu,
        (__int64)&WPP_51bf0237d9dc315085b86856c05bf3fc_Traceguids,
        (char)Irp,
        IrpText,
        Length,
        v16,
        v17,
        v15);
      goto LABEL_4;
    }
  }
  v12 = MinorFunction;
  if ( Status >= 0 )
  {
    Irp->IoStatus.Information = v6;
    Irp->IoStatus.Status = Status;
    goto LABEL_5;
  }
  if ( Status != -1073741637 )
  {
    Irp->IoStatus.Status = Status;
    Irp->IoStatus.Information = 0LL;
    goto LABEL_5;
  }
LABEL_4:
  Status = Irp->IoStatus.Status;
LABEL_5:
  IofCompleteRequest(Irp, 0);
  if ( v10 )
  {
    v18 = 0x200000000000LL;
    v3 = v10;
    if ( (*(_QWORD *)(v10 + 8) & 0x200000000000LL) != 0 )
    {
      v9 = *(const char **)(v10 + 560);
      v18 = 0x400000000000LL;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v19 = ACPIDebugGetIrpText(v18, v12);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0xCu,
      (__int64)&WPP_51bf0237d9dc315085b86856c05bf3fc_Traceguids,
      (char)Irp,
      v19,
      Status,
      v3,
      v9,
      v20);
  }
  return (unsigned int)Status;
}
