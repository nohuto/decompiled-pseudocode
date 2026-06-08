/*
 * XREFs of ValidateRegisterSymmetry @ 0x1C00233BC
 * Callers:
 *     ValidatePctPtcSymmetry @ 0x1C0023344 (ValidatePctPtcSymmetry.c)
 *     ValidateCpcSymmetry @ 0x1C002B900 (ValidateCpcSymmetry.c)
 * Callees:
 *     <none>
 */

bool __fastcall ValidateRegisterSymmetry(_BYTE *a1, const void *a2)
{
  __int64 v2; // rbx

  v2 = 4LL;
  if ( *a1 != 10 )
    v2 = 12LL;
  return RtlCompareMemory(a1, a2, (unsigned int)v2) == v2;
}
