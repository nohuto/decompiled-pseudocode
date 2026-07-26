/*
 * XREFs of ndisGenericWaitWakeCallback @ 0x1C00113B0
 * Callers:
 *     <none>
 * Callees:
 *     ndisRequestDevicePowerD0 @ 0x1C0011040 (ndisRequestDevicePowerD0.c)
 *     ndisCompleteWaitWake @ 0x1C0011420 (ndisCompleteWaitWake.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 *     McTemplateK0jqxq @ 0x1C003D24C (McTemplateK0jqxq.c)
 *     McTemplateK0jqxqdq @ 0x1C00434F0 (McTemplateK0jqxqdq.c)
 */

void __fastcall ndisGenericWaitWakeCallback(
        PDEVICE_OBJECT DeviceObject,
        __int64 MinorFunction,
        __int64 PowerState,
        _QWORD *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  int Status; // edi

  Status = IoStatus->Status;
  if ( (unsigned __int8)byte_1C00A025D >= 4u )
    WPP_SF_qqd(26LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, Context, Context[162], IoStatus->Status);
  if ( Status >= 0 )
  {
    if ( (unsigned __int8)byte_1C00A025D >= 4u )
      WPP_SF_q(27LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, Context);
    if ( (byte_1C00A2081 & 8) != 0 )
      McTemplateK0jqxq(
        (_DWORD)DeviceObject,
        (unsigned int)&WaitWakeComplete,
        (_DWORD)Context + 4040,
        (_DWORD)Context + 4040,
        *((_DWORD *)Context + 1022),
        Context[507],
        230);
    if ( (*((_DWORD *)Context + 31) & 0x800) != 0 || (unsigned int)(*((_DWORD *)Context + 975) - 2) > 2 )
    {
      if ( (unsigned __int8)byte_1C00A025D >= 4u )
        WPP_SF_q(29LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, Context);
      if ( byte_1C00A2083 < 0 )
        McTemplateK0jqxq(
          (_DWORD)DeviceObject,
          (unsigned int)&WakeByMiniport,
          (_DWORD)Context + 4040,
          (_DWORD)Context + 4040,
          *((_DWORD *)Context + 1022),
          Context[507],
          9);
    }
    else
    {
      if ( (unsigned __int8)byte_1C00A025D >= 4u )
        WPP_SF_q(28LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, Context);
      if ( (byte_1C00A2081 & 8) != 0 )
        McTemplateK0jqxq(
          (_DWORD)DeviceObject,
          (unsigned int)&MiniportPoweringUp,
          (_DWORD)Context + 4040,
          (_DWORD)Context + 4040,
          *((_DWORD *)Context + 1022),
          Context[507],
          243);
      ndisRequestDevicePowerD0((__int64)Context, 0xAu);
    }
  }
  else
  {
    if ( (unsigned __int8)byte_1C00A025D >= 4u )
      WPP_SF_qD(30LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, Context, (unsigned int)Status);
    if ( (byte_1C00A2082 & 0x40) != 0 )
      McTemplateK0jqxqdq(
        (_DWORD)DeviceObject,
        (unsigned int)&WaitWakeIrpFailed,
        (_DWORD)Context + 4040,
        (_DWORD)Context + 4040,
        *((_DWORD *)Context + 1022),
        Context[507],
        Status,
        26,
        0);
  }
  ndisCompleteWaitWake(Context, MinorFunction, PowerState);
}
