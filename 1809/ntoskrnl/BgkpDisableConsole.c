/*
 * XREFs of BgkpDisableConsole @ 0x14027DC48
 * Callers:
 *     BgkDestroy @ 0x140951A04 (BgkDestroy.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140089890 (ExWaitForRundownProtectionRelease.c)
 *     ExRundownCompleted @ 0x14008F8D0 (ExRundownCompleted.c)
 */

void BgkpDisableConsole()
{
  ExWaitForRundownProtectionRelease(&stru_140404088);
  ExRundownCompleted(&stru_140404088);
}
