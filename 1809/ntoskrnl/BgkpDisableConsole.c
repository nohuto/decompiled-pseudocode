/*
 * XREFs of BgkpDisableConsole @ 0x14027DF38
 * Callers:
 *     BgkDestroy @ 0x140952A04 (BgkDestroy.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140089880 (ExWaitForRundownProtectionRelease.c)
 *     ExRundownCompleted @ 0x14008F7F0 (ExRundownCompleted.c)
 */

void BgkpDisableConsole()
{
  ExWaitForRundownProtectionRelease(&stru_140405088);
  ExRundownCompleted(&stru_140405088);
}
