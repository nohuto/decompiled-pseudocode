/*
 * XREFs of UsbhGetMaxPowerPerPort @ 0x1C001DA90
 * Callers:
 *     UsbhConfigureUsbHub @ 0x1C001D5E4 (UsbhConfigureUsbHub.c)
 * Callees:
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     UsbhGetHubPowerStatus @ 0x1C001DB84 (UsbhGetHubPowerStatus.c)
 *     UsbhGetStatus @ 0x1C001DDCC (UsbhGetStatus.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhGetMaxPowerPerPort(__int64 a1)
{
  unsigned int *v2; // rbx
  _WORD *PoolWithTag; // rdi
  __int64 result; // rax
  unsigned int v5; // ecx

  v2 = FdoExt(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      34,
      (__int64)&WPP_10fd33d0d4c73f43ffd0851bf01e9310_Traceguids);
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 2uLL, 0x42554855u);
  if ( PoolWithTag )
  {
    *PoolWithTag = 0;
    if ( (int)UsbhGetStatus(a1, (_DWORD)PoolWithTag) >= 0 )
    {
      if ( (*(_BYTE *)PoolWithTag & 1) != 0 )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            35,
            (__int64)&WPP_10fd33d0d4c73f43ffd0851bf01e9310_Traceguids);
        v2[761] = 500;
      }
      else
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            36,
            (__int64)&WPP_10fd33d0d4c73f43ffd0851bf01e9310_Traceguids);
        v2[761] = 100;
      }
    }
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  UsbhGetHubPowerStatus(a1);
  result = v2[759];
  if ( (_DWORD)result )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        37,
        (__int64)&WPP_10fd33d0d4c73f43ffd0851bf01e9310_Traceguids,
        v2[759]);
      return v2[759];
    }
  }
  else
  {
    result = v2[761];
    if ( !(_DWORD)result )
    {
      v5 = v2[760];
      result = 500LL;
      if ( v5 )
        return v5;
    }
  }
  return result;
}
