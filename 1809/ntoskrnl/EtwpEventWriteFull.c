/*
 * XREFs of EtwpEventWriteFull @ 0x1400C84E0
 * Callers:
 *     EtwWriteEx @ 0x1400CAD60 (EtwWriteEx.c)
 *     EtwWriteKMSecurityEvent @ 0x140188D00 (EtwWriteKMSecurityEvent.c)
 *     EtwWriteString @ 0x14030E000 (EtwWriteString.c)
 *     EtwpCrimsonStackWalkApc @ 0x14030E380 (EtwpCrimsonStackWalkApc.c)
 *     EtwpDiskProvTraceDisk @ 0x1403108D4 (EtwpDiskProvTraceDisk.c)
 *     EtwWriteErrorLogEntry @ 0x14070C690 (EtwWriteErrorLogEntry.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     KeInitializeApc @ 0x14008A360 (KeInitializeApc.c)
 *     EtwpReserveTraceBuffer @ 0x1400C7600 (EtwpReserveTraceBuffer.c)
 *     KeGetEffectiveIrql @ 0x1400CAAD0 (KeGetEffectiveIrql.c)
 *     IoGetStackLimits @ 0x1400CAAF0 (IoGetStackLimits.c)
 *     KeAreInterruptsEnabled @ 0x1400CAD04 (KeAreInterruptsEnabled.c)
 *     MmCanThreadFault @ 0x1400CC1F4 (MmCanThreadFault.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1400D7870 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     KeInsertQueueApc @ 0x1400F1480 (KeInsertQueueApc.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400F9810 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpFailLogging @ 0x14011311C (EtwpFailLogging.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x14013F690 (EtwpGetReserveTraceBufferStatus.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBBC0 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401C53D0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401C5410 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1540 (memmove.c)
 *     memset @ 0x1401D1880 (memset.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x14030E4D4 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpGetStackLookasideListEntry @ 0x14030F230 (EtwpGetStackLookasideListEntry.c)
 *     EtwpGetCurrentSiloState @ 0x140312704 (EtwpGetCurrentSiloState.c)
 *     EtwpTraceLostEvent @ 0x140312748 (EtwpTraceLostEvent.c)
 *     EtwpSendTraceEvent @ 0x14031325C (EtwpSendTraceEvent.c)
 *     EtwpInvokeEventCallback @ 0x140313D54 (EtwpInvokeEventCallback.c)
 *     EtwpApplyEventIdPayloadFilter @ 0x140313FE0 (EtwpApplyEventIdPayloadFilter.c)
 *     EtwpApplyEventNameFilter @ 0x1403141C8 (EtwpApplyEventNameFilter.c)
 *     EtwpApplyStackWalkIdFilter @ 0x1403145B4 (EtwpApplyStackWalkIdFilter.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140649030 (EtwpGetSidExtendedHeaderItem.c)
 *     EtwpApplyLevelKwFilter @ 0x1408C1C04 (EtwpApplyLevelKwFilter.c)
 */

