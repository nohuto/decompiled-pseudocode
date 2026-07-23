/*
 * XREFs of EtwpEnableGuid @ 0x1406570F8
 * Callers:
 *     NtTraceControl @ 0x1405C3F40 (NtTraceControl.c)
 *     EtwpEnableTrace @ 0x1407190F4 (EtwpEnableTrace.c)
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x14000FBB0 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14000FBD0 (PsAttachSiloToCurrentThread.c)
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     PsGetCurrentThreadProcessId @ 0x14004D240 (PsGetCurrentThreadProcessId.c)
 *     PsGetProcessServerSilo @ 0x14004D260 (PsGetProcessServerSilo.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     MmGetSessionById @ 0x14007E4D0 (MmGetSessionById.c)
 *     PsGetProcessId @ 0x1400A5650 (PsGetProcessId.c)
 *     KeEnterCriticalRegion @ 0x1400B9B40 (KeEnterCriticalRegion.c)
 *     MmDetachSession @ 0x14011A630 (MmDetachSession.c)
 *     MmAttachSession @ 0x14011A6C0 (MmAttachSession.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     EtwpSendDataBlock @ 0x1405C139C (EtwpSendDataBlock.c)
 *     EtwpAddGuidEntry @ 0x1405C1A0C (EtwpAddGuidEntry.c)
 *     EtwpUnreferenceDataBlock @ 0x1405C1D74 (EtwpUnreferenceDataBlock.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405C5098 (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405C5190 (EtwpFindGuidEntryByGuid.c)
 *     EtwpReleaseLoggerContext @ 0x1405C6160 (EtwpReleaseLoggerContext.c)
 *     EtwpFreeFilterInfo @ 0x140657B3C (EtwpFreeFilterInfo.c)
 *     EtwpValidateEnableNotification @ 0x140657BD0 (EtwpValidateEnableNotification.c)
 *     EtwpEnableDisableSpecialGuids @ 0x140657D50 (EtwpEnableDisableSpecialGuids.c)
 *     EtwpUpdateGuidEnableInfo @ 0x140657F14 (EtwpUpdateGuidEnableInfo.c)
 *     EtwpIsRegEntryAllowed @ 0x140658A84 (EtwpIsRegEntryAllowed.c)
 *     EtwpCalculateUpdateNotification @ 0x140658BC8 (EtwpCalculateUpdateNotification.c)
 *     EtwpUpdateRegEntryEnableMask @ 0x140658DA8 (EtwpUpdateRegEntryEnableMask.c)
 *     EtwpBuildNotificationPacket @ 0x140659E08 (EtwpBuildNotificationPacket.c)
 *     EtwpAllocDataBlock @ 0x140659E84 (EtwpAllocDataBlock.c)
 *     EtwpCreateUmReplyObject @ 0x1406A7578 (EtwpCreateUmReplyObject.c)
 *     EtwpProviderArrivalCallback @ 0x14070B344 (EtwpProviderArrivalCallback.c)
 *     EtwpAcquireTokenAccessInformation @ 0x1408B62BC (EtwpAcquireTokenAccessInformation.c)
 *     EtwpReferenceStackLookasideList @ 0x1408B8328 (EtwpReferenceStackLookasideList.c)
 *     EtwpEventWriteProviderEnabled @ 0x1408BBEB4 (EtwpEventWriteProviderEnabled.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x1408BC250 (EtwpEventWriteTemplateSessAndProv.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x1408C0FBC (EtwpDemuxPrivateTraceHandle.c)
 */

