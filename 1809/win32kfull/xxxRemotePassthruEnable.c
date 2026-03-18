/*
 * XREFs of xxxRemotePassthruEnable @ 0x1C01FC5A0
 * Callers:
 *     <none>
 * Callees:
 *     xxxRemoteStopScreenUpdates @ 0x1C00EA1E8 (xxxRemoteStopScreenUpdates.c)
 *     GreDrvDisconnect @ 0x1C0158C24 (GreDrvDisconnect.c)
 *     bDrvDisconnect @ 0x1C02A1DE8 (bDrvDisconnect.c)
 */

__int64 __fastcall xxxRemotePassthruEnable(__int64 a1)
{
  __int64 RemoteContext; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF

  RemoteContext = GreGetRemoteContext(a1);
  if ( PsGetCurrentProcess(v3, v2, v4, v5) != gpepCSRSS )
    return 3221225506LL;
  dword_1C031DED0 = gapulCvt_VK != gapulCvt_VK_84;
  ZwDeviceIoControlFile(ghRemoteKeyboardChannel, 0LL, 0LL, 0LL, &IoStatusBlock, 0x38080Fu, &dword_1C031DED0, 4u, 0LL, 0);
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
  xxxRemoteStopScreenUpdates();
  if ( gfRemotingConsole )
    bDrvDisconnect();
  else
    GreDrvDisconnect(RemoteContext);
  return 0LL;
}
