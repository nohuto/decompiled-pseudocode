/*
 * XREFs of ivBroadcastSettingsUpdateToAllContainers @ 0x1C0185A10
 * Callers:
 *     _SetPrecisionTouchPadConfiguration @ 0x1C0107600 (_SetPrecisionTouchPadConfiguration.c)
 *     SetSwapMouseButton @ 0x1C010F930 (SetSwapMouseButton.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     isRootPartition @ 0x1C0031CA8 (isRootPartition.c)
 *     ?ivSendSettingsUpdateToContainer@@YAXAEBUCONTAINER_ID@@@Z @ 0x1C018586C (-ivSendSettingsUpdateToContainer@@YAXAEBUCONTAINER_ID@@@Z.c)
 */

void ivBroadcastSettingsUpdateToAllContainers()
{
  int v0; // edx
  int v1; // [rsp+40h] [rbp+8h] BYREF

  if ( isRootPartition() )
  {
    if ( !gpHidInput || *((_DWORD *)gpHidInput + 298) )
    {
      v1 = 0;
      ivSendSettingsUpdateToContainer((const struct CONTAINER_ID *)&v1);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v0) = 4;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v0, 12, 14, (__int64)&WPP_bf142974e6cd37e959979a62310fe389_Traceguids);
    }
  }
}
