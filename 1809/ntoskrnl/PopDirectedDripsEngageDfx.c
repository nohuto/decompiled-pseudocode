/*
 * XREFs of PopDirectedDripsEngageDfx @ 0x140868D94
 * Callers:
 *     PopDirectedDripsProcessWork @ 0x140869698 (PopDirectedDripsProcessWork.c)
 * Callees:
 *     PopDirectedDripsNotifyDrivers @ 0x1408693B8 (PopDirectedDripsNotifyDrivers.c)
 *     PopDirectedDripsRefreshDeviceState @ 0x14086981C (PopDirectedDripsRefreshDeviceState.c)
 */

__int64 __fastcall PopDirectedDripsEngageDfx(_BYTE *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v4; // ett

  _m_prefetchw(a1);
  LODWORD(result) = *(_DWORD *)a1;
  do
  {
    v4 = result;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)a1, result, result);
  }
  while ( v4 != (_DWORD)result );
  if ( (result & 0x400) == 0 )
  {
    _InterlockedOr((volatile signed __int32 *)a1, 0x400u);
    result = (unsigned int)_InterlockedExchange(&PopDirectedDripsEngaged, 1);
    if ( a1[320] )
    {
      if ( (_DWORD)result )
      {
        return PopDirectedDripsRefreshDeviceState();
      }
      else
      {
        LOBYTE(a3) = 1;
        return PopDirectedDripsNotifyDrivers(a1, a1 + 232, a3, 0LL);
      }
    }
  }
  return result;
}
