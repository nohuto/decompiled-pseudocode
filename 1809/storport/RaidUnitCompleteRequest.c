/*
 * XREFs of RaidUnitCompleteRequest @ 0x1C000B940
 * Callers:
 *     <none>
 * Callees:
 *     RaidAllocatePool @ 0x1C00081B4 (RaidAllocatePool.c)
 *     StorpTelemetryCollectErrorData @ 0x1C00088F8 (StorpTelemetryCollectErrorData.c)
 *     RaidDmaPutScatterGatherList @ 0x1C0008C1C (RaidDmaPutScatterGatherList.c)
 *     StorpTelemetryCollectPerfData @ 0x1C000AFC0 (StorpTelemetryCollectPerfData.c)
 *     StorRemoveIoGatewayItem @ 0x1C000CD00 (StorRemoveIoGatewayItem.c)
 *     RaidCompleteRequestEx @ 0x1C000CF10 (RaidCompleteRequestEx.c)
 *     StorUnmapSenseInfo @ 0x1C000D010 (StorUnmapSenseInfo.c)
 *     RaidNormalizeDeviceQueue @ 0x1C000D3B4 (RaidNormalizeDeviceQueue.c)
 *     RiNormalizeDeviceQueue @ 0x1C000D414 (RiNormalizeDeviceQueue.c)
 *     RiDeleteDeviceQueueEntry @ 0x1C000D6D8 (RiDeleteDeviceQueueEntry.c)
 *     StorSubmitIoGatewayItem @ 0x1C000D7A8 (StorSubmitIoGatewayItem.c)
 *     RaUnitAsyncError @ 0x1C000D9D4 (RaUnitAsyncError.c)
 *     RaidAdapterRestartQueues @ 0x1C0013C80 (RaidAdapterRestartQueues.c)
 *     IsZonedWriteRequest @ 0x1C0016238 (IsZonedWriteRequest.c)
 *     TranslateResultToScsiRequestBlock @ 0x1C0022B74 (TranslateResultToScsiRequestBlock.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 *     McTemplateK0zqjuuussssx @ 0x1C0027EE4 (McTemplateK0zqjuuussssx.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C060 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002C3C0 (memset.c)
 *     RaidAdapterReleaseCryptoKeyResources @ 0x1C0038B38 (RaidAdapterReleaseCryptoKeyResources.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C003B4B0 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     WPP_SF_qqD @ 0x1C003BC48 (WPP_SF_qqD.c)
 *     StorRemoveEventQueue @ 0x1C003C944 (StorRemoveEventQueue.c)
 *     StorRemoveEventQueueInternal @ 0x1C003C9F0 (StorRemoveEventQueueInternal.c)
 *     McTemplateK0pquuqqd @ 0x1C003CA80 (McTemplateK0pquuqqd.c)
 *     RaidIsUnresponsiveBlockedCmd @ 0x1C003D364 (RaidIsUnresponsiveBlockedCmd.c)
 *     RaidSrbExGetBidirectionalData @ 0x1C0044BA8 (RaidSrbExGetBidirectionalData.c)
 *     McTemplateK0dud @ 0x1C0046468 (McTemplateK0dud.c)
 *     RaidLogRequestComplete @ 0x1C0049204 (RaidLogRequestComplete.c)
 *     RaidFreeRemappedScatterGatherListMdl @ 0x1C004B8EC (RaidFreeRemappedScatterGatherListMdl.c)
 *     StorEtwIORequestServiceTimeEventData @ 0x1C004CD38 (StorEtwIORequestServiceTimeEventData.c)
 *     StorEtwLogoRequestServiceTimeEventData @ 0x1C004D02C (StorEtwLogoRequestServiceTimeEventData.c)
 */

