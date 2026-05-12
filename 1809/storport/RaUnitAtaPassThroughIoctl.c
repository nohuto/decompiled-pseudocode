/*
 * XREFs of RaUnitAtaPassThroughIoctl @ 0x1C0001008
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0008FE4 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaUnitAtaPassThroughMarshalResults @ 0x1C00014C0 (RaUnitAtaPassThroughMarshalResults.c)
 *     RaUnitSetAtaPassThroughCdb @ 0x1C0001620 (RaUnitSetAtaPassThroughCdb.c)
 *     RaUnitAtaPassThroughValidateInput @ 0x1C00016E0 (RaUnitAtaPassThroughValidateInput.c)
 *     RaidAllocateSrb @ 0x1C0008054 (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C00081B4 (RaidAllocatePool.c)
 *     RaSendIrpSynchronous @ 0x1C00107F0 (RaSendIrpSynchronous.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 *     PortPassThroughBuildIrpEx @ 0x1C002BAE0 (PortPassThroughBuildIrpEx.c)
 *     PortPassThroughFreeIrpEx @ 0x1C002BE04 (PortPassThroughFreeIrpEx.c)
 *     memset @ 0x1C002C3C0 (memset.c)
 *     McTemplateK0pd @ 0x1C0036554 (McTemplateK0pd.c)
 */

