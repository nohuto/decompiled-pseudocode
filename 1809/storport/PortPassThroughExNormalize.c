/*
 * XREFs of PortPassThroughExNormalize @ 0x1C0052BF4
 * Callers:
 *     PortPassThroughExMarshalResultsFromSrbEx @ 0x1C0052A14 (PortPassThroughExMarshalResultsFromSrbEx.c)
 *     PortPassThroughExValidate @ 0x1C0052CAC (PortPassThroughExValidate.c)
 * Callees:
 *     memmove @ 0x1C002C080 (memmove.c)
 *     PortPassThroughExGetBasicStructureSize @ 0x1C00529EC (PortPassThroughExGetBasicStructureSize.c)
 */

__int64 __fastcall PortPassThroughExNormalize(_OWORD *a1, PIRP Irp)
{
  _IRP *MasterIrp; // rbp
  NTSTATUS BasicStructureSize; // esi
  _IRP *v6; // rbx
  size_t Size; // [rsp+40h] [rbp+18h] BYREF

  LODWORD(Size) = 0;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  BasicStructureSize = 0;
  if ( IoIs32bitProcess(Irp) )
  {
    v6 = Irp->AssociatedIrp.MasterIrp;
    *a1 = *(_OWORD *)&v6->Type;
    a1[1] = *(_OWORD *)&v6->Flags;
    *((_QWORD *)a1 + 4) = v6->ThreadListEntry.Flink;
    memmove((char *)a1 + 56, &v6->IoStatus, LODWORD(v6->MdlAddress));
    *((_QWORD *)a1 + 5) = LODWORD(v6->ThreadListEntry.Blink);
    *((_QWORD *)a1 + 6) = HIDWORD(v6->ThreadListEntry.Blink);
  }
  else
  {
    BasicStructureSize = PortPassThroughExGetBasicStructureSize((__int64)Irp, (ULONG *)&Size);
    if ( BasicStructureSize >= 0 )
      memmove(a1, MasterIrp, (unsigned int)Size);
  }
  return (unsigned int)BasicStructureSize;
}