void __fastcall RaidUnitCompleteRequest(union _LARGE_INTEGER a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // al
  __int64 QuadPart; // r12
  __int64 v6; // r14
  IRP *v7; // r13
  __int64 v8; // rsi
  unsigned __int8 v9; // al
  _IO_SECURITY_CONTEXT *SecurityContext; // rcx
  _SECURITY_QUALITY_OF_SERVICE *SecurityQos; // rbx
  __int64 Length; // rdi
  __int64 *v13; // rbx
  unsigned int *v14; // r15
  unsigned int *v15; // rdi
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
  char v27; // r13
  unsigned __int8 *v28; // rcx
  unsigned int v29; // r11d
  unsigned int v30; // r10d
  __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  __int64 v33; // r8
  int v34; // ecx
  int v35; // ecx
  unsigned __int64 v36; // rcx
  unsigned __int8 v37; // cl
  __int64 v38; // rdx
  __int64 v39; // rdx
  char v40; // bl
  unsigned __int8 v41; // r12
  unsigned int v42; // edi
  _BYTE *v43; // r15
  unsigned int v44; // r11d
  __int64 v45; // r10
  __int64 v46; // rcx
  unsigned __int64 v47; // rdx
  __int64 v48; // r9
  __int64 v49; // r8
  int v50; // ecx
  int v51; // ecx
  unsigned __int64 v52; // rcx
  unsigned int v53; // r11d
  __int64 i; // r10
  __int64 v55; // rcx
  unsigned __int64 v56; // rdx
  __int64 v57; // r9
  __int64 v58; // r8
  int v59; // ecx
  int v60; // ecx
  unsigned __int64 v61; // rcx
  char v62; // cl
  char v63; // al
  PIRP v64; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  char CompletionFilter; // bl
  unsigned __int8 v67; // bl
  __int64 v68; // rdi
  _QWORD *v69; // rcx
  unsigned int HighestNodeNumber; // r8d
  __int64 v71; // rcx
  int v72; // ecx
  bool v73; // zf
  unsigned int v74; // r11d
  unsigned int v75; // r9d
  __int64 v76; // rcx
  unsigned __int64 v77; // rdx
  __int64 v78; // r10
  __int64 v79; // r8
  int v80; // ecx
  int v81; // ecx
  unsigned __int64 v82; // rcx
  unsigned __int64 v83; // r15
  bool v84; // r12
  _BYTE *v85; // rbx
  unsigned __int64 v86; // rax
  _IO_STACK_LOCATION *v87; // rax
  _IO_SECURITY_CONTEXT *v88; // rdi
  char v89; // al
  _SECURITY_QUALITY_OF_SERVICE *v90; // rbx
  __int64 v91; // r13
  _SECURITY_QUALITY_OF_SERVICE *v92; // rdx
  int v93; // edx
  int v94; // ecx
  int v95; // r9d
  __int64 v96; // rcx
  __int64 v97; // r12
  __int64 BidirectionalData; // rax
  __int64 v99; // rax
  int v100; // edi
  bool v101; // di
  __int64 *v102; // rax
  __int64 v103; // rcx
  __int64 v104; // rax
  void (__fastcall *v105)(__int64, _QWORD, bool); // rax
  __int64 v106; // rdx
  __int64 v107; // rcx
  struct _MDL *v108; // rcx
  unsigned __int64 v109; // r8
  signed __int32 v110; // eax
  signed __int32 v111; // ett
  PIO_WORKITEM *Pool; // rbx
  PIO_WORKITEM WorkItem; // rax
  char v114; // cl
  IRP *v115; // rbx
  unsigned int v116; // eax
  __int64 v117; // rax
  union _LARGE_INTEGER v118; // rdi
  _BYTE *v119; // rcx
  char v120; // al
  int v121; // ebx
  __int64 v122; // rax
  _BYTE *v123; // rcx
  __int64 v124; // rdx
  char v125; // al
  unsigned __int64 v126; // rcx
  __int64 v127; // rax
  __int64 v128; // rcx
  void *v129; // r8
  unsigned int v130; // eax
  __int64 v131; // r9
  void *v132; // rdi
  unsigned __int64 v133; // rdi
  PVOID v134; // rax
  ULONG *v135; // rax
  void *v136; // rcx
  char v137; // al
  __int64 v138; // rcx
  int v139; // ebx
  __int64 v140; // rax
  bool v141; // r12
  __int64 v142; // r14
  unsigned int j; // edi
  KSPIN_LOCK *v144; // rbx
  unsigned __int64 v145; // rbx
  KIRQL v146; // al
  KIRQL v147; // bl
  __int64 v148; // r15
  __int64 k; // rbx
  int v150; // [rsp+70h] [rbp-90h]
  int v151; // [rsp+74h] [rbp-8Ch]
  unsigned int v152; // [rsp+78h] [rbp-88h]
  int v153; // [rsp+7Ch] [rbp-84h]
  bool v154; // [rsp+7Ch] [rbp-84h]
  char v155; // [rsp+80h] [rbp-80h]
  unsigned int v156; // [rsp+84h] [rbp-7Ch]
  unsigned int v157; // [rsp+84h] [rbp-7Ch]
  unsigned int v158; // [rsp+88h] [rbp-78h]
  __int64 v159; // [rsp+90h] [rbp-70h]
  PIRP Irp; // [rsp+98h] [rbp-68h]
  unsigned __int8 *v161; // [rsp+A0h] [rbp-60h]
  __int64 v163; // [rsp+B0h] [rbp-50h]
  __int64 v164; // [rsp+C0h] [rbp-40h]
  char v165[8]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v166; // [rsp+D0h] [rbp-30h]
  union _LARGE_INTEGER v167; // [rsp+D8h] [rbp-28h]
  __int64 v168; // [rsp+E0h] [rbp-20h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v170[32]; // [rsp+100h] [rbp+0h] BYREF
  struct _KLOCK_QUEUE_HANDLE v171; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v172[2]; // [rsp+138h] [rbp+38h] BYREF
  _QWORD v173[2]; // [rsp+148h] [rbp+48h] BYREF
  _QWORD v174[2]; // [rsp+158h] [rbp+58h] BYREF

  v4 = *(_BYTE *)(a1.QuadPart + 16);
  QuadPart = a1.QuadPart;
  v6 = *(_QWORD *)(a1.QuadPart + 168);
  v7 = *(IRP **)(a1.QuadPart + 160);
  v8 = *(_QWORD *)(a1.QuadPart + 224);
  v167 = a1;
  v155 = v4;
  v9 = *(_BYTE *)(v6 + 2);
  Irp = v7;
  if ( v9 == 40 )
  {
    a4 = *(unsigned int *)(v6 + 20);
    v166 = *(_QWORD *)(v6 + 104);
    v168 = a1.QuadPart + 800;
    v153 = *(_DWORD *)(v6 + 24);
    v158 = *(_DWORD *)(v6 + 60);
    v152 = a4;
    v156 = *(_DWORD *)(v6 + 32);
  }
  else
  {
    v152 = v9;
    v166 = *(_QWORD *)(v6 + 56);
    v168 = *(_QWORD *)(v6 + 32);
    v156 = *(unsigned __int8 *)(v6 + 8);
    v153 = *(_DWORD *)(v6 + 12);
    v158 = *(_DWORD *)(v6 + 16);
  }
  SecurityContext = v7->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( BYTE2(SecurityContext->SecurityQos) == 40 )
    SecurityQos = SecurityContext[4].SecurityQos;
  else
    SecurityQos = SecurityContext[2].SecurityQos;
  if ( (SecurityQos[1].ImpersonationLevel & 2) == 0 )
    goto LABEL_29;
  Length = SecurityQos[7].Length;
  v13 = (__int64 *)&SecurityQos[4];
  v14 = *(unsigned int **)(v8 + 504);
  v15 = &v14[16 * Length + 16];
  v16 = (KSPIN_LOCK *)(v15 + 10);
  if ( KeGetCurrentIrql() != 2 )
  {
    KeAcquireInStackQueuedSpinLock(v16, &LockHandle);
    StorRemoveEventQueueInternal(v15, *v14, v13);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    goto LABEL_26;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v16, &LockHandle);
  v17 = *((_BYTE *)v13 - 32);
  v18 = *v14;
  if ( (v17 & 2) != 0 )
  {
    *((_BYTE *)v13 - 32) = v17 & 0xFD;
    v19 = (__int64 *)*v13;
    v20 = *(__int64 **)v15;
    if ( *(__int64 **)(*v13 + 8) == v13 )
    {
      v21 = (__int64 **)v13[1];
      if ( *v21 == v13 )
      {
        *v21 = v19;
        v19[1] = (__int64)v21;
        if ( (v13[6] & 1) == 0 )
        {
LABEL_18:
          if ( (v18 & 4) == 0 && v20 == v13 )
          {
            if ( *(unsigned int **)v15 == v15 )
              v15[12] = -1;
            else
              v15[12] = *(_DWORD *)(*(_QWORD *)v15 + 32LL);
          }
          goto LABEL_22;
        }
        v22 = v13 + 2;
        if ( *((__int64 **)v15 + 4) == v13 + 2 )
          *((_QWORD *)v15 + 4) = *v22;
        v23 = (__int64 *)*v22;
        if ( *(__int64 **)(*v22 + 8) == v22 )
        {
          v24 = (__int64 **)v13[3];
          if ( *v24 == v22 )
          {
            *v24 = v23;
            v23[1] = (__int64)v24;
            *((_DWORD *)v13 + 12) &= ~1u;
            goto LABEL_18;
          }
        }
      }
    }
    __fastfail(3u);
  }
LABEL_22:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_26:
  if ( !StorEtwLoggingEnabled )
    goto LABEL_35;
  v172[0] = 0LL;
  v172[1] = 0LL;
  IoGetActivityIdIrp(v7, v172);
  if ( byte_1C00617E2 < 0 )
    McTemplateK0dud(v26, v25, (unsigned int)v172, a4, 4);
LABEL_29:
  if ( StorEtwLoggingEnabled )
  {
    if ( (byte_1C00617E1 & 1) != 0 )
      StorEtwIORequestServiceTimeEventData(QuadPart, 0LL, 0LL, a4);
    if ( *(_DWORD *)(v8 + 1812) && (byte_1C00617E3 & 2) != 0 )
      StorEtwLogoRequestServiceTimeEventData(QuadPart, 0LL, 0LL, a4);
  }
LABEL_35:
  v27 = 0;
  if ( *(_BYTE *)(v6 + 2) != 40 )
  {
    v28 = (unsigned __int8 *)(v6 + 72);
    goto LABEL_55;
  }
  v28 = 0LL;
  v161 = 0LL;
  if ( !*(_DWORD *)(v6 + 20) )
  {
    v29 = *(_DWORD *)(v6 + 56);
    v30 = 0;
    if ( v29 )
    {
      while ( 1 )
      {
        v31 = *(unsigned int *)(v6 + 4LL * v30 + 120);
        if ( (unsigned int)v31 < 0x80 )
          goto LABEL_50;
        v32 = *(unsigned int *)(v6 + 16);
        if ( (unsigned int)v31 >= (unsigned int)v32 )
          goto LABEL_50;
        a4 = v31 + v6;
        v33 = (unsigned int)v31;
        v34 = *(_DWORD *)(v31 + v6) - 64;
        if ( v34 )
        {
          v35 = v34 - 1;
          if ( v35 )
          {
            if ( v35 == 1 && v33 + 40 <= v32 )
            {
              v28 = (unsigned __int8 *)(a4 + 32);
              if ( !*(_DWORD *)(a4 + 12) )
                v28 = 0LL;
              goto LABEL_55;
            }
            goto LABEL_50;
          }
          v36 = v33 + 56;
        }
        else
        {
          v36 = v33 + 40;
        }
        if ( v36 <= v32 )
        {
          if ( !*(_BYTE *)(a4 + 10) )
          {
LABEL_51:
            v28 = 0LL;
            break;
          }
          v28 = (unsigned __int8 *)(a4 + 24);
LABEL_55:
          v161 = v28;
          break;
        }
LABEL_50:
        if ( ++v30 >= v29 )
          goto LABEL_51;
      }
    }
  }
  if ( *(_DWORD *)(v8 + 2220) && v28 )
  {
    v37 = *v28;
    if ( !v152 )
    {
      if ( (unsigned __int8)(v37 - 8) <= 0x3Au
        && (v38 = 0x400200500000005LL, _bittest64(&v38, (unsigned __int8)(v37 - 8)))
        || (unsigned __int8)(v37 + 120) <= 0x22u
        && (v39 = 0x500000205LL, _bittest64(&v39, (unsigned __int8)(v37 + 120))) )
      {
        StorpTelemetryCollectPerfData(QuadPart, v6, v8, a4, v37);
      }
    }
    v28 = v161;
  }
  if ( !g_StorpTraceLoggingErrorDataEnabled || !v28 )
    goto LABEL_114;
  v40 = *(_BYTE *)(v6 + 2);
  v41 = 0;
  v42 = *(unsigned __int8 *)(v6 + 3);
  v43 = 0LL;
  BYTE2(v150) = *(_BYTE *)(v6 + 3);
  LOWORD(v150) = 0;
  if ( v40 != 40 )
  {
    v27 = *(_BYTE *)(v6 + 4);
    goto LABEL_83;
  }
  if ( *(_DWORD *)(v6 + 20) )
  {
    v27 = 0;
    v40 = 40;
LABEL_83:
    LOBYTE(v150) = v27;
    goto LABEL_84;
  }
  v44 = *(_DWORD *)(v6 + 56);
  v45 = 0LL;
  if ( v44 )
  {
    while ( 1 )
    {
      v46 = *(unsigned int *)(v6 + 4 * v45 + 120);
      if ( (unsigned int)v46 < 0x80 )
        goto LABEL_77;
      v47 = *(unsigned int *)(v6 + 16);
      if ( (unsigned int)v46 >= (unsigned int)v47 )
        goto LABEL_77;
      v48 = v46 + v6;
      v49 = (unsigned int)v46;
      v50 = *(_DWORD *)(v46 + v6) - 64;
      if ( !v50 )
        goto LABEL_75;
      v51 = v50 - 1;
      if ( v51 )
        break;
      v52 = v49 + 56;
LABEL_76:
      if ( v52 <= v47 )
      {
        v27 = *(_BYTE *)(v48 + 8);
        goto LABEL_83;
      }
LABEL_77:
      v45 = (unsigned int)(v45 + 1);
      if ( (unsigned int)v45 >= v44 )
        goto LABEL_84;
    }
    if ( v51 != 1 )
      goto LABEL_77;
LABEL_75:
    v52 = v49 + 40;
    goto LABEL_76;
  }
LABEL_84:
  LOBYTE(v42) = v42 & 0x3F;
  if ( v40 != 40 )
  {
    if ( v40 )
      goto LABEL_104;
    v43 = *(_BYTE **)(v6 + 32);
    v41 = *(_BYTE *)(v6 + 11);
    goto LABEL_103;
  }
  if ( *(_DWORD *)(v6 + 20) )
  {
    v41 = 0;
LABEL_103:
    BYTE1(v150) = v41;
    goto LABEL_104;
  }
  v53 = *(_DWORD *)(v6 + 56);
  for ( i = 0LL; (unsigned int)i < v53; i = (unsigned int)(i + 1) )
  {
    v55 = *(unsigned int *)(v6 + 4 * i + 120);
    if ( (unsigned int)v55 < 0x80 )
      continue;
    v56 = *(unsigned int *)(v6 + 16);
    if ( (unsigned int)v55 >= (unsigned int)v56 )
      continue;
    v57 = v55 + v6;
    v58 = (unsigned int)v55;
    v59 = *(_DWORD *)(v55 + v6) - 64;
    if ( v59 )
    {
      v60 = v59 - 1;
      if ( v60 )
      {
        if ( v60 == 1 && v58 + 40 <= v56 )
        {
          v43 = *(_BYTE **)(v57 + 24);
          v41 = *(_BYTE *)(v57 + 9);
          goto LABEL_103;
        }
        continue;
      }
      v61 = v58 + 56;
    }
    else
    {
      v61 = v58 + 40;
    }
    if ( v61 <= v56 )
    {
      v43 = *(_BYTE **)(v57 + 16);
      v41 = *(_BYTE *)(v57 + 9);
      goto LABEL_103;
    }
  }
LABEL_104:
  if ( (v150 & 0x800000) == 0 )
  {
    if ( v27 != 2 && (unsigned __int8)v42 <= 0x12u )
    {
      v72 = 262211;
      if ( _bittest(&v72, v42) )
      {
LABEL_113:
        QuadPart = a1.QuadPart;
LABEL_114:
        v64 = Irp;
        goto LABEL_115;
      }
    }
  }
  else
  {
    if ( v43 && v41 >= 8u && (unsigned __int8)((*v43 & 0x7F) - 112) <= 1u )
    {
      v62 = v43[12];
      v63 = v43[2] & 0xF;
    }
    else
    {
      v63 = 0;
      v62 = 0;
    }
    if ( (_BYTE)v42 == 1 && !v63 && !v62 )
      goto LABEL_113;
  }
  QuadPart = a1.QuadPart;
  v64 = Irp;
  StorpTelemetryCollectErrorData(v8, (__int64)Irp, a1, v6);
LABEL_115:
  if ( (*(_BYTE *)(QuadPart + 17) & 2) != 0 )
  {
    RaidUnitPoFxIdleComponentFromMiniport(v8, *(unsigned int *)(QuadPart + 748));
    *(_BYTE *)(QuadPart + 17) &= ~2u;
  }
  CurrentStackLocation = v64->Tail.Overlay.CurrentStackLocation;
  CompletionFilter = CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  CurrentStackLocation->Parameters.QueryDirectory.FileName = 0LL;
  v67 = CompletionFilter & 3;
  v68 = *(_QWORD *)(v8 + 24);
  if ( (v67 & 1) != 0
    && *(char *)(v8 + 449) < 0
    && ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v8 + 1736)) )
  {
    PoFxIdleComponent(**(_QWORD **)(v8 + 1744), 0LL, 0LL);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v8 + 1736));
  }
  if ( v67 >= 2u )
  {
    v69 = *(_QWORD **)(v68 + 5152);
    if ( v69 )
      PoFxIdleComponent(*v69, 0LL, 0LL);
  }
  HighestNodeNumber = KeQueryHighestNodeNumber();
  if ( v156 / *(_DWORD *)(v8 + 584) < HighestNodeNumber + 1 )
    HighestNodeNumber = v156 / *(_DWORD *)(v8 + 584);
  ExpInterlockedPushEntrySList(
    (PSLIST_HEADER)(*(_QWORD *)(v8 + 512) + ((unsigned __int64)HighestNodeNumber << 6)),
    (PSLIST_ENTRY)(*(_QWORD *)(v8 + 576) + 16LL * v156));
  v157 = 0;
  if ( (v153 & 0x102) != 0x102 && (v153 & 0x80010) == 0 )
  {
    if ( v152 > 0x20 || (v71 = 0x1000D0000LL, !_bittest64(&v71, v152)) )
      v157 = 1;
  }
  if ( (*(_BYTE *)(v8 + 450) & 2) != 0 && (unsigned __int8)RaidIsUnresponsiveBlockedCmd(v6) )
  {
    v73 = *(_BYTE *)(v6 + 2) == 40;
    *(_BYTE *)(v6 + 3) = 56;
    if ( v73 )
    {
      if ( !*(_DWORD *)(v6 + 20) )
      {
        v74 = *(_DWORD *)(v6 + 56);
        v75 = 0;
        if ( v74 )
        {
          while ( 1 )
          {
            v76 = *(unsigned int *)(v6 + 4LL * v75 + 120);
            if ( (unsigned int)v76 < 0x80 )
              goto LABEL_148;
            v77 = *(unsigned int *)(v6 + 16);
            if ( (unsigned int)v76 >= (unsigned int)v77 )
              goto LABEL_148;
            v78 = v76 + v6;
            v79 = (unsigned int)v76;
            v80 = *(_DWORD *)(v76 + v6) - 64;
            if ( !v80 )
              goto LABEL_146;
            v81 = v80 - 1;
            if ( v81 )
              break;
            v82 = v79 + 56;
LABEL_147:
            if ( v82 <= v77 )
            {
              *(_BYTE *)(v78 + 8) = 0;
              goto LABEL_153;
            }
LABEL_148:
            if ( ++v75 >= v74 )
              goto LABEL_153;
          }
          if ( v81 != 1 )
            goto LABEL_148;
LABEL_146:
          v82 = v79 + 40;
          goto LABEL_147;
        }
      }
    }
    else
    {
      *(_BYTE *)(v6 + 4) = 0;
    }
LABEL_153:
    _InterlockedIncrement64((volatile signed __int64 *)(v8 + 2080));
  }
  v83 = -1LL;
  if ( (*(_BYTE *)(v6 + 3) & 0x3F) == 1 )
  {
    v84 = 0;
    v154 = 0;
    if ( v161
      && *v161 == 29
      && (*(_BYTE *)(v6 + 2) != 40 ? (v85 = *(_BYTE **)(v6 + 24)) : (v85 = *(_BYTE **)(v6 + 64)), v85) )
    {
      v73 = MmIsAddressValid(v85) == 0;
      v86 = v158;
      if ( !v73 && v158 >= 9 && *v85 == 14 )
      {
        v84 = v85[8] == 15;
        v154 = v84;
      }
    }
    else
    {
      v86 = v158;
    }
    Irp->IoStatus.Information = v86;
    v87 = Irp->Tail.Overlay.CurrentStackLocation;
    Irp->IoStatus.Status = 0;
    v88 = v87->Parameters.Create.SecurityContext;
    v89 = BYTE2(v88->SecurityQos);
    if ( v89 == 40 )
      v90 = v88[4].SecurityQos;
    else
      v90 = v88[2].SecurityQos;
    v91 = *(_QWORD *)&v90[18].ContextTrackingMode;
    if ( v89 == 40 )
      v92 = v88[4].SecurityQos;
    else
      v92 = v88[2].SecurityQos;
    if ( (v92[1].ImpersonationLevel & 2) != 0 )
    {
      StorRemoveEventQueue(*(_QWORD *)(v91 + 504), &v92[4]);
      if ( StorEtwLoggingEnabled )
      {
        v173[0] = 0LL;
        v173[1] = 0LL;
        IoGetActivityIdIrp(Irp, v173);
        if ( byte_1C00617E2 < 0 )
          McTemplateK0dud(v94, v93, (unsigned int)v173, v95, 4);
      }
    }
    StorUnmapSenseInfo(v90, *(_QWORD *)(*(_QWORD *)(v91 + 24) + 8LL));
    v96 = *(_QWORD *)(v91 + 24);
    if ( *(_QWORD *)(v96 + 5768) )
      RaidAdapterReleaseCryptoKeyResources(v96, v90);
    if ( BYTE2(v88->SecurityQos) == 40 )
    {
      if ( (v90[1].ImpersonationLevel & 0x40) != 0 )
      {
        TranslateResultToScsiRequestBlock(*(_QWORD *)&v90[62].ContextTrackingMode, v88);
        *(_QWORD *)(*(_QWORD *)&v90[62].ContextTrackingMode + 48LL) = *(_QWORD *)&v90[14].ContextTrackingMode;
        *(_QWORD *)(*(_QWORD *)&v90[62].ContextTrackingMode + 24LL) = *(_QWORD *)&v90[15].ImpersonationLevel;
        *(_QWORD *)(*(_QWORD *)&v90[62].ContextTrackingMode + 56LL) = 0LL;
        *(_QWORD *)(*(_QWORD *)&v90[62].ContextTrackingMode + 40LL) = 0LL;
        Irp->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId = *(_QWORD *)&v90[62].ContextTrackingMode;
        LOBYTE(v90[1].ImpersonationLevel) &= ~0x40u;
        *(_QWORD *)&v90[62].ContextTrackingMode = 0LL;
      }
      else
      {
        v88[4].SecurityQos = 0LL;
        *(_QWORD *)&v88[2].DesiredAccess = *(_QWORD *)&v90[15].ImpersonationLevel;
        v88[4].AccessState = 0LL;
        v97 = *(_QWORD *)&v90[16].Length;
        if ( v97 )
        {
          BidirectionalData = RaidSrbExGetBidirectionalData(v88);
          if ( BidirectionalData )
            *(_QWORD *)(BidirectionalData + 16) = v97;
        }
        v84 = v154;
      }
    }
    else
    {
      v88[2].SecurityQos = *(_SECURITY_QUALITY_OF_SERVICE **)&v90[14].ContextTrackingMode;
      v88[1].SecurityQos = *(_SECURITY_QUALITY_OF_SERVICE **)&v90[15].ImpersonationLevel;
      v88[2].AccessState = 0LL;
      *(_QWORD *)&v88[1].DesiredAccess = 0LL;
    }
    if ( *(_QWORD *)&v90[9].ImpersonationLevel )
    {
      v99 = *(_QWORD *)&v90[14].Length;
      if ( *(_BYTE *)(v99 + 2) == 40 )
        v100 = *(_DWORD *)(v99 + 24) >> 6;
      else
        LOBYTE(v100) = *(_BYTE *)(v99 + 12) >> 6;
      v101 = (v100 & 1) == 0;
      if ( RaidVerifierEnabled )
        RaidFreeRemappedScatterGatherListMdl(v90);
      v102 = (__int64 *)(*(_QWORD *)&v90[18].Length + 720LL);
      if ( *(_QWORD *)&v90[18].Length != -720LL )
      {
        v103 = *v102;
        if ( *v102 )
        {
          v104 = *(_QWORD *)(v103 + 8);
          if ( v104 )
          {
            v105 = *(void (__fastcall **)(__int64, _QWORD, bool))(v104 + 96);
            if ( v105 )
              v105(v103, *(_QWORD *)&v90[9].ImpersonationLevel, v101);
          }
        }
      }
      v106 = *(_QWORD *)&v90[12].ContextTrackingMode;
      *(_QWORD *)&v90[9].ImpersonationLevel = 0LL;
      *(_QWORD *)&v90[12].Length = 0LL;
      if ( v106 )
      {
        RaidDmaPutScatterGatherList((__int64 *)(*(_QWORD *)&v90[18].Length + 720LL));
        *(_QWORD *)&v90[12].ContextTrackingMode = 0LL;
      }
    }
    v107 = *(_QWORD *)&v90[8].ContextTrackingMode;
    if ( v107 && (v90[1].ImpersonationLevel & 1) != 0 )
    {
      if ( (*(_BYTE *)(v107 + 10) & 2) != 0 )
      {
        MmUnlockPages((PMDL)v107);
        v107 = *(_QWORD *)&v90[8].ContextTrackingMode;
      }
      IoFreeMdl((PMDL)v107);
      LOBYTE(v90[1].ImpersonationLevel) &= ~1u;
      *(_QWORD *)&v90[8].ContextTrackingMode = 0LL;
    }
    v108 = *(struct _MDL **)&v90[11].ImpersonationLevel;
    if ( v108 )
    {
      MmUnlockPages(v108);
      IoFreeMdl(*(PMDL *)&v90[11].ImpersonationLevel);
      *(_QWORD *)&v90[11].ImpersonationLevel = 0LL;
    }
    v109 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
    v110 = *(_DWORD *)(v109 + *(_QWORD *)(v91 + 32));
    if ( (v110 & 1) != 0 )
    {
LABEL_209:
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v91 + 912), 0xFFFFFFFF) == 1 )
        KeSetEvent((PRKEVENT)(v91 + 464), 0, 0);
    }
    else
    {
      while ( 1 )
      {
        v111 = v110;
        v110 = _InterlockedCompareExchange((volatile signed __int32 *)(v109 + *(_QWORD *)(v91 + 32)), v110 - 2, v110);
        if ( v111 == v110 )
          break;
        if ( (v110 & 1) != 0 )
          goto LABEL_209;
      }
    }
    if ( v161 && *v161 == 59 && (v161[1] & 0x1F) == 0xF || v84 )
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
          Pool[1] = (PIO_WORKITEM)Irp;
          _InterlockedIncrement((volatile signed __int32 *)(v8 + 912));
          IoQueueWorkItem(*Pool, RaidUnitIdentityUpdateWorkRoutine, CriticalWorkQueue, Pool);
          v114 = 1;
          goto LABEL_285;
        }
        ExFreePoolWithTag(Pool, 0x49576152u);
      }
      IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(*(_QWORD *)(v8 + 24) + 32LL), BusRelations);
      goto LABEL_220;
    }
    v116 = v152;
    if ( *(_BYTE *)(v8 + 129) && v161 && !v152 )
    {
      if ( (*v161 == 37 || *v161 == 0x9E) && !*(_DWORD *)(v8 + 812) )
      {
        if ( *(_BYTE *)(v6 + 2) == 40 )
          v117 = *(_QWORD *)(v6 + 64);
        else
          v117 = *(_QWORD *)(v6 + 24);
        v118 = a1;
        if ( v117 && MmIsAddressValid(*(PVOID *)(a1.QuadPart + 184)) )
        {
          v119 = *(_BYTE **)(a1.QuadPart + 184);
          HIDWORD(v159) = 0;
          if ( *v161 == 37 )
          {
            HIBYTE(v151) = v119[4];
            BYTE2(v151) = v119[5];
            BYTE1(v151) = v119[6];
            LOBYTE(v151) = v119[7];
            BYTE3(v159) = *v119;
            BYTE2(v159) = v119[1];
            BYTE1(v159) = v119[2];
            v120 = v119[3];
          }
          else
          {
            HIBYTE(v151) = v119[8];
            BYTE2(v151) = v119[9];
            BYTE1(v151) = v119[10];
            LOBYTE(v151) = v119[11];
            HIBYTE(v159) = *v119;
            BYTE6(v159) = v119[1];
            BYTE5(v159) = v119[2];
            BYTE4(v159) = v119[3];
            BYTE3(v159) = v119[4];
            BYTE2(v159) = v119[5];
            BYTE1(v159) = v119[6];
            v120 = v119[7];
          }
          v121 = v151;
          LOBYTE(v159) = v120;
          if ( v151 )
          {
            if ( ((v151 - 1) & v151) != 0 )
            {
              do
                v121 &= v121 - 1;
              while ( ((v121 - 1) & v121) != 0 );
            }
          }
          else
          {
            v121 = 512;
          }
          *(_QWORD *)(v8 + 3304) = v159;
          *(_DWORD *)(v8 + 812) = v121;
LABEL_220:
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0 )
          {
            v115 = Irp;
          }
          else
          {
            v115 = Irp;
            if ( BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
              WPP_SF_qqD(
                WPP_GLOBAL_Control->AttachedDevice,
                24LL,
                &WPP_d11a79b88e3f3e003d260997dd6ff069_Traceguids,
                v8,
                Irp,
                Irp->IoStatus.Status);
          }
          if ( (qword_1C00612B0 & 0x10) != 0 )
            RaidLogRequestComplete(*(_QWORD *)(v8 + 24), v115, v6);
          RaidCompleteRequestEx(v115);
          v114 = 1;
          goto LABEL_285;
        }
      }
      else
      {
        v118 = a1;
      }
      v116 = v152;
    }
    else
    {
      v118 = a1;
    }
    if ( *(_BYTE *)(v8 + 129) && v161 && !v116 && *v161 == 0x95 && !v161[1] && *(_DWORD *)(v8 + 812) )
    {
      v122 = *(_BYTE *)(v6 + 2) == 40 ? *(_QWORD *)(v6 + 64) : *(_QWORD *)(v6 + 24);
      if ( v122 && MmIsAddressValid(*(PVOID *)(v118.QuadPart + 184)) )
      {
        v123 = *(_BYTE **)(v118.QuadPart + 184);
        v124 = *(unsigned int *)(v8 + 812);
        HIBYTE(v163) = v123[72];
        BYTE6(v163) = v123[73];
        BYTE5(v163) = v123[74];
        BYTE4(v163) = v123[75];
        BYTE3(v163) = v123[76];
        BYTE2(v163) = v123[77];
        BYTE1(v163) = v123[78];
        v125 = v123[79];
        v126 = *(_QWORD *)(v8 + 3256);
        LOBYTE(v163) = v125;
        v127 = v163 * (unsigned int)v124;
        if ( v126 != v127 )
        {
          *(_QWORD *)(v8 + 3256) = v127;
          v126 = v163 * (unsigned int)v124;
        }
        if ( v126 )
        {
          if ( !*(_QWORD *)(v8 + 3280) )
          {
            v133 = v124 * *(_QWORD *)(v8 + 3304) / v126;
            v134 = RaidAllocatePool(NonPagedPoolNx, (unsigned int)v133, 0x525A6152u, *(_QWORD *)(v8 + 8));
            *(_QWORD *)(v8 + 3280) = v134;
            if ( v134
              && (memset(v134, 0, (unsigned int)v133),
                  (v135 = (ULONG *)RaidAllocatePool(
                                     NonPagedPoolNx,
                                     ((_DWORD)v133 + 3) & 0xFFFFFFFC,
                                     0x525A6152u,
                                     *(_QWORD *)(v8 + 8))) != 0LL) )
            {
              RtlInitializeBitMap((PRTL_BITMAP)(v8 + 3288), v135, v133);
              RtlClearAllBits((PRTL_BITMAP)(v8 + 3288));
            }
            else
            {
              v136 = *(void **)(v8 + 3280);
              if ( v136 )
              {
                ExFreePoolWithTag(v136, 0x525A6152u);
                *(_QWORD *)(v8 + 3280) = 0LL;
              }
              *(_BYTE *)(v8 + 450) |= 0x20u;
              IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(v8 + 8));
            }
          }
        }
        else
        {
          v128 = *(_QWORD *)(v8 + 152);
          v129 = 0LL;
          if ( v128 )
          {
            v129 = (void *)(v128 + 90);
          }
          else
          {
            v131 = *(_QWORD *)(v8 + 144);
            if ( v131 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 24) + 544LL) + 184LL) & 0x40) != 0 )
              v129 = (void *)(v131 + 41);
          }
          if ( byte_1C00617E3 < 0 )
          {
            v132 = &unk_1C0054E5C;
            if ( v129 )
              v132 = v129;
            v130 = *(_DWORD *)(v8 + 96);
            McTemplateK0zqjuuussssx(
              v130 >> 8,
              *(_QWORD *)(v8 + 24) + 5256,
              v8 + 186,
              *(_QWORD *)(*(_QWORD *)(v8 + 24) + 4864LL),
              *(_DWORD *)(*(_QWORD *)(v8 + 24) + 56LL),
              *(_QWORD *)(v8 + 24) + 5256LL,
              v130,
              SBYTE1(v130),
              SBYTE2(v130),
              v8 + 160,
              v8 + 169,
              v8 + 186,
              (__int64)v132,
              0LL,
              v150);
          }
        }
      }
    }
    goto LABEL_220;
  }
  if ( *(_BYTE *)(v8 + 129) )
  {
    v137 = IsZonedWriteRequest(v8, 0LL, QuadPart, 0LL);
    v138 = *(_QWORD *)(v8 + 24);
    if ( v137 )
    {
      ++*(_DWORD *)(v138 + 5816);
      ++*(_DWORD *)(v8 + 2132);
    }
    else
    {
      ++*(_DWORD *)(v138 + 5820);
    }
  }
  v114 = RaUnitAsyncError(v8, QuadPart);
