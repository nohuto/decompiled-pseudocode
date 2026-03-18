/*
 * XREFs of IoMakeAssociatedIrp @ 0x140170840
 * Callers:
 *     <none>
 * Callees:
 *     IoMakeAssociatedIrpPriv @ 0x14011A4A4 (IoMakeAssociatedIrpPriv.c)
 */

PIRP __stdcall IoMakeAssociatedIrp(PIRP Irp, CCHAR StackSize)
{
  return (PIRP)IoMakeAssociatedIrpPriv((__int64)Irp, 0LL, StackSize);
}
