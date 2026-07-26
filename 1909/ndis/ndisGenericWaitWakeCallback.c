/*
 * XREFs of ndisGenericWaitWakeCallback @ 0x1C0012A50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     ndisRequestDevicePowerD0 @ 0x1C0013A5C (ndisRequestDevicePowerD0.c)
 *     ndisCompleteWaitWake @ 0x1C0013B78 (ndisCompleteWaitWake.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C0013C08 (WPP_RECORDER_SF_qqd.c)
 *     McTemplateK0jqxq @ 0x1C0061938 (McTemplateK0jqxq.c)
 *     McTemplateK0jqxqqq @ 0x1C0068DD0 (McTemplateK0jqxqqq.c)
 */

void __fastcall ndisGenericWaitWakeCallback(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _QWORD *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  int Status; // edi

  Status = IoStatus->Status;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      14,
      26,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      (char)Context,
      Context[162],
      IoStatus->Status);
  if ( Status >= 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        14,
        27,
        (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
        (char)Context);
    if ( (byte_1C00E8081 & 8) != 0 )
      McTemplateK0jqxq(
        (_DWORD)DeviceObject,
        (unsigned int)&WaitWakeComplete,
        (_DWORD)Context + 4008,
        (_DWORD)Context + 4008,
        *((_DWORD *)Context + 1014),
        Context[503],
        1);
    if ( (*((_DWORD *)Context + 31) & 0x800) != 0 || (unsigned int)(*((_DWORD *)Context + 967) - 2) > 2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4,
          14,
          29,
          (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
          (char)Context);
      if ( byte_1C00E8083 < 0 )
        McTemplateK0jqxq(
          (_DWORD)DeviceObject,
          (unsigned int)&WakeByMiniport,
          (_DWORD)Context + 4008,
          (_DWORD)Context + 4008,
          *((_DWORD *)Context + 1014),
          Context[503],
          1);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4,
          14,
          28,
          (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
          (char)Context);
      if ( (byte_1C00E8081 & 8) != 0 )
        McTemplateK0jqxq(
          (_DWORD)DeviceObject,
          (unsigned int)&MiniportPoweringUp,
          (_DWORD)Context + 4008,
          (_DWORD)Context + 4008,
          *((_DWORD *)Context + 1014),
          Context[503],
          1);
      ndisRequestDevicePowerD0((char)Context);
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        14,
        30,
        (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
        (char)Context,
        Status);
    if ( (byte_1C00E8082 & 0x40) != 0 )
      McTemplateK0jqxqqq(
        (_DWORD)DeviceObject,
        (unsigned int)&WaitWakeIrpFailed,
        (_DWORD)Context + 4008,
        (_DWORD)Context + 4008,
        *((_DWORD *)Context + 1014),
        Context[503],
        Status,
        1,
        0);
  }
  ndisCompleteWaitWake((char)Context);
}