__int64 __fastcall EtwpEnableGuid(__int64 a1, __int64 a2, char a3)
{
  int v3; // r14d
  __int64 *v7; // rdi
  int v8; // r8d
  __int64 v9; // r15
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
  __int64 *GuidEntryByGuid; // rax
  unsigned int *v25; // r14
  __int16 v27; // ax
  char v28; // r15
  char v29; // dl
  __int16 v30; // cx
  __int64 v31; // r8
  signed __int32 v32; // eax
  __int64 v33; // rcx
  signed __int32 v34; // ett
  size_t v35; // rcx
  int v36; // eax
  int v37; // ebx
  _DWORD *v38; // rdx
  __int64 v39; // r12
  unsigned __int8 i; // cl
  void *v41; // rbx
  __int64 *v42; // rcx
  __int64 *v43; // r13
  __int64 *v44; // rax
  __int64 v45; // r13
  __int64 v46; // r8
  int v47; // r9d
  unsigned int v48; // eax
  char v49; // bl
  unsigned int v50; // r15d
  int v51; // r9d
  int v52; // edx
  int v53; // r8d
  char v54; // al
  __int16 v55; // cx
  _KPROCESS *v56; // rbx
  _KPROCESS *SessionById; // rax
  __int64 v58; // rdx
  __int64 *v59; // rbx
  __int64 *v60; // rcx
  __int64 v61; // rax
  __int64 *v62; // rax
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  struct _LIST_ENTRY *v64; // rbx
  __int64 v65; // rdx
  unsigned int ProcessId; // eax
  __int16 v67; // bx
  int v68; // ecx
  unsigned int v69; // r13d
  const EVENT_DESCRIPTOR *v70; // r12
  __int64 v71; // r8
  __int64 v72; // rcx
  unsigned __int8 v73; // [rsp+50h] [rbp-B0h]
  char v74; // [rsp+51h] [rbp-AFh]
  char v75; // [rsp+52h] [rbp-AEh]
  _BYTE v76[13]; // [rsp+53h] [rbp-ADh] BYREF
  int v77; // [rsp+60h] [rbp-A0h]
  unsigned int v78; // [rsp+64h] [rbp-9Ch]
  unsigned int *v79; // [rsp+68h] [rbp-98h] BYREF
  __int64 v80; // [rsp+70h] [rbp-90h]
  void *Src; // [rsp+78h] [rbp-88h] BYREF
  __int16 v82[2]; // [rsp+80h] [rbp-80h] BYREF
  int v83; // [rsp+84h] [rbp-7Ch]
  int v84; // [rsp+88h] [rbp-78h]
  __int64 *v85; // [rsp+90h] [rbp-70h]
  __int64 *v86; // [rsp+98h] [rbp-68h]
  PVOID Object; // [rsp+A0h] [rbp-60h]
  _QWORD v88[2]; // [rsp+A8h] [rbp-58h] BYREF
  int v89; // [rsp+B8h] [rbp-48h]
  __int64 *v90; // [rsp+C0h] [rbp-40h]
  __int64 v91; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v92; // [rsp+D0h] [rbp-30h]
  __int64 v93; // [rsp+D8h] [rbp-28h]
  unsigned int *v94; // [rsp+E0h] [rbp-20h]
  __int64 *v95; // [rsp+E8h] [rbp-18h]
  _BYTE v96[96]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v97[48]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v98[48]; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v99[4]; // [rsp+1B0h] [rbp+B0h] BYREF
  _BYTE v100[8]; // [rsp+1B4h] [rbp+B4h] BYREF
  int v101; // [rsp+1BCh] [rbp+BCh]

  v3 = *(_DWORD *)(a2 + 80) & 0x20;
  v91 = 0LL;
  Object = 0LL;
  v84 = 0;
  v75 = 0;
  LOBYTE(v83) = 0;
  v73 = v3 != 0 ? 2 : 0;
  *(_WORD *)v76 = 0;
  v77 = v3;
  v7 = 0LL;
  memset(v96, 0, 0x58uLL);
  *(_QWORD *)&v76[5] = 0LL;
  v88[0] = 0LL;
  v88[1] = 0LL;
  LOBYTE(v8) = a3;
  v89 = 0;
  Src = 0LL;
  v9 = 0LL;
  updated = EtwpValidateEnableNotification(a1, a2, v8, (unsigned int)v88, (__int64)&v79, (__int64)v96);
  if ( updated < 0 )
    goto LABEL_16;
  v11 = *(_DWORD *)(a2 + 116);
  v12 = *(_DWORD *)(a2 + 72);
  v78 = v12;
  if ( v11 - 1 > 1 )
  {
    v11 = 0;
    v101 = 0;
  }
  else
  {
    v13 = a2 + 120;
    if ( v11 )
    {
      v14 = v11;
      v15 = &v100[-v13];
      v16 = &v99[-v13];
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
                (__int64)v99,
                v11,
                (__int64)&v76[2]);
    KeLeaveCriticalRegion();
    if ( v76[2] )
      goto LABEL_16;
  }
  if ( (*(_WORD *)(a2 + 78) & 0xFFFD) == 0 )
  {
    v25 = v79;
    updated = -1073741790;
    goto LABEL_143;
  }
  CurrentThreadProcessId = PsGetCurrentThreadProcessId();
  v21 = BYTE2(v89);
  v22 = (GUID *)&PrivateLoggerNotificationGuid;
  v23 = BYTE2(v89) == 0;
  *(_DWORD *)(a2 + 36) = CurrentThreadProcessId;
  if ( v23 )
    v22 = (GUID *)(a2 + 40);
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, v22, v73);
  v7 = GuidEntryByGuid;
  if ( GuidEntryByGuid )
  {
    if ( v12 == 1 )
    {
      v27 = *((_WORD *)GuidEntryByGuid + 44);
      if ( v27 )
      {
        if ( !v77 && *(_WORD *)(a2 + 78) != v27 && v7[5] == 0x4719A4EB910C653DLL && v7[6] == 0x91ECBAE3884509B9uLL )
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
      v25 = v79;
      goto LABEL_17;
    }
    v7 = EtwpAddGuidEntry(a1, (_DWORD *)(a2 + 40), v73);
    if ( !v7 )
    {
      updated = -1073741801;
      goto LABEL_16;
    }
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v7 + 51), 0LL);
  v25 = v79;
  v28 = 1;
  v7[52] = (__int64)KeGetCurrentThread();
  v76[1] = 1;
  if ( v25 && (v25[208] & 0x40) != 0 )
  {
    updated = -1073741162;
    goto LABEL_149;
  }
  if ( v77 )
  {
    updated = EtwpAcquireTokenAccessInformation(v25);
    if ( updated )
    {
LABEL_149:
      v7[52] = 0LL;
      ExReleasePushLockEx((ULONG_PTR)(v7 + 51), 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_17;
    }
  }
  v29 = BYTE2(v89);
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
    updated = EtwpUpdateGuidEnableInfo(v7, (__int64)v76);
    if ( updated < 0 )
      goto LABEL_149;
    *(_OWORD *)(a2 + 72) = *((_OWORD *)v7 + 6);
    *(_OWORD *)(a2 + 88) = *((_OWORD *)v7 + 7);
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
      v25 = v79;
    }
  }
  if ( (__int64 *)v7[7] == v7 + 7 && (v7[50] || (__int64 *)v7[2] == v7 + 2) )
  {
    updated = 0;
    goto LABEL_149;
  }
  if ( *(_BYTE *)(a2 + 12) )
  {
    updated = EtwpCreateUmReplyObject((ULONG_PTR)v7, (__int64)&v91);
    if ( updated < 0 )
      goto LABEL_149;
    *(_QWORD *)(a2 + 24) = Object;
  }
  LOBYTE(v31) = -1;
  if ( (int)EtwpBuildNotificationPacket(v7, a2, v31, &Src) < 0 )
  {
    updated = -1073741801;
    goto LABEL_146;
  }
  v35 = *((unsigned int *)Src + 1);
  v94 = (unsigned int *)((char *)Src + 4);
  v36 = EtwpAllocDataBlock(v35, Src);
  v9 = *(_QWORD *)&v76[5];
  if ( v36 < 0 )
    goto LABEL_64;
  v37 = v83;
  v38 = v7 + 16;
  v39 = *(_QWORD *)&v76[5];
  for ( i = 0; i < 8u; ++i )
  {
    if ( *v38 )
      v37 = (unsigned __int8)v37 | (1 << i);
    v38 += 8;
  }
  v83 = v37;
  v41 = Src;
  v74 = 0;
  v86 = 0LL;
  if ( !v7[50] )
  {
    v42 = (__int64 *)v7[2];
    if ( v42 != v7 + 2 )
      v86 = v42 - 2;
  }
  v43 = v7;
  v90 = v7;
  while ( 1 )
  {
    v44 = (__int64 *)v43[7];
    v95 = v43 + 7;
    v85 = v44;
    if ( v44 != v43 + 7 )
      break;
LABEL_117:
    if ( v43 != v7 )
    {
      v43[52] = 0LL;
      ExReleasePushLockEx((ULONG_PTR)(v43 + 51), 0LL);
      KeLeaveCriticalRegion();
    }
    v59 = v86;
    if ( !v86 )
    {
      updated = 0;
      v68 = v84;
      *(_QWORD *)(a2 + 24) = v91;
      *(_DWORD *)(a2 + 20) = v68;
      if ( v25 )
      {
        v69 = v78;
        if ( v78 <= 1 )
        {
          v70 = (const EVENT_DESCRIPTOR *)&ETW_EVENT_PROVIDER_ENABLED;
          if ( v78 != 1 )
            v70 = &ETW_EVENT_PROVIDER_DISABLED;
          if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, v70) )
          {
            v72 = a2 + 40;
            if ( v69 == 1 )
              EtwpEventWriteProviderEnabled(
                v72,
                (_DWORD)v70,
                v71,
                (_DWORD)v25 + 152,
                a2 + 40,
                *(_QWORD *)(a2 + 88),
                *(_QWORD *)(a2 + 96),
                *(_DWORD *)(a2 + 80),
                *(_BYTE *)(a2 + 76));
            else
              EtwpEventWriteTemplateSessAndProv(v72, v70, v71, 2LL, v25 + 38, a2 + 40);
          }
        }
      }
      goto LABEL_143;
    }
    v74 = 1;
    v43 = v86;
    v90 = v86;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v59 + 51), 0LL);
    v9 = *(_QWORD *)&v76[5];
    v60 = 0LL;
    v25 = v79;
    v59[52] = (__int64)KeGetCurrentThread();
    v61 = v59[2];
    v41 = Src;
    v62 = (__int64 *)(v61 - 16);
    if ( v62 != v7 )
      v60 = v62;
    v86 = v60;
  }
  while ( 1 )
  {
    v93 = v39;
    v92 = v39;
    if ( v77 )
    {
      v45 = (__int64)(v44 - 2);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(*(_QWORD *)(v45 + 32) + 408LL, 0LL);
      v9 = *(_QWORD *)&v76[5];
      v25 = v79;
      v41 = Src;
      *(_QWORD *)(*(_QWORD *)(v45 + 32) + 416LL) = KeGetCurrentThread();
      v44 = v85;
      v75 = 1;
    }
    else
    {
      v45 = (__int64)v44;
    }
    v85 = (__int64 *)*v44;
    if ( !(unsigned __int8)EtwpIsRegEntryAllowed(v45, (_DWORD)v25, (unsigned int)v88, a2, (__int64)v96, v74, v73) )
      goto LABEL_113;
    v80 = (__int64)v41;
    if ( BYTE2(v89) )
      break;
    v48 = v78;
    if ( v78 != 2 )
    {
      if ( v74 )
      {
        if ( v77 )
          v49 = *(_BYTE *)(v45 + 103);
        else
          v49 = *(_BYTE *)(v45 + 102);
      }
      else if ( v77 )
      {
        v49 = *(_BYTE *)(v45 + 101);
      }
      else
      {
        v49 = *(_BYTE *)(v45 + 100);
      }
      v50 = v78;
      LOBYTE(v47) = v73;
      LOBYTE(v46) = v76[0];
      EtwpUpdateRegEntryEnableMask(v45, (_DWORD)v25, v46, v47, v74, v78);
      LOBYTE(v51) = v83;
      LOBYTE(v52) = v76[0];
      LOBYTE(v53) = v49;
      v54 = EtwpCalculateUpdateNotification(v45, v52, v53, v51, v73, v74, v50, (__int64)&v76[5]);
      v9 = *(_QWORD *)&v76[5];
      if ( !v54 )
      {
        if ( !*(_QWORD *)&v76[5] )
        {
          v9 = v39;
          *(_QWORD *)&v76[5] = v39;
        }
        goto LABEL_113;
      }
      if ( *(_QWORD *)&v76[5] )
      {
        v80 = *(_QWORD *)&v76[5];
        if ( *(_QWORD *)&v76[5] != v39 )
          EtwpUnreferenceDataBlock((volatile signed __int32 *)v39);
        v39 = v9;
        if ( v9 == v92 )
          v39 = v93;
      }
      else
      {
        v9 = v39;
        *(_QWORD *)&v76[5] = v39;
      }
      v48 = v78;
    }
    if ( v48 - 1 > 1 )
      goto LABEL_109;
    v55 = *(_WORD *)(v45 + 98);
    if ( (v55 & 8) == 0 && (v55 & 0x20) == 0 && (v25[208] & 0x2000000) == 0 )
      goto LABEL_109;
    if ( (v55 & 1) == 0 )
    {
      if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(v45 + 80) + 760LL)) )
      {
        ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo(*(_QWORD *)(v45 + 80));
        v64 = PsAttachSiloToCurrentThread(ProcessServerSilo);
        KiStackAttachProcess(*(_KPROCESS **)(v45 + 80), 0LL, (__int64)v98);
        LOBYTE(v65) = 1;
        EtwpProviderArrivalCallback(v25, v65, v45);
        KiUnstackDetachProcess((__int64)v98, 0LL);
        PsDetachSiloFromCurrentThread(v64);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(v45 + 80) + 760LL));
      }
      goto LABEL_109;
    }
    v56 = 0LL;
    if ( (v55 & 0x10) == 0 )
      goto LABEL_123;
    SessionById = (_KPROCESS *)MmGetSessionById(*(_DWORD *)(v45 + 56));
    v56 = SessionById;
    if ( SessionById )
    {
      if ( (int)MmAttachSession(SessionById, (__int64)v97) >= 0 )
      {
LABEL_123:
        EtwpProviderArrivalCallback(v25, 0LL, v45);
        if ( !v56 )
          goto LABEL_109;
        MmDetachSession((__int64)v56, (__int64)v97);
      }
      ObfDereferenceObject(v56);
    }
