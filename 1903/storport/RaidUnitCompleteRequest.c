/*
 * XREFs of RaidUnitCompleteRequest @ 0x1C0009540
 * Callers:
 *     <none>
 * Callees:
 *     DbgLogRequest @ 0x1C000216C (DbgLogRequest.c)
 *     RaidAllocatePool @ 0x1C0006800 (RaidAllocatePool.c)
 *     RaidDmaPutScatterGatherList @ 0x1C00073DC (RaidDmaPutScatterGatherList.c)
 *     StorRemoveIoGatewayItem @ 0x1C000A710 (StorRemoveIoGatewayItem.c)
 *     RaidCompleteRequestEx @ 0x1C000A830 (RaidCompleteRequestEx.c)
 *     StorUnmapSenseInfo @ 0x1C000A930 (StorUnmapSenseInfo.c)
 *     StorpTelemetryCollectPerfData @ 0x1C000AAD0 (StorpTelemetryCollectPerfData.c)
 *     RaidNormalizeDeviceQueue @ 0x1C000B1C0 (RaidNormalizeDeviceQueue.c)
 *     RiNormalizeDeviceQueue @ 0x1C000B224 (RiNormalizeDeviceQueue.c)
 *     RiDeleteDeviceQueueEntry @ 0x1C000B438 (RiDeleteDeviceQueueEntry.c)
 *     StorSubmitIoGatewayItem @ 0x1C000B508 (StorSubmitIoGatewayItem.c)
 *     RaUnitAsyncError @ 0x1C000B704 (RaUnitAsyncError.c)
 *     StorpTelemetryCollectErrorData @ 0x1C000BB18 (StorpTelemetryCollectErrorData.c)
 *     RaidAdapterRestartQueues @ 0x1C001655C (RaidAdapterRestartQueues.c)
 *     RaidZoneWriteGroupListPurge @ 0x1C001C8F8 (RaidZoneWriteGroupListPurge.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00234D0 (_guard_dispatch_icall_nop.c)
 *     RaidAdapterReleaseCryptoKeyResources @ 0x1C0034718 (RaidAdapterReleaseCryptoKeyResources.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C00374C4 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     WPP_SF_qqD @ 0x1C0037B10 (WPP_SF_qqD.c)
 *     StorRemoveEventQueue @ 0x1C0038308 (StorRemoveEventQueue.c)
 *     StorRemoveEventQueueInternal @ 0x1C00383C0 (StorRemoveEventQueueInternal.c)
 *     McTemplateK0pquuqqd @ 0x1C0038450 (McTemplateK0pquuqqd.c)
 *     RaidZoneWriteGroupListPendingIoCount @ 0x1C0038824 (RaidZoneWriteGroupListPendingIoCount.c)
 *     RaidZoneWriteGroupListRemoveRequest @ 0x1C00388A4 (RaidZoneWriteGroupListRemoveRequest.c)
 *     RaidZoneWriteGroupListSearchRequest @ 0x1C0038908 (RaidZoneWriteGroupListSearchRequest.c)
 *     RaidIsUnresponsiveBlockedCmd @ 0x1C0039544 (RaidIsUnresponsiveBlockedCmd.c)
 *     RaidSrbExGetBidirectionalData @ 0x1C004159C (RaidSrbExGetBidirectionalData.c)
 *     TranslateResultToScsiRequestBlock @ 0x1C00416C4 (TranslateResultToScsiRequestBlock.c)
 *     McTemplateK0dud @ 0x1C00437E8 (McTemplateK0dud.c)
 *     RaidLogRequestComplete @ 0x1C0046970 (RaidLogRequestComplete.c)
 *     RaidFreeRemappedScatterGatherListMdl @ 0x1C0049154 (RaidFreeRemappedScatterGatherListMdl.c)
 *     StorEtwIORequestServiceTimeEventData @ 0x1C004A7B4 (StorEtwIORequestServiceTimeEventData.c)
 *     StorEtwLogoRequestServiceTimeEventData @ 0x1C004AAAC (StorEtwLogoRequestServiceTimeEventData.c)
 */

