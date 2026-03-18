/*
 * XREFs of IopSetDriverFlagsExtension @ 0x1400951B8
 * Callers:
 *     IoPageReadEx @ 0x140094BE0 (IoPageReadEx.c)
 *     IoMakeAssociatedIrpPriv @ 0x14011A4A4 (IoMakeAssociatedIrpPriv.c)
 * Callees:
 *     IopAllocateIrpExtension @ 0x1400953F0 (IopAllocateIrpExtension.c)
 */

__int64 __fastcall IopSetDriverFlagsExtension(__int64 a1, __int64 a2)
{
  __int64 IrpExtension; // rax

  IrpExtension = IopAllocateIrpExtension(a1, 8LL);
  if ( !IrpExtension )
    return 3221225626LL;
  *(_QWORD *)(IrpExtension + 56) = a2;
  return 0LL;
}
