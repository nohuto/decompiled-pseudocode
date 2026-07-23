/*
 * XREFs of PpmCheckApplyPerfConstraints @ 0x14072DF0C
 * Callers:
 *     PpmRegisterPerfCap @ 0x140170540 (PpmRegisterPerfCap.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x14015B6D0 (PpmCheckCustomRun.c)
 */

__int64 __fastcall PpmCheckApplyPerfConstraints(char a1)
{
  return PpmCheckCustomRun((unsigned int)(a1 != 0) + 1);
}
