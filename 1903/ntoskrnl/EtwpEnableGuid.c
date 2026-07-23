/*
 * XREFs of EtwpEnableGuid @ 0x140664144
 * Callers:
 *     NtTraceControl @ 0x1406865C0 (NtTraceControl.c)
 *     EtwpEnableTrace @ 0x140717604 (EtwpEnableTrace.c)
 * Callees:
 *     MmGetSessionById @ 0x1400023F0 (MmGetSessionById.c)
 *     PsGetProcessId @ 0x1400045E0 (PsGetProcessId.c)
 *     PsGetProcessServerSilo @ 0x140006520 (PsGetProcessServerSilo.c)
 *     PsGetCurrentThreadProcessId @ 0x140036B70 (PsGetCurrentThreadProcessId.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 *     KeEnterCriticalRegion @ 0x140043920 (KeEnterCriticalRegion.c)
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
 *     MmDetachSession @ 0x14008BB30 (MmDetachSession.c)
 *     MmAttachSession @ 0x14008BBD0 (MmAttachSession.c)
 *     PsDetachSiloFromCurrentThread @ 0x14008BD60 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14008BD80 (PsAttachSiloToCurrentThread.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     EtwpReleaseLoggerContext @ 0x1405C4F00 (EtwpReleaseLoggerContext.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405D408C (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405D4180 (EtwpFindGuidEntryByGuid.c)
 *     EtwpBuildNotificationPacket @ 0x140663208 (EtwpBuildNotificationPacket.c)
 *     EtwpAllocDataBlock @ 0x140663284 (EtwpAllocDataBlock.c)
 *     EtwpFreeFilterInfo @ 0x140664BB4 (EtwpFreeFilterInfo.c)
 *     EtwpValidateEnableNotification @ 0x140664C48 (EtwpValidateEnableNotification.c)
 *     EtwpEnableDisableSpecialGuids @ 0x140664DC8 (EtwpEnableDisableSpecialGuids.c)
 *     EtwpUpdateGuidEnableInfo @ 0x140664ED4 (EtwpUpdateGuidEnableInfo.c)
 *     EtwpIsRegEntryAllowed @ 0x140665A9C (EtwpIsRegEntryAllowed.c)
 *     EtwpSendDataBlock @ 0x140666224 (EtwpSendDataBlock.c)
 *     EtwpCalculateUpdateNotification @ 0x140666718 (EtwpCalculateUpdateNotification.c)
 *     EtwpUpdateRegEntryEnableMask @ 0x1406668F8 (EtwpUpdateRegEntryEnableMask.c)
 *     EtwpAddGuidEntry @ 0x1406669DC (EtwpAddGuidEntry.c)
 *     EtwpUnreferenceDataBlock @ 0x140666F2C (EtwpUnreferenceDataBlock.c)
 *     EtwpCreateUmReplyObject @ 0x1406CD3F4 (EtwpCreateUmReplyObject.c)
 *     EtwpProviderArrivalCallback @ 0x140734520 (EtwpProviderArrivalCallback.c)
 *     EtwpAcquireTokenAccessInformation @ 0x1408F1EAC (EtwpAcquireTokenAccessInformation.c)
 *     EtwpReferenceStackLookasideList @ 0x1408F3A0C (EtwpReferenceStackLookasideList.c)
 *     EtwpEventWriteProviderEnabled @ 0x1408F7788 (EtwpEventWriteProviderEnabled.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x1408F7B24 (EtwpEventWriteTemplateSessAndProv.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x1408FCB1C (EtwpDemuxPrivateTraceHandle.c)
 */

