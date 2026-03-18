/*
 * XREFs of ACPIRootIrpQueryPower @ 0x1C005CA70
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002830 (ACPIInternalGetDeviceExtension.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     ACPIDispatchForwardPowerIrp @ 0x1C000CC90 (ACPIDispatchForwardPowerIrp.c)
 *     AMLIGetParent @ 0x1C001AEEC (AMLIGetParent.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C001DC64 (WPP_RECORDER_SF_qLqss.c)
 *     AMLIIsNamedChildPresent @ 0x1C001ED60 (AMLIIsNamedChildPresent.c)
 */

__int64 __fastcall ACPIRootIrpQueryPower(ULONG_PTR a1, IRP *a2)
{
  int Status; // ebx
  char v5; // di
  _QWORD *DeviceExtension; // rbp
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int LowPart; // eax
  int v9; // ebx
  __int64 *v10; // r14
  char v11; // dl
  const char *v12; // rax
  const char *v13; // r8
  __int64 v14; // rcx

  Status = a2->IoStatus.Status;
  v5 = 1;
  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(a1);
  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( !CurrentStackLocation->Parameters.Create.Options )
  {
    if ( CurrentStackLocation->Parameters.Create.EaLength == 7 )
    {
LABEL_3:
      v5 = 0;
      Status = -1073741808;
      goto LABEL_18;
    }
    LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    switch ( LowPart )
    {
      case 1u:
        v9 = 1597002591;
        break;
      case 2u:
        v9 = 1597068127;
        break;
      case 3u:
        v9 = 1597133663;
        break;
      case 4u:
        v9 = 1597199199;
        break;
      default:
        if ( LowPart - 5 <= 1 )
        {
          Status = 0;
          goto LABEL_18;
        }
        goto LABEL_3;
    }
    v10 = (__int64 *)AMLIGetParent(DeviceExtension[89]);
    if ( AMLIIsNamedChildPresent(v10, v9) )
    {
      Status = 0;
    }
    else
    {
      v5 = 0;
      Status = -1073741808;
    }
    AMLIDereferenceHandleEx((__int64)v10);
  }
LABEL_18:
  v11 = 0;
  a2->IoStatus.Status = Status;
  v12 = (const char *)&unk_1C006E28A;
  v13 = (const char *)&unk_1C006E28A;
  if ( DeviceExtension )
  {
    v14 = DeviceExtension[1];
    v11 = (char)DeviceExtension;
    if ( (v14 & 0x200000000000LL) != 0 )
    {
      v12 = (const char *)DeviceExtension[70];
      if ( (v14 & 0x400000000000LL) != 0 )
        v13 = (const char *)DeviceExtension[71];
    }
  }
  WPP_RECORDER_SF_qLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0x15u,
    (__int64)&WPP_07ea04bf8856319f8bf6d44d5c5f0bbf_Traceguids,
    (char)a2,
    Status,
    v11,
    v12,
    v13);
  if ( v5 )
    ACPIDispatchForwardPowerIrp(a1, a2);
  else
    IofCompleteRequest(a2, 0);
  return 259LL;
}
