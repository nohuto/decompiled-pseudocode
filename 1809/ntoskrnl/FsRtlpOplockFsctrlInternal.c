/*
 * XREFs of FsRtlpOplockFsctrlInternal @ 0x1405DD640
 * Callers:
 *     FsRtlOplockFsctrl @ 0x1405DD600 (FsRtlOplockFsctrl.c)
 *     FsRtlOplockFsctrlEx @ 0x1405DD620 (FsRtlOplockFsctrlEx.c)
 *     FsRtlUpperOplockFsctrl @ 0x140816370 (FsRtlUpperOplockFsctrl.c)
 * Callees:
 *     FsRtlpOplockDequeueRH @ 0x140017D48 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpRequestShareableOplock @ 0x140017E60 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpComputeShareableOplockState @ 0x140018750 (FsRtlpComputeShareableOplockState.c)
 *     IoIsOperationSynchronous @ 0x1400188F0 (IoIsOperationSynchronous.c)
 *     ExReleaseFastMutexUnsafe @ 0x140018980 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400189C0 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlpAttachOplockKey @ 0x140018B74 (FsRtlpAttachOplockKey.c)
 *     FsRtlpCallerIsAtomicRequestor @ 0x140019C40 (FsRtlpCallerIsAtomicRequestor.c)
 *     FsRtlCheckOplockEx @ 0x1400B7BC0 (FsRtlCheckOplockEx.c)
 *     IofCompleteRequest @ 0x1400C1000 (IofCompleteRequest.c)
 *     FsRtlpClearOwner @ 0x14012180C (FsRtlpClearOwner.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x140133360 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpRequestExclusiveOplock @ 0x14015E20C (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x140168EA0 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x14026FB48 (FsRtlpAcknowledgeOplockBreak.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     FsRtlpAllocateOplock @ 0x1405DDDA0 (FsRtlpAllocateOplock.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x1408164FC (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x140816638 (FsRtlpOplockBreakNotify.c)
 */

