/*
 * XREFs of PrintIndent @ 0x1C00643FC
 * Callers:
 *     ParseTerm @ 0x1C0006EE0 (ParseTerm.c)
 *     ParseScope @ 0x1C0008310 (ParseScope.c)
 *     ParseFieldList @ 0x1C00216F8 (ParseFieldList.c)
 *     ParseField @ 0x1C00217F0 (ParseField.c)
 *     ParsePackage @ 0x1C0021BD0 (ParsePackage.c)
 * Callees:
 *     ConPrintf @ 0x1C0063840 (ConPrintf.c)
 */

ULONG __fastcall PrintIndent(__int64 a1)
{
  ULONG result; // eax
  int i; // ebx

  result = ConPrintf("\n%I64x: ", *(_QWORD *)(a1 + 120));
  for ( i = 0; i < dword_1C0080764; ++i )
    result = ConPrintf("| ");
  return result;
}
