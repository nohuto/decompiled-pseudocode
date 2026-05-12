/*
 * XREFs of RaUnitSmartDataIoctl @ 0x1C0045170
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0007604 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C00066A0 (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C0006800 (RaidAllocatePool.c)
 *     RaidCompleteRequestEx @ 0x1C000A830 (RaidCompleteRequestEx.c)
 *     RaSendIrpSynchronous @ 0x1C000FD20 (RaSendIrpSynchronous.c)
 *     StorFreeSynchronousScsiRequest @ 0x1C0018A68 (StorFreeSynchronousScsiRequest.c)
 *     StorBuildSynchronousScsiRequest @ 0x1C0018AB4 (StorBuildSynchronousScsiRequest.c)
 *     PortSrbTranslateSrbToNtStatus @ 0x1C0023240 (PortSrbTranslateSrbToNtStatus.c)
 *     memset @ 0x1C0023840 (memset.c)
 *     RaUnitBuildSrbForSmartReadData @ 0x1C0043E6C (RaUnitBuildSrbForSmartReadData.c)
 *     RaUnitBuildSrbForSmartReturnStatus @ 0x1C00440BC (RaUnitBuildSrbForSmartReturnStatus.c)
 *     RaUnitSmartReturnStatus @ 0x1C00456D0 (RaUnitSmartReturnStatus.c)
 */

