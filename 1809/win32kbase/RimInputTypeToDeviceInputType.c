/*
 * XREFs of RimInputTypeToDeviceInputType @ 0x1C004AFEC
 * Callers:
 *     ?OnRemoteCloseNotification@CBaseInput@@AEAAJXZ @ 0x1C004B010 (-OnRemoteCloseNotification@CBaseInput@@AEAAJXZ.c)
 *     ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x1C004E244 (-PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z.c)
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x1C007BD70 (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z.c)
 *     ?DeliverMarshaledPnPNotification@CBaseInput@@QEAAXXZ @ 0x1C00A50FC (-DeliverMarshaledPnPNotification@CBaseInput@@QEAAXXZ.c)
 *     ?OnRemoteOpenNotification@CBaseInput@@AEAAJXZ @ 0x1C00A5F00 (-OnRemoteOpenNotification@CBaseInput@@AEAAJXZ.c)
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
