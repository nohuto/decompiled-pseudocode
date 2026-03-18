/*
 * XREFs of UsbhGetHubPowerStatus @ 0x1C001E788
 * Callers:
 *     UsbhGetMaxPowerPerPort @ 0x1C001E680 (UsbhGetMaxPowerPerPort.c)
 *     UsbhInitialize @ 0x1C001EBF0 (UsbhInitialize.c)
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhQueryHubState @ 0x1C001E864 (UsbhQueryHubState.c)
 *     WPP_RECORDER_SF_ @ 0x1C00415CC (WPP_RECORDER_SF_.c)
 */

void __fastcall UsbhGetHubPowerStatus(__int64 a1)
{
  _DWORD *v2; // rbx
  int HubState; // eax
  int v4; // r10d

  v2 = FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      31,
      (__int64)&WPP_10fd33d0d4c73f43ffd0851bf01e9310_Traceguids);
  if ( *((_QWORD *)v2 + 328) )
  {
    HubState = UsbhQueryHubState(a1);
    Log(a1, 8, 1752396916, 0LL, HubState);
    if ( v4 >= 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            33,
            (__int64)&WPP_10fd33d0d4c73f43ffd0851bf01e9310_Traceguids);
      }
      v2[762] = 500;
    }
  }
  else
  {
    v2[762] = 0;
  }
}
