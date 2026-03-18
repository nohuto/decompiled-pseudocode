/*
 * XREFs of PpmCheckApplyPerfConstraints @ 0x14072DF0C
 * Callers:
 *     PpmRegisterPerfCap @ 0x140170540 (PpmRegisterPerfCap.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x14015B6D0 (PpmCheckCustomRun.c)
 */

__int64 __fastcall PpmCheckApplyPerfConstraints(char a1, __int64 a2, __int64 a3)
{
  return PpmCheckCustomRun((unsigned int)(a1 != 0) + 1, a2, a3);
}
