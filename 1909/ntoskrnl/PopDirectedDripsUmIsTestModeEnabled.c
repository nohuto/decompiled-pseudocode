/*
 * XREFs of PopDirectedDripsUmIsTestModeEnabled @ 0x1408B8660
 * Callers:
 *     PopFxEnforceDirectedPowerTransition @ 0x1402F2FC4 (PopFxEnforceDirectedPowerTransition.c)
 * Callees:
 *     <none>
 */

bool PopDirectedDripsUmIsTestModeEnabled()
{
  _m_prefetchw(&PopDirectedDripsUmTestDeviceCount);
  return _InterlockedOr(&PopDirectedDripsUmTestDeviceCount, 0) != 0;
}