void __fastcall RaidUnitCompleteRequest(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // al
  __int64 v5; // rdi
  __int64 v6; // r14
  IRP *v7; // r13
  __int64 v8; // rsi
  unsigned __int8 v9; // al
  _IO_SECURITY_CONTEXT *SecurityContext; // rcx
  _SECURITY_QUALITY_OF_SERVICE *SecurityQos; // r15
  __int64 Length; // r14
  unsigned int *v13; // r12
  __int64 *v14; // r15
  unsigned int *v15; // r14
  KSPIN_LOCK *v16; // rcx
  char v17; // al
  int v18; // r9d
  __int64 *v19; // rcx
  __int64 *v20; // r8
  __int64 **v21; // rax
  __int64 *v22; // rcx
  __int64 *v23; // rdx
  __int64 **v24; // rax
  int v25; // edx
  int v26; // ecx
  char *v27; // r13
  unsigned int v28; // r11d
  unsigned int i; // r10d
  __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  __int64 v32; // r8
  int v33; // ecx
  int v34; // ecx
  unsigned __int64 v35; // rcx
  char v36; // cl
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // r12
  char v40; // r15
  char v41; // r11
  unsigned int v42; // r14d
  unsigned int v43; // r9d
  __int64 v44; // rcx
  unsigned __int64 v45; // rdx
  __int64 v46; // r10
  __int64 v47; // r8
  int v48; // ecx
  int v49; // ecx
  unsigned __int64 v50; // rcx
  unsigned int v51; // eax
  int v52; // ecx
  PIRP v53; // r14
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  char CompletionFilter; // r14
  unsigned __int8 v56; // r14
  __int64 v57; // r15
  _QWORD *v58; // rcx
  unsigned int HighestNodeNumber; // r8d
  __int64 v60; // rcx
  bool v61; // zf
  unsigned int v62; // r11d
  unsigned int v63; // r9d
  __int64 v64; // rcx
  unsigned __int64 v65; // rdx
  __int64 v66; // r10
  __int64 v67; // r8
  int v68; // ecx
  int v69; // ecx
  unsigned __int64 v70; // rcx
  unsigned __int64 v71; // r15
  _BYTE *v72; // r14
  unsigned __int64 v73; // rax
  _IO_STACK_LOCATION *v74; // rax
  _IO_SECURITY_CONTEXT *v75; // r13
  char v76; // al
  _SECURITY_QUALITY_OF_SERVICE *v77; // r14
  __int64 v78; // r12
  _SECURITY_QUALITY_OF_SERVICE *v79; // rdx
  int v80; // edx
  int v81; // ecx
  int v82; // r9d
  __int64 v83; // rcx
  PIRP v84; // r13
  __int64 BidirectionalData; // rax
  __int64 v86; // rax
  int v87; // r12d
  bool v88; // r12
  __int64 *v89; // rax
  __int64 v90; // rcx
  __int64 v91; // rax
  void (__fastcall *v92)(__int64, _QWORD, bool); // rax
  __int64 v93; // rdx
  __int64 v94; // rcx
  struct _MDL *v95; // rcx
  unsigned __int64 v96; // r8
  signed __int32 v97; // eax
  signed __int32 v98; // ett
  PIO_WORKITEM *Pool; // r14
  PIO_WORKITEM WorkItem; // rax
  char v101; // cl
  unsigned int v102; // ecx
  char v103; // al
  __int64 v104; // rax
  __int64 v105; // r13
  _BYTE *v106; // rcx
  char v107; // al
  int v108; // ecx
  __int64 v109; // rax
  __int64 *v110; // r14
  unsigned int v111; // eax
  __int64 v112; // r8
  unsigned int v113; // eax
  _BYTE *v115; // rcx
  __int64 v116; // rax
  IRP *v117; // r14
  int v118; // edi
  bool v119; // r13
  __int64 v120; // rax
  __int64 v121; // r12
  unsigned int v122; // r14d
  KSPIN_LOCK *v123; // rdi
  unsigned __int64 v124; // rdi
  unsigned int v125; // r12d
  KIRQL v126; // al
  KIRQL v127; // di
  __int64 v128; // r13
  int v129; // edx
  __int64 j; // rbx
  int v131; // [rsp+54h] [rbp-ACh]
  int v132; // [rsp+54h] [rbp-ACh]
  unsigned int v133; // [rsp+58h] [rbp-A8h]
  BOOL v134; // [rsp+58h] [rbp-A8h]
  char v135; // [rsp+5Ch] [rbp-A4h]
  unsigned int v136; // [rsp+60h] [rbp-A0h]
  PIRP Irp; // [rsp+70h] [rbp-90h]
  unsigned int v139; // [rsp+78h] [rbp-88h]
  __int64 v140; // [rsp+78h] [rbp-88h]
  __int64 v141; // [rsp+80h] [rbp-80h]
  bool v142; // [rsp+8Ch] [rbp-74h]
  char *v143; // [rsp+90h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+98h] [rbp-68h] BYREF
  __int64 v145; // [rsp+B0h] [rbp-50h]
  __int64 v146; // [rsp+B8h] [rbp-48h]
  __int64 v147; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v148; // [rsp+C8h] [rbp-38h]
  __int64 v149; // [rsp+D0h] [rbp-30h]
  __int64 v150; // [rsp+D8h] [rbp-28h]
  _QWORD v151[4]; // [rsp+E0h] [rbp-20h] BYREF
  struct _KLOCK_QUEUE_HANDLE v152; // [rsp+100h] [rbp+0h] BYREF
  struct _KLOCK_QUEUE_HANDLE v153; // [rsp+118h] [rbp+18h] BYREF
  _QWORD v154[2]; // [rsp+130h] [rbp+30h] BYREF
  _QWORD v155[2]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v156[2]; // [rsp+150h] [rbp+50h] BYREF

  v4 = *(_BYTE *)(a1 + 16);
  v5 = *(_QWORD *)(a1 + 168);
  v6 = a1;
  v7 = *(IRP **)(a1 + 160);
  v8 = *(_QWORD *)(a1 + 224);
  v147 = 0LL;
  v149 = a1;
  v135 = v4;
  v9 = *(_BYTE *)(v5 + 2);
  Irp = v7;
  if ( v9 == 40 )
  {
    LODWORD(a4) = *(_DWORD *)(v5 + 20);
    v148 = *(_QWORD *)(v5 + 104);
    v150 = a1 + 800;
    v131 = *(_DWORD *)(v5 + 24);
    v139 = *(_DWORD *)(v5 + 60);
    v136 = a4;
    v133 = *(_DWORD *)(v5 + 32);
  }
  else
  {
    v136 = v9;
    v148 = *(_QWORD *)(v5 + 56);
    v150 = *(_QWORD *)(v5 + 32);
    v133 = *(unsigned __int8 *)(v5 + 8);
    v131 = *(_DWORD *)(v5 + 12);
    v139 = *(_DWORD *)(v5 + 16);
  }
  SecurityContext = v7->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( BYTE2(SecurityContext->SecurityQos) == 40 )
    SecurityQos = SecurityContext[4].SecurityQos;
  else
    SecurityQos = SecurityContext[2].SecurityQos;
  if ( (SecurityQos[1].ImpersonationLevel & 2) == 0 )
  {
LABEL_30:
    if ( StorEtwLoggingEnabled )
    {
      if ( (byte_1C0061741 & 2) != 0 )
        StorEtwIORequestServiceTimeEventData(v6, 0LL, 0LL);
      if ( *(_DWORD *)(v8 + 1556) && (byte_1C0061743 & 2) != 0 )
        StorEtwLogoRequestServiceTimeEventData(v6, 0LL, 0LL);
    }
    goto LABEL_36;
  }
  Length = SecurityQos[7].Length;
  v13 = *(unsigned int **)(v8 + 216);
  v14 = (__int64 *)&SecurityQos[4];
  memset(&LockHandle, 0, sizeof(LockHandle));
  v15 = &v13[16 * Length + 16];
  v16 = (KSPIN_LOCK *)(v15 + 10);
  if ( KeGetCurrentIrql() == 2 )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel(v16, &LockHandle);
    v17 = *((_BYTE *)v14 - 32);
    v18 = *v13;
    if ( (v17 & 2) == 0 )
    {
LABEL_22:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      goto LABEL_26;
    }
    *((_BYTE *)v14 - 32) = v17 & 0xFD;
    v19 = (__int64 *)*v14;
    v20 = *(__int64 **)v15;
    if ( *(__int64 **)(*v14 + 8) == v14 )
    {
      v21 = (__int64 **)v14[1];
      if ( *v21 == v14 )
      {
        *v21 = v19;
        v19[1] = (__int64)v21;
        if ( (v14[6] & 1) == 0 )
        {
LABEL_18:
          if ( (v18 & 4) == 0 && v20 == v14 )
          {
            if ( *(unsigned int **)v15 == v15 )
              v15[12] = -1;
            else
              v15[12] = *(_DWORD *)(*(_QWORD *)v15 + 32LL);
          }
          goto LABEL_22;
        }
        v22 = v14 + 2;
        if ( *((__int64 **)v15 + 4) == v14 + 2 )
          *((_QWORD *)v15 + 4) = *v22;
        v23 = (__int64 *)*v22;
        if ( *(__int64 **)(*v22 + 8) == v22 )
        {
          v24 = (__int64 **)v14[3];
          if ( *v24 == v22 )
          {
            *v24 = v23;
            v23[1] = (__int64)v24;
            *((_DWORD *)v14 + 12) &= ~1u;
            goto LABEL_18;
          }
        }
      }
    }
    __fastfail(3u);
  }
  KeAcquireInStackQueuedSpinLock(v16, &LockHandle);
  StorRemoveEventQueueInternal(v15, *v13, v14);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_26:
  if ( StorEtwLoggingEnabled )
  {
    v154[0] = 0LL;
    v154[1] = 0LL;
    IoGetActivityIdIrp(v7, v154);
    if ( byte_1C0061742 < 0 )
      McTemplateK0dud(v26, v25, (unsigned int)v154, a4, 4);
    v6 = a1;
    goto LABEL_30;
  }
