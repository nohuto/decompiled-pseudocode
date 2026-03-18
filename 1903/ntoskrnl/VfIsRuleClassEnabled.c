/*
 * XREFs of VfIsRuleClassEnabled @ 0x140964180
 * Callers:
 *     ViThunkReplaceSharedExports @ 0x140976C08 (ViThunkReplaceSharedExports.c)
 *     VfSuspectDriversLoadCallback @ 0x1409770B4 (VfSuspectDriversLoadCallback.c)
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
