/*
 * XREFs of ?ndisSetSystemPowerOnComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0010FA0
 * Callers:
 *     <none>
 * Callees:
 *     ndisRequestDevicePowerD0 @ 0x1C0011040 (ndisRequestDevicePowerD0.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     McTemplateK0jqxqd @ 0x1C003D2DC (McTemplateK0jqxqd.c)
 */

__int64 __fastcall ndisSetSystemPowerOnComplete(PDEVICE_OBJECT DeviceObject, struct _IRP *a2, _DWORD *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  int v7; // ecx

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( (unsigned __int8)byte_1C00A025D >= 4u )
    WPP_SF_q(60LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a3);
  if ( a2->IoStatus.Status >= 0 )
  {
    ndisRequestDevicePowerD0(a3, 5LL);
    if ( (unsigned __int8)byte_1C00A025D >= 4u )
      WPP_SF_q(61LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a3);
    if ( (byte_1C00A2081 & 8) != 0 )
      McTemplateK0jqxqd(
        v7,
        (unsigned int)&SystemPowerOnComplete,
        (_DWORD)a3 + 4040,
        (_DWORD)a3 + 4040,
        a3[1022],
        *((_QWORD *)a3 + 507),
        CurrentStackLocation->Parameters.Create.Options,
        CurrentStackLocation->Parameters.Read.ByteOffset.LowPart);
    PoSetPowerState(DeviceObject, SystemPowerState, CurrentStackLocation->Parameters.Power.State);
  }
  if ( (unsigned __int8)byte_1C00A025D >= 4u )
    WPP_SF_q(62LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a3);
  return 0LL;
}
