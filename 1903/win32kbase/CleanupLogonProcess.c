/*
 * XREFs of CleanupLogonProcess @ 0x1C00A8BA0
 * Callers:
 *     DestroyProcessInfo @ 0x1C0036D0C (DestroyProcessInfo.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C00B5140 (-Win32kNtUserCleanup@@YAHXZ.c)
 * Callees:
 *     WmsgpDisconnect @ 0x1C024960C (WmsgpDisconnect.c)
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