LABEL_109:
    v58 = v80;
LABEL_110:
    if ( (int)EtwpSendDataBlock(v45, v58, v46) >= 0 && (*(_BYTE *)(v45 + 98) & 2) != 0 )
      ++v84;
LABEL_113:
    if ( v75 )
    {
      *(_QWORD *)(*(_QWORD *)(v45 + 32) + 416LL) = 0LL;
      ExReleasePushLockEx(*(_QWORD *)(v45 + 32) + 408LL, 0LL);
      KeLeaveCriticalRegion();
      v75 = 0;
    }
    v44 = v85;
    if ( v85 == v95 )
    {
      v43 = v90;
      goto LABEL_117;
    }
    v41 = Src;
  }
  ProcessId = (unsigned int)PsGetProcessId(*(PEPROCESS *)(v45 + 80));
  if ( (unsigned int)EtwpDemuxPrivateTraceHandle(ProcessId, *(_WORD *)(a2 + 78) & 0x7FFF, v82) )
    goto LABEL_113;
  v67 = v82[0];
  if ( v82[0] == *(_WORD *)(v9 + 78) )
    goto LABEL_131;
  if ( (int)EtwpAllocDataBlock(*v94, Src) >= 0 )
  {
    EtwpUnreferenceDataBlock((volatile signed __int32 *)v39);
    v9 = *(_QWORD *)&v76[5];
    v39 = *(_QWORD *)&v76[5];
    *(_WORD *)(*(_QWORD *)&v76[5] + 78LL) = v67 | 0x8000;
    *(_WORD *)(v39 + 104) = v67;
LABEL_131:
    v58 = v9;
    goto LABEL_110;
  }
  v9 = v39;
  if ( v75 )
  {
    *(_QWORD *)(*(_QWORD *)(v45 + 32) + 416LL) = 0LL;
    ExReleasePushLockEx(*(_QWORD *)(v45 + 32) + 408LL, 0LL);
    KeLeaveCriticalRegion();
  }
LABEL_64:
  updated = -1073741801;
LABEL_143:
  if ( v9 )
    EtwpUnreferenceDataBlock((volatile signed __int32 *)v9);
  v28 = v76[1];
LABEL_146:
  if ( Src )
    EtwpUnreferenceDataBlock((volatile signed __int32 *)Src);
  if ( v28 == 1 )
    goto LABEL_149;
LABEL_17:
  if ( v25 )
    EtwpReleaseLoggerContext(v25, 0);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v7 )
    EtwpUnreferenceGuidEntry(v7);
  EtwpFreeFilterInfo(v96);
  return (unsigned int)updated;
}
