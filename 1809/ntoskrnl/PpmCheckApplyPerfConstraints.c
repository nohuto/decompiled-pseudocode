/*
 * XREFs of PpmCheckApplyPerfConstraints @ 0x140876978
 * Callers:
 *     PpmRegisterPerfCap @ 0x1402DB5A0 (PpmRegisterPerfCap.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x140141C74 (PpmCheckCustomRun.c)
 */

__int64 __fastcall PpmCheckApplyPerfConstraints(char a1)
{
  return PpmCheckCustomRun((unsigned int)(a1 != 0) + 1);
}
