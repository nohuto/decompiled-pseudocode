/*
 * XREFs of VfIsRuleClassEnabled @ 0x140926CF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall VfIsRuleClassEnabled(unsigned int a1)
{
  int v2; // eax

  if ( a1 >= 0x40 )
    return 0;
  v2 = VfRuleClasses[(unsigned __int64)a1 >> 5];
  return _bittest(&v2, a1 & 0x1F);
}
