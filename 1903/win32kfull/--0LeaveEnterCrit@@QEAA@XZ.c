/*
 * XREFs of ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C016380C
 * Callers:
 *     xxxDesktopThreadWaiter @ 0x1C000E508 (xxxDesktopThreadWaiter.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C00A3A50 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxCreateDesktopEx @ 0x1C00DE64C (xxxCreateDesktopEx.c)
 *     SfnINOUTNCCALCSIZE @ 0x1C0100120 (SfnINOUTNCCALCSIZE.c)
 *     xxxRemoteReconnect @ 0x1C015EF70 (xxxRemoteReconnect.c)
 *     xxxUserModeCallback @ 0x1C0220044 (xxxUserModeCallback.c)
 * Callees:
 *     <none>
 */

LeaveEnterCrit *__fastcall LeaveEnterCrit::LeaveEnterCrit(LeaveEnterCrit *this)
{
  UserSessionSwitchLeaveCrit(this);
  return this;
}
