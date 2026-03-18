/*
 * XREFs of PopDirectedDripsEngageDfx @ 0x1408A4080
 * Callers:
 *     PopDirectedDripsProcessWork @ 0x1408A47F0 (PopDirectedDripsProcessWork.c)
 * Callees:
 *     PopDirectedDripsRefreshDeviceState @ 0x1408A4A90 (PopDirectedDripsRefreshDeviceState.c)
 *     PopDirectedDripsSuspendDevices @ 0x1408A4C58 (PopDirectedDripsSuspendDevices.c)
 */

__int64 __fastcall PopDirectedDripsEngageDfx(_BYTE *a1)
{
  __int64 result; // rax
  int v2; // ett

  _m_prefetchw(a1);
  LODWORD(result) = *(_DWORD *)a1;
  do
  {
    v2 = result;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)a1, result, result);
  }
  while ( v2 != (_DWORD)result );
  if ( (result & 0x400) == 0 )
  {
    _InterlockedOr((volatile signed __int32 *)a1, 0x400u);
    result = (unsigned int)_InterlockedExchange(&PopDirectedDripsEngaged, 1);
    if ( a1[168] )
    {
      if ( (_DWORD)result )
        return PopDirectedDripsRefreshDeviceState();
      else
        return PopDirectedDripsSuspendDevices();
    }
  }
  return result;
}
