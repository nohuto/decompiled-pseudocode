/*
 * XREFs of IsCompatableDSDTRevision @ 0x1C0020A38
 * Callers:
 *     ParseIntObj @ 0x1C001162C (ParseIntObj.c)
 *     ParsePackage @ 0x1C0012880 (ParsePackage.c)
 *     ParseTerm @ 0x1C0017FB0 (ParseTerm.c)
 *     ExprOp2_64 @ 0x1C0019E50 (ExprOp2_64.c)
 *     LNot @ 0x1C001AC80 (LNot.c)
 *     ExprOp1 @ 0x1C001ECF0 (ExprOp1.c)
 *     OSInterface @ 0x1C001EF70 (OSInterface.c)
 *     CondRefOf @ 0x1C001F180 (CondRefOf.c)
 *     LogOp2_32 @ 0x1C001F31C (LogOp2_32.c)
 *     ReadField @ 0x1C001F540 (ReadField.c)
 *     ParseAcquire @ 0x1C0024F00 (ParseAcquire.c)
 *     Concat @ 0x1C0068720 (Concat.c)
 *     Match @ 0x1C00694E0 (Match.c)
 *     Match_32 @ 0x1C00695B4 (Match_32.c)
 *     Match_64 @ 0x1C00696D4 (Match_64.c)
 *     ProcessWait @ 0x1C006A150 (ProcessWait.c)
 *     ToString @ 0x1C006A9F0 (ToString.c)
 *     ConvertToBuffer @ 0x1C006AD38 (ConvertToBuffer.c)
 *     ConvertToString @ 0x1C006AF00 (ConvertToString.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 */

bool IsCompatableDSDTRevision()
{
  char v0; // bl
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  v2 = 0;
  if ( ghGetAcpiTableVersion )
  {
    ghGetAcpiTableVersion(1413763908LL, &v2);
    return v2 >= 2;
  }
  return v0;
}
