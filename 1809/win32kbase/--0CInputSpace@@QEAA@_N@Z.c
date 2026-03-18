/*
 * XREFs of ??0CInputSpace@@QEAA@_N@Z @ 0x1C00A95E8
 * Callers:
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C003D900 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 * Callees:
 *     ??0CInputSpace@@QEAA@AEBUINPUT_SPACE@@_N@Z @ 0x1C003DBA8 (--0CInputSpace@@QEAA@AEBUINPUT_SPACE@@_N@Z.c)
 */

CInputSpace *__fastcall CInputSpace::CInputSpace(CInputSpace *this, char a2)
{
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]

  v4 = 0LL;
  v5 = 0;
  CInputSpace::CInputSpace(this, (const struct INPUT_SPACE *)&v4, a2);
  return this;
}
