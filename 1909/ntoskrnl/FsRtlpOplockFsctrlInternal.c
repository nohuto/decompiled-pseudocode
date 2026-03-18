/*
 * XREFs of FsRtlpOplockFsctrlInternal @ 0x1405E5450
 * Callers:
 *     FsRtlOplockFsctrl @ 0x1406D6D50 (FsRtlOplockFsctrl.c)
 *     FsRtlOplockFsctrlEx @ 0x1406D8920 (FsRtlOplockFsctrlEx.c)
 *     FsRtlUpperOplockFsctrl @ 0x14084E360 (FsRtlUpperOplockFsctrl.c)
 * Callees:
 *     FsRtlpAttachOplockKey @ 0x140007798 (FsRtlpAttachOplockKey.c)
 *     FsRtlpRequestShareableOplock @ 0x1400102C0 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpComputeShareableOplockState @ 0x140010BD0 (FsRtlpComputeShareableOplockState.c)
 *     FsRtlCheckOplockEx @ 0x1400465C0 (FsRtlCheckOplockEx.c)
 *     IofCompleteRequest @ 0x140066B30 (IofCompleteRequest.c)
 *     ExAcquireFastMutexUnsafe @ 0x140089BB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140089D40 (ExReleaseFastMutexUnsafe.c)
 *     FsRtlpOplockDequeueRH @ 0x140103E2C (FsRtlpOplockDequeueRH.c)
 *     FsRtlpClearOwner @ 0x140103E9C (FsRtlpClearOwner.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x1401040E4 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     IoIsOperationSynchronous @ 0x1401084E0 (IoIsOperationSynchronous.c)
 *     FsRtlpCallerIsAtomicRequestor @ 0x1401241C8 (FsRtlpCallerIsAtomicRequestor.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14016FC40 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1401748C4 (FsRtlpRequestExclusiveOplock.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x140283268 (FsRtlpAcknowledgeOplockBreak.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     FsRtlpAllocateOplock @ 0x1406C9EA8 (FsRtlpAllocateOplock.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14084E4EC (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x14084E628 (FsRtlpOplockBreakNotify.c)
 */

