/*
 * XREFs of sub_18005521C @ 0x18005521C
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x18001AEC0 (LdrGetProcedureAddressForCaller.c)
 *     sub_1800555A8 @ 0x1800555A8 (sub_1800555A8.c)
 *     sub_1800D89D0 @ 0x1800D89D0 (sub_1800D89D0.c)
 *     sub_1800DA634 @ 0x1800DA634 (sub_1800DA634.c)
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18001AE90 (LdrControlFlowGuardEnforced.c)
 *     sub_180055288 @ 0x180055288 (sub_180055288.c)
 *     sub_18005532C @ 0x18005532C (sub_18005532C.c)
 *     sub_1800F74B0 @ 0x1800F74B0 (sub_1800F74B0.c)
 */

__int64 __fastcall sub_18005521C(__int64 a1, unsigned int a2, _DWORD *a3)
{
  int v6; // eax
  __int64 result; // rax

  LOBYTE(v6) = LdrControlFlowGuardEnforced();
  if ( v6 )
  {
    if ( ((a2 & 4) == 0 || (unsigned __int8)sub_18005532C(a1) == 1)
      && ((a2 & 1) == 0 || (unsigned __int8)sub_1800F74B0(a1) == 1) )
    {
      *a3 = 1;
      return sub_180055288(a1, a2);
    }
    result = 3221225485LL;
  }
  else
  {
    result = 0LL;
  }
  *a3 = 0;
  return result;
}
