/*
 * XREFs of RaUnitSmartDataIoctl @ 0x1C0047E5C
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0008FE4 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C0008054 (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C00081B4 (RaidAllocatePool.c)
 *     RaidCompleteRequestEx @ 0x1C000CF10 (RaidCompleteRequestEx.c)
 *     PortSrbTranslateSrbToNtStatus @ 0x1C000E1BC (PortSrbTranslateSrbToNtStatus.c)
 *     RaSendIrpSynchronous @ 0x1C00107F0 (RaSendIrpSynchronous.c)
 *     StorFreeSynchronousScsiRequest @ 0x1C0021BCC (StorFreeSynchronousScsiRequest.c)
 *     StorBuildSynchronousScsiRequest @ 0x1C0021C18 (StorBuildSynchronousScsiRequest.c)
 *     memset @ 0x1C002C3C0 (memset.c)
 *     RaUnitBuildSrbForSmartReadData @ 0x1C00469A4 (RaUnitBuildSrbForSmartReadData.c)
 *     RaUnitBuildSrbForSmartReturnStatus @ 0x1C0046BF8 (RaUnitBuildSrbForSmartReturnStatus.c)
 *     RaUnitSmartReturnStatus @ 0x1C00483AC (RaUnitSmartReturnStatus.c)
 */

