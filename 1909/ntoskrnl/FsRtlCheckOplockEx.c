/*
 * XREFs of FsRtlCheckOplockEx @ 0x1400465C0
 * Callers:
 *     FsRtlCheckOplock @ 0x140046510 (FsRtlCheckOplock.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1405E5450 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     FsRtlpComputeShareableOplockState @ 0x140010BD0 (FsRtlpComputeShareableOplockState.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x1400470F0 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     ExAcquireFastMutexUnsafe @ 0x140089BB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140089D40 (ExReleaseFastMutexUnsafe.c)
 *     ExpReleaseFastMutexContended @ 0x1400C6530 (ExpReleaseFastMutexContended.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400EF620 (ExpAcquireFastMutexContended.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x140102780 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockKeysEqual @ 0x1401034F0 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpOplockCleanup @ 0x140103A40 (FsRtlpOplockCleanup.c)
 *     FsRtlpOplockDequeueRH @ 0x140103E2C (FsRtlpOplockDequeueRH.c)
 *     FsRtlpClearOwner @ 0x140103E9C (FsRtlpClearOwner.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x1401040E4 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpCallerIsAtomicRequestor @ 0x1401241C8 (FsRtlpCallerIsAtomicRequestor.c)
 *     FsRtlpOplockBreakToII @ 0x140130D2C (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockBreakToNone @ 0x14013D710 (FsRtlpOplockBreakToNone.c)
 *     IoSetOplockKeyContext @ 0x14016D4D4 (IoSetOplockKeyContext.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1401C0674 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     FsRtlGetMarkHandleInfo @ 0x14028301C (FsRtlGetMarkHandleInfo.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IoGetIrpExtraCreateParameter @ 0x140603980 (IoGetIrpExtraCreateParameter.c)
 *     FsRtlFindExtraCreateParameter @ 0x140604790 (FsRtlFindExtraCreateParameter.c)
 *     FsRtlRemoveExtraCreateParameter @ 0x140604820 (FsRtlRemoveExtraCreateParameter.c)
 *     FsRtlFreeExtraCreateParameter @ 0x140619930 (FsRtlFreeExtraCreateParameter.c)
 *     FsRtlAcknowledgeEcp @ 0x1406C5870 (FsRtlAcknowledgeEcp.c)
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
  PFAST_MUTEX *v10; // r15
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r12
  NTSTATUS v12; // esi
  struct _FILE_OBJECT *v13; // rdx
  unsigned __int64 i; // r8
  ULONG v15; // r9d
  UCHAR MajorFunction; // cl
  ULONG_PTR v17; // rsi
  ULONG_PTR v18; // rdi
  unsigned __int8 v19; // dl
  __int64 v20; // rcx
  PRTL_BALANCED_NODE v21; // rcx
  int SessionId; // eax
  signed __int8 v23; // cf
  PRTL_BALANCED_NODE v24; // rdi
  int v25; // esi
  char v26; // al
  int v27; // edi
  int v28; // eax
  char v29; // cl
  char v30; // al
  PVOID v31; // rsi
  char v32; // al
  char v33; // al
  bool v34; // zf
  char v35; // al
  ULONG Options; // eax
  bool v37; // zf
  int v38; // eax
  char v39; // al
  bool v40; // al
  unsigned int LowPart; // eax
  ULONG_PTR v42; // rdi
  unsigned __int32 v43; // eax
  _QWORD *FileObjectExtension; // rcx
  struct _ECP_LIST *v46; // r12
  __int64 v47; // rax
  unsigned __int16 v48; // ax
  _QWORD *v49; // rbx
  __int64 v50; // rcx
  _QWORD *v51; // rax
  char v52; // [rsp+54h] [rbp-C4h]
  unsigned __int16 v53; // [rsp+54h] [rbp-C4h]
  bool v54; // [rsp+58h] [rbp-C0h] BYREF
  char v55; // [rsp+59h] [rbp-BFh]
  char v56; // [rsp+5Ah] [rbp-BEh]
  char v57; // [rsp+5Bh] [rbp-BDh] BYREF
  int v58; // [rsp+5Ch] [rbp-BCh]
  NTSTATUS v59; // [rsp+60h] [rbp-B8h]
  PRTL_BALANCED_NODE Node; // [rsp+68h] [rbp-B0h]
  PVOID v61; // [rsp+70h] [rbp-A8h]
  int v62; // [rsp+78h] [rbp-A0h]
  PVOID EcpContext; // [rsp+80h] [rbp-98h] BYREF
  struct _IO_STACK_LOCATION *v64; // [rsp+88h] [rbp-90h]
  int v65; // [rsp+90h] [rbp-88h]
  int v66; // [rsp+94h] [rbp-84h] BYREF
  PVOID P; // [rsp+98h] [rbp-80h] BYREF
  struct _ECP_LIST *ExtraCreateParameter; // [rsp+A0h] [rbp-78h] BYREF
  PVOID v69; // [rsp+A8h] [rbp-70h]
  PRTL_BALANCED_NODE v70; // [rsp+B0h] [rbp-68h]
  struct _KTHREAD *CurrentThread; // [rsp+B8h] [rbp-60h]
  struct _FILE_OBJECT *v72; // [rsp+C0h] [rbp-58h]
  GUID EcpType; // [rsp+C8h] [rbp-50h] BYREF

  v61 = Context;
  v9 = 0;
  v59 = 0;
  v10 = (PFAST_MUTEX *)*Oplock;
  v69 = *Oplock;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v64 = CurrentStackLocation;
  if ( (Flags & 4) != 0 )
  {
    P = 0LL;
    if ( !v10 )
      return 0;
    ExAcquireFastMutexUnsafe(v10[19]);
    if ( CurrentStackLocation->MajorFunction )
    {
      v9 = -1073741811;
    }
    else if ( ((_DWORD)v10[18] & 0x10000) != 0
           && (unsigned __int8)FsRtlpCallerIsAtomicRequestor(v10, CurrentStackLocation->FileObject, &P) )
    {
      v49 = P;
      FsRtlpOplockDequeueRH(P);
      v50 = v49[7];
      v51 = (_QWORD *)v49[8];
      if ( *(_QWORD **)(v50 + 8) != v49 + 7 || (_QWORD *)*v51 != v49 + 7 )
        __fastfail(3u);
      *v51 = v50;
      *(_QWORD *)(v50 + 8) = v51;
      if ( v10[15] == (PFAST_MUTEX)(v10 + 15) )
        *((_DWORD *)v10 + 36) &= 0xFFFCFFFF;
      if ( v49[5] )
        FsRtlpClearOwner(v10, v49);
      ExFreePoolWithTag(v49, 0);
      FsRtlpComputeShareableOplockState((__int64)v10);
      FsRtlpReleaseIrpsWaitingForRH(v10);
    }
    ExReleaseFastMutexUnsafe(v10[19]);
    return v9;
  }
  if ( (Flags & 0x10000000) == 0 )
  {
    v12 = 0;
    if ( CurrentStackLocation->MajorFunction )
      goto LABEL_4;
    FileObjectExtension = CurrentStackLocation->FileObject->FileObjectExtension;
    if ( FileObjectExtension )
    {
      if ( FileObjectExtension != IopRevocationExtension )
      {
        v47 = FileObjectExtension[7];
        if ( v47 )
        {
          if ( (*(_BYTE *)(v47 + 2) & 3) != 0 )
            goto LABEL_4;
        }
      }
    }
    EcpContext = 0LL;
    ExtraCreateParameter = 0LL;
    *(_QWORD *)&EcpType.Data1 = 0LL;
    *(_QWORD *)EcpType.Data4 = 0LL;
    IoGetIrpExtraCreateParameter(Irp, &ExtraCreateParameter);
    v46 = ExtraCreateParameter;
    if ( ExtraCreateParameter )
    {
      EcpType = GUID_ECP_DUAL_OPLOCK_KEY;
      if ( FsRtlFindExtraCreateParameter(ExtraCreateParameter, &EcpType, &EcpContext, 0LL) )
      {
        EcpType = GUID_ECP_OPLOCK_KEY;
        if ( FsRtlRemoveExtraCreateParameter(v46, &EcpType, &EcpContext, 0LL) )
          goto LABEL_145;
        v48 = 1;
      }
      else
      {
        v48 = 2;
      }
      v53 = v48;
      CurrentStackLocation = v64;
      v12 = IoSetOplockKeyContext(v64->FileObject, EcpContext, v48);
      if ( v53 == 1 )
        FsRtlFreeExtraCreateParameter(EcpContext);
      else
        FsRtlAcknowledgeEcp(EcpContext);
      if ( v12 == -1073741823 )
        v12 = 0;
      goto LABEL_4;
    }
LABEL_145:
    CurrentStackLocation = v64;
LABEL_4:
    v59 = v12;
  }
  FsRtlpOplockStoreKeyForDeleteOperation(Oplock, Irp, Flags);
  if ( v10 != *Oplock )
  {
    v10 = (PFAST_MUTEX *)*Oplock;
    v69 = *Oplock;
  }
  if ( (Flags & 2) == 0 && v10 && (Irp->Flags & 2) == 0 && !v59 )
  {
    v54 = (Flags & 0x20000000) != 0;
    v55 = 1;
    for ( i = 0xFFFF800000000000uLL; ; i = 0xFFFF800000000000uLL )
    {
      v57 = 0;
      v15 = Flags & 0x10;
      if ( (Flags & 0x10) == 0 && !v54 )
      {
        v62 = *((_DWORD *)v10 + 36);
        v13 = (struct _FILE_OBJECT *)v10[1];
        v72 = v13;
        MajorFunction = CurrentStackLocation->MajorFunction;
        if ( CurrentStackLocation->MajorFunction == 3 )
        {
          v32 = v55;
          if ( (v62 & 0xFFFF4FFE) == 0 )
            v32 = 0;
          v55 = v32;
        }
        if ( MajorFunction == 4 )
        {
          v33 = v55;
          if ( (v62 & 0xFFFFDFFE) == 0 )
            v33 = 0;
          v55 = v33;
        }
        if ( (Flags & 8) == 0 && MajorFunction != 18 && v13 && v13 == CurrentStackLocation->FileObject )
        {
          v55 = 0;
          goto LABEL_134;
        }
        i = 0xFFFF800000000000uLL;
      }
      if ( !v55 )
        goto LABEL_134;
      if ( !v54 )
        break;
LABEL_40:
      v54 = 1;
      v25 = *((_DWORD *)v10 + 36);
      if ( v25 != 1 )
      {
        v26 = 0;
        v52 = 0;
        v56 = 0;
        v27 = 0;
        v58 = 0;
        if ( v15 )
        {
          v27 = 20480;
          v58 = 20480;
          v29 = 0;
        }
        else
        {
          v28 = CurrentStackLocation->MajorFunction;
          if ( v28 == 3 )
          {
            if ( (v25 & 8) != 0 )
            {
              v29 = 0;
            }
            else
            {
              v29 = 1;
              v56 = 1;
            }
            v27 = 0x4000;
LABEL_46:
            v58 = v27;
            goto LABEL_47;
          }
          if ( v28 == 4 )
          {
LABEL_60:
            v26 = 1;
            v27 = 20480;
            v58 = 20480;
LABEL_61:
            v29 = v52;
          }
          else
          {
            switch ( CurrentStackLocation->MajorFunction )
            {
              case 0u:
                if ( ((v25 & 0x7000) == 0
                   || (*(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16) & 0xFFEDFE7F) == 0)
                  && ((v25 & 0x1E) == 0
                   || (*(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16) & 0xFFEFFE7F) == 0)
                  && (CurrentStackLocation->Parameters.Create.Options & 0x100000) == 0
                  || (v25 & 8) != 0
                  && (*(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16) & 0xFFEDFE56) == 0
                  && (*((_BYTE *)&CurrentStackLocation->Parameters.QuerySecurity + 18) & 1) != 0 )
                {
                  goto LABEL_82;
                }
                v35 = BYTE3(CurrentStackLocation->Parameters.QueryEa.EaList);
                if ( (v35 & 0xFA) == 0 && v35 != 1 || (CurrentStackLocation->Parameters.Create.Options & 0x100000) != 0 )
                  goto LABEL_60;
                v29 = 1;
                v56 = 1;
                v27 = 0x4000;
                v58 = 0x4000;
                v26 = 0;
                break;
              case 1u:
              case 3u:
              case 4u:
              case 5u:
              case 7u:
              case 8u:
              case 0xAu:
              case 0xBu:
              case 0xCu:
              case 0xEu:
              case 0xFu:
              case 0x10u:
              case 0x13u:
              case 0x14u:
                v29 = 0;
                goto LABEL_47;
              case 2u:
                if ( (CurrentStackLocation->FileObject->Flags & 0x4000) != 0 )
                  goto LABEL_82;
                goto LABEL_70;
              case 6u:
                Options = CurrentStackLocation->Parameters.Create.Options;
                if ( Options == 20 )
                {
                  v37 = CurrentStackLocation->Parameters.SetFile.AdvanceOnly == 0;
                  goto LABEL_88;
                }
                if ( Options != 19 )
                {
                  switch ( Options )
                  {
                    case 0xAu:
                    case 0xBu:
                    case 0x28u:
                    case 0x41u:
                      goto LABEL_93;
                    case 0xDu:
                      v34 = Irp->AssociatedIrp.MasterIrp->Type == 0;
                      goto LABEL_72;
                    case 0x27u:
                      goto LABEL_60;
                    case 0x40u:
                      v34 = (*(_DWORD *)Irp->AssociatedIrp.MasterIrp & 1) == 0;
                      goto LABEL_72;
                    default:
                      goto LABEL_82;
                  }
                }
                goto LABEL_60;
              case 9u:
                v40 = 1;
                goto LABEL_115;
              case 0xDu:
                LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
                if ( LowPart > 0x98268 )
                {
                  if ( LowPart != 623428 && LowPart != 623592 )
                  {
                    v37 = LowPart == 639668;
LABEL_88:
                    if ( !v37 )
                      goto LABEL_82;
                  }
                  goto LABEL_60;
                }
                if ( LowPart == 623208 )
                  goto LABEL_60;
                if ( LowPart != 590076 )
                {
                  if ( LowPart == 606820 )
                  {
                    v40 = (v25 & 8) == 0;
LABEL_115:
                    v52 = v40;
                    v56 = v40;
                    v27 = 0x4000;
LABEL_96:
                    v58 = v27;
LABEL_82:
                    v26 = 0;
                    goto LABEL_61;
                  }
                  if ( LowPart != 622792 && LowPart != 623112 )
                    goto LABEL_82;
                  goto LABEL_60;
                }
                if ( (FsRtlGetMarkHandleInfo(Irp, v13, i) & 0x4000) == 0 )
                  goto LABEL_82;
LABEL_93:
                v27 = 0x2000;
                v58 = 0x2000;
                v29 = 0;
                if ( (v25 & 0xC) != 0 )
                  v26 = 1;
                else
LABEL_47:
                  v26 = 0;
                break;
              case 0x11u:
                if ( (v25 & 8) == 0 )
                  goto LABEL_60;
                goto LABEL_82;
              case 0x12u:
LABEL_70:
                FsRtlpOplockCleanup(v10, CurrentStackLocation, i);
                if ( CurrentStackLocation->MajorFunction != 18 )
                  goto LABEL_82;
                v34 = (Flags & 0x20) == 0;
LABEL_72:
                v29 = 0;
                if ( v34 )
                  goto LABEL_47;
                v27 = 0x2000;
                goto LABEL_46;
              case 0x15u:
                v27 = 0x2000;
                goto LABEL_96;
              default:
                goto LABEL_82;
            }
          }
        }
        if ( v29 )
        {
          if ( ((_DWORD)v10[18] & 0x1F0FFDF) != 0x10 )
          {
            v30 = FsRtlpOplockKeysEqual(CurrentStackLocation->FileObject, v10[1], 0LL);
            v31 = v61;
            if ( !v30 )
              v59 = FsRtlpOplockBreakToII(
                      (_DWORD)v10,
                      (_DWORD)CurrentStackLocation,
                      (_DWORD)Irp,
                      Flags,
                      (__int64)v61,
                      (__int64)CompletionRoutine,
                      (__int64)PostIrpRoutine,
                      (__int64)&v54,
                      (__int64)&v57);
            goto LABEL_52;
          }
LABEL_65:
          v31 = v61;
        }
        else
        {
          if ( !v26
            || ((_DWORD)v10[18] & 0x1F0FFDF) != 0x10
            && (unsigned __int8)FsRtlpOplockKeysEqual(CurrentStackLocation->FileObject, v10[1], 0LL) )
          {
            goto LABEL_65;
          }
          v31 = v61;
          v59 = FsRtlpOplockBreakToNone(
                  (_DWORD)v10,
                  (_DWORD)CurrentStackLocation,
                  (_DWORD)Irp,
                  Flags,
                  (__int64)v61,
                  (__int64)CompletionRoutine,
                  (__int64)PostIrpRoutine,
                  (__int64)&v54,
                  (__int64)&v57);
        }
LABEL_52:
        if ( !v59 && ((_DWORD)v10[18] & v27) != 0 )
          v59 = FsRtlpOplockBreakByCacheFlags(
                  v10,
                  CurrentStackLocation,
                  Irp,
                  Flags,
                  v27,
                  v31,
                  CompletionRoutine,
                  PostIrpRoutine,
                  &v54,
                  &v57);
      }
LABEL_134:
      if ( v54 && (Flags & 0x20000000) == 0 )
      {
        v42 = (ULONG_PTR)v10[19];
        *(_QWORD *)(v42 + 8) = 0LL;
        v43 = _InterlockedCompareExchange((volatile signed __int32 *)v42, 1, 0);
        if ( v43 )
          ExpReleaseFastMutexContended(v42, v43);
        KeAbPostRelease(v42);
      }
      if ( !v57 )
        return v59;
    }
    v17 = (ULONG_PTR)v10[19];
    CurrentThread = KeGetCurrentThread();
    v66 = 0;
    v18 = (ULONG_PTR)CurrentThread;
    --CurrentThread->SpecialApcDisable;
    if ( ++*(_BYTE *)(v18 + 794) != 1 )
      KeBugCheckEx(0x192u, v18, v17, KeGetCurrentIrql(), 0LL);
    v70 = 0LL;
    v19 = *(_BYTE *)(v18 + 792);
    if ( v19
      || ((v38 = 0, *(_BYTE *)(v18 + 1422))
        ? (v39 = *(_BYTE *)(v18 + 1422),
           *(_BYTE *)(v18 + 1422) = 0,
           *(_BYTE *)(v18 + 792) |= v39,
           v19 = *(_BYTE *)(v18 + 792),
           v38 = 1)
        : (v19 = 0),
          (v65 = v38) != 0) )
    {
      _BitScanForward((unsigned int *)&v20, v19);
      LODWORD(v64) = v20;
      *(_BYTE *)(v18 + 792) = v19 & ~(1 << v20);
      v21 = (PRTL_BALANCED_NODE)(v18 + 96 * v20 + 800);
      Node = v21;
    }
    else
    {
      v21 = 0LL;
      Node = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      {
        EtwTraceAutoBoostEntryExhaustion(v18, v17);
        v21 = 0LL;
      }
    }
    v70 = v21;
    if ( !v21 )
    {
      _interlockedbittestandset((volatile signed __int32 *)(v18 + 120), 0x10u);
LABEL_32:
      --*(_BYTE *)(v18 + 794);
      KiAbThreadRemoveBoosts(v18, v17, &v66);
      v34 = (*(_WORD *)(v18 + 486))++ == 0xFFFF;
      if ( v34 && *(_QWORD *)(v18 + 152) != v18 + 152 )
        KiCheckForKernelApcDelivery();
      v23 = _interlockedbittestandreset((volatile signed __int32 *)v17, 0);
      v24 = Node;
      if ( !v23 )
        ExpAcquireFastMutexContended(v17, Node);
      if ( v24 )
        BYTE2(v24[1].Left) |= 1u;
      *(_QWORD *)(v17 + 8) = CurrentThread;
      v15 = Flags & 0x10;
      goto LABEL_40;
    }
    if ( v17 >= 0xFFFF800000000000uLL )
    {
      if ( byte_140467140[((v17 >> 39) & 0x1FF) - 256] == 1 )
      {
        SessionId = MmGetSessionIdEx(*(_QWORD *)(v18 + 184));
        v21 = Node;
        goto LABEL_31;
      }
      v21 = Node;
    }
    SessionId = -1;
LABEL_31:
    *(_DWORD *)&v21[1].0 = SessionId;
    v21[1].Children[1] = (_RTL_BALANCED_NODE *)(v17 & 0x7FFFFFFFFFFFFFFCLL);
    goto LABEL_32;
  }
  return v59;
}
