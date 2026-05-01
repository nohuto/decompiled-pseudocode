/*
 * XREFs of ?IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ @ 0x18032FCF4
 * Callers:
 *     _lambda_344d118cde8247a665c09f3d1d41eb56_::operator() @ 0x1800A9F74 (_lambda_344d118cde8247a665c09f3d1d41eb56_--operator().c)
 *     ?CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18032D93C (-CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?OnApplicationStateChanged@TouchKeyboardExperienceManager@@UEAAJPEBGW4PLM_STATE_CHANGE@@@Z @ 0x180330AD0 (-OnApplicationStateChanged@TouchKeyboardExperienceManager@@UEAAJPEBGW4PLM_STATE_CHANGE@@@Z.c)
 * Callees:
 *     <none>
 */

bool TouchKeyboardExperienceManager::IsSessionShuttingDown(void)
{
  return GetSystemMetrics(0x2000) != 0;
}
