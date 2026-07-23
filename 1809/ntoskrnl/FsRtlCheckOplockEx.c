/*
 * XREFs of FsRtlCheckOplockEx @ 0x1400B7BC0
 * Callers:
 *     FsRtlCheckOplock @ 0x1400B7B10 (FsRtlCheckOplock.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1405DD640 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     ExpAcquireFastMutexContended @ 0x140005480 (ExpAcquireFastMutexContended.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     FsRtlpOplockCleanup @ 0x14001794C (FsRtlpOplockCleanup.c)
 *     FsRtlpOplockDequeueRH @ 0x140017D48 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpComputeShareableOplockState @ 0x140018750 (FsRtlpComputeShareableOplockState.c)
 *     ExReleaseFastMutexUnsafe @ 0x140018980 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400189C0 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x140018CB0 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockKeysEqual @ 0x1400199A0 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpCallerIsAtomicRequestor @ 0x140019C40 (FsRtlpCallerIsAtomicRequestor.c)
 *     ExpReleaseFastMutexContended @ 0x140023F40 (ExpReleaseFastMutexContended.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x1400B8670 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlpClearOwner @ 0x14012180C (FsRtlpClearOwner.c)
 *     FsRtlpOplockBreakToII @ 0x140130800 (FsRtlpOplockBreakToII.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x140133360 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpOplockBreakToNone @ 0x14013AC0C (FsRtlpOplockBreakToNone.c)
 *     IoSetOplockKeyContext @ 0x140166D04 (IoSetOplockKeyContext.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     FsRtlGetMarkHandleInfo @ 0x14026F918 (FsRtlGetMarkHandleInfo.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14030FC24 (EtwTraceAutoBoostEntryExhaustion.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14060DFB0 (FsRtlFreeExtraCreateParameter.c)
 *     FsRtlFindExtraCreateParameter @ 0x14063A850 (FsRtlFindExtraCreateParameter.c)
 *     FsRtlRemoveExtraCreateParameter @ 0x14063A8E0 (FsRtlRemoveExtraCreateParameter.c)
 *     IoGetIrpExtraCreateParameter @ 0x14063FDB0 (IoGetIrpExtraCreateParameter.c)
 *     FsRtlAcknowledgeEcp @ 0x1406C3260 (FsRtlAcknowledgeEcp.c)
 */

