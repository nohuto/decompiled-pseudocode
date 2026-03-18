/*
 * XREFs of BgkpDisableConsole @ 0x1402927D8
 * Callers:
 *     BgkDestroy @ 0x140991A80 (BgkDestroy.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140082850 (ExWaitForRundownProtectionRelease.c)
 *     ExRundownCompleted @ 0x1400E59B0 (ExRundownCompleted.c)
 */

void BgkpDisableConsole()
{
  ExWaitForRundownProtectionRelease(&stru_14042A678);
  ExRundownCompleted(&stru_14042A678);
}
