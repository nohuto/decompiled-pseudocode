/*
 * XREFs of IsCompatableDSDTRevision @ 0x1C0002280
 * Callers:
 *     LogOp2_32 @ 0x1C0002144 (LogOp2_32.c)
 *     ParseTerm @ 0x1C0006EE0 (ParseTerm.c)
 *     ParseAcquire @ 0x1C000A350 (ParseAcquire.c)
 *     ExprOp2_64 @ 0x1C0020A30 (ExprOp2_64.c)
 *     LNot @ 0x1C0020F10 (LNot.c)
 *     ParsePackage @ 0x1C0021BD0 (ParsePackage.c)
 *     ParseIntObj @ 0x1C00221F4 (ParseIntObj.c)
 *     ReadField @ 0x1C0023DF0 (ReadField.c)
 *     OSInterface @ 0x1C00249C0 (OSInterface.c)
 *     CondRefOf @ 0x1C002B500 (CondRefOf.c)
 *     ExprOp1 @ 0x1C002ED50 (ExprOp1.c)
 *     Concat @ 0x1C00666C0 (Concat.c)
 *     Match @ 0x1C0067480 (Match.c)
 *     Match_32 @ 0x1C0067554 (Match_32.c)
 *     Match_64 @ 0x1C0067674 (Match_64.c)
 *     ProcessWait @ 0x1C00680F0 (ProcessWait.c)
 *     ToString @ 0x1C0068990 (ToString.c)
 *     ConvertToBuffer @ 0x1C0068CD8 (ConvertToBuffer.c)
 *     ConvertToString @ 0x1C0068EAC (ConvertToString.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
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