LABEL_36:
  if ( *(_BYTE *)(v5 + 2) != 40 )
  {
    v27 = (char *)(v5 + 72);
    goto LABEL_56;
  }
  v27 = 0LL;
  v143 = 0LL;
  if ( !*(_DWORD *)(v5 + 20) )
  {
    v28 = *(_DWORD *)(v5 + 56);
    for ( i = 0; i < v28; ++i )
    {
      v30 = *(unsigned int *)(v5 + 4LL * i + 120);
      if ( (unsigned int)v30 < 0x80 )
        continue;
      v31 = *(unsigned int *)(v5 + 16);
      if ( (unsigned int)v30 >= (unsigned int)v31 )
        continue;
      a4 = v30 + v5;
      v32 = (unsigned int)v30;
      v33 = *(_DWORD *)(v30 + v5) - 64;
      if ( v33 )
      {
        v34 = v33 - 1;
        if ( v34 )
        {
          if ( v34 == 1 && v32 + 40 <= v31 )
          {
            v27 = (char *)(a4 + 32);
            if ( !*(_DWORD *)(a4 + 12) )
              v27 = 0LL;
            goto LABEL_56;
          }
          continue;
        }
        v35 = v32 + 56;
      }
      else
      {
        v35 = v32 + 40;
      }
      if ( v35 <= v31 )
      {
        if ( !*(_BYTE *)(a4 + 10) )
          break;
        v27 = (char *)(a4 + 24);
LABEL_56:
        v143 = v27;
        break;
      }
    }
  }
  if ( *(_DWORD *)(v8 + 1944)
    && v27
    && (v36 = *v27, !v136)
    && ((unsigned __int8)(v36 - 8) <= 0x3Au && (v37 = 0x400200500000005LL, _bittest64(&v37, (unsigned __int8)(v36 - 8)))
     || (unsigned __int8)(v36 + 120) <= 0x22u && (v38 = 0x500000205LL, _bittest64(&v38, (unsigned __int8)(v36 + 120)))) )
  {
    v39 = a1;
    StorpTelemetryCollectPerfData(a1, v5, v8, a4, v36);
  }
  else
  {
    v39 = a1;
  }
  if ( !g_StorpTraceLoggingErrorDataEnabled || !v27 )
    goto LABEL_88;
  v40 = *(_BYTE *)(v5 + 3);
  v41 = 0;
  if ( *(_BYTE *)(v5 + 2) != 40 )
  {
    v41 = *(_BYTE *)(v5 + 4);
    goto LABEL_83;
  }
  if ( !*(_DWORD *)(v5 + 20) )
  {
    v42 = *(_DWORD *)(v5 + 56);
    v43 = 0;
    if ( v42 )
    {
      while ( 1 )
      {
        v44 = *(unsigned int *)(v5 + 4LL * v43 + 120);
        if ( (unsigned int)v44 < 0x80 )
          goto LABEL_78;
        v45 = *(unsigned int *)(v5 + 16);
        if ( (unsigned int)v44 >= (unsigned int)v45 )
          goto LABEL_78;
        v46 = v44 + v5;
        v47 = (unsigned int)v44;
        v48 = *(_DWORD *)(v44 + v5) - 64;
        if ( !v48 )
          goto LABEL_76;
        v49 = v48 - 1;
        if ( v49 )
          break;
        v50 = v47 + 56;
LABEL_77:
        if ( v50 <= v45 )
        {
          v41 = *(_BYTE *)(v46 + 8);
          goto LABEL_83;
        }
LABEL_78:
        if ( ++v43 >= v42 )
          goto LABEL_83;
      }
      if ( v49 != 1 )
        goto LABEL_78;
LABEL_76:
      v50 = v47 + 40;
      goto LABEL_77;
    }
  }
