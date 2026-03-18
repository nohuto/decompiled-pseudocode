/*
 * XREFs of IoMakeAssociatedIrp @ 0x140168B50
 * Callers:
 *     <none>
 * Callees:
 *     IoMakeAssociatedIrpPriv @ 0x1401078D4 (IoMakeAssociatedIrpPriv.c)
 */

PIRP __stdcall IoMakeAssociatedIrp(PIRP Irp, CCHAR StackSize)
{
  return (PIRP)IoMakeAssociatedIrpPriv((__int64)Irp, 0LL, StackSize);
}