__int64 __fastcall EtwpEnableGuid(__int64 a1, __int64 a2, char a3)
{
  int v3; // r12d
  __int64 v7; // rsi
  int v8; // r8d
  _WORD *v9; // r15
  int updated; // ebx
  unsigned int v11; // ebx
  unsigned int v12; // r13d
  __int64 v13; // rax
  __int64 v14; // r10
  _BYTE *v15; // r9
  _BYTE *v16; // r8
  _DWORD *v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  int CurrentThreadProcessId; // eax
  char v21; // bl
  GUID *v22; // rdx
  bool v23; // zf
  _QWORD *GuidEntryByGuid; // rax
  unsigned int *v25; // r14
  __int16 v27; // ax
  char v28; // r15
  char v29; // dl
  __int16 v30; // cx
  __int64 v31; // rax
  signed __int32 v32; // eax
  __int64 v33; // rcx
  signed __int32 v34; // ett
  size_t v35; // rcx
  int v36; // eax
  int v37; // ebx
  _DWORD *v38; // rdx
  _WORD *v39; // r12
  unsigned __int8 i; // cl
  void *v41; // rbx
  __int64 v42; // rcx
  __int64 v43; // r13
  _QWORD *v44; // rax
  _QWORD *v45; // r13
  int v46; // r8d
  int v47; // r9d
  char v48; // bl
  unsigned int v49; // r15d
  int v50; // r9d
  int v51; // edx
  int v52; // r8d
  char v53; // al
  _WORD *v54; // r12
  __int16 v55; // r12
  void *v56; // rbx
  ULONG_PTR SessionById; // rax
  void *v58; // rdx
  int v59; // eax
  __int64 v60; // rbx
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rax
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  struct _LIST_ENTRY *v65; // rbx
  __int64 v66; // rdx
  unsigned int ProcessId; // eax
  __int16 v68; // bx
  int v69; // ecx
  unsigned int v70; // r13d
  const EVENT_DESCRIPTOR *v71; // r12
  int v72; // ecx
  __int64 v73; // r8
  unsigned __int8 v74; // [rsp+50h] [rbp-B0h]
  char v75; // [rsp+51h] [rbp-AFh]
  char v76; // [rsp+52h] [rbp-AEh]
  _BYTE v77[13]; // [rsp+53h] [rbp-ADh] BYREF
  unsigned int *v78; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v79; // [rsp+68h] [rbp-98h]
  void *v80; // [rsp+70h] [rbp-90h]
  void *Src; // [rsp+78h] [rbp-88h] BYREF
  __int16 v82[2]; // [rsp+80h] [rbp-80h] BYREF
  int v83; // [rsp+84h] [rbp-7Ch]
  int v84; // [rsp+88h] [rbp-78h]
  int v85; // [rsp+8Ch] [rbp-74h]
  _WORD *v86; // [rsp+90h] [rbp-70h]
  _QWORD *v87; // [rsp+98h] [rbp-68h]
  __int64 v88; // [rsp+A0h] [rbp-60h]
  PVOID Object; // [rsp+A8h] [rbp-58h]
  _QWORD v90[2]; // [rsp+B0h] [rbp-50h] BYREF
  int v91; // [rsp+C0h] [rbp-40h]
  __int64 v92; // [rsp+C8h] [rbp-38h]
  __int64 v93; // [rsp+D0h] [rbp-30h] BYREF
  _WORD *v94; // [rsp+D8h] [rbp-28h]
  _WORD *v95; // [rsp+E0h] [rbp-20h]
  unsigned int *v96; // [rsp+E8h] [rbp-18h]
  _QWORD *v97; // [rsp+F0h] [rbp-10h]
  _BYTE v98[96]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v99[48]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v100[48]; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v101[4]; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE v102[8]; // [rsp+1C4h] [rbp+C4h] BYREF
  int v103; // [rsp+1CCh] [rbp+CCh]

  v3 = *(_DWORD *)(a2 + 80) & 0x20;
  v93 = 0LL;
  Object = 0LL;
  v85 = 0;
  v76 = 0;
  LOBYTE(v84) = 0;
  v74 = v3 != 0 ? 2 : 0;
  *(_WORD *)v77 = 0;
  v83 = v3;
  v7 = 0LL;
  memset(v98, 0, 0x58uLL);
  *(_QWORD *)&v77[5] = 0LL;
  v90[0] = 0LL;
  v90[1] = 0LL;
  LOBYTE(v8) = a3;
  v91 = 0;
  Src = 0LL;
  v9 = 0LL;
  updated = EtwpValidateEnableNotification(a1, a2, v8, (unsigned int)v90, (__int64)&v78, (__int64)v98);
  if ( updated < 0 )
    goto LABEL_16;
  v11 = *(_DWORD *)(a2 + 116);
  v12 = *(_DWORD *)(a2 + 72);
  v79 = v12;
  if ( v11 - 1 > 1 )
  {
    v11 = 0;
    v103 = 0;
  }
  else
  {
    v13 = a2 + 120;
    if ( v11 )
    {
      v14 = v11;
      v15 = &v102[-v13];
      v16 = &v101[-v13];
      v17 = (_DWORD *)(a2 + 128);
      do
      {
        v18 = a2 + *((_QWORD *)v17 - 1);
        *(_DWORD *)((char *)v17 + (_QWORD)v15) = v17[1];
        v19 = *v17;
        *(_QWORD *)((char *)v17 + (_QWORD)v16 - 8) = v18;
        *(_DWORD *)((char *)v17 + (_QWORD)v16) = v19;
        v17 += 4;
        --v14;
      }
      while ( v14 );
    }
  }
  if ( !v3 )
  {
    KeEnterCriticalRegion();
    updated = EtwpEnableDisableSpecialGuids(
                a1,
                (int)a2 + 40,
                *(unsigned __int16 *)(a2 + 78),
                v12,
                *(_DWORD *)(a2 + 88),
                (__int64)v101,
                v11,
                (__int64)&v77[2]);
    KeLeaveCriticalRegion();
    if ( v77[2] )
      goto LABEL_16;
  }
  if ( (*(_WORD *)(a2 + 78) & 0xFFFD) == 0 )
  {
    v25 = v78;
    updated = -1073741790;
    goto LABEL_142;
  }
  CurrentThreadProcessId = PsGetCurrentThreadProcessId();
  v21 = BYTE2(v91);
  v22 = (GUID *)&PrivateLoggerNotificationGuid;
  v23 = BYTE2(v91) == 0;
  *(_DWORD *)(a2 + 36) = CurrentThreadProcessId;
  if ( v23 )
    v22 = (GUID *)(a2 + 40);
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, v22, v74);
  v7 = (__int64)GuidEntryByGuid;
  if ( GuidEntryByGuid )
  {
    if ( v12 == 1 )
    {
      v27 = *((_WORD *)GuidEntryByGuid + 44);
      if ( v27 )
      {
        if ( !v3
          && *(_WORD *)(a2 + 78) != v27
          && *(_QWORD *)(v7 + 40) == 0x4719A4EB910C653DLL
          && *(_QWORD *)(v7 + 48) == 0x91ECBAE3884509B9uLL )
        {
          updated = -1073741053;
          goto LABEL_16;
        }
      }
    }
  }
  else
  {
    if ( v21 || v12 != 1 )
    {
      updated = -1073741163;
      v7 = 0LL;
LABEL_16:
      v25 = v78;
      goto LABEL_17;
    }
    v7 = EtwpAddGuidEntry(a1, a2 + 40, v74);
    if ( !v7 )
    {
      updated = -1073741801;
      goto LABEL_16;
    }
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v7 + 408, 0LL);
  v25 = v78;
  v28 = 1;
  *(_QWORD *)(v7 + 416) = KeGetCurrentThread();
  v77[1] = 1;
  if ( v25 && (v25[208] & 0x40) != 0 )
  {
    updated = -1073741162;
    goto LABEL_148;
  }
  if ( v3 )
  {
    updated = EtwpAcquireTokenAccessInformation(v25);
    if ( updated )
    {
LABEL_148:
      *(_QWORD *)(v7 + 416) = 0LL;
      ExReleasePushLockEx(v7 + 408, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_17;
    }
  }
  v29 = BYTE2(v91);
  *(_DWORD *)(a2 + 112) = v12;
  v30 = *(_WORD *)(a2 + 78);
  *(_WORD *)(a2 + 104) = v30;
  *(_BYTE *)(a2 + 106) = *(_BYTE *)(a2 + 76);
  *(_DWORD *)(a2 + 108) = *(_DWORD *)(a2 + 88);
  v31 = *(_QWORD *)(a2 + 88);
  if ( v29 )
  {
    *(_BYTE *)(a2 + 107) = 1;
    *(_WORD *)(a2 + 104) = v30 & 0x7FFF;
  }
  if ( !v31 )
    *(_QWORD *)(a2 + 88) = -1LL;
  if ( !*(_BYTE *)(a2 + 76) )
    *(_BYTE *)(a2 + 76) = -1;
  if ( v12 != 2 && !v29 )
  {
    updated = EtwpUpdateGuidEnableInfo(v7, (__int64)v77);
    if ( updated < 0 )
      goto LABEL_148;
    *(_OWORD *)(a2 + 72) = *(_OWORD *)(v7 + 96);
    *(_OWORD *)(a2 + 88) = *(_OWORD *)(v7 + 112);
    if ( (*(_DWORD *)(a2 + 80) & 4) != 0 )
    {
      _m_prefetchw(v25 + 208);
      v32 = v25[208];
      do
      {
        v33 = v32 | 0x2000u;
        v34 = v32;
        v32 = _InterlockedCompareExchange((volatile signed __int32 *)v25 + 208, v33, v32);
      }
      while ( v34 != v32 );
      if ( (v32 & 0x2000) == 0 )
        EtwpReferenceStackLookasideList(v33, 0x2000LL);
      v25 = v78;
    }
  }
  if ( *(_QWORD *)(v7 + 56) == v7 + 56 && (*(_QWORD *)(v7 + 400) || *(_QWORD *)(v7 + 16) == v7 + 16) )
  {
    updated = 0;
    goto LABEL_148;
  }
  if ( *(_BYTE *)(a2 + 12) )
  {
    updated = EtwpCreateUmReplyObject(v7, (__int64)&v93);
    if ( updated < 0 )
      goto LABEL_148;
    *(_QWORD *)(a2 + 24) = Object;
  }
  if ( (int)EtwpBuildNotificationPacket(v7, (_OWORD *)a2, 0xFFu, &Src) < 0 )
  {
    updated = -1073741801;
    goto LABEL_145;
  }
  v35 = *((unsigned int *)Src + 1);
  v96 = (unsigned int *)((char *)Src + 4);
  v36 = EtwpAllocDataBlock(v35, Src, &v77[5]);
  v9 = *(_WORD **)&v77[5];
  if ( v36 < 0 )
    goto LABEL_64;
  v37 = v84;
  v38 = (_DWORD *)(v7 + 128);
  v39 = *(_WORD **)&v77[5];
  v86 = *(_WORD **)&v77[5];
  for ( i = 0; i < 8u; ++i )
  {
    if ( *v38 )
      v37 = (unsigned __int8)v37 | (1 << i);
    v38 += 8;
  }
  v84 = v37;
  v41 = Src;
  v75 = 0;
  v88 = 0LL;
  if ( !*(_QWORD *)(v7 + 400) )
  {
    v42 = *(_QWORD *)(v7 + 16);
    if ( v42 != v7 + 16 )
      v88 = v42 - 16;
  }
  v43 = v7;
  v92 = v7;
  while ( 1 )
  {
    v44 = *(_QWORD **)(v43 + 56);
    v97 = (_QWORD *)(v43 + 56);
    v87 = v44;
    if ( v44 != (_QWORD *)(v43 + 56) )
      break;
LABEL_116:
    if ( v43 != v7 )
    {
      *(_QWORD *)(v43 + 416) = 0LL;
      ExReleasePushLockEx(v43 + 408, 0LL);
      KeLeaveCriticalRegion();
    }
    v60 = v88;
    if ( !v88 )
    {
      updated = 0;
      v69 = v85;
      *(_QWORD *)(a2 + 24) = v93;
      *(_DWORD *)(a2 + 20) = v69;
      if ( v25 )
      {
        v70 = v79;
        if ( v79 <= 1 )
        {
          v71 = (const EVENT_DESCRIPTOR *)&ETW_EVENT_PROVIDER_ENABLED;
          if ( v79 != 1 )
            v71 = &ETW_EVENT_PROVIDER_DISABLED;
          if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, v71) )
          {
            if ( v70 == 1 )
              EtwpEventWriteProviderEnabled(
                v72,
                (_DWORD)v71,
                v73,
                (_DWORD)v25 + 152,
                a2 + 40,
                *(_QWORD *)(a2 + 88),
                *(_QWORD *)(a2 + 96),
                *(_DWORD *)(a2 + 80),
                *(_BYTE *)(a2 + 76));
            else
              EtwpEventWriteTemplateSessAndProv(a2 + 40, v71, v73, 2LL, v25 + 38, a2 + 40);
          }
        }
      }
      goto LABEL_142;
    }
    v75 = 1;
    v43 = v88;
    v92 = v88;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v60 + 408, 0LL);
    v9 = *(_WORD **)&v77[5];
    v61 = 0LL;
    v25 = v78;
    *(_QWORD *)(v60 + 416) = KeGetCurrentThread();
    v62 = *(_QWORD *)(v60 + 16);
    v41 = Src;
    v63 = v62 - 16;
    if ( v63 != v7 )
      v61 = v63;
    v88 = v61;
  }
  while ( 1 )
  {
    v95 = v39;
    v94 = v39;
    if ( v83 )
    {
      v45 = v44 - 2;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v45[4] + 408LL, 0LL);
      v9 = *(_WORD **)&v77[5];
      v25 = v78;
      v41 = Src;
      *(_QWORD *)(v45[4] + 416LL) = KeGetCurrentThread();
      v44 = v87;
      v76 = 1;
    }
    else
    {
      v45 = v44;
    }
    v87 = (_QWORD *)*v44;
    if ( !(unsigned __int8)EtwpIsRegEntryAllowed(
                             (_DWORD)v45,
                             (_DWORD)v25,
                             (unsigned int)v90,
                             a2,
                             (__int64)v98,
                             v75,
                             v74) )
      goto LABEL_112;
    v80 = v41;
    if ( BYTE2(v91) )
      break;
    if ( v79 != 2 )
    {
      if ( v75 )
      {
        if ( v83 )
          v48 = *((_BYTE *)v45 + 103);
        else
          v48 = *((_BYTE *)v45 + 102);
      }
      else if ( v83 )
      {
        v48 = *((_BYTE *)v45 + 101);
      }
      else
      {
        v48 = *((_BYTE *)v45 + 100);
      }
      v49 = v79;
      LOBYTE(v47) = v74;
      LOBYTE(v46) = v77[0];
      EtwpUpdateRegEntryEnableMask((_DWORD)v45, (_DWORD)v25, v46, v47, v75, v79);
      LOBYTE(v50) = v84;
      LOBYTE(v51) = v77[0];
      LOBYTE(v52) = v48;
      v53 = EtwpCalculateUpdateNotification((_DWORD)v45, v51, v52, v50, v74, v75, v49, (__int64)&v77[5]);
      v9 = *(_WORD **)&v77[5];
      if ( !v53 )
      {
        if ( !*(_QWORD *)&v77[5] )
        {
          v9 = v39;
          *(_QWORD *)&v77[5] = v39;
        }
        goto LABEL_112;
      }
      if ( *(_QWORD *)&v77[5] )
      {
        v80 = *(void **)&v77[5];
        if ( *(_WORD **)&v77[5] != v39 )
          EtwpUnreferenceDataBlock(v39);
        v54 = v9;
        if ( v9 == v94 )
          v54 = v95;
        v86 = v54;
      }
      else
      {
        v9 = v39;
        *(_QWORD *)&v77[5] = v39;
      }
    }
    if ( v79 - 1 > 1 )
      goto LABEL_108;
    v55 = *((_WORD *)v45 + 49);
    if ( (v55 & 8) == 0 && (v55 & 0x20) == 0 && (v25[208] & 0x2000000) == 0 )
      goto LABEL_108;
    if ( (v55 & 1) == 0 )
    {
      if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v45[10] + 768LL)) )
      {
        memset(v100, 0, sizeof(v100));
        ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo(v45[10]);
        v65 = PsAttachSiloToCurrentThread(ProcessServerSilo);
        KiStackAttachProcess((_KPROCESS *)v45[10], 0, (__int64)v100);
        LOBYTE(v66) = 1;
        EtwpProviderArrivalCallback(v25, v66, v45);
        KiUnstackDetachProcess((struct _KTHREAD *)v100, 0);
        PsDetachSiloFromCurrentThread(v65);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v45[10] + 768LL));
      }
      goto LABEL_108;
    }
    memset(v99, 0, sizeof(v99));
    v56 = 0LL;
    if ( (v55 & 0x10) == 0 )
      goto LABEL_122;
    SessionById = MmGetSessionById(*((_DWORD *)v45 + 14));
    v56 = (void *)SessionById;
    if ( SessionById )
    {
      if ( (int)MmAttachSession(SessionById) >= 0 )
      {
LABEL_122:
        EtwpProviderArrivalCallback(v25, 0LL, v45);
        if ( !v56 )
          goto LABEL_108;
        MmDetachSession((__int64)v56, (__int64)v99);
      }
      ObfDereferenceObject(v56);
    }