LABEL_83:
  v51 = (unsigned __int8)v40;
  LOBYTE(v51) = v40 & 0x3F;
  if ( v40 < 0 || v41 == 2 || (unsigned __int8)v51 > 0x12u || (v52 = 262211, !_bittest(&v52, v51)) )
  {
    v53 = Irp;
    StorpTelemetryCollectErrorData(v8, (int)Irp, v39, v5);
  }
  else
  {
LABEL_88:
    v53 = Irp;
  }
  if ( (*(_BYTE *)(v39 + 17) & 2) != 0 )
  {
    RaidUnitPoFxIdleComponentFromMiniport(v8, *(unsigned int *)(v39 + 748));
    *(_BYTE *)(v39 + 17) &= ~2u;
  }
  CurrentStackLocation = v53->Tail.Overlay.CurrentStackLocation;
  CompletionFilter = CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  CurrentStackLocation->Parameters.QueryDirectory.FileName = 0LL;
  v56 = CompletionFilter & 3;
  v57 = *(_QWORD *)(v8 + 24);
  if ( (v56 & 1) != 0
    && *(char *)(v8 + 161) < 0
    && ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v8 + 1480)) )
  {
    PoFxIdleComponent(**(_QWORD **)(v8 + 1488), 0LL, 0LL);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v8 + 1480));
  }
  if ( v56 >= 2u )
  {
    v58 = *(_QWORD **)(v57 + 5024);
    if ( v58 )
      PoFxIdleComponent(*v58, 0LL, 0LL);
  }
  HighestNodeNumber = KeQueryHighestNodeNumber();
  if ( v133 / *(_DWORD *)(v8 + 328) < HighestNodeNumber + 1 )
    HighestNodeNumber = v133 / *(_DWORD *)(v8 + 328);
  ExpInterlockedPushEntrySList(
    (PSLIST_HEADER)(*(_QWORD *)(v8 + 256) + ((unsigned __int64)HighestNodeNumber << 6)),
    (PSLIST_ENTRY)(*(_QWORD *)(v8 + 320) + 16LL * v133));
  v134 = 0;
  if ( (v131 & 0x102) != 0x102 && (v131 & 0x80010) == 0 )
  {
    if ( v136 > 0x20 || (v60 = 0x1000D0000LL, !_bittest64(&v60, v136)) )
      v134 = 1;
  }
  if ( (*(_BYTE *)(v8 + 162) & 2) != 0 && (unsigned __int8)RaidIsUnresponsiveBlockedCmd(v5) )
  {
    v61 = *(_BYTE *)(v5 + 2) == 40;
    *(_BYTE *)(v5 + 3) = 56;
    if ( v61 )
    {
      if ( !*(_DWORD *)(v5 + 20) )
      {
        v62 = *(_DWORD *)(v5 + 56);
        v63 = 0;
        if ( v62 )
        {
          while ( 1 )
          {
            v64 = *(unsigned int *)(v5 + 4LL * v63 + 120);
            if ( (unsigned int)v64 < 0x80 )
              goto LABEL_118;
            v65 = *(unsigned int *)(v5 + 16);
            if ( (unsigned int)v64 >= (unsigned int)v65 )
              goto LABEL_118;
            v66 = v64 + v5;
            v67 = (unsigned int)v64;
            v68 = *(_DWORD *)(v64 + v5) - 64;
            if ( !v68 )
              goto LABEL_116;
            v69 = v68 - 1;
            if ( v69 )
              break;
            v70 = v67 + 56;
LABEL_117:
            if ( v70 <= v65 )
            {
              *(_BYTE *)(v66 + 8) = 0;
              goto LABEL_123;
            }
LABEL_118:
            if ( ++v63 >= v62 )
              goto LABEL_123;
          }
          if ( v69 != 1 )
            goto LABEL_118;
LABEL_116:
          v70 = v67 + 40;
          goto LABEL_117;
        }
      }
    }
    else
    {
      *(_BYTE *)(v5 + 4) = 0;
    }
LABEL_123:
    _InterlockedIncrement64((volatile signed __int64 *)(v8 + 1824));
  }
  v71 = -1LL;
  if ( (*(_BYTE *)(v5 + 3) & 0x3F) == 1 )
  {
    v142 = 0;
    if ( v27
      && *v27 == 29
      && (*(_BYTE *)(v5 + 2) != 40 ? (v72 = *(_BYTE **)(v5 + 24)) : (v72 = *(_BYTE **)(v5 + 64)), v72) )
    {
      v61 = MmIsAddressValid(v72) == 0;
      v73 = v139;
      if ( !v61 && v139 >= 9 && *v72 == 14 )
        v142 = v72[8] == 15;
    }
    else
    {
      v73 = v139;
    }
    Irp->IoStatus.Information = v73;
    v74 = Irp->Tail.Overlay.CurrentStackLocation;
    Irp->IoStatus.Status = 0;
    v75 = v74->Parameters.Create.SecurityContext;
    v76 = BYTE2(v75->SecurityQos);
    if ( v76 == 40 )
      v77 = v75[4].SecurityQos;
    else
      v77 = v75[2].SecurityQos;
    v78 = *(_QWORD *)&v77[18].ContextTrackingMode;
    v140 = v78;
    if ( v76 == 40 )
      v79 = v75[4].SecurityQos;
    else
      v79 = v75[2].SecurityQos;
    if ( (v79[1].ImpersonationLevel & 2) != 0 )
    {
      StorRemoveEventQueue(*(_QWORD *)(v78 + 216), &v79[4]);
      if ( StorEtwLoggingEnabled )
      {
        v155[0] = 0LL;
        v155[1] = 0LL;
        IoGetActivityIdIrp(Irp, v155);
        if ( byte_1C0061742 < 0 )
          McTemplateK0dud(v81, v80, (unsigned int)v155, v82, 4);
      }
    }
    StorUnmapSenseInfo(v77, *(_QWORD *)(*(_QWORD *)(v78 + 24) + 8LL));
    v83 = *(_QWORD *)(v78 + 24);
    if ( *(_QWORD *)(v83 + 5632) )
      RaidAdapterReleaseCryptoKeyResources(v83, v77);
    if ( BYTE2(v75->SecurityQos) == 40 )
    {
      if ( (v77[1].ImpersonationLevel & 0x40) != 0 )
      {
        TranslateResultToScsiRequestBlock(*(_QWORD *)&v77[62].ContextTrackingMode, v75);
        v84 = Irp;
        *(_QWORD *)(*(_QWORD *)&v77[62].ContextTrackingMode + 48LL) = *(_QWORD *)&v77[14].ContextTrackingMode;
        *(_QWORD *)(*(_QWORD *)&v77[62].ContextTrackingMode + 24LL) = *(_QWORD *)&v77[15].ImpersonationLevel;
        *(_QWORD *)(*(_QWORD *)&v77[62].ContextTrackingMode + 56LL) = 0LL;
        *(_QWORD *)(*(_QWORD *)&v77[62].ContextTrackingMode + 40LL) = 0LL;
        Irp->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId = *(_QWORD *)&v77[62].ContextTrackingMode;
        LOBYTE(v77[1].ImpersonationLevel) &= ~0x40u;
        *(_QWORD *)&v77[62].ContextTrackingMode = 0LL;
        goto LABEL_156;
      }
      v75[4].SecurityQos = 0LL;
      *(_QWORD *)&v75[2].DesiredAccess = *(_QWORD *)&v77[15].ImpersonationLevel;
      v75[4].AccessState = 0LL;
      v145 = *(_QWORD *)&v77[16].Length;
      if ( v145 )
      {
        BidirectionalData = RaidSrbExGetBidirectionalData(v75);
        v84 = Irp;
        if ( BidirectionalData )
          *(_QWORD *)(BidirectionalData + 16) = v145;
LABEL_156:
        if ( *(_QWORD *)&v77[9].ImpersonationLevel )
        {
          v86 = *(_QWORD *)&v77[14].Length;
          if ( *(_BYTE *)(v86 + 2) == 40 )
            v87 = *(_DWORD *)(v86 + 24) >> 6;
          else
            LOBYTE(v87) = *(_BYTE *)(v86 + 12) >> 6;
          v88 = (v87 & 1) == 0;
          if ( RaidVerifierEnabled )
            RaidFreeRemappedScatterGatherListMdl(v77);
          v89 = (__int64 *)(*(_QWORD *)&v77[18].Length + 696LL);
          if ( *(_QWORD *)&v77[18].Length != -696LL )
          {
            v90 = *v89;
            if ( *v89 )
            {
              v91 = *(_QWORD *)(v90 + 8);
              if ( v91 )
              {
                v92 = *(void (__fastcall **)(__int64, _QWORD, bool))(v91 + 96);
                if ( v92 )
                  v92(v90, *(_QWORD *)&v77[9].ImpersonationLevel, v88);
              }
            }
          }
          v93 = *(_QWORD *)&v77[12].ContextTrackingMode;
          *(_QWORD *)&v77[9].ImpersonationLevel = 0LL;
          *(_QWORD *)&v77[12].Length = 0LL;
          if ( v93 )
          {
            RaidDmaPutScatterGatherList((__int64 *)(*(_QWORD *)&v77[18].Length + 696LL));
            *(_QWORD *)&v77[12].ContextTrackingMode = 0LL;
          }
          v78 = v140;
        }
        v94 = *(_QWORD *)&v77[8].ContextTrackingMode;
        if ( v94 && (v77[1].ImpersonationLevel & 1) != 0 )
        {
          if ( (*(_BYTE *)(v94 + 10) & 2) != 0 )
          {
            MmUnlockPages((PMDL)v94);
            v94 = *(_QWORD *)&v77[8].ContextTrackingMode;
          }
          IoFreeMdl((PMDL)v94);
          LOBYTE(v77[1].ImpersonationLevel) &= ~1u;
          *(_QWORD *)&v77[8].ContextTrackingMode = 0LL;
        }
        v95 = *(struct _MDL **)&v77[11].ImpersonationLevel;
        if ( v95 )
        {
          MmUnlockPages(v95);
          IoFreeMdl(*(PMDL *)&v77[11].ImpersonationLevel);
          *(_QWORD *)&v77[11].ImpersonationLevel = 0LL;
        }
        v96 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
        v97 = *(_DWORD *)(v96 + *(_QWORD *)(v78 + 32));
        if ( (v97 & 1) != 0 )
        {
LABEL_180:
          if ( !_InterlockedDecrement((volatile signed __int32 *)(v78 + 680)) )
            KeSetEvent((PRKEVENT)(v78 + 176), 0, 0);
        }
        else
        {
          while ( 1 )
          {
            v98 = v97;
            v97 = _InterlockedCompareExchange((volatile signed __int32 *)(v96 + *(_QWORD *)(v78 + 32)), v97 - 2, v97);
            if ( v98 == v97 )
              break;
            if ( (v97 & 1) != 0 )
              goto LABEL_180;
          }
        }
        if ( v143 && *v143 == 59 && (v143[1] & 0x1F) == 0xF || v142 )
        {
          Pool = (PIO_WORKITEM *)RaidAllocatePool(NonPagedPoolNx, 0x10uLL, 0x49576152u, *(_QWORD *)(v8 + 8));
          if ( Pool )
          {
            *Pool = 0LL;
            Pool[1] = 0LL;
            WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(v8 + 8));
            *Pool = WorkItem;
            if ( WorkItem )
            {
              Pool[1] = (PIO_WORKITEM)v84;
              _InterlockedIncrement((volatile signed __int32 *)(v8 + 680));
              IoQueueWorkItem(*Pool, RaidUnitIdentityUpdateWorkRoutine, CriticalWorkQueue, Pool);
              v101 = 1;
              goto LABEL_248;
            }
            ExFreePoolWithTag(Pool, 0x49576152u);
          }
          IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(*(_QWORD *)(v8 + 24) + 32LL), BusRelations);
          goto LABEL_237;
        }
        if ( *(_BYTE *)(v8 + 129) )
        {
          v102 = v136;
          if ( v143 && (v103 = *v143, !v136) && (v103 == 37 || v103 == -98) && !*(_DWORD *)(v8 + 580) )
          {
            if ( *(_BYTE *)(v5 + 2) == 40 )
              v104 = *(_QWORD *)(v5 + 64);
            else
              v104 = *(_QWORD *)(v5 + 24);
            v105 = a1;
            if ( v104 )
            {
              if ( MmIsAddressValid(*(PVOID *)(a1 + 184)) )
              {
                v106 = *(_BYTE **)(a1 + 184);
                if ( *v143 == 37 )
                {
                  HIBYTE(v132) = v106[4];
                  BYTE2(v132) = v106[5];
                  BYTE1(v132) = v106[6];
                  v107 = v106[7];
                }
                else
                {
                  HIBYTE(v132) = v106[8];
                  BYTE2(v132) = v106[9];
                  BYTE1(v132) = v106[10];
                  v107 = v106[11];
                }
                LOBYTE(v132) = v107;
                v108 = v132;
                if ( v132 )
                {
                  if ( ((v132 - 1) & v132) != 0 )
                  {
                    do
                      v108 &= v108 - 1;
                    while ( ((v108 - 1) & v108) != 0 );
                  }
                  *(_DWORD *)(v8 + 580) = v108;
                }
                else
                {
                  *(_DWORD *)(v8 + 580) = 512;
                }
LABEL_237:
                if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0 )
                {
                  v117 = Irp;
                }
                else
                {
                  v117 = Irp;
                  if ( BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
                    WPP_SF_qqD(
                      WPP_GLOBAL_Control->AttachedDevice,
                      24LL,
                      &WPP_a32982da72aa344f3768c69018313f42_Traceguids,
                      v8,
                      Irp,
                      Irp->IoStatus.Status);
                }
                if ( (qword_1C00612B0 & 0x10) != 0 )
                  RaidLogRequestComplete(*(_QWORD *)(v8 + 24), v117, v5);
                RaidCompleteRequestEx(v117);
                v101 = 1;
                goto LABEL_248;
              }
              goto LABEL_212;
            }
          }
          else
          {
            v105 = a1;
          }
LABEL_213:
          if ( *(_BYTE *)(v8 + 129) && v143 && !v102 )
          {
            if ( *v143 == -108 && v143[1] == 4 && *(_DWORD *)(v8 + 580) )
            {
              v61 = (v143[14] & 1) == 0;
              memset(&v152, 0, sizeof(v152));
              if ( v61 )
              {
                v109 = RaidZoneWriteGroupListSearchRequest(
                         (unsigned int)*(_QWORD *)(v105 + 224) + 400,
                         0,
                         v105,
                         *(_DWORD *)(*(_QWORD *)(v105 + 224) + 580LL),
                         0);
                v110 = (__int64 *)v109;
                if ( v109 )
                {
                  if ( (qword_1C00612B0 & 0x1000) != 0 )
                  {
                    v111 = RaidZoneWriteGroupListPendingIoCount(v8 + 400, v109);
                    DbgLogRequest(*(_QWORD *)(*(_QWORD *)(v105 + 224) + 24LL), 43, v110[2], v110[4], v110[5], v111, 0LL);
                  }
                  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v105 + 224) + 544LL), &v152);
                  LOBYTE(v112) = 1;
                  RaidZoneWriteGroupListRemoveRequest(*(_QWORD *)(v105 + 224) + 400LL, v110, v112);
                  KeReleaseInStackQueuedSpinLock(&v152);
                }
              }
              else
              {
                if ( (qword_1C00612B0 & 0x1000) != 0 )
                {
                  v113 = RaidZoneWriteGroupListPendingIoCount(v8 + 400, 0LL);
                  DbgLogRequest(*(_QWORD *)(*(_QWORD *)(v105 + 224) + 24LL), 43, 0LL, 0LL, 0LL, v113, 0LL);
                }
                RaidZoneWriteGroupListPurge(*(_QWORD *)(v105 + 224) + 400LL);
              }
            }
            else if ( *v143 == -107 && !v143[1] && *(_DWORD *)(v8 + 580) )
            {
              if ( *(_BYTE *)(v5 + 2) == 40 ? *(_QWORD *)(v5 + 64) : *(_QWORD *)(v5 + 24) )
              {
                if ( MmIsAddressValid(*(PVOID *)(v105 + 184)) )
                {
                  v115 = *(_BYTE **)(v105 + 184);
                  HIBYTE(v141) = v115[72];
                  BYTE6(v141) = v115[73];
                  BYTE5(v141) = v115[74];
                  BYTE4(v141) = v115[75];
                  BYTE3(v141) = v115[76];
                  BYTE2(v141) = v115[77];
                  BYTE1(v141) = v115[78];
                  LOBYTE(v141) = v115[79];
                  v116 = v141 * *(unsigned int *)(v8 + 580);
                  if ( *(_QWORD *)(v8 + 2776) != v116 )
                    *(_QWORD *)(v8 + 2776) = v116;
                }
              }
            }
          }
          goto LABEL_237;
        }
        v105 = a1;
