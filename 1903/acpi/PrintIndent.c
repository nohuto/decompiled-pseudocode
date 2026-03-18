/*
 * XREFs of PrintIndent @ 0x1C00663D8
 * Callers:
 *     ParseScope @ 0x1C000DDB0 (ParseScope.c)
 *     ParsePackage @ 0x1C0012880 (ParsePackage.c)
 *     ParseFieldList @ 0x1C00177D8 (ParseFieldList.c)
 *     ParseField @ 0x1C00178D0 (ParseField.c)
 *     ParseTerm @ 0x1C0017FB0 (ParseTerm.c)
 * Callees:
 *     ConPrintf @ 0x1C0065888 (ConPrintf.c)
 */

ULONG __fastcall PrintIndent(__int64 a1)
{
  ULONG result; // eax
  int i; // ebx

  result = ConPrintf("\n%I64x: ", *(_QWORD *)(a1 + 120));
  for ( i = 0; i < dword_1C0082754; ++i )
    result = ConPrintf("| ");
  return result;
}