__int64 __fastcall RaUnitSmartDataIoctl(__int64 a1, IRP *a2)
{
  char *v2; // r14
  signed int Status; // edi
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  int v6; // ecx
  _BYTE *Srb; // rbp
  IRP *v8; // r12
  _IRP *MasterIrp; // r15
  unsigned int Length; // r10d
  unsigned __int64 v12; // rsi
  __int64 v13; // rbx
  _OWORD *v14; // rcx
  __int64 v15; // r9
  _OWORD *v16; // rax
  __int128 v17; // xmm1
  char *Pool; // rax
  __int64 v19; // rdi
  PVOID v20; // rax
  PVOID v21; // rax
  void *v22; // r12
  char v23; // al
  __int64 v24; // r8
  IRP *v25; // rax
  _OWORD *v26; // rdx
  unsigned int v27; // eax
  __int64 v28; // r9
  _OWORD *v29; // rax
  _OWORD *v30; // r15
  __int64 v31; // rcx
  __int128 v32; // xmm1
  bool v33; // cf
  _OWORD *v34; // r14
  __int128 v35; // xmm1
  IRP *v36; // rcx
  int v38; // [rsp+20h] [rbp-88h]
  int v39; // [rsp+20h] [rbp-88h]
  int v40; // [rsp+30h] [rbp-78h]
  __int64 v41; // [rsp+40h] [rbp-68h]
  _IO_STATUS_BLOCK v42; // [rsp+48h] [rbp-60h] BYREF
  char v43; // [rsp+B0h] [rbp+8h] BYREF
  PIRP Irp; // [rsp+B8h] [rbp+10h]
  PVOID v45; // [rsp+C0h] [rbp+18h]
  PVOID P; // [rsp+C8h] [rbp+20h]

  Irp = a2;
  v2 = *(char **)(a1 + 3264);
  Status = 0;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v41 = 0LL;
  v6 = *(_DWORD *)(a1 + 3272);
  Srb = 0LL;
  v45 = 0LL;
  v8 = 0LL;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Length = CurrentStackLocation->Parameters.Read.Length;
  v43 = 0;
  P = 0LL;
  if ( (((v6 - 8) & 0xFFFFFFFD) != 0 || (*(_BYTE *)(a1 + 450) & 0x10) == 0) && v6 != 11 )
  {
    Status = -1073741637;
LABEL_5:
    v12 = 0LL;
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
    v12 = 0LL;
    goto LABEL_50;
  }
  v13 = MEMORY[0xFFFFF78000000014];
  if ( ((__int64)MasterIrp->MdlAddress & 1) != 0 )
  {
LABEL_21:
    if ( v2 )
      goto LABEL_25;
    goto LABEL_22;
  }
  if ( v2 )
  {
    if ( (*((_DWORD *)v2 + 130) & 1) != 0 && MEMORY[0xFFFFF78000000014] - *(_QWORD *)v2 < 0x430E23400uLL )
    {
      *(_DWORD *)&MasterIrp->Type = 524;
      v14 = v2 + 8;
      *(_DWORD *)(&MasterIrp->Size + 1) = 524;
      v15 = 4LL;
      LOBYTE(MasterIrp->MdlAddress) = (*((_DWORD *)v2 + 130) & 2) != 0;
      v16 = (_OWORD *)((char *)&MasterIrp->MdlAddress + 1);
      do
      {
        *v16 = *v14;
        v16[1] = v14[1];
        v16[2] = v14[2];
        v16[3] = v14[3];
        v16[4] = v14[4];
        v16[5] = v14[5];
        v16[6] = v14[6];
        v16 += 8;
        v17 = v14[7];
        v14 += 8;
        *(v16 - 1) = v17;
        --v15;
      }
      while ( v15 );
      *((_DWORD *)v2 + 130) |= 1u;
      v12 = 524LL;
      *(_QWORD *)v2 = v13;
      goto LABEL_62;
    }
    goto LABEL_21;
  }
LABEL_22:
  Pool = (char *)RaidAllocatePool(NonPagedPoolNx, 0x210uLL, 0x54536152u, *(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 3264) = Pool;
  v2 = Pool;
  if ( !Pool )
  {
    Status = -1073741670;
    goto LABEL_5;
  }
  memset(Pool, 0, 0x210uLL);
LABEL_25:
  v19 = *(_QWORD *)(a1 + 24) + 320LL;
  v41 = v19;
  Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0, *(_BYTE *)(*(_QWORD *)(a1 + 24) + 418LL), 1);
  if ( !Srb )
  {
    Status = -1073741801;
    goto LABEL_5;
  }
  v20 = RaidAllocatePool(NonPagedPoolNx, 0x200uLL, 0x72536152u, *(_QWORD *)(a1 + 8));
  P = v20;
  if ( v20 )
  {
    memset(v20, 0, 0x200uLL);
    v21 = RaidAllocatePool(NonPagedPoolNx, 0xFFuLL, 0x4E536152u, *(_QWORD *)(a1 + 8));
    v45 = v21;
    v22 = v21;
    if ( !v21 )
    {
      Status = -1073741801;
LABEL_31:
      v12 = 0LL;
LABEL_53:
      if ( P )
        ExFreePoolWithTag(P, 0x72536152u);
      if ( v22 )
        ExFreePoolWithTag(v22, 0x4E536152u);
      goto LABEL_57;
    }
    memset(v21, 0, 0xFFuLL);
    RaUnitBuildSrbForSmartReturnStatus(a1, (__int64)a2, (__int64)Srb, (__int64)v22, v38, *(_BYTE *)(v19 + 98));
    Status = RaUnitSmartReturnStatus(a1, Srb, &v43);
    if ( Status < 0 )
      goto LABEL_31;
    v23 = v43;
    v12 = 9LL;
    *(_DWORD *)(&MasterIrp->Size + 1) = 9;
    LOBYTE(MasterIrp->MdlAddress) = v23;
    *(_DWORD *)&MasterIrp->Type = 524;
    memset(v22, 0, 0xFFuLL);
    RaUnitBuildSrbForSmartReadData(
      a1,
      (__int64)Irp,
      (__int64)Srb,
      (__int64)P,
      v39,
      (__int64)v22,
      v40,
      *(_BYTE *)(v41 + 98));
    v25 = StorBuildSynchronousScsiRequest(*(_QWORD *)(a1 + 8), (unsigned __int64)Srb, v24, &v42);
    v8 = v25;
    if ( !v25 )
    {
      Status = -1073741801;
LABEL_52:
      v22 = v45;
      goto LABEL_53;
    }
    Status = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(a1 + 8), v25);
    if ( Status < 0 )
      goto LABEL_38;
    Status = v8->IoStatus.Status;
    if ( Status >= 0 )
    {
      Status = PortSrbTranslateSrbToNtStatus(Srb[3]);
LABEL_38:
      if ( Status >= 0 )
      {
        if ( Srb[2] == 40 )
        {
          v26 = (_OWORD *)*((_QWORD *)Srb + 8);
          v27 = *((_DWORD *)Srb + 15);
        }
        else
        {
          v26 = (_OWORD *)*((_QWORD *)Srb + 3);
          v27 = *((_DWORD *)Srb + 4);
        }
        if ( v27 >= 0x200 )
        {
          v28 = 4LL;
          *(_DWORD *)(&MasterIrp->Size + 1) = 524;
          v29 = v26;
          v30 = (_OWORD *)((char *)&MasterIrp->MdlAddress + 1);
          v31 = 4LL;
          do
          {
            *v30 = *v29;
            v30[1] = v29[1];
            v30[2] = v29[2];
            v30[3] = v29[3];
            v30[4] = v29[4];
            v30[5] = v29[5];
            v30[6] = v29[6];
            v30 += 8;
            v32 = v29[7];
            v29 += 8;
            *(v30 - 1) = v32;
            --v31;
          }
          while ( v31 );
          v33 = v43 != 0;
          *(_QWORD *)v2 = v13;
          *((_DWORD *)v2 + 130) = (v33 ? 2 : 0) | *((_DWORD *)v2 + 130) & 0xFFFFFFFD | 1;
          v34 = v2 + 8;
          do
          {
            *v34 = *v26;
            v34[1] = v26[1];
            v34[2] = v26[2];
            v34[3] = v26[3];
            v34[4] = v26[4];
            v34[5] = v26[5];
            v34[6] = v26[6];
            v34 += 8;
            v35 = v26[7];
            v26 += 8;
            *(v34 - 1) = v35;
            --v28;
          }
          while ( v28 );
          v12 = 524LL;
        }
        else
        {
          Status = -1073741823;
        }
      }
    }
LABEL_50:
    if ( v8 )
      StorFreeSynchronousScsiRequest(v8);
    goto LABEL_52;
  }
  Status = -1073741801;
  v12 = 0LL;
LABEL_57:
  if ( Srb )
  {
    if ( *(_BYTE *)(v41 + 98) == 1 )
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
  v36 = Irp;
  Irp->IoStatus.Information = v12;
  return RaidCompleteRequestEx(v36, 0, Status);
}
