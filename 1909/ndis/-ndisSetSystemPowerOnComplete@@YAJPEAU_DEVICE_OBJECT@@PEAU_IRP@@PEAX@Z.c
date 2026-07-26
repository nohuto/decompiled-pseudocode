/*
 * XREFs of ?ndisSetSystemPowerOnComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0012F30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisRequestDevicePowerD0 @ 0x1C0013A5C (ndisRequestDevicePowerD0.c)
 *     McTemplateK0jqxqd @ 0x1C00619C8 (McTemplateK0jqxqd.c)
 */

__int64 __fastcall ndisSetSystemPowerOnComplete(PDEVICE_OBJECT DeviceObject, struct _IRP *a2, _DWORD *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  struct _IRP *v5; // rdi
  int v7; // edx
  int v8; // ecx

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      14,
      60,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      (char)a3);
  }
  if ( v5->IoStatus.Status >= 0 )
  {
    ndisRequestDevicePowerD0((char)a3);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v7,
        14,
        61,
        (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
        (char)a3);
    }
    if ( (byte_1C00E8081 & 8) != 0 )
      McTemplateK0jqxqd(
        v8,
        (unsigned int)&SystemPowerOnComplete,
        (_DWORD)a3 + 4008,
        (_DWORD)a3 + 4008,
        a3[1014],
        *((_QWORD *)a3 + 503),
        CurrentStackLocation->Parameters.Create.Options,
        CurrentStackLocation->Parameters.Read.ByteOffset.LowPart);
    PoSetPowerState(DeviceObject, SystemPowerState, CurrentStackLocation->Parameters.Power.State);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      14,
      62,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      (char)a3);
  }
  return 0LL;
}
