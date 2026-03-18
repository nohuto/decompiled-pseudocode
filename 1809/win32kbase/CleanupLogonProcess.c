/*
 * XREFs of CleanupLogonProcess @ 0x1C005FCD0
 * Callers:
 *     DestroyProcessInfo @ 0x1C0032CF4 (DestroyProcessInfo.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C005FC28 (-Win32kNtUserCleanup@@YAHXZ.c)
 * Callees:
 *     WmsgpDisconnect @ 0x1C0200280 (WmsgpDisconnect.c)
 */

NTSTATUS CleanupLogonProcess()
{
  NTSTATUS result; // eax

  if ( gWinLogonRpcHandle )
  {
    result = WmsgpDisconnect();
    gWinLogonRpcHandle = 0LL;
    gpidLogon = 0LL;
  }
  if ( ghSMSS )
  {
    result = ZwClose(ghSMSS);
    ghSMSS = 0LL;
  }
  return result;
}
