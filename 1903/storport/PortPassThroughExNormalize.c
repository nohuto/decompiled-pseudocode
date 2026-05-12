/*
 * XREFs of PortPassThroughExNormalize @ 0x1C00515BC
 * Callers:
 *     PortPassThroughExMarshalResultsFromSrbEx @ 0x1C0051400 (PortPassThroughExMarshalResultsFromSrbEx.c)
 *     PortPassThroughExValidate @ 0x1C0051650 (PortPassThroughExValidate.c)
 * Callees:
 *     memmove @ 0x1C0023500 (memmove.c)
 */

__int64 __fastcall PortPassThroughExNormalize(_OWORD *a1, PIRP Irp)
{
  _IRP *MasterIrp; // rsi
  BOOLEAN v5; // al
  _IRP *v6; // rbx

  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v5 = IoIs32bitProcess(Irp);
  v6 = Irp->AssociatedIrp.MasterIrp;
  if ( v5 )
  {
    *a1 = *(_OWORD *)&v6->Type;
    a1[1] = *(_OWORD *)&v6->Flags;
    *((_QWORD *)a1 + 4) = v6->ThreadListEntry.Flink;
    memmove((char *)a1 + 56, &v6->IoStatus, LODWORD(v6->MdlAddress));
    *((_QWORD *)a1 + 5) = LODWORD(v6->ThreadListEntry.Blink);
    *((_QWORD *)a1 + 6) = HIDWORD(v6->ThreadListEntry.Blink);
  }
  else
  {
    memmove(a1, MasterIrp, (unsigned int)(LODWORD(v6->MdlAddress) + 63));
  }
  return 0LL;
}
