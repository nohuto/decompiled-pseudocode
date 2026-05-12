/*
 * XREFs of RaUnitAtaPassThroughIoctl @ 0x1C000F6CC
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0007654 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaUnitAtaPassThroughMarshalResults @ 0x1C0001470 (RaUnitAtaPassThroughMarshalResults.c)
 *     RaUnitSetAtaPassThroughCdb @ 0x1C00017F0 (RaUnitSetAtaPassThroughCdb.c)
 *     RaUnitAtaPassThroughValidateInput @ 0x1C00018B0 (RaUnitAtaPassThroughValidateInput.c)
 *     RaidAllocateSrb @ 0x1C00066F0 (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C0006850 (RaidAllocatePool.c)
 *     RaSendIrpSynchronous @ 0x1C000FB94 (RaSendIrpSynchronous.c)
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 *     PortPassThroughBuildIrpEx @ 0x1C00244B0 (PortPassThroughBuildIrpEx.c)
 *     PortPassThroughFreeIrpEx @ 0x1C00247E4 (PortPassThroughFreeIrpEx.c)
 *     memset @ 0x1C0024DC0 (memset.c)
 *     McTemplateK0pd @ 0x1C00331C4 (McTemplateK0pd.c)
 */

__int64 __fastcall RaUnitAtaPassThroughIoctl(__int64 a1, IRP *a2, char a3)
{
  _BYTE *Srb; // rbx
  _BYTE *v7; // r15
  IRP *v8; // r13
  void *v9; // r12
  _BYTE *v10; // r14
  int Status; // edi
  _IRP *MasterIrp; // rdi
  _IRP *v13; // r15
  unsigned __int64 v14; // r9
  _IRP *v15; // rcx
  __int128 v16; // xmm0
  __int64 v17; // xmm1_8
  __int64 MdlAddress_low; // r8
  _IRP *v19; // r10
  __int64 v20; // rdx
  unsigned int v21; // ecx
  unsigned int v22; // eax
  KPROCESSOR_MODE AccessMode; // al
  PVOID Pool; // rax
  char v25; // cl
  unsigned __int16 Size; // ax
  int v27; // ecx
  int v28; // ecx
  __int64 v29; // rcx
  _BYTE *v30; // rdx
  unsigned __int16 v31; // ax
  int v32; // ecx
  int v33; // ecx
  _IRP *v34; // rcx
  _BYTE *v35; // rax
  __int64 v36; // rcx
  __int64 v38; // [rsp+40h] [rbp-A8h]
  _BYTE *v40; // [rsp+58h] [rbp-90h]
  _QWORD v41[2]; // [rsp+60h] [rbp-88h] BYREF
  _OWORD v42[3]; // [rsp+70h] [rbp-78h] BYREF

  Srb = 0LL;
  v41[0] = 0LL;
  v7 = 0LL;
  v40 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  memset(v42, 0, sizeof(v42));
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 528LL) + 184LL) & 2) == 0 )
  {
    Status = -1073741808;
    goto LABEL_46;
  }
  Status = RaUnitAtaPassThroughValidateInput(a1, a2, a3);
  if ( Status >= 0 )
  {
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    v13 = MasterIrp;
    if ( IoIs32bitProcess(a2) )
    {
      v15 = a2->AssociatedIrp.MasterIrp;
      MasterIrp = (_IRP *)v42;
      v16 = *(_OWORD *)&v15->Type;
      *((_QWORD *)&v42[2] + 1) = v15->ThreadListEntry.Flink;
      v17 = *(_QWORD *)&v15->Flags;
      *(_QWORD *)&v42[2] = v15->AssociatedIrp.MasterIrp;
      *((_QWORD *)&v42[1] + 1) = *(&v15->Flags + 1);
      v42[0] = v16;
      *(_QWORD *)&v42[1] = v17;
    }
    MdlAddress_low = LODWORD(MasterIrp->MdlAddress);
    if ( (_DWORD)MdlAddress_low )
    {
      v19 = MasterIrp->AssociatedIrp.MasterIrp;
      v20 = *(_QWORD *)(a1 + 24);
      v21 = *(_DWORD *)(v20 + 332);
      if ( !a3 )
        v19 = (_IRP *)((char *)v19 + (_QWORD)v13);
      v41[0] = v19;
      v14 = (MdlAddress_low + (unsigned __int64)((unsigned __int16)v19 & 0xFFF) + 4095) >> 12;
      if ( *(_BYTE *)(v20 + 4450) )
      {
        v22 = *(_DWORD *)(v20 + 708);
        if ( v21 < v22 )
          v22 = v21;
      }
      else
      {
        v22 = v21;
      }
      if ( (unsigned int)MdlAddress_low > *(_DWORD *)(v20 + 328) || (unsigned int)v14 > v22 )
      {
        Status = -1073741811;
LABEL_17:
        v7 = 0LL;
        goto LABEL_46;
      }
    }
    else
    {
      LODWORD(v19) = 0;
    }
    if ( a3 )
      AccessMode = a2->RequestorMode;
    else
      AccessMode = 0;
    LOBYTE(v14) = MasterIrp->Size & 2;
    LODWORD(v38) = 0;
    v8 = (IRP *)PortPassThroughBuildIrpEx(
                  *(_QWORD *)(a1 + 8),
                  (int)v19,
                  MdlAddress_low,
                  v14,
                  AccessMode,
                  a2,
                  0,
                  0LL,
                  v38,
                  0LL);
    if ( !v8 )
    {
      Status = -1073741801;
      goto LABEL_17;
    }
    Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0, *(_BYTE *)(*(_QWORD *)(a1 + 24) + 402LL), 1);
    if ( Srb )
    {
      Pool = RaidAllocatePool(NonPagedPoolNx, 0x4FuLL, 0x4E536152u, *(_QWORD *)(a1 + 8));
      v9 = Pool;
      if ( Pool )
      {
        memset(Pool, 0, 0x4FuLL);
        v25 = *(_BYTE *)(*(_QWORD *)(a1 + 24) + 402LL);
        Srb[3] = 0;
        if ( v25 == 1 )
        {
          *((_DWORD *)Srb + 5) = 0;
          Size = MasterIrp->Size;
          v40 = Srb;
          if ( (Size & 2) != 0 )
          {
            *((_DWORD *)Srb + 6) |= 0x40u;
            Size = MasterIrp->Size;
          }
          v27 = *((_DWORD *)Srb + 6);
          if ( (Size & 4) != 0 )
            v27 |= 0x80u;
          v28 = v27 | 0x100;
          *((_DWORD *)Srb + 6) = v28;
          if ( (*(_BYTE *)(a1 + 449) & 0x10) == 0 )
            *((_DWORD *)Srb + 6) = v28 | 0x80000;
          v29 = *((unsigned int *)Srb + 13);
          *((_DWORD *)Srb + 15) = MasterIrp->MdlAddress;
          *((_QWORD *)Srb + 8) = v41[0];
          *((_QWORD *)Srb + 10) = v8;
          *((_DWORD *)Srb + 10) = HIDWORD(MasterIrp->MdlAddress);
          Srb[v29 + 8] = *((_BYTE *)&MasterIrp->Size + 2);
          Srb[v29 + 9] = *((_BYTE *)&MasterIrp->Size + 3);
          Srb[v29 + 10] = *((_BYTE *)&MasterIrp->Size + 4);
          v10 = &Srb[*((unsigned int *)Srb + 30)];
          *(_DWORD *)v10 = 64;
          v30 = v10 + 24;
          *((_DWORD *)v10 + 1) = 32;
          *(_WORD *)(v10 + 9) = 4175;
          *((_QWORD *)v10 + 2) = v9;
        }
        else
        {
          Srb[2] = 0;
          *(_WORD *)Srb = 88;
          Srb[5] = *((_BYTE *)&MasterIrp->Size + 2);
          Srb[6] = *((_BYTE *)&MasterIrp->Size + 3);
          Srb[7] = *((_BYTE *)&MasterIrp->Size + 4);
          Srb[10] = 16;
          v31 = MasterIrp->Size;
          if ( (v31 & 2) != 0 )
          {
            *((_DWORD *)Srb + 3) |= 0x40u;
            v31 = MasterIrp->Size;
          }
          v32 = *((_DWORD *)Srb + 3);
          if ( (v31 & 4) != 0 )
            v32 |= 0x80u;
          v33 = v32 | 0x100;
          *((_DWORD *)Srb + 3) = v33;
          if ( (*(_BYTE *)(a1 + 449) & 0x10) == 0 )
            *((_DWORD *)Srb + 3) = v33 | 0x80000;
          v30 = Srb + 72;
          *((_DWORD *)Srb + 4) = MasterIrp->MdlAddress;
          *((_QWORD *)Srb + 3) = v41[0];
          Srb[11] = 79;
          *((_QWORD *)Srb + 4) = v9;
          *((_QWORD *)Srb + 6) = v8;
          *((_DWORD *)Srb + 5) = HIDWORD(MasterIrp->MdlAddress);
        }
        RaUnitSetAtaPassThroughCdb((__int64)MasterIrp, v30);
        v8->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)Srb;
        RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(a1 + 8), v8);
        RaUnitAtaPassThroughMarshalResults((__int64)Srb, (unsigned __int16 *)MasterIrp, a3, (__int64)&a2->IoStatus);
        if ( IoIs32bitProcess(a2) )
        {
          v34 = a2->AssociatedIrp.MasterIrp;
          *(_OWORD *)&v34->Type = *(_OWORD *)&MasterIrp->Type;
          *(_QWORD *)&v34->Flags = *(_QWORD *)&MasterIrp->Flags;
          v34->ThreadListEntry.Flink = MasterIrp->ThreadListEntry.Blink;
          v34->AssociatedIrp.MasterIrp = (_IRP *)MasterIrp->ThreadListEntry.Flink;
        }
        Status = a2->IoStatus.Status;
        v7 = v40;
      }
      else
      {
        Status = -1073741801;
        v7 = 0LL;
      }
    }
    else
    {
      Status = -1073741801;
      v7 = 0LL;
    }
  }
LABEL_46:
  if ( v8 )
    PortPassThroughFreeIrpEx(v8);
  if ( Srb )
  {
    if ( v9 )
      ExFreePoolWithTag(v9, 0x4E536152u);
    if ( Srb[2] == 40 )
    {
      v35 = Srb;
      if ( v7 )
        v35 = v7;
      if ( v10 )
        *((_QWORD *)v10 + 2) = 0LL;
      *((_QWORD *)v35 + 10) = 0LL;
      *((_QWORD *)v35 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 4) = 0LL;
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  if ( StorEtwLoggingEnabled )
  {
    v41[0] = 0LL;
    v41[1] = 0LL;
    IoGetActivityIdIrp(a2, v41);
    if ( (byte_1C0062742 & 0x10) != 0 )
      McTemplateK0pd(v36, &EventNonReadWriteRequestComplete, v41, a2, Status);
  }
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  return (unsigned int)Status;
}
