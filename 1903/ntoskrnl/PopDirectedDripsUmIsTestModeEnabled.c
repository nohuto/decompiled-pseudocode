/*
 * XREFs of PopDirectedDripsUmIsTestModeEnabled @ 0x1408B8D90
 * Callers:
 *     PopFxEnforceDirectedPowerTransition @ 0x1402F3264 (PopFxEnforceDirectedPowerTransition.c)
 * Callees:
 *     <none>
 */

bool PopDirectedDripsUmIsTestModeEnabled()
{
  _m_prefetchw(&PopDirectedDripsUmTestDeviceCount);
  return _InterlockedOr(&PopDirectedDripsUmTestDeviceCount, 0) != 0;
}
