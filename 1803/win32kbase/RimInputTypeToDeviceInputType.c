/*
 * XREFs of RimInputTypeToDeviceInputType @ 0x1C012E918
 * Callers:
 *     ?DeliverMarshaledPnPNotification@CBaseInput@@QEAAXXZ @ 0x1C01225A4 (-DeliverMarshaledPnPNotification@CBaseInput@@QEAAXXZ.c)
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x1C0122A38 (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z.c)
 *     ?OnRemoteCloseNotification@CBaseInput@@AEAAJXZ @ 0x1C0123800 (-OnRemoteCloseNotification@CBaseInput@@AEAAJXZ.c)
 *     ?OnRemoteOpenNotification@CBaseInput@@AEAAJXZ @ 0x1C0123830 (-OnRemoteOpenNotification@CBaseInput@@AEAAJXZ.c)
 *     ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x1C012395C (-PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RimInputTypeToDeviceInputType(int a1)
{
  __int64 result; // rax

  result = 1LL;
  if ( a1 == 1 )
    return 0LL;
  if ( a1 != 2 )
  {
    result = 3LL;
    if ( (a1 & 0x3C) != 0 )
      return 2LL;
  }
  return result;
}