__int64 __fastcall EtwpEventWriteFull(
        __int64 a1,
        unsigned __int8 a2,
        char a3,
        unsigned int a4,
        unsigned __int16 *a5,
        __int16 a6,
        __int16 a7,
        GUID *a8,
        _OWORD *a9,
        unsigned int a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int16 a15,
        void *a16,
        unsigned __int64 *a17)
{
  __int64 v19; // rdx
  __int64 v21; // r11
  unsigned __int16 v22; // ax
  __int64 v23; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v25; // rax
  unsigned __int64 v26; // r9
  unsigned int v27; // r10d
  __int64 v28; // r11
  unsigned __int16 *v29; // rsi
  __int64 v30; // r8
  bool v31; // zf
  __int64 v32; // rdx
  unsigned int v33; // r15d
  __int64 v34; // r12
  __int64 v35; // r13
  int v36; // ecx
  __int64 v37; // rdx
  unsigned __int8 v38; // al
  _KPROCESS *Process; // rcx
  __int64 v40; // rcx
  int v41; // ecx
  __int64 v43; // rcx
  unsigned __int8 v44; // al
  int v45; // ebx
  int v46; // edi
  unsigned int v47; // r14d
  int v48; // eax
  int v49; // eax
  _DWORD *v50; // rcx
  struct _KPRCB *CurrentPrcb; // rsi
  _GENERAL_LOOKASIDE *P; // rdi
  _GENERAL_LOOKASIDE *L; // rdi
  int v54; // eax
  int v55; // eax
  __int64 v56; // rcx
  int v57; // ecx
  bool v58; // al
  __int64 v59; // r9
  int v60; // r8d
  unsigned __int8 v61; // si
  unsigned int v62; // edi
  __int64 v63; // r12
  unsigned int v64; // edi
  void *v65; // rsp
  __int64 v66; // rdx
  char v67; // r8
  char v68; // cl
  __int64 v69; // rsi
  _OWORD *v70; // r12
  __int64 v71; // rdx
  unsigned __int16 v72; // r12
  int v73; // ebx
  char v74; // al
  unsigned __int16 v75; // r13
  BOOLEAN v76; // al
  __int64 v77; // rdx
  char v78; // al
  __int64 v79; // rcx
  int v80; // ecx
  unsigned int v81; // edi
  signed __int64 *v82; // rdx
  signed __int64 v83; // rax
  signed __int64 v84; // rtt
  unsigned __int64 v85; // rsi
  __int64 v86; // rsi
  unsigned int ReserveTraceBufferStatus; // ebx
  int v88; // ecx
  __int64 v89; // rax
  _WORD *v90; // r12
  GUID v91; // xmm0
  unsigned __int16 *v92; // r9
  __int64 v93; // r15
  unsigned __int16 v94; // si
  unsigned __int16 v95; // si
  _WORD *v96; // rdi
  _DWORD *v97; // rdi
  char *v98; // rcx
  int SessionId; // eax
  int v100; // ecx
  _DWORD *v101; // rdx
  _DWORD *v102; // r8
  struct _KPRCB *v103; // rcx
  unsigned __int64 v104; // rax
  PVOID PoolWithTag; // rbx
  __int16 v106; // si
  unsigned __int16 v107; // si
  int v108; // r15d
  int v109; // r10d
  _OWORD *v110; // rsi
  unsigned __int16 *v111; // rbx
  __int64 v112; // rcx
  unsigned __int16 v113; // dx
  char *v114; // r13
  unsigned int i; // edi
  size_t v116; // rdx
  char v117; // r8
  size_t v118; // rbx
  char *v119; // rcx
  __int64 v120; // rbx
  struct _SLIST_ENTRY *v121; // r14
  struct _KPRCB *v122; // rdx
  _GENERAL_LOOKASIDE *v123; // rcx
  int BugCheckParameter4; // [rsp+0h] [rbp-640h]
  char v125; // [rsp+30h] [rbp-610h] BYREF
  char v126; // [rsp+640h] [rbp+0h]
  unsigned __int8 CurrentIrql; // [rsp+641h] [rbp+1h]
  unsigned __int8 v128; // [rsp+648h] [rbp+8h]
  unsigned __int16 v129; // [rsp+650h] [rbp+10h]
  unsigned int v130; // [rsp+654h] [rbp+14h]
  unsigned __int16 v131; // [rsp+658h] [rbp+18h]
  int v132; // [rsp+65Ch] [rbp+1Ch]
  unsigned __int8 v133; // [rsp+660h] [rbp+20h]
  char v134; // [rsp+661h] [rbp+21h]
  int v135; // [rsp+664h] [rbp+24h]
  int v136; // [rsp+668h] [rbp+28h]
  unsigned __int16 v137; // [rsp+66Ch] [rbp+2Ch]
  __int16 v138; // [rsp+670h] [rbp+30h]
  unsigned int v139; // [rsp+674h] [rbp+34h]
  int v140; // [rsp+678h] [rbp+38h]
  __int64 v141; // [rsp+680h] [rbp+40h]
  unsigned __int16 *v142; // [rsp+688h] [rbp+48h]
  size_t Size; // [rsp+690h] [rbp+50h]
  unsigned __int16 *v144; // [rsp+698h] [rbp+58h]
  _DWORD *v145; // [rsp+6A0h] [rbp+60h]
  __int64 v146; // [rsp+6A8h] [rbp+68h]
  void *Src; // [rsp+6B0h] [rbp+70h]
  void *v148; // [rsp+6B8h] [rbp+78h]
  void *StackLookasideListEntry; // [rsp+6C0h] [rbp+80h] BYREF
  __int64 v150; // [rsp+6C8h] [rbp+88h]
  _OWORD *v151; // [rsp+6D0h] [rbp+90h]
  __int64 v152; // [rsp+6D8h] [rbp+98h]
  _DWORD *v153; // [rsp+6E0h] [rbp+A0h]
  void *v154; // [rsp+6E8h] [rbp+A8h]
  __int64 v155; // [rsp+6F0h] [rbp+B0h]
  __int64 v156; // [rsp+6F8h] [rbp+B8h]
  __int64 v157; // [rsp+700h] [rbp+C0h]
  struct _KTHREAD *v158; // [rsp+708h] [rbp+C8h]
  unsigned __int64 v159; // [rsp+710h] [rbp+D0h]
  void *v160; // [rsp+718h] [rbp+D8h]
  __int64 v161; // [rsp+720h] [rbp+E0h]
  __int64 CurrentSiloState; // [rsp+728h] [rbp+E8h]
  unsigned __int64 *v163; // [rsp+730h] [rbp+F0h]
  char *v164; // [rsp+738h] [rbp+F8h]
  _OWORD *v165; // [rsp+740h] [rbp+100h]
  unsigned __int64 HighLimit; // [rsp+748h] [rbp+108h] BYREF
  unsigned __int64 LowLimit; // [rsp+750h] [rbp+110h] BYREF
  __int64 v168; // [rsp+758h] [rbp+118h] BYREF
  __int128 v169; // [rsp+760h] [rbp+120h] BYREF
  __int64 v170; // [rsp+770h] [rbp+130h]
  _OWORD v171[24]; // [rsp+780h] [rbp+140h] BYREF
  unsigned int v172; // [rsp+900h] [rbp+2C0h]
  _DWORD *v174; // [rsp+9C8h] [rbp+388h]

  v165 = a9;
  v146 = a14;
  v155 = a1;
  v128 = a2;
  v142 = a5;
  v152 = a11;
  v161 = a13;
  v160 = a16;
  v163 = a17;
  v140 = 0;
  Src = 0LL;
  v153 = 0LL;
  StackLookasideListEntry = 0LL;
  v159 = 0LL;
  v138 = a15 & 0x200;
  CurrentSiloState = EtwpGetCurrentSiloState();
  if ( a10 > 0x80 )
    return 3221225485LL;
  v21 = v146;
  if ( !v146 )
    v21 = a1;
  v146 = v21;
  v157 = v21;
  if ( v160 )
  {
    if ( (a15 & 0x400) != 0 )
      v22 = 0;
    else
      v22 = *(_WORD *)v160;
  }
  else
  {
    v22 = 0;
  }
  v129 = v22;
  v126 = 0;
  v172 = 0;
  v23 = *(_QWORD *)(a1 + 392);
  v141 = v23;
  v156 = v23;
  if ( v163 && *v163 )
  {
    v159 = *v163;
    v126 = 4;
  }
  CurrentThread = KeGetCurrentThread();
  v158 = CurrentThread;
  v25 = a12;
  if ( !a12 )
    v25 = (__int64)CurrentThread;
  v174 = (_DWORD *)v25;
  if ( (unsigned __int8)KeAreInterruptsEnabled(CurrentThread, v19) )
    CurrentIrql = KeGetCurrentIrql();
  else
    CurrentIrql = 15;
  v133 = CurrentIrql;
  v134 = 0;
  if ( !CurrentIrql )
  {
    --v158->KernelApcDisable;
    v134 = 1;
  }
  v128 &= ~a3;
  v29 = v142;
  v30 = 80LL;
LABEL_24:
  while ( 2 )
  {
    while ( 2 )
    {
      while ( 2 )
      {
        while ( 2 )
        {
          while ( 2 )
          {
            v31 = !_BitScanForward((unsigned int *)&v32, v128);
            LODWORD(v145) = v32;
            if ( v31 )
              goto LABEL_154;
            v150 = 1LL;
            v33 = 80;
            v135 = 80;
            v132 = 80;
            v144 = 0LL;
            v148 = 0LL;
            LOBYTE(v131) = 0;
            v137 = 0;
            v136 = 0;
            v154 = 0LL;
            v164 = 0LL;
            v128 &= v128 - 1;
            v34 = (unsigned int)v32;
            v35 = v28 + 32 * (v32 + 4);
            if ( v161 )
            {
              v36 = *(_DWORD *)(v161 + 4LL * (*(unsigned __int16 *)(v35 + 6) >> 5));
              if ( _bittest(&v36, *(_BYTE *)(v35 + 6) & 0x1F) )
                continue;
            }
            break;
          }
          v37 = *((_QWORD *)v29 + 1);
          if ( !*(_DWORD *)v35 )
            continue;
          break;
        }
        v38 = *(_BYTE *)(v35 + 4);
        if ( *((_BYTE *)v29 + 4) > v38 )
        {
          if ( v38 )
            continue;
        }
        break;
      }
      v30 = *(unsigned int *)(v35 + 8);
      if ( (v30 & 0x40) == 0 || v37 )
      {
        if ( (v37 & *(_QWORD *)(v35 + 16)) == 0 )
        {
          v30 = 80LL;
          continue;
        }
        if ( (v37 & *(_QWORD *)(v35 + 24)) != *(_QWORD *)(v35 + 24) )
        {
LABEL_23:
          v30 = 80LL;
          continue;
        }
      }
      break;
    }
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( (a4 & 2) != 0 || SLODWORD(Process[1].DirectoryTableBase) < 0 )
    {
      v30 = 80LL;
      if ( (*(_DWORD *)(v35 + 8) & 0x200) != 0 )
        continue;
    }
    break;
  }
  v40 = *(_QWORD *)(v28 + 384);
  if ( v40 )
  {
    v41 = *(_DWORD *)(104 * v34 + v40);
    if ( (v41 & 0x80000200) == 0x80000200 || (v41 & 0x80000100) == 0x80000100 )
    {
      if ( !(unsigned __int8)EtwpApplyEventIdPayloadFilter(
                               v28,
                               (_DWORD)v145,
                               0,
                               (_DWORD)v29,
                               *v29,
                               v27,
                               v152,
                               0,
                               CurrentIrql) )
      {
LABEL_56:
        v28 = v146;
LABEL_22:
        v27 = a10;
        goto LABEL_23;
      }
      v28 = v146;
    }
  }
  if ( v138 )
  {
    v26 = *((_QWORD *)v29 + 1);
    v43 = 0LL;
    v37 = *(_QWORD *)(v28 + 384);
    if ( v37 )
    {
      v30 = v37 + 104 * v34;
      if ( (*(_DWORD *)v30 & 0x80000400) == 0x80000400 )
        v43 = *(_QWORD *)(v30 + 96);
      if ( v43 )
      {
        v44 = *(_BYTE *)(v43 + 1);
        if ( (*((_BYTE *)v29 + 4) <= v44 || !v44)
          && (!v26 || (v26 & *(_QWORD *)(v43 + 8)) != 0 && (v26 & *(_QWORD *)(v43 + 16)) == *(_QWORD *)(v43 + 16))
          && !(unsigned __int8)EtwpApplyEventNameFilter(
                                 v28,
                                 (_DWORD)v145,
                                 a10,
                                 v152,
                                 0,
                                 CurrentIrql,
                                 *((_BYTE *)v29 + 4),
                                 *((_QWORD *)v29 + 1),
                                 0) )
        {
          goto LABEL_56;
        }
      }
    }
  }
  v45 = v165 != 0LL ? 8 : 0;
  LODWORD(Size) = v45;
  v46 = 104;
  if ( !v165 )
    v46 = 80;
  v47 = v46;
  v130 = v46;
  if ( (*(_DWORD *)(v35 + 8) & 0xFFFFFF9F) != 0 )
  {
    if ( EtwpPagingDisabled
      || (a4 & 1) != 0
      || !(unsigned int)MmCanThreadFault(v165, v37, v30, v26)
      || BYTE6(v158[1].Queue) )
    {
      v48 = 0;
    }
    else
    {
      v48 = 128;
    }
    v45 |= v48;
    LODWORD(Size) = v45;
    v49 = *(_DWORD *)(v35 + 8);
    v130 = v46;
    if ( (v49 & 0x800) != 0 )
    {
      if ( CurrentSiloState )
      {
        v130 = v46;
        if ( CurrentSiloState != EtwpHostSiloState )
        {
          v45 |= 0x100u;
          LODWORD(Size) = v45;
          v47 = v46 + ((*(unsigned __int16 *)(CurrentSiloState + 4200) + 15) & 0xFFFFFFF8);
          v130 = v47;
        }
      }
      v33 = v135;
    }
    if ( (v49 & 1) != 0 && (v45 & 0x80u) != 0 )
    {
      v50 = Src;
      if ( Src )
        goto LABEL_82;
      CurrentPrcb = KeGetCurrentPrcb();
      P = CurrentPrcb->PPLookasideList[8].P;
      ++P->TotalAllocates;
      v50 = RtlpInterlockedPopEntrySList(&P->ListHead);
      Src = v50;
      if ( !v50 )
      {
        ++P->AllocateMisses;
        L = CurrentPrcb->PPLookasideList[8].L;
        ++L->TotalAllocates;
        v50 = RtlpInterlockedPopEntrySList(&L->ListHead);
        Src = v50;
        if ( !v50 )
        {
          ++L->AllocateMisses;
          v50 = (_DWORD *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))L->AllocateEx)(
                            (unsigned int)L->Type,
                            L->Size,
                            L->Tag);
          Src = v50;
        }
      }
      if ( v50 )
        *v50 = CurrentPrcb->Number;
      v153 = v50;
      if ( v50 )
      {
        EtwpGetSidExtendedHeaderItem();
        v50 = Src;
      }
      v29 = v142;
      if ( v50 )
      {
LABEL_82:
        v45 |= 2u;
        LODWORD(Size) = v45;
        v47 += *(unsigned __int16 *)v50;
        v130 = v47;
      }
    }
    v54 = *(_DWORD *)(v35 + 8);
    if ( (v54 & 2) != 0 )
    {
      v45 |= 1u;
      LODWORD(Size) = v45;
      v47 += 16;
      v130 = v47;
    }
    if ( (v54 & 0x80u) != 0 && ((unsigned __int8)KeGetEffectiveIrql() < 2u || !KeGetCurrentPrcb()->NestingLevel) )
    {
      v45 |= 0x20u;
      LODWORD(Size) = v45;
      v47 += 16;
      v130 = v47;
    }
    v55 = *(_DWORD *)(v35 + 8);
    if ( (v55 & 0x100) != 0 )
    {
      v45 |= 0x40u;
      LODWORD(Size) = v45;
      v47 += 16;
      v130 = v47;
    }
    if ( (v55 & 4) != 0 && !EtwpPagingDisabled )
    {
      v56 = *(_QWORD *)(v146 + 384);
      v58 = 0;
      if ( v56 )
      {
        v57 = *(_DWORD *)(104 * v34 + v56);
        if ( (v57 & 0x80001000) == 0x80001000 || (v57 & 0x80002000) == 0x80002000 || (v57 & 0x80004000) == 0x80004000 )
          v58 = 1;
      }
      if ( !v58
        || (v59 = *((_QWORD *)v29 + 1),
            v60 = *((unsigned __int8 *)v29 + 4),
            v61 = v133,
            v62 = (unsigned int)v145,
            v63 = v146,
            (unsigned __int8)EtwpApplyLevelKwFilter(v146, (_DWORD)v145, v60, v59, v133 < 2u))
        && (LOBYTE(v26) = v61 < 2u, (unsigned __int8)EtwpApplyStackWalkIdFilter(*v142, v63, v62, v26))
        && (v29 = v142,
            (unsigned __int8)EtwpApplyEventNameFilter(
                               v63,
                               v62,
                               a10,
                               v152,
                               0,
                               CurrentIrql,
                               *((_BYTE *)v142 + 4),
                               *((_QWORD *)v142 + 1),
                               1)) )
      {
        if ( (v126 & 1) == 0 )
        {
          v64 = 256;
          StackLookasideListEntry = (void *)EtwpGetStackLookasideListEntry();
          if ( !StackLookasideListEntry )
          {
            IoGetStackLimits(&LowLimit, &HighLimit);
            if ( (unsigned __int64)&HighLimit - LowLimit > 0x1440 )
            {
              v65 = alloca(1552LL);
              StackLookasideListEntry = &v125;
              v64 = 192;
            }
          }
          if ( StackLookasideListEntry )
          {
            v66 = 0LL;
            v67 = 1;
            if ( *(_QWORD *)(v155 + 40) == *(_QWORD *)&EventTracingProvGuid.Data1
              && *(_QWORD *)(v155 + 48) == *(_QWORD *)EventTracingProvGuid.Data4
              && *v29 == 18 )
            {
              v45 |= 0x10u;
              LODWORD(Size) = v45;
              v66 = v155 + 80;
              v67 = 0;
            }
            LOBYTE(BugCheckParameter4) = v67;
            EtwpGetStackExtendedHeaderItem(v158, a4, v64, &StackLookasideListEntry, BugCheckParameter4, v66);
            if ( StackLookasideListEntry && v64 == 256 )
              v68 = 2;
            else
              v68 = 0;
            v126 = v68 | v126 & 0xFD;
          }
          v126 |= 1u;
        }
        if ( StackLookasideListEntry )
        {
          v45 |= 4u;
          LODWORD(Size) = v45;
          v47 += *(unsigned __int16 *)StackLookasideListEntry;
          v130 = v47;
        }
      }
    }
  }
  v69 = *(unsigned __int16 *)(v35 + 6);
  v139 = *(unsigned __int16 *)(v35 + 6);
  v70 = &v171[3 * v172];
  v151 = v70;
  if ( a10 )
  {
    v71 = v152 + 8;
    v30 = a10;
    v72 = v137;
    v73 = v136;
    do
    {
      if ( v138 )
        v74 = *(_BYTE *)(v71 + 4);
      else
        v74 = 0;
      if ( v74 )
      {
        if ( v74 == 1 )
        {
          v72 += *(_WORD *)v71;
          v137 = v72;
          v136 = ++v73;
        }
      }
      else
      {
        v47 += *(_DWORD *)v71;
        v130 = v47;
      }
      v71 += 16LL;
      --v30;
    }
    while ( v30 );
    v45 = Size;
    v70 = v151;
  }
  if ( v136 )
  {
    v47 += (v137 + 15) & 0xFFFFFFF8;
    v130 = v47;
  }
  v75 = v129;
  if ( v129 )
  {
    v47 += (v129 + 15) & 0xFFFFFFF8;
    v130 = v47;
  }
  *((_DWORD *)v70 + 10) = v47;
  if ( CurrentIrql >= 2u )
  {
    v77 = v141;
    if ( (unsigned int)v69 >= *(_DWORD *)(v141 + 16) )
    {
      v79 = 1LL;
      v150 = 1LL;
    }
    else
    {
      _mm_lfence();
      v79 = *(_QWORD *)(*(_QWORD *)(v141 + 456) + 8 * v69);
      v150 = v79;
      v75 = v129;
    }
    v78 = v131;
  }
  else
  {
    v76 = ExAcquireRundownProtectionCacheAwareEx(
            *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v141 + 448) + 8 * v69),
            1u);
    v77 = v141;
    if ( v76 )
    {
      if ( (unsigned int)v69 >= *(_DWORD *)(v141 + 16) )
      {
        v150 = 1LL;
      }
      else
      {
        _mm_lfence();
        v150 = *(_QWORD *)(8 * v69 + *(_QWORD *)(v141 + 456));
        v75 = v129;
      }
      v78 = 1;
      LOBYTE(v131) = 1;
    }
    else
    {
      v78 = v131;
    }
    v79 = v150;
  }
  if ( (v79 & 1) == 0 )
  {
    v81 = 0;
    v85 = EtwpReserveTraceBuffer((unsigned int *)v79, v47, (__int64)&v169, &v168, 0);
    v151 = (_OWORD *)v85;
    if ( !v85 )
    {
      v86 = v150;
      ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v150, v47);
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
        EtwpTraceLostEvent(v155 + 40, v142, v86 + 152, ReserveTraceBufferStatus);
      v88 = v140;
      if ( v140 >= 0 )
      {
        if ( (*(_DWORD *)(v86 + 12) & 0x8000000) == 0 )
          v88 = ReserveTraceBufferStatus;
        v140 = v88;
      }
      if ( (_BYTE)v131 )
        ExReleaseRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v141 + 448) + 8LL * v139),
          1u);
      if ( ReserveTraceBufferStatus == -1073741675 )
      {
        v140 = -1073741675;
        v23 = v141;
        goto LABEL_155;
      }
