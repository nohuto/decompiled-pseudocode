/*
 * XREFs of xxxRemotePassthruEnable @ 0x1C0213520
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D084 (WPP_RECORDER_SF_.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C010E33C (xxxRemoteStopScreenUpdates.c)
 *     GreDrvDisconnect @ 0x1C0161408 (GreDrvDisconnect.c)
 *     bDrvDisconnect @ 0x1C02B8594 (bDrvDisconnect.c)
 */

__int64 xxxRemotePassthruEnable()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 RemoteContext; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  int v6; // ecx
  __int16 v7; // dx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF

  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  RemoteContext = GreGetRemoteContext();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v0) = 4;
    WPP_RECORDER_SF_(v1, v0, 9, 25, (__int64)&WPP_2f4edc7644973dcb8f37e7bb2394e69d_Traceguids);
  }
  if ( PsGetCurrentProcess(v1, v0, v3, v4) != gpepCSRSS )
    return 3221225506LL;
  dword_1C0330EB4 = gapulCvt_VK != gapulCvt_VK_84;
  ZwDeviceIoControlFile(ghRemoteKeyboardChannel, 0LL, 0LL, 0LL, &IoStatusBlock, 0x38080Fu, &dword_1C0330EB4, 4u, 0LL, 0);
  v7 = guKbdTblSize;
  if ( guKbdTblSize )
    ZwDeviceIoControlFile(
      ghRemoteKeyboardChannel,
      0LL,
      0LL,
      0LL,
      &IoStatusBlock,
      0x380807u,
      ghKbdTblBase,
      guKbdTblSize,
      gpKbdTbl,
      0);
  xxxRemoteStopScreenUpdates(v6, v7);
  if ( gfRemotingConsole )
    bDrvDisconnect();
  else
    GreDrvDisconnect(RemoteContext);
  return 0LL;
}