__int64 __fastcall FsRtlpOplockFsctrlInternal(__int64 *Oplock, PIRP Irp, unsigned int a3, int a4, unsigned int a5)
{
  unsigned int v8; // edi
  PVOID PoolWithTag; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  int v11; // edi
  ULONG LowPart; // eax
  struct _IRP *MasterIrp; // rdi
  int MdlAddress; // eax
  int v15; // edi
  int v16; // r8d
  int v17; // r12d
  int v18; // eax
  int v19; // eax
  int v20; // edx
  __int16 v21; // r8
  __int16 v22; // cx
  __int16 v23; // ax
  PVOID *v24; // rcx
  int v25; // eax
  PVOID v26; // rbx
  ULONG Options; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  PFAST_MUTEX *v31; // r13
  int v32; // eax
  int v33; // ecx
  int v35; // ecx
  int v36; // r8d
  int v37; // r13d
  int v38; // edx
  int v39; // r12d
  int v40; // ecx
  int v41; // ecx
  int v42; // eax
  __int16 v43; // r8
  __int16 v44; // dx
  __int16 v45; // cx
  int v46; // ecx
  PVOID *v47; // rdx
  unsigned int v48; // edi
  char v49; // r9
  __int64 v50; // rdi
  _QWORD *v51; // rbx
  __int64 v52; // rcx
  _QWORD *v53; // rax
  int v54; // [rsp+40h] [rbp-58h]
  int v55; // [rsp+44h] [rbp-54h]
  struct _IRP *v56; // [rsp+48h] [rbp-50h]
  char v57; // [rsp+48h] [rbp-50h]
  PVOID v58[8]; // [rsp+58h] [rbp-40h] BYREF
  PVOID P; // [rsp+A8h] [rbp+10h] BYREF
  int v60; // [rsp+B8h] [rbp+20h]

  v60 = a4;
  v8 = 0;
  PoolWithTag = 0LL;
  v58[0] = 0LL;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MajorFunction )
  {
    v11 = 2;
    LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    if ( LowPart == 590400 )
    {
      MasterIrp = Irp->AssociatedIrp.MasterIrp;
      v56 = MasterIrp;
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
            v17 = 0x2000;
            if ( (v15 & 2) != 0 )
              v18 = 0x2000;
            else
              v18 = 0;
            v19 = ((v15 & 4) != 0 ? 0x4000 : 0) | v16 | v18;
            if ( v19 == 12288 )
            {
LABEL_12:
              if ( !a3 && !IoIsOperationSynchronous(Irp) )
              {
                v20 = 0x4000;
                if ( (CurrentStackLocation->FileObject->Flags & 0x4000) == 0 )
                {
                  if ( (_DWORD)P )
                    v21 = 4096;
                  else
                    v21 = 0;
                  if ( (v15 & 4) != 0 )
                    v22 = 0x4000;
                  else
                    v22 = 0;
                  if ( (v15 & 2) != 0 )
                    v23 = 0x2000;
                  else
                    v23 = 0;
                  if ( (((unsigned __int16)v21 | (unsigned __int16)(v22 | v23)) & 0x2000) != 0 )
                  {
                    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, 0x48uLL, 0x6F725346u);
                    v58[0] = PoolWithTag;
                    memset(PoolWithTag, 0, 0x48uLL);
                    v15 = *(_DWORD *)(&v56->Size + 1);
                    v20 = 0x4000;
                  }
                  if ( PoolWithTag )
                    v24 = v58;
                  else
                    v24 = 0LL;
                  if ( (v15 & 1) != 0 )
                    v25 = 4096;
                  else
                    v25 = 0;
                  if ( (v15 & 4) == 0 )
                    v20 = 0;
                  if ( (v15 & 2) == 0 )
                    v17 = 0;
                  v8 = FsRtlpRequestShareableOplock(
                         Oplock,
                         (__int64)CurrentStackLocation,
                         (__int64)Irp,
                         v25 | v20 | (unsigned int)v17,
                         (__int64)v24,
                         1,
                         0,
                         a5);
LABEL_37:
                  v26 = v58[0];
                  if ( v58[0] )
                  {
                    FsRtlpClearOwner(*Oplock, (__int64)v58[0]);
                    ExFreePoolWithTag(v26, 0);
                  }
                  return v8;
                }
              }
              goto LABEL_102;
            }
            if ( v19 )
            {
              if ( v19 == 4096 )
                goto LABEL_12;
              if ( v19 != 28672 && v19 != 20480 )
              {
LABEL_125:
                v8 = -1073741811;
                Irp->IoStatus.Status = -1073741811;
                goto LABEL_103;
              }
              if ( IoIsOperationSynchronous(Irp)
                || (v32 = 0x4000, (CurrentStackLocation->FileObject->Flags & 0x4000) != 0) )
              {
LABEL_102:
                v8 = -1073741598;
                Irp->IoStatus.Status = -1073741598;
LABEL_103:
                IofCompleteRequest(Irp, 1);
                return v8;
              }
              if ( (_DWORD)P )
                v33 = 4160;
              else
                v33 = 64;
              if ( (v15 & 4) == 0 )
                v32 = 0;
              if ( (v15 & 2) == 0 )
                v17 = 0;
              return (unsigned int)FsRtlpRequestExclusiveOplock(
                                     Oplock,
                                     (__int64)CurrentStackLocation,
                                     (__int64)Irp,
                                     a3,
                                     v60,
                                     v33 | v32 | (unsigned int)v17,
                                     a5);
            }
            v50 = *Oplock;
            if ( *Oplock )
            {
              P = 0LL;
              if ( (*(_DWORD *)(v50 + 144) & 0x10000) != 0 )
              {
                if ( FsRtlpCallerIsAtomicRequestor(v50, (__int64)CurrentStackLocation->FileObject, &P) )
                {
                  v51 = P;
                  FsRtlpOplockDequeueRH((__int64)P);
                  v52 = v51[7];
                  v53 = (_QWORD *)v51[8];
                  if ( *(_QWORD **)(v52 + 8) != v51 + 7 || (_QWORD *)*v53 != v51 + 7 )
                    __fastfail(3u);
                  *v53 = v52;
                  *(_QWORD *)(v52 + 8) = v53;
                  if ( *(_QWORD *)(v50 + 120) == v50 + 120 )
                    *(_DWORD *)(v50 + 144) &= 0xFFFCFFFF;
                  if ( v51[5] )
                    FsRtlpClearOwner(v50, (__int64)v51);
                  ExFreePoolWithTag(v51, 0);
                  FsRtlpComputeShareableOplockState(v50);
                  FsRtlpReleaseIrpsWaitingForRH(v50);
                }
              }
            }
LABEL_147:
            Irp->IoStatus.Status = 0;
            IofCompleteRequest(Irp, 1);
            return 0;
          }
          if ( (MdlAddress & 2) != 0 )
          {
            v35 = *(_DWORD *)(&MasterIrp->Size + 1);
            v57 = v35;
            LODWORD(P) = v35 & 1;
            if ( (v35 & 1) != 0 )
              v36 = 4096;
            else
              v36 = 0;
            v55 = v35 & 4;
            v37 = 0x4000;
            if ( (v35 & 4) != 0 )
              v38 = 0x4000;
            else
              v38 = 0;
            v54 = v35 & 2;
            v39 = 0x2000;
            if ( (v35 & 2) != 0 )
              v40 = 0x2000;
            else
              v40 = 0;
            v41 = v36 | v38 | v40;
            if ( v41 && v41 != 4096 && v41 != 12288 && v41 != 20480 && v41 != 28672 || IoIsOperationSynchronous(Irp) )
              goto LABEL_125;
            if ( (CurrentStackLocation->FileObject->Flags & 0x4000) == 0 )
            {
              v42 = 4096;
              if ( (_DWORD)P )
                v43 = 4096;
              else
                v43 = 0;
              if ( v55 )
                v44 = 0x4000;
              else
                v44 = 0;
              if ( v54 )
                v45 = 0x2000;
              else
                v45 = 0;
              if ( (((unsigned __int16)v43 | (unsigned __int16)(v44 | v45)) & 0x2000) != 0 )
              {
                PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, 0x48uLL, 0x6F725346u);
                v58[0] = PoolWithTag;
                memset(PoolWithTag, 0, 0x48uLL);
                v46 = *(_DWORD *)(&MasterIrp->Size + 1);
                v42 = 4096;
              }
              else
              {
                LOBYTE(v46) = v57;
              }
              if ( PoolWithTag )
                v47 = v58;
              else
                v47 = 0LL;
              if ( (v46 & 1) == 0 )
                v42 = 0;
              if ( (v46 & 4) == 0 )
                v37 = 0;
              if ( (v46 & 2) == 0 )
                v39 = 0;
              v8 = FsRtlpAcknowledgeOplockBreakByCacheFlags(
                     *Oplock,
                     (__int64)CurrentStackLocation,
                     (__int64)Irp,
                     v42 | v37 | (unsigned int)v39,
                     (__int64)v47,
                     a5);
              goto LABEL_37;
            }
            *(_QWORD *)&MasterIrp->Type = 0LL;
            MasterIrp->MdlAddress = 0LL;
            *(_QWORD *)&MasterIrp->Flags = 0LL;
            *(_DWORD *)&MasterIrp->Type = 1572865;
            Irp->IoStatus.Information = 24LL;
            goto LABEL_147;
          }
        }
        v8 = -1073741811;
      }
      Irp->IoStatus.Status = v8;
      goto LABEL_103;
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
          goto LABEL_102;
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
        v49 = 1;
        return (unsigned int)FsRtlpAcknowledgeOplockBreak(*Oplock, (__int64)CurrentStackLocation, (__int64)Irp, v49, a5);
      case 0x90010u:
        return (unsigned int)FsRtlpOpBatchBreakClosePending(*Oplock, CurrentStackLocation, Irp);
      case 0x90014u:
        return (unsigned int)FsRtlpOplockBreakNotify(*Oplock, 0x140000000uLL, Irp);
      case 0x90050u:
        v49 = 0;
        return (unsigned int)FsRtlpAcknowledgeOplockBreak(*Oplock, (__int64)CurrentStackLocation, (__int64)Irp, v49, a5);
      case 0x9005Cu:
        v11 = 4;