LABEL_177:
      v29 = v142;
      v23 = v141;
      v28 = v146;
      goto LABEL_22;
    }
    v89 = v150;
    *(_QWORD *)v70 = v150;
    *((_QWORD *)v70 + 1) = v85;
    v70[1] = v169;
    *((_QWORD *)v70 + 4) = v170;
    ++v172;
    *(_DWORD *)v85 = v47 | *(_DWORD *)(v89 + 20);
    v90 = (_WORD *)(v85 + 4);
    Size = v85 + 4;
    *(_WORD *)(v85 + 4) = a6;
    *(_WORD *)(v85 + 6) = a7;
    *(_OWORD *)(v85 + 24) = *(_OWORD *)(v155 + 40);
    *(_OWORD *)(v85 + 40) = *(_OWORD *)v142;
    if ( a8 )
      v91 = *a8;
    else
      v91 = NullGuid;
    *(GUID *)(v85 + 64) = v91;
    *(_QWORD *)(v85 + 16) = v168;
    *(_DWORD *)(v85 + 8) = v174[400];
    *(_DWORD *)(v85 + 12) = v174[398];
    *(_DWORD *)(v85 + 56) = v174[163];
    *(_DWORD *)(v85 + 60) = v174[183];
    if ( !v45 )
    {
      v97 = v144;
LABEL_224:
      if ( v75 )
      {
        v97 = (_DWORD *)(v85 + v33);
        v145 = v97;
        v106 = (v75 + 15) & 0xFFF8;
        *(_WORD *)v97 = v106;
        *(_DWORD *)((char *)v97 + 2) = 12;
        *((_WORD *)v97 + 3) = v75;
        v107 = v106 - v75 - 8;
        v131 = v107;
        memmove(v97 + 2, v160, v75);
        memset((char *)v97 + v75 + 8, 0, v107);
        v108 = v135;
        v26 = (unsigned __int64)v144;
        *v90 |= 1u;
        v33 = *(unsigned __int16 *)v97 + v108;
        v132 = v33;
        if ( v26 )
          *(_WORD *)(v26 + 4) |= 1u;
      }
      v109 = v136;
      v110 = v151;
      if ( v136 )
      {
        v111 = (unsigned __int16 *)((char *)v151 + v33);
        v112 = v137;
        v113 = (v137 + 15) & 0xFFF8;
        *v111 = v113;
        *(_DWORD *)(v111 + 1) = 11;
        v111[3] = v112;
        v114 = (char *)(v111 + 4);
        v154 = v111 + 4;
        v164 = (char *)v111 + v112 + 8;
        memset(v164, 0, (unsigned __int16)(v113 - v112 - 8));
        *v90 |= 1u;
        v33 += *v111;
        v132 = v33;
        v109 = v136;
        if ( v97 )
          *((_WORD *)v97 + 2) |= 1u;
      }
      else
      {
        v114 = (char *)v154;
      }
      for ( i = 0; ; ++i )
      {
        while ( 1 )
        {
          LODWORD(v145) = i;
          if ( i >= a10 )
          {
            v120 = v150;
            if ( (*(_DWORD *)(v150 + 12) & 0x80000) != 0
              && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
            {
              EtwpSendTraceEvent(v150, &v169);
            }
            if ( *(_QWORD *)(v120 + 1272) )
              EtwpInvokeEventCallback(v120, &v169);
            v29 = v142;
            v23 = v141;
            v28 = v146;
            v27 = a10;
            v30 = 80LL;
            if ( v161 )
              *(_DWORD *)(v161 + 4LL * (v139 >> 5)) |= 1 << (v139 & 0x1F);
            goto LABEL_24;
          }
          v116 = *(unsigned int *)(v152 + 16LL * i + 8);
          LODWORD(Size) = *(_DWORD *)(v152 + 16LL * i + 8);
          v26 = *(_QWORD *)(v152 + 16LL * i);
          v117 = v138 ? *(_BYTE *)(v152 + 16LL * i + 12) : 0;
          if ( v117 )
            break;
          v119 = (char *)v110 + v33;
          v148 = v119;
          v33 += v116;
          v132 = v33;
          if ( v33 > v47 )
            KeBugCheckEx(0x11Du, 5uLL, v33, v47, 0LL);
          memmove(v119, (const void *)v26, v116);
          v109 = v136;
LABEL_247:
          ++i;
          v114 = (char *)v154;
        }
        if ( v117 != 1 )
        {
          if ( v117 == 3 && (_DWORD)v116 == 8 )
            *((_QWORD *)v110 + 2) = *(_QWORD *)v26;
          goto LABEL_247;
        }
        if ( !v114 || (v118 = v116, v148 = (void *)v116, &v114[v116] > v164) || !v109 )
          KeBugCheckEx(0x11Du, 5uLL, v33, v47, 0LL);
        memmove(v114, (const void *)v26, v116);
        v114 += v118;
        v154 = v114;
        v109 = --v136;
      }
    }
    if ( (v45 & 0x100) != 0 )
    {
      v92 = (unsigned __int16 *)(v85 + 80);
      v144 = v92;
      v93 = CurrentSiloState;
      v94 = (*(_WORD *)(CurrentSiloState + 4200) + 15) & 0xFFF8;
      *v92 = v94;
      v92[1] = 16;
      v92[3] = *(_WORD *)(v93 + 4200);
      v92[2] = 0;
      v95 = v94 - *(_WORD *)(v93 + 4200) - 8;
      v96 = v92 + 4;
      memmove(v92 + 4, *(const void **)(v93 + 4192), *(unsigned __int16 *)(v93 + 4200));
      memset((char *)v96 + *(unsigned __int16 *)(v93 + 4200), 0, v95);
      *v90 |= 1u;
      v97 = v144;
      v33 = *v144 + 80;
      v135 = v33;
      v132 = v33;
      v148 = v144;
      v85 = (unsigned __int64)v151;
    }
    else
    {
      v97 = v144;
    }
    if ( (v45 & 8) != 0 )
    {
      v98 = (char *)(v85 + v33);
      *(_DWORD *)v98 = 65560;
      *((_DWORD *)v98 + 1) = 0x100000;
      *(_OWORD *)(v98 + 8) = *a9;
      *v90 |= 1u;
      v33 += 24;
      v135 = v33;
      v132 = v33;
      if ( v97 )
        *((_WORD *)v97 + 2) |= 1u;
      v97 = v98;
      v144 = (unsigned __int16 *)v98;
      v148 = v98;
    }
    if ( (v45 & 2) != 0 )
    {
      v97 = (_DWORD *)(v85 + v33);
      memmove(v97, Src, *(unsigned __int16 *)Src);
      *v90 |= 1u;
      v33 += *(unsigned __int16 *)Src;
      v135 = v33;
      v132 = v33;
      v26 = (unsigned __int64)v144;
      if ( v144 )
        v144[2] |= 1u;
      v144 = (unsigned __int16 *)v97;
      v148 = v97;
    }
    if ( (v45 & 1) != 0 )
    {
      v97 = (_DWORD *)(v85 + v33);
      *v97 = 196624;
      v97[1] = 0x40000;
      SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v100 = 0;
      if ( SessionId != -1 )
        v100 = SessionId;
      v97[2] = v100;
      *v90 |= 1u;
      v33 += 16;
      v135 = v33;
      v132 = v33;
      v26 = (unsigned __int64)v144;
      if ( v144 )
        v144[2] |= 1u;
      v144 = (unsigned __int16 *)v97;
      v148 = v97;
      v75 = v129;
    }
    if ( (v45 & 0x20) != 0 )
    {
      v101 = (_DWORD *)(v85 + v33);
      *v101 = 851984;
      v101[1] = 0x80000;
      *((_QWORD *)v101 + 1) = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[16] | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
      *v90 |= 1u;
      v33 += 16;
      v135 = v33;
      v132 = v33;
      if ( v97 )
        *((_WORD *)v97 + 2) |= 1u;
      v97 = v101;
      v144 = (unsigned __int16 *)v101;
      v148 = v101;
      v75 = v129;
    }
    if ( (v45 & 0x40) != 0 )
    {
      v102 = (_DWORD *)(v85 + v33);
      *v102 = 655376;
      v102[1] = 0x80000;
      if ( (v126 & 4) != 0 )
      {
        v104 = v159;
      }
      else
      {
        v103 = KeGetCurrentPrcb();
        v104 = _InterlockedIncrement64((volatile signed __int64 *)v103->EtwSupport + 1) & 0xFFFFFFFFFFFFLL | ((unsigned __int64)v103->Number << 48);
        v159 = v104;
        v126 |= 4u;
        v75 = v129;
        if ( v163 )
          *v163 = v104;
      }
      *((_QWORD *)v102 + 1) = v104;
      *v90 |= 1u;
      v33 += 16;
      v135 = v33;
      v132 = v33;
      if ( v97 )
        *((_WORD *)v97 + 2) |= 1u;
      v97 = v102;
      v144 = (unsigned __int16 *)v102;
      v148 = v102;
    }
    if ( (v45 & 4) == 0 )
      goto LABEL_224;
    v97 = (_DWORD *)(v85 + v33);
    memmove(v97, StackLookasideListEntry, *(unsigned __int16 *)StackLookasideListEntry);
    if ( *((_QWORD *)v97 + 1) && (v45 & 0x10) == 0 )
    {
      if ( v141 != EtwpHostSiloState )
        goto LABEL_219;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x41777445u);
      if ( !PoolWithTag )
        goto LABEL_219;
      KeInitializeApc(
        (__int64)PoolWithTag,
        (__int64)v174,
        0,
        (__int64)EtwpCrimsonStackWalkApc,
        0LL,
        (__int64)EtwpCrimsonStackWalkApc,
        0,
        v139);
      if ( !(unsigned __int8)KeInsertQueueApc(PoolWithTag, (unsigned int)v97[2], (unsigned int)v97[3], 0LL) )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
LABEL_219:
        *((_QWORD *)v97 + 1) = 0LL;
      }
    }
    *v90 |= 1u;
    v33 += *(unsigned __int16 *)StackLookasideListEntry;
    v135 = v33;
    v132 = v33;
    v26 = (unsigned __int64)v144;
    if ( v144 )
      v144[2] |= 1u;
    v144 = (unsigned __int16 *)v97;
    v148 = v97;
    goto LABEL_224;
  }
  if ( v78 )
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v77 + 448) + 8 * v69), 1u);
  if ( (_DWORD)v69 != 3 )
    goto LABEL_177;
  v23 = v141;
  v80 = -1073741058;
  if ( !*(_DWORD *)(v141 + 4068) )
    v80 = -1073741816;
  v140 = v80;
