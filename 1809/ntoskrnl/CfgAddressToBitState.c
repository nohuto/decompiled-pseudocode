/*
 * XREFs of CfgAddressToBitState @ 0x1401223D0
 * Callers:
 *     MiCfgMarkValidEntries @ 0x1405F631C (MiCfgMarkValidEntries.c)
 *     MiValidateUserCallTarget @ 0x1406A7668 (MiValidateUserCallTarget.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CfgAddressToBitState(unsigned __int64 a1, const signed __int64 *a2)
{
  return _bittest64(a2, 2 * (a1 >> 4)) | (2 * (unsigned int)_bittest64(a2, 2 * (a1 >> 4) + 1));
}
