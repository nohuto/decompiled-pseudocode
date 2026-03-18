/*
 * XREFs of PopDirectedDripsRefreshDeviceState @ 0x1408A4A90
 * Callers:
 *     PopDirectedDripsEngageDfx @ 0x1408A4080 (PopDirectedDripsEngageDfx.c)
 *     PopDirectedDripsProcessWork @ 0x1408A47F0 (PopDirectedDripsProcessWork.c)
 * Callees:
 *     PopDirectedDripsResumeDevices @ 0x1408A4B74 (PopDirectedDripsResumeDevices.c)
 *     PopDirectedDripsSuspendDevices @ 0x1408A4C58 (PopDirectedDripsSuspendDevices.c)
 */

__int64 __fastcall PopDirectedDripsRefreshDeviceState(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 168) )
  {
    LOBYTE(a2) = 1;
    PopDirectedDripsResumeDevices(a1, a2);
    return PopDirectedDripsSuspendDevices(a1);
  }
  return result;
}