LABEL_96:
        v11 *= 2;
LABEL_97:
        v48 = v11 | 0x40;
        if ( a3 != 1
          || IoIsOperationSynchronous(Irp)
          || (Irp->Flags & 0x40) != 0
          || (CurrentStackLocation->FileObject->Flags & 0x4000) != 0 )
        {
          goto LABEL_102;
        }
        v8 = FsRtlpRequestExclusiveOplock(Oplock, (__int64)CurrentStackLocation, (__int64)Irp, 1u, 0, v48, a5);
        break;
      default:
        goto LABEL_125;
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
        v31 = (PFAST_MUTEX *)*Oplock;
        if ( !*Oplock )
        {
          v31 = (PFAST_MUTEX *)FsRtlpAllocateOplock(v30, v29);
          *Oplock = (__int64)v31;
        }
        P = v31;
        ExAcquireFastMutexUnsafe(v31[19]);
        v8 = FsRtlCheckOplockEx((POPLOCK)Oplock, Irp, 0x30000000u, 0LL, 0LL, 0LL);
        if ( !v8 )
        {
          v58[0] = ExAllocatePoolWithTag((POOL_TYPE)17, 0x48uLL, 0x6F725346u);
          memset(v58[0], 0, 0x48uLL);
          v8 = FsRtlpRequestShareableOplock(
                 Oplock,
                 (__int64)CurrentStackLocation,
                 0LL,
                 0x10000u,
                 (__int64)v58,
                 0,
                 0,
                 a5);
          PoolWithTag = v58[0];
        }
        if ( PoolWithTag )
        {
          FsRtlpClearOwner((__int64)v31, (__int64)PoolWithTag);
          ExFreePoolWithTag(PoolWithTag, 0);
        }
        ExReleaseFastMutexUnsafe(v31[19]);
      }
    }
  }
  return v8;
}