__int64 __fastcall FsRtlpOplockFsctrlInternal(__int64 *Oplock, PIRP Irp, unsigned int a3, int a4, unsigned int a5)
{
  unsigned int v8; // edi
  PVOID PoolWithTag; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  int v11; // edi
  ULONG LowPart; // eax
  struct _IRP *MasterIrp; // r13
  int MdlAddress; // eax
  int v15; // r13d
  int v16; // r8d
  int v17; // r13d
  int v18; // edi
  int v19; // eax
  int v20; // eax
  int v21; // edx
  int v22; // ecx
  __int16 v23; // r9
  __int16 v24; // r8
  __int16 v25; // ax
  PVOID *v26; // r8
  int v27; // eax
  PVOID v28; // rbx
  ULONG Options; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  PFAST_MUTEX *v33; // r13
  int v34; // eax
  int v35; // ecx
  int v37; // ecx
  int v38; // r8d
  int v39; // r12d
  int v40; // edx
  int v41; // edi
  int v42; // ecx
  int v43; // ecx
  int v44; // eax
  __int16 v45; // r8
  __int16 v46; // dx
  __int16 v47; // cx
  PVOID *v48; // rdx
  int v49; // ecx
  unsigned int v50; // edi
  char v51; // r9
  __int64 v52; // rdi
  _QWORD *v53; // rbx
  __int64 v54; // rcx
  _QWORD *v55; // rax
  int v56; // [rsp+40h] [rbp-58h]
  int v57; // [rsp+40h] [rbp-58h]
  struct _IRP *v58; // [rsp+48h] [rbp-50h]
  int v59; // [rsp+48h] [rbp-50h]
  PVOID v60[8]; // [rsp+58h] [rbp-40h] BYREF
  PVOID P; // [rsp+A8h] [rbp+10h] BYREF
  int v62; // [rsp+B8h] [rbp+20h]

  v62 = a4;
  v8 = 0;
  PoolWithTag = 0LL;
  v60[0] = 0LL;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MajorFunction )
  {
    v11 = 2;
    LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    if ( LowPart == 590400 )
    {
      MasterIrp = Irp->AssociatedIrp.MasterIrp;
      v58 = MasterIrp;
      if ( CurrentStackLocation->Parameters.Create.Options < 0xC || CurrentStackLocation->Parameters.Read.Length < 0x18 )
      {
        v8 = -1073741789;
      }
      else
      {
        if ( MasterIrp->Type <= 1u )
        {
          MdlAddress = (int)MasterIrp->MdlAddress;
          if ( (MdlAddress & 1) != 0 )
          {
            v15 = *(_DWORD *)(&MasterIrp->Size + 1);
            LODWORD(P) = v15 & 1;
            if ( (v15 & 1) != 0 )
              v16 = 4096;
            else
              v16 = 0;
            v56 = v15 & 4;
            v17 = v15 & 2;
            v18 = 0x2000;
            if ( v17 )
              v19 = 0x2000;
            else
              v19 = 0;
            v20 = (v56 != 0 ? 0x4000 : 0) | v16 | v19;
            if ( v20 == 12288 )
            {
LABEL_12:
              if ( !a3 && !IoIsOperationSynchronous(Irp) )
              {
                v21 = 0x4000;
                if ( (CurrentStackLocation->FileObject->Flags & 0x4000) == 0 )
                {
                  v22 = 4096;
                  if ( (_DWORD)P )
                    v23 = 4096;
                  else
                    v23 = 0;
                  if ( v56 )
                    v24 = 0x4000;
                  else
                    v24 = 0;
                  if ( v17 )
                    v25 = 0x2000;
                  else
                    v25 = 0;
                  if ( (((unsigned __int16)v23 | (unsigned __int16)(v24 | v25)) & 0x2000) != 0 )
                  {
                    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, 0x48uLL, 0x6F725346u);
                    v60[0] = PoolWithTag;
                    memset(PoolWithTag, 0, 0x48uLL);
                    v21 = 0x4000;
                    v22 = 4096;
                  }
                  if ( PoolWithTag )
                    v26 = v60;
                  else
                    v26 = 0LL;
                  v27 = *(_DWORD *)(&v58->Size + 1);
                  if ( (v27 & 1) == 0 )
                    v22 = 0;
                  if ( (v27 & 4) == 0 )
                    v21 = 0;
                  if ( (v27 & 2) == 0 )
                    v18 = 0;
                  v8 = FsRtlpRequestShareableOplock(
                         Oplock,
                         (__int64)CurrentStackLocation,
                         (__int64)Irp,
                         v22 | v21 | (unsigned int)v18,
                         (__int64)v26,
                         1,
                         0,
                         a5);
LABEL_36:
                  v28 = v60[0];
                  if ( v60[0] )
                  {
                    FsRtlpClearOwner(*Oplock, (__int64)v60[0]);
                    ExFreePoolWithTag(v28, 0);
                  }
                  return v8;
                }
              }
              goto LABEL_62;
            }
            if ( v20 )
            {
              if ( v20 == 4096 )
                goto LABEL_12;
              if ( v20 != 28672 && v20 != 20480 )
              {
LABEL_123:
                v8 = -1073741811;
                Irp->IoStatus.Status = -1073741811;
                goto LABEL_63;
              }
              if ( IoIsOperationSynchronous(Irp)
                || (v34 = 0x4000, (CurrentStackLocation->FileObject->Flags & 0x4000) != 0) )
              {
LABEL_62:
                v8 = -1073741598;
                Irp->IoStatus.Status = -1073741598;
LABEL_63:
                IofCompleteRequest(Irp, 1);
                return v8;
              }
              if ( (_DWORD)P )
                v35 = 4160;
              else
                v35 = 64;
              if ( !v56 )
                v34 = 0;
              if ( !v17 )
                v18 = 0;
              return (unsigned int)FsRtlpRequestExclusiveOplock(
                                     Oplock,
                                     (__int64)CurrentStackLocation,
                                     (__int64)Irp,
                                     a3,
                                     v62,
                                     v35 | v34 | (unsigned int)v18,
                                     a5);
            }
            v52 = *Oplock;
            if ( *Oplock )
            {
              P = 0LL;
              if ( (*(_DWORD *)(v52 + 144) & 0x10000) != 0 )
              {
                if ( FsRtlpCallerIsAtomicRequestor(v52, (__int64)CurrentStackLocation->FileObject, &P) )
                {
                  v53 = P;
                  FsRtlpOplockDequeueRH((__int64)P);
                  v54 = v53[7];
                  v55 = (_QWORD *)v53[8];
                  if ( *(_QWORD **)(v54 + 8) != v53 + 7 || (_QWORD *)*v55 != v53 + 7 )
                    __fastfail(3u);
                  *v55 = v54;
                  *(_QWORD *)(v54 + 8) = v55;
                  if ( *(_QWORD *)(v52 + 120) == v52 + 120 )
                    *(_DWORD *)(v52 + 144) &= 0xFFFCFFFF;
                  if ( v53[5] )
                    FsRtlpClearOwner(v52, (__int64)v53);
                  ExFreePoolWithTag(v53, 0);
                  FsRtlpComputeShareableOplockState(v52);
                  FsRtlpReleaseIrpsWaitingForRH(v52);
                }
              }
            }
LABEL_145:
            Irp->IoStatus.Status = 0;
            IofCompleteRequest(Irp, 1);
            return 0;
          }
          if ( (MdlAddress & 2) != 0 )
          {
            v37 = *(_DWORD *)(&MasterIrp->Size + 1);
            LODWORD(P) = v37 & 1;
            if ( (v37 & 1) != 0 )
              v38 = 4096;
            else
              v38 = 0;
            v57 = v37 & 4;
            v39 = 0x4000;
            if ( (v37 & 4) != 0 )
              v40 = 0x4000;
            else
              v40 = 0;
            v59 = v37 & 2;
            v41 = 0x2000;
            if ( (v37 & 2) != 0 )
              v42 = 0x2000;
            else
              v42 = 0;
            v43 = v38 | v40 | v42;
            if ( v43 && v43 != 4096 && v43 != 12288 && v43 != 20480 && v43 != 28672 || IoIsOperationSynchronous(Irp) )
              goto LABEL_123;
            if ( (CurrentStackLocation->FileObject->Flags & 0x4000) == 0 )
            {
              v44 = 4096;
              if ( (_DWORD)P )
                v45 = 4096;
              else
                v45 = 0;
              if ( v57 )
                v46 = 0x4000;
              else
                v46 = 0;
              if ( v59 )
                v47 = 0x2000;
              else
                v47 = 0;
              if ( (((unsigned __int16)v45 | (unsigned __int16)(v46 | v47)) & 0x2000) != 0 )
              {
                PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, 0x48uLL, 0x6F725346u);
                v60[0] = PoolWithTag;
                memset(PoolWithTag, 0, 0x48uLL);
                v44 = 4096;
              }
              if ( PoolWithTag )
                v48 = v60;
              else
                v48 = 0LL;
              v49 = *(_DWORD *)(&MasterIrp->Size + 1);
              if ( (v49 & 1) == 0 )
                v44 = 0;
              if ( (v49 & 4) == 0 )
                v39 = 0;
              if ( (v49 & 2) == 0 )
                v41 = 0;
              v8 = FsRtlpAcknowledgeOplockBreakByCacheFlags(
                     *Oplock,
                     (__int64)CurrentStackLocation,
                     (__int64)Irp,
                     v44 | v39 | (unsigned int)v41,
                     (__int64)v48,
                     a5);
              goto LABEL_36;
            }
            *(_QWORD *)&MasterIrp->Type = 0LL;
            MasterIrp->MdlAddress = 0LL;
            *(_QWORD *)&MasterIrp->Flags = 0LL;
            *(_DWORD *)&MasterIrp->Type = 1572865;
            Irp->IoStatus.Information = 24LL;
            goto LABEL_145;
          }
        }
        v8 = -1073741811;
      }
      Irp->IoStatus.Status = v8;
      goto LABEL_63;
    }
    switch ( LowPart )
    {
      case 0x90000u:
        goto LABEL_97;
      case 0x90004u:
        if ( a3
          || IoIsOperationSynchronous(Irp)
          || (Irp->Flags & 0x40) != 0
          || (CurrentStackLocation->FileObject->Flags & 0x4000) != 0 )
        {
          goto LABEL_62;
        }
        return (unsigned int)FsRtlpRequestShareableOplock(
                               Oplock,
                               (__int64)CurrentStackLocation,
                               (__int64)Irp,
                               0x10u,
                               0LL,
                               1,
                               0,
                               a5);
      case 0x90008u:
        goto LABEL_96;
      case 0x9000Cu:
        v51 = 1;
        return (unsigned int)FsRtlpAcknowledgeOplockBreak(*Oplock, (__int64)CurrentStackLocation, (__int64)Irp, v51, a5);
      case 0x90010u:
        return (unsigned int)FsRtlpOpBatchBreakClosePending(*Oplock, CurrentStackLocation, Irp);
      case 0x90014u:
        return (unsigned int)FsRtlpOplockBreakNotify(*Oplock, 0x140000000uLL, Irp);
      case 0x90050u:
        v51 = 0;
        return (unsigned int)FsRtlpAcknowledgeOplockBreak(*Oplock, (__int64)CurrentStackLocation, (__int64)Irp, v51, a5);
      case 0x9005Cu:
        v11 = 4;
LABEL_96:
        v11 *= 2;
LABEL_97:
        v50 = v11 | 0x40;
        if ( a3 != 1
          || IoIsOperationSynchronous(Irp)
          || (Irp->Flags & 0x40) != 0
          || (CurrentStackLocation->FileObject->Flags & 0x4000) != 0 )
        {
          goto LABEL_62;
        }
        v8 = FsRtlpRequestExclusiveOplock(Oplock, (__int64)CurrentStackLocation, (__int64)Irp, 1u, 0, v50, a5);
        break;
      default:
        goto LABEL_123;
    }
  }
  else
  {
    Options = CurrentStackLocation->Parameters.Create.Options;
    if ( (Options & 0x100000) != 0 )
    {
      if ( a3 != 1
        || (*(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16) & 0xFFFFFF7F) != 0
        || (*((_BYTE *)&CurrentStackLocation->Parameters.QuerySecurity + 18) & 7) != 7 )
      {
        return (unsigned int)-1073741598;
      }
      v8 = FsRtlpAttachOplockKey(Irp);
      if ( !v8 )
        return (unsigned int)FsRtlpRequestExclusiveOplock(Oplock, (__int64)CurrentStackLocation, 0LL, 1u, 0, 0xC8u, a5);
    }
    else if ( (Options & 0x10000) != 0 )
    {
      v8 = FsRtlpAttachOplockKey(Irp);
      if ( !v8 )
      {
        v33 = (PFAST_MUTEX *)*Oplock;
        if ( !*Oplock )
        {
          v33 = (PFAST_MUTEX *)FsRtlpAllocateOplock(v32, v31);
          *Oplock = (__int64)v33;
        }
        P = v33;
        ExAcquireFastMutexUnsafe(v33[19]);
        v8 = FsRtlCheckOplockEx((POPLOCK)Oplock, Irp, 0x30000000u, 0LL, 0LL, 0LL);
        if ( !v8 )
        {
          v60[0] = ExAllocatePoolWithTag((POOL_TYPE)17, 0x48uLL, 0x6F725346u);
          memset(v60[0], 0, 0x48uLL);
          v8 = FsRtlpRequestShareableOplock(
                 Oplock,
                 (__int64)CurrentStackLocation,
                 0LL,
                 0x10000u,
                 (__int64)v60,
                 0,
                 0,
                 a5);
          PoolWithTag = v60[0];
        }
        if ( PoolWithTag )
        {
          FsRtlpClearOwner((__int64)v33, (__int64)PoolWithTag);
          ExFreePoolWithTag(PoolWithTag, 0);
        }
        ExReleaseFastMutexUnsafe(v33[19]);
      }
    }
  }
  return v8;
}