__int64 __fastcall RaUnitSmartDataIoctl(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  signed int Status; // edi
  char *v4; // r14
  unsigned int Length; // r10d
  _BYTE *Srb; // rbp
  _IRP *MasterIrp; // r15
  IRP *v9; // r12
  __int64 v11; // rax
  int v12; // ecx
  unsigned __int64 v13; // rsi
  __int64 v14; // rbx
  _OWORD *v15; // rcx
  __int64 v16; // r9
  _OWORD *v17; // rax
  __int128 v18; // xmm1
  char *Pool; // rax
  __int64 v20; // rdi
  PVOID v21; // rax
  PVOID v22; // rax
  void *v23; // r12
  char v24; // al
  __int64 v25; // r8
  IRP *v26; // rax
  _OWORD *v27; // rdx
  unsigned int v28; // eax
  __int64 v29; // r9
  _OWORD *v30; // rax
  _OWORD *v31; // r15
  __int64 v32; // rcx
  __int128 v33; // xmm1
  bool v34; // cf
  _OWORD *v35; // r14
  __int128 v36; // xmm1
  IRP *v37; // rcx
  int v39; // [rsp+20h] [rbp-88h]
  int v40; // [rsp+20h] [rbp-88h]
  int v41; // [rsp+30h] [rbp-78h]
  __int64 v42; // [rsp+40h] [rbp-68h]
  _IO_STATUS_BLOCK v43; // [rsp+48h] [rbp-60h] BYREF
  char v44; // [rsp+B0h] [rbp+8h] BYREF
  PIRP Irp; // [rsp+B8h] [rbp+10h]
  PVOID v46; // [rsp+C0h] [rbp+18h]
  PVOID P; // [rsp+C8h] [rbp+20h]

  Irp = a2;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v42 = 0LL;
  Status = 0;
  v46 = 0LL;
  v4 = *(char **)(a1 + 2784);
  Length = CurrentStackLocation->Parameters.Read.Length;
  Srb = 0LL;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v9 = 0LL;
  v43.Pointer = 0LL;
  v43.Information = 0LL;
  v11 = *(_QWORD *)(a1 + 24);
  v44 = 0;
  P = 0LL;
  v12 = *(_DWORD *)(v11 + 4356);
  if ( (((v12 - 8) & 0xFFFFFFFD) != 0 || (*(_BYTE *)(a1 + 162) & 0x10) == 0) && v12 != 11 )
  {
    Status = -1073741637;
LABEL_5:
    v13 = 0LL;
    goto LABEL_62;
  }
  if ( CurrentStackLocation->Parameters.Create.Options < 0xC )
  {
    Status = -1073741811;
    goto LABEL_5;
  }
  if ( Length < 0x20C )
  {
    Status = -1073741789;
    goto LABEL_5;
  }
  if ( !MasterIrp
    || *(_DWORD *)&MasterIrp->Type != 12
    || *(_DWORD *)(&MasterIrp->Size + 1) != 12
    || LODWORD(MasterIrp->MdlAddress) > 1 )
  {
    Status = -1073741811;
    v13 = 0LL;
    goto LABEL_50;
  }
  v14 = MEMORY[0xFFFFF78000000014];
  if ( ((__int64)MasterIrp->MdlAddress & 1) != 0 )
  {
LABEL_21:
    if ( v4 )
      goto LABEL_25;
    goto LABEL_22;
  }
  if ( v4 )
  {
    if ( (*((_DWORD *)v4 + 130) & 1) != 0 && MEMORY[0xFFFFF78000000014] - *(_QWORD *)v4 < 0x430E23400uLL )
    {
      *(_DWORD *)&MasterIrp->Type = 524;
      v15 = v4 + 8;
      *(_DWORD *)(&MasterIrp->Size + 1) = 524;
      v16 = 4LL;
      LOBYTE(MasterIrp->MdlAddress) = (*((_DWORD *)v4 + 130) & 2) != 0;
      v17 = (_OWORD *)((char *)&MasterIrp->MdlAddress + 1);
      do
      {
        *v17 = *v15;
        v17[1] = v15[1];
        v17[2] = v15[2];
        v17[3] = v15[3];
        v17[4] = v15[4];
        v17[5] = v15[5];
        v17[6] = v15[6];
        v17 += 8;
        v18 = v15[7];
        v15 += 8;
        *(v17 - 1) = v18;
        --v16;
      }
      while ( v16 );
      *((_DWORD *)v4 + 130) |= 1u;
      v13 = 524LL;
      *(_QWORD *)v4 = v14;
      goto LABEL_62;
    }
    goto LABEL_21;
  }
LABEL_22:
  Pool = (char *)RaidAllocatePool(NonPagedPoolNx, 0x210uLL, 0x54536152u, *(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 2784) = Pool;
  v4 = Pool;
  if ( !Pool )
  {
    Status = -1073741670;
    goto LABEL_5;
  }
  memset(Pool, 0, 0x210uLL);
LABEL_25:
  v20 = *(_QWORD *)(a1 + 24) + 304LL;
  v42 = v20;
  Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0, *(_BYTE *)(*(_QWORD *)(a1 + 24) + 402LL), 1);
  if ( !Srb )
  {
    Status = -1073741801;
    goto LABEL_5;
  }
  v21 = RaidAllocatePool(NonPagedPoolNx, 0x200uLL, 0x72536152u, *(_QWORD *)(a1 + 8));
  P = v21;
  if ( v21 )
  {
    memset(v21, 0, 0x200uLL);
    v22 = RaidAllocatePool(NonPagedPoolNx, 0xFFuLL, 0x4E536152u, *(_QWORD *)(a1 + 8));
    v46 = v22;
    v23 = v22;
    if ( !v22 )
    {
      Status = -1073741801;
LABEL_31:
      v13 = 0LL;
LABEL_53:
      if ( P )
        ExFreePoolWithTag(P, 0x72536152u);
      if ( v23 )
        ExFreePoolWithTag(v23, 0x4E536152u);
      goto LABEL_57;
    }
    memset(v22, 0, 0xFFuLL);
    RaUnitBuildSrbForSmartReturnStatus(a1, (__int64)a2, (__int64)Srb, (__int64)v23, v39, *(_BYTE *)(v20 + 98));
    Status = RaUnitSmartReturnStatus(a1, Srb, &v44);
    if ( Status < 0 )
      goto LABEL_31;
    v24 = v44;
    v13 = 9LL;
    *(_DWORD *)(&MasterIrp->Size + 1) = 9;
    LOBYTE(MasterIrp->MdlAddress) = v24;
    *(_DWORD *)&MasterIrp->Type = 524;
    memset(v23, 0, 0xFFuLL);
    RaUnitBuildSrbForSmartReadData(
      a1,
      (__int64)Irp,
      (__int64)Srb,
      (__int64)P,
      v40,
      (__int64)v23,
      v41,
      *(_BYTE *)(v42 + 98));
    v26 = StorBuildSynchronousScsiRequest(*(_QWORD *)(a1 + 8), (unsigned __int64)Srb, v25, &v43);
    v9 = v26;
    if ( !v26 )
    {
      Status = -1073741801;
LABEL_52:
      v23 = v46;
      goto LABEL_53;
    }
    Status = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(a1 + 8), v26);
    if ( Status < 0 )
      goto LABEL_38;
    Status = v9->IoStatus.Status;
    if ( Status >= 0 )
    {
      Status = PortSrbTranslateSrbToNtStatus(Srb[3]);
LABEL_38:
      if ( Status >= 0 )
      {
        if ( Srb[2] == 40 )
        {
          v27 = (_OWORD *)*((_QWORD *)Srb + 8);
          v28 = *((_DWORD *)Srb + 15);
        }
        else
        {
          v27 = (_OWORD *)*((_QWORD *)Srb + 3);
          v28 = *((_DWORD *)Srb + 4);
        }
        if ( v28 >= 0x200 )
        {
          v29 = 4LL;
          *(_DWORD *)(&MasterIrp->Size + 1) = 524;
          v30 = v27;
          v31 = (_OWORD *)((char *)&MasterIrp->MdlAddress + 1);
          v32 = 4LL;
          do
          {
            *v31 = *v30;
            v31[1] = v30[1];
            v31[2] = v30[2];
            v31[3] = v30[3];
            v31[4] = v30[4];
            v31[5] = v30[5];
            v31[6] = v30[6];
            v31 += 8;
            v33 = v30[7];
            v30 += 8;
            *(v31 - 1) = v33;
            --v32;
          }
          while ( v32 );
          v34 = v44 != 0;
          *(_QWORD *)v4 = v14;
          *((_DWORD *)v4 + 130) = (v34 ? 2 : 0) | *((_DWORD *)v4 + 130) & 0xFFFFFFFD | 1;
          v35 = v4 + 8;
          do
          {
            *v35 = *v27;
            v35[1] = v27[1];
            v35[2] = v27[2];
            v35[3] = v27[3];
            v35[4] = v27[4];
            v35[5] = v27[5];
            v35[6] = v27[6];
            v35 += 8;
            v36 = v27[7];
            v27 += 8;
            *(v35 - 1) = v36;
            --v29;
          }
          while ( v29 );
          v13 = 524LL;
        }
        else
        {
          Status = -1073741823;
        }
      }
    }
LABEL_50:
    if ( v9 )
      StorFreeSynchronousScsiRequest(v9);
    goto LABEL_52;
  }
  Status = -1073741801;
  v13 = 0LL;
LABEL_57:
  if ( Srb )
  {
    if ( *(_BYTE *)(v42 + 98) == 1 )
    {
      *((_QWORD *)Srb + 10) = 0LL;
      *((_QWORD *)Srb + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
      *((_QWORD *)Srb + 4) = 0LL;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
LABEL_62:
  v37 = Irp;
  Irp->IoStatus.Information = v13;
  return RaidCompleteRequestEx(v37, 0, Status);
}
