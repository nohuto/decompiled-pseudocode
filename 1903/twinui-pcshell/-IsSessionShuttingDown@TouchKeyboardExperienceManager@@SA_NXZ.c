/*
 * XREFs of ?IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ @ 0x180310830
 * Callers:
 *     _lambda_e2c0b4f1b03d47a01a9d965aa9e2a74c_::operator() @ 0x18009DDC8 (_lambda_e2c0b4f1b03d47a01a9d965aa9e2a74c_--operator().c)
 *     ?CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18030E47C (-CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?OnApplicationStateChanged@TouchKeyboardExperienceManager@@UEAAJPEBGW4PLM_STATE_CHANGE@@@Z @ 0x180311600 (-OnApplicationStateChanged@TouchKeyboardExperienceManager@@UEAAJPEBGW4PLM_STATE_CHANGE@@@Z.c)
 * Callees:
 *     <none>
 */

bool TouchKeyboardExperienceManager::IsSessionShuttingDown(void)
{
  return GetSystemMetrics(0x2000) != 0;
}
