/*
 * XREFs of BgkpDisableConsole @ 0x140292538
 * Callers:
 *     BgkDestroy @ 0x140991A80 (BgkDestroy.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140082C50 (ExWaitForRundownProtectionRelease.c)
 *     ExRundownCompleted @ 0x1400EA950 (ExRundownCompleted.c)
 */

void BgkpDisableConsole()
{
  ExWaitForRundownProtectionRelease(&stru_14042A688);
  ExRundownCompleted(&stru_14042A688);
}