LABEL_108:
    v58 = v80;
LABEL_109:
    v59 = EtwpSendDataBlock(v45, v58);
    v39 = v86;
    if ( v59 >= 0 && (*((_BYTE *)v45 + 98) & 2) != 0 )
      ++v85;
LABEL_112:
    if ( v76 )
    {
      *(_QWORD *)(v45[4] + 416LL) = 0LL;
      ExReleasePushLockEx(v45[4] + 408LL, 0LL);
      KeLeaveCriticalRegion();
      v76 = 0;
    }
    v44 = v87;
    if ( v87 == v97 )
    {
      v43 = v92;
      goto LABEL_116;
    }
    v41 = Src;
  }
  ProcessId = (unsigned int)PsGetProcessId((PEPROCESS)v45[10]);
  if ( (unsigned int)EtwpDemuxPrivateTraceHandle(ProcessId, *(_WORD *)(a2 + 78) & 0x7FFF, v82) )
    goto LABEL_112;
  v68 = v82[0];
  if ( v82[0] == v9[39] )
    goto LABEL_130;
  if ( (int)EtwpAllocDataBlock(*v96, Src, &v77[5]) >= 0 )
  {
    EtwpUnreferenceDataBlock(v39);
    v9 = *(_WORD **)&v77[5];
    v86 = *(_WORD **)&v77[5];
    *(_WORD *)(*(_QWORD *)&v77[5] + 78LL) = v68 | 0x8000;
    v9[52] = v68;
LABEL_130:
    v58 = v9;
    goto LABEL_109;
  }
  v9 = v39;
  if ( v76 )
  {
    *(_QWORD *)(v45[4] + 416LL) = 0LL;
    ExReleasePushLockEx(v45[4] + 408LL, 0LL);
    KeLeaveCriticalRegion();
  }
LABEL_64:
  updated = -1073741801;
LABEL_142:
  if ( v9 )
    EtwpUnreferenceDataBlock(v9);
  v28 = v77[1];
LABEL_145:
  if ( Src )
    EtwpUnreferenceDataBlock(Src);
  if ( v28 == 1 )
    goto LABEL_148;
LABEL_17:
  if ( v25 )
    EtwpReleaseLoggerContext(v25, 0);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v7 )
    EtwpUnreferenceGuidEntry((__int64 *)v7);
  EtwpFreeFilterInfo(v98);
  return (unsigned int)updated;
}
