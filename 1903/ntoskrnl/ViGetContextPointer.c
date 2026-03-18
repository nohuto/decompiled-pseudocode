/*
 * XREFs of ViGetContextPointer @ 0x140966254
 * Callers:
 *     VfInsertContext @ 0x140327770 (VfInsertContext.c)
 *     VfRemoveContext @ 0x140327940 (VfRemoveContext.c)
 *     ViQueryObjectContext @ 0x140966320 (ViQueryObjectContext.c)
 * Callees:
 *     IopAllocateIrpExtension @ 0x1400A7E50 (IopAllocateIrpExtension.c)
 */

__int64 __fastcall ViGetContextPointer(__int64 a1, int a2)
{
  __int64 v2; // rbx
  int v3; // edx
  int v4; // edx
  _WORD *IrpExtension; // rax

  v2 = 0LL;
  if ( !a2 )
    return *(_QWORD *)(a1 + 312) + 96LL;
  v3 = a2 - 1;
  if ( !v3 )
    return *(_QWORD *)(a1 + 48) + 72LL;
  v4 = v3 - 1;
  if ( v4 )
  {
    if ( v4 == 1 )
      return a1 + 1912;
  }
  else
  {
    IrpExtension = IopAllocateIrpExtension(a1, 3);
    if ( IrpExtension )
      return (__int64)(IrpExtension + 4);
  }
  return v2;
}
