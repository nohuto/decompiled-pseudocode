/*
 * XREFs of RaUnitAtaPassThroughIoctl @ 0x1C000F99C
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0007604 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaUnitAtaPassThroughMarshalResults @ 0x1C0001470 (RaUnitAtaPassThroughMarshalResults.c)
 *     RaUnitSetAtaPassThroughCdb @ 0x1C00015D4 (RaUnitSetAtaPassThroughCdb.c)
 *     RaUnitAtaPassThroughValidateInput @ 0x1C0001694 (RaUnitAtaPassThroughValidateInput.c)
 *     PortPassThroughFreeIrp @ 0x1C00018D0 (PortPassThroughFreeIrp.c)
 *     RaidAllocateSrb @ 0x1C00066A0 (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C0006800 (RaidAllocatePool.c)
 *     RaSendIrpSynchronous @ 0x1C000FD20 (RaSendIrpSynchronous.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 *     memset @ 0x1C0023840 (memset.c)
 *     McTemplateK0pd @ 0x1C0031DD4 (McTemplateK0pd.c)
 *     PortPassThroughBuildIrp @ 0x1C006A008 (PortPassThroughBuildIrp.c)
 */

__int64 __fastcall RaUnitAtaPassThroughIoctl(__int64 a1, IRP *a2, char a3)
{
  _BYTE *Srb; // rbx
  _BYTE *v7; // r15
  IRP *v8; // r13
  void *v9; // r12
  _BYTE *v10; // r14
  int Status; // edi
  __int64 v12; // rcx
  _IRP *MasterIrp; // rdi
  _IRP *v15; // r15
  unsigned __int64 v16; // r9
  __int64 MdlAddress_low; // r8
  _IRP *v18; // r10
  __int64 v19; // rdx
  unsigned int v20; // ecx
  unsigned int v21; // eax
  char RequestorMode; // al
  PVOID Pool; // rax
  char v24; // cl
  unsigned __int16 v25; // ax
  int v26; // ecx
  int v27; // ecx
  _BYTE *v28; // rdx
  _IRP *v29; // rcx
  __int128 v30; // xmm0
  __int64 v31; // xmm1_8
  unsigned __int16 Size; // ax
  int v33; // ecx
  int v34; // ecx
  __int64 v35; // rcx
  _IRP *v36; // rcx
  _BYTE *v37; // rax
  _BYTE *v39; // [rsp+38h] [rbp-90h]
  _QWORD v40[2]; // [rsp+40h] [rbp-88h] BYREF
  _OWORD v41[3]; // [rsp+50h] [rbp-78h] BYREF

  Srb = 0LL;
  v40[0] = 0LL;
  v7 = 0LL;
  v39 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  memset(v41, 0, sizeof(v41));
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 528LL) + 184LL) & 2) == 0 )
  {
    Status = -1073741808;
    goto LABEL_3;
  }
  Status = RaUnitAtaPassThroughValidateInput(a1, a2, a3);
  if ( Status >= 0 )
  {
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    v15 = MasterIrp;
    if ( IoIs32bitProcess(a2) )
    {
      v29 = a2->AssociatedIrp.MasterIrp;
      MasterIrp = (_IRP *)v41;
      v30 = *(_OWORD *)&v29->Type;
      *((_QWORD *)&v41[2] + 1) = v29->ThreadListEntry.Flink;
      v31 = *(_QWORD *)&v29->Flags;
      *(_QWORD *)&v41[2] = v29->AssociatedIrp.MasterIrp;
      *((_QWORD *)&v41[1] + 1) = *(&v29->Flags + 1);
      v41[0] = v30;
      *(_QWORD *)&v41[1] = v31;
    }
    MdlAddress_low = LODWORD(MasterIrp->MdlAddress);
    if ( (_DWORD)MdlAddress_low )
    {
      v18 = MasterIrp->AssociatedIrp.MasterIrp;
      v19 = *(_QWORD *)(a1 + 24);
      v20 = *(_DWORD *)(v19 + 332);
      if ( !a3 )
        v18 = (_IRP *)((char *)v18 + (_QWORD)v15);
      v40[0] = v18;
      v16 = (MdlAddress_low + (unsigned __int64)((unsigned __int16)v18 & 0xFFF) + 4095) >> 12;
      if ( *(_BYTE *)(v19 + 4450) )
      {
        v21 = *(_DWORD *)(v19 + 708);
        if ( v20 < v21 )
          v21 = v20;
      }
      else
      {
        v21 = v20;
      }
      if ( (unsigned int)MdlAddress_low > *(_DWORD *)(v19 + 328) || (unsigned int)v16 > v21 )
      {
        Status = -1073741811;
        goto LABEL_45;
      }
    }
    else
    {
      v18 = 0LL;
    }
    if ( a3 )
      RequestorMode = a2->RequestorMode;
    else
      RequestorMode = 0;
    LOBYTE(v16) = MasterIrp->Size & 2;
    v8 = (IRP *)PortPassThroughBuildIrp(*(_QWORD *)(a1 + 8), v18, MdlAddress_low, v16, RequestorMode);
    if ( v8 )
    {
      Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0, *(_BYTE *)(*(_QWORD *)(a1 + 24) + 402LL), 1);
      if ( Srb )
      {
        Pool = RaidAllocatePool(NonPagedPoolNx, 0x4FuLL, 0x4E536152u, *(_QWORD *)(a1 + 8));
        v9 = Pool;
        if ( Pool )
        {
          memset(Pool, 0, 0x4FuLL);
          v24 = *(_BYTE *)(*(_QWORD *)(a1 + 24) + 402LL);
          Srb[3] = 0;
          if ( v24 == 1 )
          {
            *((_DWORD *)Srb + 5) = 0;
            Size = MasterIrp->Size;
            v39 = Srb;
            if ( (Size & 2) != 0 )
            {
              *((_DWORD *)Srb + 6) |= 0x40u;
              Size = MasterIrp->Size;
            }
            v33 = *((_DWORD *)Srb + 6);
            if ( (Size & 4) != 0 )
              v33 |= 0x80u;
            v34 = v33 | 0x100;
            *((_DWORD *)Srb + 6) = v34;
            if ( (*(_BYTE *)(a1 + 161) & 0x10) == 0 )
              *((_DWORD *)Srb + 6) = v34 | 0x80000;
            v35 = *((unsigned int *)Srb + 13);
            *((_DWORD *)Srb + 15) = MasterIrp->MdlAddress;
            *((_QWORD *)Srb + 8) = v40[0];
            *((_QWORD *)Srb + 10) = v8;
            *((_DWORD *)Srb + 10) = HIDWORD(MasterIrp->MdlAddress);
            Srb[v35 + 8] = *((_BYTE *)&MasterIrp->Size + 2);
            Srb[v35 + 9] = *((_BYTE *)&MasterIrp->Size + 3);
            Srb[v35 + 10] = *((_BYTE *)&MasterIrp->Size + 4);
            v10 = &Srb[*((unsigned int *)Srb + 30)];
            *(_DWORD *)v10 = 64;
            v28 = v10 + 24;
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
            v25 = MasterIrp->Size;
            if ( (v25 & 2) != 0 )
            {
              *((_DWORD *)Srb + 3) |= 0x40u;
              v25 = MasterIrp->Size;
            }
            v26 = *((_DWORD *)Srb + 3);
            if ( (v25 & 4) != 0 )
              v26 |= 0x80u;
            v27 = v26 | 0x100;
            *((_DWORD *)Srb + 3) = v27;
            if ( (*(_BYTE *)(a1 + 161) & 0x10) == 0 )
              *((_DWORD *)Srb + 3) = v27 | 0x80000;
            v28 = Srb + 72;
            *((_DWORD *)Srb + 4) = MasterIrp->MdlAddress;
            *((_QWORD *)Srb + 3) = v40[0];
            Srb[11] = 79;
            *((_QWORD *)Srb + 4) = v9;
            *((_QWORD *)Srb + 6) = v8;
            *((_DWORD *)Srb + 5) = HIDWORD(MasterIrp->MdlAddress);
          }
          RaUnitSetAtaPassThroughCdb((__int64)MasterIrp, v28);
          v8->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)Srb;
          RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(a1 + 8), v8);
          RaUnitAtaPassThroughMarshalResults((__int64)Srb, (unsigned __int16 *)MasterIrp, a3, (__int64)&a2->IoStatus);
          if ( IoIs32bitProcess(a2) )
          {
            v36 = a2->AssociatedIrp.MasterIrp;
            *(_OWORD *)&v36->Type = *(_OWORD *)&MasterIrp->Type;
            *(_QWORD *)&v36->Flags = *(_QWORD *)&MasterIrp->Flags;
            v36->ThreadListEntry.Flink = MasterIrp->ThreadListEntry.Blink;
            v36->AssociatedIrp.MasterIrp = (_IRP *)MasterIrp->ThreadListEntry.Flink;
          }
          Status = a2->IoStatus.Status;
          v7 = v39;
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
      goto LABEL_3;
    }
    Status = -1073741801;
LABEL_45:
    v7 = 0LL;
  }
LABEL_3:
  if ( v8 )
    PortPassThroughFreeIrp(v8);
  if ( Srb )
  {
    if ( v9 )
      ExFreePoolWithTag(v9, 0x4E536152u);
    if ( Srb[2] == 40 )
    {
      v37 = Srb;
      if ( v7 )
        v37 = v7;
      if ( v10 )
        *((_QWORD *)v10 + 2) = 0LL;
      *((_QWORD *)v37 + 10) = 0LL;
      *((_QWORD *)v37 + 13) = 0LL;
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
    v40[0] = 0LL;
    v40[1] = 0LL;
    IoGetActivityIdIrp(a2, v40);
    if ( (byte_1C0061742 & 0x10) != 0 )
      McTemplateK0pd(v12, &EventNonReadWriteRequestComplete, v40, a2, Status);
  }
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  return (unsigned int)Status;
}
