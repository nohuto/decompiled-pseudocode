/*
 * XREFs of ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C0164800
 * Callers:
 *     xxxDesktopThreadWaiter @ 0x1C000DC88 (xxxDesktopThreadWaiter.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0044820 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxCreateDesktopEx @ 0x1C007E33C (xxxCreateDesktopEx.c)
 *     SfnINOUTNCCALCSIZE @ 0x1C00DC3F0 (SfnINOUTNCCALCSIZE.c)
 *     xxxRemoteReconnect @ 0x1C015FF30 (xxxRemoteReconnect.c)
 *     xxxUserModeCallback @ 0x1C021FB04 (xxxUserModeCallback.c)
 * Callees:
 *     <none>
 */

void __fastcall LeaveEnterCrit::~LeaveEnterCrit(LeaveEnterCrit *this)
{
  EnterCrit(0LL, 1LL);
}