NTSTATUS __stdcall FsRtlCheckOplockEx(
        POPLOCK Oplock,
        PIRP Irp,
        ULONG Flags,
        PVOID Context,
        POPLOCK_WAIT_COMPLETE_ROUTINE CompletionRoutine,
        POPLOCK_FS_PREPOST_IRP PostIrpRoutine)
{
  NTSTATUS v9; // r14d
  char *v10; // r15
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r12
  NTSTATUS v12; // esi
  _QWORD *FileObjectExtension; // rcx
  struct _ECP_LIST *v14; // r12
  unsigned __int64 v15; // rdx
  unsigned __int64 i; // r8
  ULONG v17; // r9d
  UCHAR MajorFunction; // cl
  ULONG_PTR v19; // rcx
  ULONG_PTR v20; // rdi
  unsigned __int8 v21; // dl
  __int64 v22; // rcx
  __int64 v23; // rsi
  int SessionId; // eax
  __int64 v25; // rcx
  volatile signed __int32 *v26; // rdi
  int v27; // esi
  char v28; // al
  int v29; // edi
  int v30; // eax
  __int64 v31; // rsi
  char v32; // al
  char v33; // al
  char v34; // al
  char v35; // al
  ULONG Options; // eax
  bool v37; // zf
  int v38; // eax
  char v39; // al
  unsigned int LowPart; // eax
  __int16 MarkHandleInfo; // ax
  ULONG_PTR v42; // rdi
  signed __int32 v43; // eax
  __int64 v45; // rax
  int v46; // eax
  _QWORD *v47; // rbx
  __int64 v48; // rcx
  _QWORD *v49; // rax
  bool v50; // [rsp+51h] [rbp-D7h] BYREF
  char v51; // [rsp+52h] [rbp-D6h]
  char v52; // [rsp+53h] [rbp-D5h]
  _BYTE v53[4]; // [rsp+54h] [rbp-D4h] BYREF
  int v54; // [rsp+58h] [rbp-D0h]
  ULONG v55; // [rsp+5Ch] [rbp-CCh]
  NTSTATUS v56; // [rsp+60h] [rbp-C8h]
  struct _IO_STACK_LOCATION *v57; // [rsp+68h] [rbp-C0h]
  PVOID v58; // [rsp+70h] [rbp-B8h]
  int v59; // [rsp+78h] [rbp-B0h]
  PVOID EcpContext; // [rsp+80h] [rbp-A8h] BYREF
  int v61; // [rsp+88h] [rbp-A0h]
  int v62; // [rsp+8Ch] [rbp-9Ch] BYREF
  PVOID P; // [rsp+90h] [rbp-98h] BYREF
  struct _ECP_LIST *ExtraCreateParameter; // [rsp+98h] [rbp-90h] BYREF
  PVOID v65; // [rsp+A0h] [rbp-88h]
  int v66; // [rsp+A8h] [rbp-80h]
  __int64 v67; // [rsp+B0h] [rbp-78h]
  __int64 v68; // [rsp+B8h] [rbp-70h]
  struct _KTHREAD *CurrentThread; // [rsp+C0h] [rbp-68h]
  unsigned __int64 v70; // [rsp+C8h] [rbp-60h]
  GUID EcpType; // [rsp+D0h] [rbp-58h] BYREF

  v58 = Context;
  v9 = 0;
  v56 = 0;
  v10 = (char *)*Oplock;
  v65 = *Oplock;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v57 = CurrentStackLocation;
  if ( (Flags & 4) != 0 )
  {
    P = 0LL;
    if ( !v10 )
      return 0;
    ExAcquireFastMutexUnsafe(*((PFAST_MUTEX *)v10 + 19));
    if ( CurrentStackLocation->MajorFunction )
    {
      v9 = -1073741811;
    }
    else if ( (*((_DWORD *)v10 + 36) & 0x10000) != 0
           && FsRtlpCallerIsAtomicRequestor((__int64)v10, (__int64)CurrentStackLocation->FileObject, &P) )
    {
      v47 = P;
      FsRtlpOplockDequeueRH((__int64)P);
      v48 = v47[7];
      v49 = (_QWORD *)v47[8];
      if ( *(_QWORD **)(v48 + 8) != v47 + 7 || (_QWORD *)*v49 != v47 + 7 )
        __fastfail(3u);
      *v49 = v48;
      *(_QWORD *)(v48 + 8) = v49;
      if ( *((char **)v10 + 15) == v10 + 120 )
        *((_DWORD *)v10 + 36) &= 0xFFFCFFFF;
      if ( v47[5] )
        FsRtlpClearOwner(v10, v47);
      ExFreePoolWithTag(v47, 0);
      FsRtlpComputeShareableOplockState((__int64)v10);
      FsRtlpReleaseIrpsWaitingForRH(v10);
    }
    ExReleaseFastMutexUnsafe(*((PFAST_MUTEX *)v10 + 19));
    return v9;
  }
  if ( (Flags & 0x10000000) == 0 )
  {
    v12 = 0;
    if ( CurrentStackLocation->MajorFunction )
      goto LABEL_9;
    FileObjectExtension = CurrentStackLocation->FileObject->FileObjectExtension;
    if ( FileObjectExtension )
    {
      if ( FileObjectExtension != IopRevocationExtension )
      {
        v45 = FileObjectExtension[7];
        if ( v45 )
        {
          if ( (*(_BYTE *)(v45 + 2) & 3) != 0 )
            goto LABEL_9;
        }
      }
    }
    EcpContext = 0LL;
    ExtraCreateParameter = 0LL;
    IoGetIrpExtraCreateParameter(Irp, &ExtraCreateParameter);
    v14 = ExtraCreateParameter;
    if ( ExtraCreateParameter )
    {
      EcpType = GUID_ECP_DUAL_OPLOCK_KEY;
      if ( FsRtlFindExtraCreateParameter(ExtraCreateParameter, &EcpType, &EcpContext, 0LL) )
      {
        EcpType = GUID_ECP_OPLOCK_KEY;
        if ( FsRtlRemoveExtraCreateParameter(v14, &EcpType, &EcpContext, 0LL) )
          goto LABEL_8;
        v46 = 1;
      }
      else
      {
        v46 = 2;
      }
      v55 = v46;
      CurrentStackLocation = v57;
      v12 = IoSetOplockKeyContext(v57->FileObject, EcpContext, (unsigned __int16)v46);
      if ( (_WORD)v55 == 1 )
        FsRtlFreeExtraCreateParameter(EcpContext);
      else
        FsRtlAcknowledgeEcp(EcpContext);
      if ( v12 == -1073741823 )
        v12 = 0;
      goto LABEL_9;
    }
LABEL_8:
    CurrentStackLocation = v57;
LABEL_9:
    v56 = v12;
  }
  FsRtlpOplockStoreKeyForDeleteOperation(Oplock, Irp, Flags);
  if ( v10 != *Oplock )
  {
    v10 = (char *)*Oplock;
    v65 = *Oplock;
  }
  if ( (Flags & 2) == 0 && v10 && (Irp->Flags & 2) == 0 && !v56 )
  {
    v50 = (Flags & 0x20000000) != 0;
    v51 = 1;
    for ( i = 0xFFFF800000000000uLL; ; i = 0xFFFF800000000000uLL )
    {
      v53[0] = 0;
      v17 = Flags & 0x10;
      v55 = v17;
      if ( (Flags & 0x10) == 0 && !v50 )
      {
        v59 = *((_DWORD *)v10 + 36);
        v15 = *((_QWORD *)v10 + 1);
        v70 = v15;
        MajorFunction = CurrentStackLocation->MajorFunction;
        if ( CurrentStackLocation->MajorFunction == 3 )
        {
          v32 = v51;
          if ( (v59 & 0xFFFF4FFE) == 0 )
            v32 = 0;
          v51 = v32;
        }
        if ( MajorFunction == 4 )
        {
          v34 = v51;
          if ( (v59 & 0xFFFFDFFE) == 0 )
            v34 = 0;
          v51 = v34;
        }
        if ( (Flags & 8) == 0 && MajorFunction != 18 && v15 && (PFILE_OBJECT)v15 == CurrentStackLocation->FileObject )
        {
          v51 = 0;
          goto LABEL_133;
        }
        i = 0xFFFF800000000000uLL;
      }
      if ( !v51 )
        goto LABEL_133;
      if ( !v50 )
        break;
LABEL_46:
      v50 = 1;
      v27 = *((_DWORD *)v10 + 36);
      if ( v27 != 1 )
      {
        LOBYTE(v15) = 0;
        v55 = v15;
        v52 = 0;
        v28 = 0;
        v29 = 0;
        v54 = 0;
        if ( v17 )
        {
LABEL_76:
          v29 = 20480;
          v54 = 20480;
        }
        else
        {
          v30 = CurrentStackLocation->MajorFunction;
          if ( v30 == 3 )
          {
            if ( (v27 & 8) == 0 )
            {
LABEL_54:
              LOBYTE(v15) = 1;
LABEL_55:
              v52 = v15;
            }
            v29 = 0x4000;
LABEL_57:
            v54 = v29;
          }
          else if ( v30 == 18 )
          {
LABEL_50:
            FsRtlpOplockCleanup(v10, (__int64)CurrentStackLocation);
            v15 = v55;
            if ( CurrentStackLocation->MajorFunction == 18 && (Flags & 0x20) != 0 )
            {
              v29 = 0x2000;
              goto LABEL_57;
            }
          }
          else
          {
            switch ( CurrentStackLocation->MajorFunction )
            {
              case 0u:
                if ( ((v27 & 0x7000) == 0
                   || (*(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16) & 0xFFEDFE7F) == 0)
                  && ((v27 & 0x1E) == 0
                   || (*(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16) & 0xFFEFFE7F) == 0)
                  && (CurrentStackLocation->Parameters.Create.Options & 0x100000) == 0
                  || (v27 & 8) != 0
                  && (*(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16) & 0xFFEDFE56) == 0
                  && (*((_BYTE *)&CurrentStackLocation->Parameters.QuerySecurity + 18) & 1) != 0 )
                {
                  break;
                }
                v35 = BYTE3(CurrentStackLocation->Parameters.QueryEa.EaList);
                if ( (v35 & 0xFA) == 0 && v35 != 1 )
                  goto LABEL_75;
                if ( (CurrentStackLocation->Parameters.Create.Options & 0x100000) == 0 )
                  goto LABEL_54;
                v28 = 1;
                v29 = 20480;
                v54 = 20480;
                goto LABEL_59;
              case 2u:
                if ( (CurrentStackLocation->FileObject->Flags & 0x4000) != 0 )
                  break;
                goto LABEL_50;
              case 4u:
                goto LABEL_75;
              case 6u:
                Options = CurrentStackLocation->Parameters.Create.Options;
                if ( Options == 20 )
                {
                  v37 = CurrentStackLocation->Parameters.SetFile.AdvanceOnly == 0;
                  goto LABEL_93;
                }
                if ( Options == 19 )
                  goto LABEL_75;
                switch ( Options )
                {
                  case 0xAu:
                  case 0xBu:
                  case 0x28u:
                  case 0x41u:
                    v29 = 0x2000;
                    v54 = 0x2000;
                    if ( (v27 & 0xC) == 0 )
                      goto LABEL_58;
                    v28 = 1;
                    break;
                  case 0xDu:
                  case 0x40u:
                    if ( Irp->AssociatedIrp.MasterIrp->Type )
                      goto LABEL_98;
                    goto LABEL_58;
                  case 0x27u:
                    goto LABEL_75;
                  default:
                    goto LABEL_58;
                }
                goto LABEL_59;
              case 9u:
                goto LABEL_54;
              case 0xDu:
                LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
                if ( LowPart > 0x98268 )
                {
                  if ( LowPart == 623428 || LowPart == 623592 )
                    goto LABEL_75;
                  v37 = LowPart == 639668;
LABEL_93:
                  if ( v37 )
                  {
LABEL_75:
                    v28 = 1;
                    goto LABEL_76;
                  }
                }
                else
                {
                  switch ( LowPart )
                  {
                    case 0x98268u:
                      goto LABEL_75;
                    case 0x900FCu:
                      MarkHandleInfo = FsRtlGetMarkHandleInfo(Irp, v15, i);
                      v15 = v55;
                      if ( (MarkHandleInfo & 0x4000) != 0 )
                      {
                        v29 = 0x2000;
                        v54 = 0x2000;
                        if ( (v27 & 0xC) != 0 )
                        {
                          v28 = 1;
                          goto LABEL_59;
                        }
                      }
                      break;
                    case 0x94264u:
                      v15 = (v27 & 8) == 0;
                      goto LABEL_55;
                    case 0x980C8u:
                    case 0x98208u:
                      goto LABEL_75;
                  }
                }
                break;
              case 0x11u:
                v37 = (v27 & 8) == 0;
                goto LABEL_93;
              case 0x15u:
LABEL_98:
                v29 = 0x2000;
                goto LABEL_57;
              default:
                break;
            }
          }
LABEL_58:
          v28 = 0;
        }
LABEL_59:
        if ( (_BYTE)v15 )
        {
          if ( (*((_DWORD *)v10 + 36) & 0x1F0FFDF) != 0x10 )
          {
            v33 = FsRtlpOplockKeysEqual((__int64)CurrentStackLocation->FileObject, *((_QWORD *)v10 + 1), 0);
            v31 = (__int64)v58;
            if ( !v33 )
              v56 = FsRtlpOplockBreakToII(
                      (_DWORD)v10,
                      (_DWORD)CurrentStackLocation,
                      (_DWORD)Irp,
                      Flags,
                      (__int64)v58,
                      (__int64)CompletionRoutine,
                      (__int64)PostIrpRoutine,
                      (__int64)&v50,
                      (__int64)v53);
            goto LABEL_62;
          }
        }
        else if ( v28
               && ((*((_DWORD *)v10 + 36) & 0x1F0FFDF) == 0x10
                || !FsRtlpOplockKeysEqual((__int64)CurrentStackLocation->FileObject, *((_QWORD *)v10 + 1), 0)) )
        {
          v31 = (__int64)v58;
          v56 = FsRtlpOplockBreakToNone(
                  (_DWORD)v10,
                  (_DWORD)CurrentStackLocation,
                  (_DWORD)Irp,
                  Flags,
                  (__int64)v58,
                  (__int64)CompletionRoutine,
                  (__int64)PostIrpRoutine,
                  (__int64)&v50,
                  (__int64)v53);
          goto LABEL_62;
        }
        v31 = (__int64)v58;
LABEL_62:
        if ( !v56 && (*((_DWORD *)v10 + 36) & v29) != 0 )
          v56 = FsRtlpOplockBreakByCacheFlags(
                  (__int64)v10,
                  (__int64)CurrentStackLocation,
                  Irp,
                  Flags,
                  v29,
                  v31,
                  (__int64)CompletionRoutine,
                  (__int64)PostIrpRoutine,
                  &v50,
                  (__int64)v53);
      }
LABEL_133:
      if ( v50 && (Flags & 0x20000000) == 0 )
      {
        v42 = *((_QWORD *)v10 + 19);
        *(_QWORD *)(v42 + 8) = 0LL;
        v43 = _InterlockedCompareExchange((volatile signed __int32 *)v42, 1, 0);
        if ( v43 )
          ExpReleaseFastMutexContended(v42, v43);
        KeAbPostRelease(v42);
      }
      if ( !v53[0] )
        return v56;
    }
    v19 = *((_QWORD *)v10 + 19);
    v57 = (struct _IO_STACK_LOCATION *)v19;
    CurrentThread = KeGetCurrentThread();
    v62 = 0;
    v20 = (ULONG_PTR)CurrentThread;
    --CurrentThread->SpecialApcDisable;
    if ( ++*(_BYTE *)(v20 + 794) != 1 )
      KeBugCheckEx(0x192u, v20, v19, KeGetCurrentIrql(), 0LL);
    v68 = 0LL;
    v21 = *(_BYTE *)(v20 + 792);
    if ( v21
      || ((v38 = 0, *(_BYTE *)(v20 + 1422))
        ? (v39 = *(_BYTE *)(v20 + 1422),
           *(_BYTE *)(v20 + 1422) = 0,
           *(_BYTE *)(v20 + 792) |= v39,
           v21 = *(_BYTE *)(v20 + 792),
           v38 = 1)
        : (v21 = 0),
          (v61 = v38) != 0) )
    {
      _BitScanForward((unsigned int *)&v22, v21);
      v66 = v22;
      *(_BYTE *)(v20 + 792) = v21 & ~(1 << v22);
      v23 = 96 * v22 + v20 + 800;
      v67 = v23;
    }
    else
    {
      v23 = 0LL;
      v67 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) == 0 )
      {
LABEL_32:
        v68 = v23;
        if ( !v23 )
        {
          _interlockedbittestandset((volatile signed __int32 *)(v20 + 120), 0x10u);
LABEL_38:
          --*(_BYTE *)(v20 + 794);
          KiAbThreadRemoveBoosts(v20, v19, (__int64)&v62);
          v37 = (*(_WORD *)(v20 + 486))++ == 0xFFFF;
          if ( v37 && *(_QWORD *)(v20 + 152) != v20 + 152 )
            KiCheckForKernelApcDelivery(v25);
          v26 = (volatile signed __int32 *)v57;
          if ( !_interlockedbittestandreset((volatile signed __int32 *)v57, 0) )
            ExpAcquireFastMutexContended((ULONG_PTR)v26, (PRTL_BALANCED_NODE)v23);
          if ( v23 )
            *(_BYTE *)(v23 + 26) |= 1u;
          *((_QWORD *)v26 + 1) = CurrentThread;
          v17 = v55;
          goto LABEL_46;
        }
        if ( v19 >= 0xFFFF800000000000uLL )
        {
          if ( byte_14043CA10[((v19 >> 39) & 0x1FF) - 256] == 1 )
          {
            SessionId = MmGetSessionIdEx(*(_QWORD *)(v20 + 184));
            v19 = (ULONG_PTR)v57;
            goto LABEL_37;
          }
          v19 = (ULONG_PTR)v57;
        }
        SessionId = -1;
LABEL_37:
        *(_DWORD *)(v23 + 40) = SessionId;
        *(_QWORD *)(v23 + 32) = v19 & 0x7FFFFFFFFFFFFFFCLL;
        goto LABEL_38;
      }
      EtwTraceAutoBoostEntryExhaustion(v20, v19);
    }
    v19 = (ULONG_PTR)v57;
    goto LABEL_32;
  }
  return v56;
}
