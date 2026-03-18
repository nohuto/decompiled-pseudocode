/*
 * XREFs of UsbhGetHubPowerStatus @ 0x1C001DB84
 * Callers:
 *     UsbhGetMaxPowerPerPort @ 0x1C001DA90 (UsbhGetMaxPowerPerPort.c)
 *     UsbhInitialize @ 0x1C001E1B0 (UsbhInitialize.c)
 * Callees:
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhQueryHubState @ 0x1C001DC3C (UsbhQueryHubState.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 */

void __fastcall UsbhGetHubPowerStatus(__int64 a1)
{
  _DWORD *v2; // rbx
  int HubState; // eax
  int v4; // r10d

  v2 = FdoExt(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
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
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          33,
          (__int64)&WPP_10fd33d0d4c73f43ffd0851bf01e9310_Traceguids);
      v2[762] = 500;
    }
  }
  else
  {
    v2[762] = 0;
  }
}
