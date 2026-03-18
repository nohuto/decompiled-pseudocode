/*
 * XREFs of PopDirectedDripsUmPowerInformationInternal @ 0x1408B8FD0
 * Callers:
 *     PopPowerInformationInternal @ 0x14067E674 (PopPowerInformationInternal.c)
 * Callees:
 *     PopDirectedDripsUmDirectedFxAddTestDevice @ 0x1408B8BB8 (PopDirectedDripsUmDirectedFxAddTestDevice.c)
 *     PopDirectedDripsUmDirectedFxRemoveTestDevice @ 0x1408B8CAC (PopDirectedDripsUmDirectedFxRemoveTestDevice.c)
 *     PopDirectedDripsUmDirectedFxSetMode @ 0x1408B8D40 (PopDirectedDripsUmDirectedFxSetMode.c)
 */

__int64 __fastcall PopDirectedDripsUmPowerInformationInternal(
        int a1,
        unsigned int a2,
        __int64 a3,
        _DWORD *a4,
        _QWORD *a5)
{
  int v6; // ecx
  int v7; // ecx

  *a4 = 0;
  *a5 = 0LL;
  _m_prefetchw(PopDirectedDripsState);
  if ( (_InterlockedOr(PopDirectedDripsState, 0) & 1) == 0 )
    return 3221225659LL;
  v6 = a1 - 53;
  if ( !v6 )
    return PopDirectedDripsUmDirectedFxAddTestDevice(a2, a3);
  v7 = v6 - 1;
  if ( !v7 )
    return PopDirectedDripsUmDirectedFxRemoveTestDevice(a2, a3);
  if ( v7 == 2 )
    return PopDirectedDripsUmDirectedFxSetMode(a2, a3);
  return 3221225485LL;
}
