/*
 * XREFs of PpmCheckApplyPerfConstraints @ 0x14072C06C
 * Callers:
 *     PpmRegisterPerfCap @ 0x14016FE50 (PpmRegisterPerfCap.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x14015B030 (PpmCheckCustomRun.c)
 */

__int64 __fastcall PpmCheckApplyPerfConstraints(char a1)
{
  return PpmCheckCustomRun((unsigned int)(a1 != 0) + 1);
}