LABEL_285:
  if ( (v155 & 0x1C) != 0xC && v114 )
  {
    v139 = (unsigned __int8)StorRemoveIoGatewayItem((PKSPIN_LOCK)(*(_QWORD *)(v8 + 24) + 832LL));
    if ( v164 )
      (*(void (__fastcall **)(_QWORD, __int64, char *, _QWORD))(*(_QWORD *)(*(_QWORD *)(v164 + 64) + 32LL) + 648LL))(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v164 + 64) + 32LL) + 640LL),
        v164 - 120,
        v165,
        0LL);
    if ( v139 )
      RaidAdapterRestartQueues(*(_QWORD *)(v8 + 24), 0LL);
    v140 = *(_QWORD *)(v8 + 24);
    v141 = 0;
    if ( v140 )
    {
      v142 = *(_QWORD *)(v8 + 504);
      if ( v142 )
      {
        if ( *(_QWORD *)(v140 + 5064) )
        {
          for ( j = 0; j < *(_DWORD *)(v142 + 8); ++j )
          {
            v144 = (KSPIN_LOCK *)(v142 + ((j + 1LL) << 6));
            KeAcquireInStackQueuedSpinLock(v144 + 5, &v171);
            if ( (KSPIN_LOCK *)*v144 != v144 && *(_QWORD *)(*v144 + 40) < v83 )
              v83 = *(_QWORD *)(*v144 + 40);
            KeReleaseInStackQueuedSpinLock(&v171);
          }
          v145 = 0LL;
          if ( v83 != -1LL )
            v145 = v83;
          if ( v145 )
            v141 = KeQueryUnbiasedInterruptTime() - v145 > *(_QWORD *)(*(_QWORD *)(v8 + 24) + 5064LL);
        }
      }
    }
    v146 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v8 + 728));
    if ( !v157
      && !*(_DWORD *)(v8 + 688)
      && *(_DWORD *)(v8 + 696) == v157
      && *(_DWORD *)(v8 + 676) == v157
      && *(_DWORD *)(v8 + 672) == v157 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v8 + 732));
      ExReleaseSpinLockShared((PEX_SPIN_LOCK)(v8 + 728), v146);
    }
    else
    {
      ExReleaseSpinLockShared((PEX_SPIN_LOCK)(v8 + 728), v146);
      v147 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 728));
      RiDeleteDeviceQueueEntry(v8 + 656, v157);
      v148 = RiNormalizeDeviceQueue(v8 + 656, v141);
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 728), v147);
      if ( v148 )
      {
        if ( StorEtwLoggingEnabled )
        {
          if ( byte_1C00617E2 < 0 )
          {
            v174[0] = 0LL;
            v174[1] = 0LL;
            IoGetActivityIdIrp(v148 - 120, v174);
            if ( byte_1C00617E2 < 0 )
              McTemplateK0pquuqqd(
                *(_DWORD *)(v8 + 672) + *(_DWORD *)(v8 + 676),
                ((*(_BYTE *)(v148 + 22) & 6) != 0) + 1,
                (unsigned int)v174,
                v8 + 656,
                ((*(_BYTE *)(v148 + 22) & 6) != 0) + 1,
                5,
                0,
                *(_BYTE *)(v8 + 672) + *(_BYTE *)(v8 + 676),
                *(_DWORD *)(v8 + 732));
          }
        }
        if ( !(unsigned __int8)StorSubmitIoGatewayItem(*(PKSPIN_LOCK *)(v8 + 664)) )
          (*(void (__fastcall **)(_QWORD, __int64, _BYTE *, _QWORD))(v8 + 648))(
            *(_QWORD *)(v8 + 640),
            v148 - 120,
            v170,
            0LL);
      }
      if ( v157 )
      {
        for ( k = RaidNormalizeDeviceQueue(v8 + 656); k; k = RaidNormalizeDeviceQueue(v8 + 656) )
        {
          if ( !(unsigned __int8)StorSubmitIoGatewayItem(*(PKSPIN_LOCK *)(v8 + 664)) )
            (*(void (__fastcall **)(_QWORD, __int64, _BYTE *, _QWORD))(v8 + 648))(
              *(_QWORD *)(v8 + 640),
              k - 120,
              v170,
              0LL);
        }
      }
    }
  }
}