LABEL_154:
  v81 = 0;
LABEL_155:
  if ( (v126 & 2) != 0 )
    RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, (PSLIST_ENTRY)StackLookasideListEntry - 1);
  if ( v140 < 0 )
  {
    EtwpFailLogging(
      *((unsigned __int8 *)v142 + 4),
      *((_QWORD *)v142 + 1),
      v155,
      (unsigned int)v171,
      v128,
      v140,
      (__int64)v142,
      v133 < 2u);
  }
  else
  {
    LODWORD(v145) = 0;
    if ( v172 )
    {
      do
      {
        v30 = *(_QWORD *)&v171[3 * v81 + 1];
        v82 = (signed __int64 *)*((_QWORD *)&v171[3 * v81 + 1] + 1);
        _m_prefetchw(v82);
        v83 = *v82;
        if ( (v30 ^ (unsigned __int64)*v82) >= 0xF )
        {
LABEL_162:
          _InterlockedDecrement((volatile signed __int32 *)(v30 + 12));
        }
        else
        {
          while ( 1 )
          {
            v84 = v83;
            v83 = _InterlockedCompareExchange64(v82, v83 + 1, v83);
            if ( v84 == v83 )
              break;
            if ( (v30 ^ (unsigned __int64)v83) >= 0xF )
              goto LABEL_162;
          }
        }
        if ( CurrentIrql < 2u )
          ExReleaseRundownProtectionCacheAwareEx(
            *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v23 + 448) + 8LL * **(unsigned int **)&v171[3 * v81]),
            1u);
        LODWORD(v145) = (_DWORD)v145 + 1;
        v81 = (unsigned int)v145;
      }
      while ( (unsigned int)v145 < v172 );
    }
  }
  if ( v134 )
    KeLeaveCriticalRegionThread((__int64)v158);
  v121 = (struct _SLIST_ENTRY *)Src;
  if ( Src )
  {
    v122 = KeGetCurrentPrcb();
    v123 = v122->PPLookasideList[8].P;
    ++v123->TotalFrees;
    if ( LOWORD(v123->ListHead.Alignment) < v123->Depth
      || (++v123->FreeMisses,
          v123 = v122->PPLookasideList[8].L,
          ++v123->TotalFrees,
          LOWORD(v123->ListHead.Alignment) < v123->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v123->ListHead, v121);
    }
    else
    {
      ++v123->FreeMisses;
      ((void (__fastcall *)(struct _SLIST_ENTRY *, struct _KPRCB *, __int64))v123->FreeEx)(v121, v122, v30);
    }
  }
  return (unsigned int)v140;
}
