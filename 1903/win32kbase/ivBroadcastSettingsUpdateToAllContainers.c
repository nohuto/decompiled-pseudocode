/*
 * XREFs of ivBroadcastSettingsUpdateToAllContainers @ 0x1C0187C00
 * Callers:
 *     _SetPrecisionTouchPadConfiguration @ 0x1C0109F70 (_SetPrecisionTouchPadConfiguration.c)
 *     SetSwapMouseButton @ 0x1C01122A0 (SetSwapMouseButton.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     isRootPartition @ 0x1C00329F8 (isRootPartition.c)
 *     ?ivSendSettingsUpdateToContainer@@YAXAEBUCONTAINER_ID@@@Z @ 0x1C0187A5C (-ivSendSettingsUpdateToContainer@@YAXAEBUCONTAINER_ID@@@Z.c)
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
