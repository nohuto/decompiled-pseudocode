/*
 * XREFs of RimInputTypeToDeviceInputType @ 0x1C0068DFC
 * Callers:
 *     ?OnRemoteCloseNotification@CBaseInput@@AEAAJXZ @ 0x1C0068E30 (-OnRemoteCloseNotification@CBaseInput@@AEAAJXZ.c)
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x1C009D6D4 (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z.c)
 *     ?OnRemoteOpenNotification@CBaseInput@@AEAAJXZ @ 0x1C00BA520 (-OnRemoteOpenNotification@CBaseInput@@AEAAJXZ.c)
 *     ?ivOnChildNotification@CBaseInput@@MEAAJPEAX@Z @ 0x1C018D860 (-ivOnChildNotification@CBaseInput@@MEAAJPEAX@Z.c)
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