LABEL_212:
        v102 = v136;
        goto LABEL_213;
      }
    }
    else
    {
      v75[2].SecurityQos = *(_SECURITY_QUALITY_OF_SERVICE **)&v77[14].ContextTrackingMode;
      v75[1].SecurityQos = *(_SECURITY_QUALITY_OF_SERVICE **)&v77[15].ImpersonationLevel;
      v75[2].AccessState = 0LL;
      *(_QWORD *)&v75[1].DesiredAccess = 0LL;
    }
    v84 = Irp;
    goto LABEL_156;
  }
  if ( *(_BYTE *)(v8 + 129) )
    ++*(_DWORD *)(*(_QWORD *)(v8 + 24) + 5668LL);
  v101 = RaUnitAsyncError(v8, v39);
LABEL_248:
  if ( (v135 & 0x1C) != 0xC && v101 )
  {
    v118 = (unsigned __int8)StorRemoveIoGatewayItem((PKSPIN_LOCK)(*(_QWORD *)(v8 + 24) + 768LL));
    if ( v146 )
      (*(void (__fastcall **)(_QWORD, __int64, __int64 *))(*(_QWORD *)(*(_QWORD *)(v146 + 64) + 32LL) + 392LL))(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v146 + 64) + 32LL) + 384LL),
        v146 - 120,
        &v147);
    if ( v118 )
      RaidAdapterRestartQueues(*(_QWORD *)(v8 + 24));
    v119 = 0;
    memset(v151, 0, sizeof(v151));
    v120 = *(_QWORD *)(v8 + 24);
    if ( v120 )
    {
      v121 = *(_QWORD *)(v8 + 216);
      if ( v121 )
      {
        if ( *(_QWORD *)(v120 + 4984) )
        {
          v122 = 0;
          memset(&v153, 0, sizeof(v153));
          if ( *(_DWORD *)(v121 + 8) )
          {
            do
            {
              v123 = (KSPIN_LOCK *)(v121 + ((v122 + 1LL) << 6));
              KeAcquireInStackQueuedSpinLock(v123 + 5, &v153);
              if ( (KSPIN_LOCK *)*v123 != v123 && *(_QWORD *)(*v123 + 40) < v71 )
                v71 = *(_QWORD *)(*v123 + 40);
              KeReleaseInStackQueuedSpinLock(&v153);
              ++v122;
            }
            while ( v122 < *(_DWORD *)(v121 + 8) );
          }
          v124 = 0LL;
          if ( v71 != -1LL )
            v124 = v71;
          if ( v124 )
            v119 = KeQueryUnbiasedInterruptTime() - v124 > *(_QWORD *)(*(_QWORD *)(v8 + 24) + 4984LL);
        }
      }
    }
    v125 = *(_DWORD *)(v8 + 580);
    v126 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v8 + 472));
    if ( v134 || *(_DWORD *)(v8 + 432) || *(_DWORD *)(v8 + 440) || *(_DWORD *)(v8 + 420) || *(_DWORD *)(v8 + 416) )
    {
      ExReleaseSpinLockShared((PEX_SPIN_LOCK)(v8 + 472), v126);
      v127 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 472));
      RiDeleteDeviceQueueEntry(v8 + 400, v134);
      v128 = RiNormalizeDeviceQueue(v8 + 400, v119, v125);
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 472), v127);
      if ( v128 )
      {
        if ( StorEtwLoggingEnabled )
        {
          if ( byte_1C0061742 < 0 )
          {
            v156[0] = 0LL;
            v156[1] = 0LL;
            IoGetActivityIdIrp(v128 - 120, v156);
            if ( byte_1C0061742 < 0 )
              McTemplateK0pquuqqd(
                *(_DWORD *)(v8 + 416) + *(_DWORD *)(v8 + 420),
                v129,
                (unsigned int)v156,
                v8 + 400,
                ((*(_BYTE *)(v128 + 22) & 6) != 0) + 1,
                5,
                0,
                *(_BYTE *)(v8 + 416) + *(_BYTE *)(v8 + 420),
                *(_DWORD *)(v8 + 476));
          }
        }
        if ( !(unsigned __int8)StorSubmitIoGatewayItem(*(PKSPIN_LOCK *)(v8 + 408)) )
          (*(void (__fastcall **)(_QWORD, __int64, _QWORD *))(v8 + 392))(*(_QWORD *)(v8 + 384), v128 - 120, v151);
      }
      if ( v134 )
      {
        for ( j = RaidNormalizeDeviceQueue(v8 + 400); j; j = RaidNormalizeDeviceQueue(v8 + 400) )
        {
          if ( !(unsigned __int8)StorSubmitIoGatewayItem(*(PKSPIN_LOCK *)(v8 + 408)) )
            (*(void (__fastcall **)(_QWORD, __int64, _QWORD *))(v8 + 392))(*(_QWORD *)(v8 + 384), j - 120, v151);
        }
      }
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(v8 + 476));
      ExReleaseSpinLockShared((PEX_SPIN_LOCK)(v8 + 472), v126);
    }
  }
}
