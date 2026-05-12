/*
 * XREFs of PortPassThroughBasicValidation @ 0x1C00223CC
 * Callers:
 *     RaidAdapterPassThrough @ 0x1C006F078 (RaidAdapterPassThrough.c)
 *     PortPassThroughSetAddress @ 0x1C006FB70 (PortPassThroughSetAddress.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PortPassThroughBasicValidation(IRP *a1)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx

  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  return CurrentStackLocation->Parameters.Create.Options < (IoIs32bitProcess(a1) != 0 ? 44 : 56) ? 0xC0000023 : 0;
}