__int64 __fastcall RaUnitAtaPassThroughIoctl(__int64 a1, IRP *a2, char a3)
{
  _BYTE *v3; // r14
  _BYTE *Srb; // rbx
  IRP *v6; // r13
  void *v7; // r12
  char *v8; // r15
  int Status; // edi
  _IRP *MasterIrp; // rdi
  _IRP *v12; // r14
  unsigned __int64 v13; // r9
  _IRP *v14; // rcx
  __int128 v15; // xmm0
  __int64 v16; // xmm1_8
  __int64 MdlAddress_low; // r8
  _IRP *v18; // r10
  __int64 v19; // rdx
  unsigned int v20; // ecx
  unsigned int v21; // eax
  KPROCESSOR_MODE AccessMode; // al
  __int64 v23; // r8
  void *Pool; // rax
  char v25; // cl
  unsigned __int16 Size; // ax
  int v27; // ecx
  int v28; // ecx
  __int64 v29; // rcx
  char *v30; // rdx
  unsigned __int16 v31; // ax
  int v32; // ecx
  int v33; // ecx
  __int64 v34; // r8
  _IRP *v35; // rcx
  _BYTE *v36; // rax
  __int64 v37; // rcx
  __int64 v39; // [rsp+40h] [rbp-A8h]
  _BYTE *v41; // [rsp+58h] [rbp-90h]
  _QWORD v42[2]; // [rsp+60h] [rbp-88h] BYREF
  __int128 v43; // [rsp+70h] [rbp-78h] BYREF
  __int64 v44; // [rsp+80h] [rbp-68h]
  __int64 v45; // [rsp+88h] [rbp-60h]
  _IRP *v46; // [rsp+90h] [rbp-58h]
  _LIST_ENTRY *Flink; // [rsp+98h] [rbp-50h]

  v42[0] = 0LL;
  v3 = 0LL;
  Srb = 0LL;
  v41 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 544LL) + 184LL) & 2) == 0 )
  {
    Status = -1073741808;
    goto LABEL_46;
  }
  Status = RaUnitAtaPassThroughValidateInput(a1, a2);
  if ( Status >= 0 )
  {
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    v12 = MasterIrp;
    if ( IoIs32bitProcess(a2) )
    {
      v14 = a2->AssociatedIrp.MasterIrp;
      MasterIrp = (_IRP *)&v43;
      v15 = *(_OWORD *)&v14->Type;
      Flink = v14->ThreadListEntry.Flink;
      v16 = *(_QWORD *)&v14->Flags;
      v46 = v14->AssociatedIrp.MasterIrp;
      v45 = *(&v14->Flags + 1);
      v43 = v15;
      v44 = v16;
    }
    MdlAddress_low = LODWORD(MasterIrp->MdlAddress);
    if ( (_DWORD)MdlAddress_low )
    {
      v18 = MasterIrp->AssociatedIrp.MasterIrp;
      v19 = *(_QWORD *)(a1 + 24);
      v20 = *(_DWORD *)(v19 + 348);
      if ( !a3 )
        v18 = (_IRP *)((char *)v18 + (_QWORD)v12);
      v42[0] = v18;
      v13 = (MdlAddress_low + (unsigned __int64)((unsigned __int16)v18 & 0xFFF) + 4095) >> 12;
      if ( *(_BYTE *)(v19 + 4514) )
      {
        v21 = *(_DWORD *)(v19 + 732);
        if ( v20 < v21 )
          v21 = v20;
      }
      else
      {
        v21 = v20;
      }
      if ( (unsigned int)MdlAddress_low > *(_DWORD *)(v19 + 344) || (unsigned int)v13 > v21 )
      {
        Status = -1073741811;
LABEL_17:
        v3 = 0LL;
        goto LABEL_46;
      }
    }
    else
    {
      LODWORD(v18) = 0;
    }
    if ( a3 )
      AccessMode = a2->RequestorMode;
    else
      AccessMode = 0;
    LOBYTE(v13) = MasterIrp->Size & 2;
    LODWORD(v39) = 0;
    v6 = (IRP *)PortPassThroughBuildIrpEx(
                  *(_QWORD *)(a1 + 8),
                  (int)v18,
                  MdlAddress_low,
                  v13,
                  AccessMode,
                  a2,
                  0,
                  0LL,
                  v39,
                  0LL);
    if ( !v6 )
    {
      Status = -1073741801;
      goto LABEL_17;
    }
    LOBYTE(v23) = *(_BYTE *)(*(_QWORD *)(a1 + 24) + 418LL);
    Srb = (_BYTE *)RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0LL, v23, 1LL);
    if ( Srb )
    {
      Pool = (void *)RaidAllocatePool(512LL, 79LL, 1314087250LL, *(_QWORD *)(a1 + 8));
      v7 = Pool;
      if ( Pool )
      {
        memset(Pool, 0, 0x4FuLL);
        v25 = *(_BYTE *)(*(_QWORD *)(a1 + 24) + 418LL);
        Srb[3] = 0;
        if ( v25 == 1 )
        {
          *((_DWORD *)Srb + 5) = 0;
          Size = MasterIrp->Size;
          v41 = Srb;
          if ( (Size & 2) != 0 )
          {
            *((_DWORD *)Srb + 6) |= 0x40u;
            Size = MasterIrp->Size;
          }
          v27 = *((_DWORD *)Srb + 6);
          if ( (Size & 4) != 0 )
          {
            v27 |= 0x80u;
            *((_DWORD *)Srb + 6) = v27;
          }
          v28 = v27 | 0x100;
          *((_DWORD *)Srb + 6) = v28;
          if ( (*(_BYTE *)(a1 + 449) & 0x10) == 0 )
            *((_DWORD *)Srb + 6) = v28 | 0x80000;
          v29 = *((unsigned int *)Srb + 13);
          *((_DWORD *)Srb + 15) = MasterIrp->MdlAddress;
          *((_QWORD *)Srb + 8) = v42[0];
          *((_QWORD *)Srb + 10) = v6;
          *((_DWORD *)Srb + 10) = HIDWORD(MasterIrp->MdlAddress);
          Srb[v29 + 8] = *((_BYTE *)&MasterIrp->Size + 2);
          Srb[v29 + 9] = *((_BYTE *)&MasterIrp->Size + 3);
          Srb[v29 + 10] = *((_BYTE *)&MasterIrp->Size + 4);
          v8 = &Srb[*((unsigned int *)Srb + 30)];
          *(_DWORD *)v8 = 64;
          v30 = v8 + 24;
          *((_DWORD *)v8 + 1) = 32;
          *(_WORD *)(v8 + 9) = 4175;
          *((_QWORD *)v8 + 2) = v7;
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
          {
            v32 |= 0x80u;
            *((_DWORD *)Srb + 3) = v32;
          }
          v33 = v32 | 0x100;
          *((_DWORD *)Srb + 3) = v33;
          if ( (*(_BYTE *)(a1 + 449) & 0x10) == 0 )
            *((_DWORD *)Srb + 3) = v33 | 0x80000;
          v30 = Srb + 72;
          *((_DWORD *)Srb + 4) = MasterIrp->MdlAddress;
          *((_QWORD *)Srb + 3) = v42[0];
          Srb[11] = 79;
          *((_QWORD *)Srb + 4) = v7;
          *((_QWORD *)Srb + 6) = v6;
          *((_DWORD *)Srb + 5) = HIDWORD(MasterIrp->MdlAddress);
        }
        RaUnitSetAtaPassThroughCdb(MasterIrp, v30);
        v6->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)Srb;
        RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(a1 + 8), v6);
        LOBYTE(v34) = a3;
        RaUnitAtaPassThroughMarshalResults(Srb, MasterIrp, v34, &a2->IoStatus);
        if ( IoIs32bitProcess(a2) )
        {
          v35 = a2->AssociatedIrp.MasterIrp;
          *(_OWORD *)&v35->Type = *(_OWORD *)&MasterIrp->Type;
          *(_QWORD *)&v35->Flags = *(_QWORD *)&MasterIrp->Flags;
          v35->ThreadListEntry.Flink = MasterIrp->ThreadListEntry.Blink;
          v35->AssociatedIrp.MasterIrp = (_IRP *)MasterIrp->ThreadListEntry.Flink;
        }
        Status = a2->IoStatus.Status;
        v3 = v41;
      }
      else
      {
        Status = -1073741801;
        v3 = 0LL;
      }
    }
    else
    {
      Status = -1073741801;
      v3 = 0LL;
    }
  }
LABEL_46:
  if ( v6 )
    PortPassThroughFreeIrpEx(v6);
  if ( Srb )
  {
    if ( v7 )
      ExFreePoolWithTag(v7, 0x4E536152u);
    if ( Srb[2] == 40 )
    {
      v36 = Srb;
      if ( v3 )
        v36 = v3;
      if ( v8 )
        *((_QWORD *)v8 + 2) = 0LL;
      *((_QWORD *)v36 + 10) = 0LL;
      *((_QWORD *)v36 + 13) = 0LL;
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
    v42[0] = 0LL;
    v42[1] = 0LL;
    IoGetActivityIdIrp(a2, v42);
    if ( (byte_1C00617E2 & 8) != 0 )
      McTemplateK0pd(v37, &EventNonReadWriteRequestComplete, v42, a2, Status);
  }
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  return (unsigned int)Status;
}
