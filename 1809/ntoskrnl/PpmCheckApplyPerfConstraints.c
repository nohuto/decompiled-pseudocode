/*
 * XREFs of PpmCheckApplyPerfConstraints @ 0x140875718
 * Callers:
 *     PpmRegisterPerfCap @ 0x1402DB3B0 (PpmRegisterPerfCap.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x140141B74 (PpmCheckCustomRun.c)
 */

__int64 __fastcall PpmCheckApplyPerfConstraints(char a1)
{
  return PpmCheckCustomRun((unsigned int)(a1 != 0) + 1);
}
