/*
 * XREFs of RaidAdapterPassThrough @ 0x1C006F078
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0003014 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0007964 (RaidAdapterFindUnit.c)
 *     RaidCompleteRequestEx @ 0x1C000CF10 (RaidCompleteRequestEx.c)
 *     RaidSqmRecordPassthroughData @ 0x1C002237C (RaidSqmRecordPassthroughData.c)
 *     PortPassThroughBasicValidation @ 0x1C00223CC (PortPassThroughBasicValidation.c)
 *     PortPassThroughExBasicValidation @ 0x1C00528D4 (PortPassThroughExBasicValidation.c)
 *     PortPassThroughExSendAsync @ 0x1C006F178 (PortPassThroughExSendAsync.c)
 */

__int64 __fastcall RaidAdapterPassThrough(__int64 a1, IRP *a2, char a3)
{
  char v6; // di
  int v7; // eax
  _IRP *MasterIrp; // rdx
  char v9; // al
  __int64 Unit; // rdi
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v12; // r8d
  int v13; // r10d
  int v14; // r11d
  char *v16; // rcx
  unsigned int v17; // r8d
  int v18; // [rsp+30h] [rbp-18h]
  int v19; // [rsp+58h] [rbp+10h]

  if ( ((a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart - 315460) & 0xFFFFFFFB) != 0 )
  {
    v6 = 0;
    v7 = PortPassThroughBasicValidation(a2);
  }
  else
  {
    v6 = 1;
    v7 = PortPassThroughExBasicValidation(a2);
  }
  if ( v7 < 0 )
    goto LABEL_15;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( v6 )
  {
    v16 = (char *)MasterIrp + (unsigned int)MasterIrp->AssociatedIrp.IrpCount;
    if ( *(_WORD *)v16 != 1 || *((_DWORD *)v16 + 1) < 4u )
      goto LABEL_15;
    LOWORD(v19) = *((_WORD *)v16 + 4);
    v9 = v16[10];
  }
  else
  {
    LOWORD(v19) = *(unsigned __int16 *)((char *)&MasterIrp->Size + 1);
    v9 = *((_BYTE *)&MasterIrp->Size + 3);
  }
  BYTE2(v19) = v9;
  Unit = RaidAdapterFindUnit(a1, v19);
  if ( !Unit )
  {
LABEL_15:
    v17 = -1073741810;
    return RaidCompleteRequestEx(a2, 0, v17);
  }
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MinorFunction || (*(_BYTE *)(Unit + 448) & 1) == 0 )
  {
    CurrentStackLocation->Control |= 1u;
    RaidSqmRecordPassthroughData((__int64)a2);
    LOBYTE(v12) = a3;
    PortPassThroughExSendAsync(*(_QWORD *)(Unit + 8), (int)a2, v12, v14, v13, v18, Unit);
    return 259LL;
  }
  v17 = -1073741808;
  return RaidCompleteRequestEx(a2, 0, v17);
}
