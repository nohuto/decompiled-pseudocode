/*
 * XREFs of PiDqIrpComplete @ 0x140590A9C
 * Callers:
 *     PiDqIrpQueryCreate @ 0x140590B08 (PiDqIrpQueryCreate.c)
 *     PiDqIrpQueryGetResult @ 0x1406BE1FC (PiDqIrpQueryGetResult.c)
 *     PiDqQueryCompletePendedIrp @ 0x1406DB9B0 (PiDqQueryCompletePendedIrp.c)
 * Callees:
 *     IofCompleteRequest @ 0x1400C10A0 (IofCompleteRequest.c)
 */

void __fastcall PiDqIrpComplete(IRP *a1, int a2, unsigned int a3, _OWORD *a4)
{
  ULONG_PTR v4; // rax
  _OWORD *UserBuffer; // rax

  v4 = 0LL;
  if ( a2 >= 0 )
  {
    if ( a1->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 4653063 )
      UserBuffer = a1->UserBuffer;
    else
      UserBuffer = &a1->AssociatedIrp.MasterIrp->Type;
    *UserBuffer = *a4;
    v4 = a3;
  }
  a1->IoStatus.Information = v4;
  a1->IoStatus.Status = a2;
  IofCompleteRequest(a1, 0);
}
