/*
 * XREFs of EtwpEventWriteFull @ 0x1400C01A0
 * Callers:
 *     EtwWriteEx @ 0x140036300 (EtwWriteEx.c)
 *     EtwWriteKMSecurityEvent @ 0x140132A1C (EtwWriteKMSecurityEvent.c)
 *     EtwWriteString @ 0x14032BC10 (EtwWriteString.c)
 *     EtwpCrimsonStackWalkApc @ 0x14032BF90 (EtwpCrimsonStackWalkApc.c)
 *     EtwpDiskProvTraceDisk @ 0x14032E7D4 (EtwpDiskProvTraceDisk.c)
 *     EtwWriteErrorLogEntry @ 0x140737E10 (EtwWriteErrorLogEntry.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
 *     KeInitializeApc @ 0x140081C30 (KeInitializeApc.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140096A80 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     KeInsertQueueApc @ 0x1400AECB0 (KeInsertQueueApc.c)
 *     MmCanThreadFault @ 0x1400BF6DC (MmCanThreadFault.c)
 *     KeGetEffectiveIrql @ 0x1400C1830 (KeGetEffectiveIrql.c)
 *     IoGetStackLimits @ 0x1400C2F20 (IoGetStackLimits.c)
 *     KeAreInterruptsEnabled @ 0x1400C31C0 (KeAreInterruptsEnabled.c)
 *     EtwpReserveTraceBuffer @ 0x1400C31E0 (EtwpReserveTraceBuffer.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400FA0F0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpFailLogging @ 0x14013B424 (EtwpFailLogging.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401CB9F0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CBA30 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x14032C0DC (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpGetStackLookasideListEntry @ 0x14032CED0 (EtwpGetStackLookasideListEntry.c)
 *     EtwpGetCurrentSiloState @ 0x140330954 (EtwpGetCurrentSiloState.c)
 *     EtwpTraceLostEvent @ 0x140330998 (EtwpTraceLostEvent.c)
 *     EtwpSendTraceEvent @ 0x1403314A8 (EtwpSendTraceEvent.c)
 *     EtwpInvokeEventCallback @ 0x140332024 (EtwpInvokeEventCallback.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x14033213C (EtwpGetReserveTraceBufferStatus.c)
 *     EtwpApplyEventIdPayloadFilter @ 0x140332374 (EtwpApplyEventIdPayloadFilter.c)
 *     EtwpApplyEventNameFilter @ 0x14033254C (EtwpApplyEventNameFilter.c)
 *     EtwpApplyStackWalkIdFilter @ 0x140332940 (EtwpApplyStackWalkIdFilter.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x1406446E0 (EtwpGetSidExtendedHeaderItem.c)
 *     EtwpApplyLevelKwFilter @ 0x1408FEE44 (EtwpApplyLevelKwFilter.c)
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
  __int64 v22; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v24; // rax
  unsigned int v25; // r10d
  __int64 v26; // r11
  unsigned __int16 *v27; // rdi
  __int64 v28; // r8
  bool v29; // zf
  __int64 v30; // rdx
  unsigned int v31; // esi
  unsigned int v32; // r13d
  __int64 v33; // r12
  __int64 v34; // r15
  int v35; // ecx
  __int64 v36; // rdx
  unsigned __int8 v37; // al
  _KPROCESS *Process; // rcx
  unsigned __int16 *v39; // rbx
  __int64 v40; // rcx
  int v41; // ecx
  __int64 v43; // r9
  __int64 v44; // rcx
  __int64 v45; // rdx
  unsigned __int8 v46; // al
  int v47; // eax
  int v48; // ecx
  char v49; // al
  _DWORD *v50; // rcx
  struct _KPRCB *CurrentPrcb; // rdi
  _GENERAL_LOOKASIDE *P; // rbx
  _GENERAL_LOOKASIDE *L; // rbx
  int v54; // eax
  int v55; // eax
  __int64 v56; // rcx
  int v57; // ecx
  __int64 v59; // r9
  __int64 v60; // r8
  unsigned int v61; // edi
  __int64 v62; // r9
  __int64 v63; // r11
  unsigned __int16 *v64; // r12
  unsigned int v65; // edi
  void *v66; // rsp
  __int64 v67; // rdx
  char v68; // r8
  char v69; // cl
  unsigned int v70; // r15d
  _OWORD *v71; // r14
  __int64 v72; // rdx
  __int16 v73; // r14
  int v74; // r15d
  char v75; // al
  unsigned __int16 v76; // r12
  __int64 v77; // rdx
  __int64 v78; // rdi
  BOOLEAN v79; // al
  char v80; // di
  __int64 v81; // rax
  int v82; // ecx
  __int64 v83; // r14
  unsigned int v84; // ecx
  signed __int64 *v85; // rdx
  signed __int64 v86; // rax
  signed __int64 v87; // rtt
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rdx
  __int64 v91; // rsi
  unsigned int ReserveTraceBufferStatus; // ebx
  BOOLEAN v93; // al
  int v94; // ecx
  __int64 v95; // rax
  _WORD *v96; // r15
  GUID v97; // xmm0
  unsigned __int16 *v98; // r9
  __int64 v99; // r14
  unsigned __int16 v100; // si
  unsigned __int16 v101; // si
  _WORD *v102; // rdi
  unsigned __int16 *v103; // rsi
  unsigned __int16 *v104; // rcx
  unsigned __int16 *v105; // rdi
  int SessionId; // eax
  int v107; // ecx
  unsigned __int16 *v108; // rdx
  unsigned __int16 *v109; // r8
  struct _KPRCB *v110; // rcx
  unsigned __int64 v111; // rax
  unsigned __int16 *v112; // rdi
  PVOID PoolWithTag; // rbx
  unsigned __int16 *v114; // rdi
  unsigned __int16 v115; // si
  unsigned __int16 v116; // si
  unsigned __int16 *v117; // r9
  int v118; // r10d
  _OWORD *v119; // r14
  unsigned __int16 *v120; // rbx
  __int64 v121; // rax
  unsigned __int16 v122; // dx
  char *v123; // r12
  unsigned int v124; // edi
  unsigned int v125; // esi
  size_t v126; // rdx
  _QWORD *v127; // r9
  char v128; // r8
  size_t v129; // rbx
  char *v130; // rcx
  __int64 v131; // rbx
  _SLIST_ENTRY *v132; // r14
  struct _KPRCB *v133; // rdx
  _GENERAL_LOOKASIDE *v134; // rcx
  int BugCheckParameter4; // [rsp+0h] [rbp-640h]
  char v136; // [rsp+30h] [rbp-610h] BYREF
  char v137; // [rsp+640h] [rbp+0h]
  unsigned __int8 CurrentIrql; // [rsp+641h] [rbp+1h]
  unsigned __int8 v139; // [rsp+648h] [rbp+8h]
  unsigned __int16 v140; // [rsp+650h] [rbp+10h]
  int v141; // [rsp+654h] [rbp+14h]
  int v142; // [rsp+658h] [rbp+18h]
  int BugCheckParameter3; // [rsp+65Ch] [rbp+1Ch]
  unsigned __int16 BugCheckParameter3_4; // [rsp+660h] [rbp+20h]
  unsigned __int8 v145; // [rsp+664h] [rbp+24h]
  char v146; // [rsp+665h] [rbp+25h]
  int v147; // [rsp+668h] [rbp+28h]
  unsigned int v148; // [rsp+66Ch] [rbp+2Ch]
  unsigned __int16 *v149; // [rsp+670h] [rbp+30h]
  __int64 v150; // [rsp+678h] [rbp+38h]
  int Size; // [rsp+680h] [rbp+40h]
  __int16 Size_4; // [rsp+684h] [rbp+44h]
  int v153; // [rsp+688h] [rbp+48h]
  unsigned __int16 *v154; // [rsp+690h] [rbp+50h]
  __int64 v155; // [rsp+698h] [rbp+58h]
  void *Src; // [rsp+6A0h] [rbp+60h]
  _OWORD *v157; // [rsp+6A8h] [rbp+68h]
  unsigned __int16 *v158; // [rsp+6B0h] [rbp+70h]
  __int64 v159; // [rsp+6B8h] [rbp+78h]
  void *StackLookasideListEntry; // [rsp+6C0h] [rbp+80h] BYREF
  unsigned __int16 *v161; // [rsp+6C8h] [rbp+88h]
  __int64 v162; // [rsp+6D0h] [rbp+90h]
  __int64 v163; // [rsp+6D8h] [rbp+98h]
  _DWORD *v164; // [rsp+6E0h] [rbp+A0h]
  void *v165; // [rsp+6E8h] [rbp+A8h]
  void *v166; // [rsp+6F0h] [rbp+B0h]
  __int64 v167; // [rsp+6F8h] [rbp+B8h]
  __int64 v168; // [rsp+700h] [rbp+C0h]
  struct _KTHREAD *v169; // [rsp+708h] [rbp+C8h]
  unsigned __int64 v170; // [rsp+710h] [rbp+D0h]
  void *v171; // [rsp+718h] [rbp+D8h]
  __int64 v172; // [rsp+720h] [rbp+E0h]
  __int64 v173; // [rsp+728h] [rbp+E8h] BYREF
  __int64 CurrentSiloState; // [rsp+730h] [rbp+F0h]
  unsigned __int64 *v175; // [rsp+738h] [rbp+F8h]
  char *v176; // [rsp+740h] [rbp+100h]
  signed __int64 v177; // [rsp+748h] [rbp+108h]
  __int128 v178; // [rsp+750h] [rbp+110h] BYREF
  __int64 v179; // [rsp+760h] [rbp+120h]
  unsigned __int64 HighLimit; // [rsp+768h] [rbp+128h] BYREF
  unsigned __int64 LowLimit; // [rsp+770h] [rbp+130h] BYREF
  signed __int64 v182; // [rsp+778h] [rbp+138h]
  _OWORD v183[25]; // [rsp+780h] [rbp+140h] BYREF
  _DWORD *v185; // [rsp+9C8h] [rbp+388h]

  v155 = a14;
  v162 = a1;
  v139 = a2;
  v149 = a5;
  v163 = a11;
  v172 = a13;
  v171 = a16;
  v175 = a17;
  v153 = 0;
  memset(v183, 0, 0x188uLL);
  Src = 0LL;
  v164 = 0LL;
  StackLookasideListEntry = 0LL;
  v170 = 0LL;
  Size_4 = a15 & 0x200;
  CurrentSiloState = EtwpGetCurrentSiloState();
  if ( a10 > 0x80 )
    return 3221225485LL;
  v21 = v155;
  if ( !v155 )
    v21 = a1;
  v155 = v21;
  v168 = v21;
  if ( !v171 || (a15 & 0x400) != 0 )
    v140 = 0;
  else
    v140 = *(_WORD *)v171;
  v137 = 0;
  v22 = *(_QWORD *)(a1 + 392);
  v150 = v22;
  v167 = v22;
  if ( v175 && *v175 )
  {
    v170 = *v175;
    v137 = 4;
  }
  CurrentThread = KeGetCurrentThread();
  v169 = CurrentThread;
  v24 = a12;
  if ( !a12 )
    v24 = (__int64)CurrentThread;
  v185 = (_DWORD *)v24;
  if ( (unsigned __int8)KeAreInterruptsEnabled(CurrentThread, v19) )
    CurrentIrql = KeGetCurrentIrql();
  else
    CurrentIrql = 15;
  v145 = CurrentIrql;
  v146 = 0;
  if ( !CurrentIrql )
  {
    --v169->KernelApcDisable;
    v146 = 1;
  }
  v139 &= ~a3;
  v27 = v149;
  v28 = 1LL;
  while ( 1 )
  {
LABEL_21:
    v29 = !_BitScanForward((unsigned int *)&v30, v139);
    LODWORD(v154) = v30;
    if ( v29 )
      goto LABEL_150;
    v159 = 1LL;
    v178 = 0uLL;
    v179 = 0LL;
    v173 = 0LL;
    v31 = 80;
    BugCheckParameter3 = 80;
    v32 = 80;
    v142 = 80;
    v158 = 0LL;
    v161 = 0LL;
    LOBYTE(BugCheckParameter3_4) = 0;
    LOWORD(Size) = 0;
    v147 = 0;
    v165 = 0LL;
    v176 = 0LL;
    v139 &= v139 - 1;
    v33 = (unsigned int)v30;
    v34 = v26 + 32 * (v30 + 4);
    if ( v172 )
    {
      v35 = *(_DWORD *)(v172 + 4LL * (*(unsigned __int16 *)(v34 + 6) >> 5));
      if ( _bittest(&v35, *(_BYTE *)(v34 + 6) & 0x1F) )
        continue;
    }
    v36 = *((_QWORD *)v27 + 1);
    if ( *(_DWORD *)v34 )
    {
      v37 = *(_BYTE *)(v34 + 4);
      if ( *((_BYTE *)v27 + 4) <= v37 || !v37 )
      {
        v28 = *(unsigned int *)(v34 + 8);
        if ( (v28 & 0x40) == 0 || v36 )
        {
          if ( (v36 & *(_QWORD *)(v34 + 16)) == 0 )
          {
            v28 = 1LL;
            continue;
          }
          if ( (v36 & *(_QWORD *)(v34 + 24)) != *(_QWORD *)(v34 + 24) )
          {
            v28 = 1LL;
            continue;
          }
        }
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( (a4 & 2) == 0 && SLODWORD(Process[1].DirectoryTableBase) >= 0 )
          break;
        v28 = 1LL;
        if ( (*(_DWORD *)(v34 + 8) & 0x200) == 0 )
          break;
      }
    }
  }
  LODWORD(v39) = 0;
  v141 = 0;
  v40 = *(_QWORD *)(v26 + 384);
  if ( v40 )
  {
    v41 = *(_DWORD *)(104 * v33 + v40);
    if ( (v41 & 0x80000200) == 0x80000200 || (v41 & 0x80000100) == 0x80000100 )
    {
      if ( !(unsigned __int8)EtwpApplyEventIdPayloadFilter(
                               v26,
                               (_DWORD)v154,
                               0,
                               (_DWORD)v27,
                               *v27,
                               v25,
                               v163,
                               0,
                               CurrentIrql) )
      {
LABEL_54:
        v22 = v150;
        v26 = v155;
        v28 = 1LL;
        v25 = a10;
        goto LABEL_21;
      }
      v26 = v155;
    }
  }
  if ( Size_4 )
  {
    v43 = *((_QWORD *)v27 + 1);
    v44 = 0LL;
    v45 = *(_QWORD *)(v26 + 384);
    if ( v45 )
    {
      v28 = v45 + 104 * v33;
      if ( (*(_DWORD *)v28 & 0x80000400) == 0x80000400 )
      {
        v44 = *(_QWORD *)(v28 + 96);
        LODWORD(v39) = v141;
      }
      if ( v44 )
      {
        v46 = *(_BYTE *)(v44 + 1);
        if ( (*((_BYTE *)v27 + 4) <= v46 || !v46)
          && (!v43 || (v43 & *(_QWORD *)(v44 + 8)) != 0 && (v43 & *(_QWORD *)(v44 + 16)) == *(_QWORD *)(v44 + 16))
          && !(unsigned __int8)EtwpApplyEventNameFilter(
                                 v26,
                                 (_DWORD)v154,
                                 a10,
                                 v163,
                                 0,
                                 CurrentIrql,
                                 *((_BYTE *)v27 + 4),
                                 *((_QWORD *)v27 + 1),
                                 0) )
        {
          goto LABEL_54;
        }
      }
    }
  }
  if ( a9 )
  {
    v31 = 104;
    BugCheckParameter3 = 104;
    LODWORD(v39) = 8;
    v141 = 8;
  }
  if ( (*(_DWORD *)(v34 + 8) & 0xFFFFFF9F) != 0 )
  {
    if ( EtwpPagingDisabled || (a4 & 1) != 0 || !MmCanThreadFault() || (v47 = 128, BYTE6(v169[1].Queue)) )
      v47 = 0;
    LODWORD(v39) = v47 | (unsigned int)v39 & 0xFFFFFF7F;
    v141 = (int)v39;
    v48 = *(_DWORD *)(v34 + 8);
    v49 = (char)v39;
    if ( (v48 & 0x800) != 0 && CurrentSiloState != EtwpHostSiloState )
    {
      LODWORD(v39) = (unsigned int)v39 | 0x100;
      v141 = (int)v39;
      v31 += (*(unsigned __int16 *)(CurrentSiloState + 4200) + 15) & 0xFFFFFFF8;
      BugCheckParameter3 = v31;
      v49 = (char)v39;
    }
    if ( (v48 & 1) != 0 && v49 < 0 )
    {
      v50 = Src;
      if ( Src )
        goto LABEL_77;
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
      v164 = v50;
      if ( v50 )
      {
        EtwpGetSidExtendedHeaderItem();
        v50 = Src;
      }
      v27 = v149;
      LODWORD(v39) = v141;
      if ( v50 )
      {
LABEL_77:
        LODWORD(v39) = (unsigned int)v39 | 2;
        v141 = (int)v39;
        v31 += *(unsigned __int16 *)v50;
        BugCheckParameter3 = v31;
      }
    }
    v54 = *(_DWORD *)(v34 + 8);
    if ( (v54 & 2) != 0 )
    {
      LODWORD(v39) = (unsigned int)v39 | 1;
      v141 = (int)v39;
      v31 += 16;
      BugCheckParameter3 = v31;
    }
    if ( (v54 & 0x80u) != 0 )
    {
      if ( (unsigned __int8)KeGetEffectiveIrql() < 2u || (LODWORD(v39) = v141, !KeGetCurrentPrcb()->NestingLevel) )
      {
        LODWORD(v39) = (unsigned int)v39 | 0x20;
        v141 = (int)v39;
        v31 += 16;
        BugCheckParameter3 = v31;
      }
    }
    v55 = *(_DWORD *)(v34 + 8);
    if ( (v55 & 0x100) != 0 )
    {
      LODWORD(v39) = (unsigned int)v39 | 0x40;
      v141 = (int)v39;
      v31 += 16;
      BugCheckParameter3 = v31;
    }
    if ( (v55 & 4) != 0 && !EtwpPagingDisabled )
    {
      v56 = *(_QWORD *)(v155 + 384);
      if ( v56
        && ((v57 = *(_DWORD *)(104 * v33 + v56), (v57 & 0x80001000) == 0x80001000)
         || (v57 & 0x80002000) == 0x80002000
         || (v57 & 0x80004000) == 0x80004000) )
      {
        v59 = *((_QWORD *)v27 + 1);
        v60 = *((unsigned __int8 *)v27 + 4);
        v61 = (unsigned int)v154;
        if ( !(unsigned __int8)EtwpApplyLevelKwFilter(v155, (unsigned int)v154, v60, v59) )
          goto LABEL_117;
        v64 = v149;
        LOBYTE(v62) = v145 < 2u;
        if ( !(unsigned __int8)EtwpApplyStackWalkIdFilter(*v149, v63, v61, v62)
          || !(unsigned __int8)EtwpApplyEventNameFilter(
                                 v155,
                                 v61,
                                 a10,
                                 v163,
                                 0,
                                 CurrentIrql,
                                 *((_BYTE *)v64 + 4),
                                 *((_QWORD *)v64 + 1),
                                 1) )
        {
          goto LABEL_117;
        }
      }
      else
      {
        v64 = v149;
      }
      if ( (v137 & 1) == 0 )
      {
        v65 = 256;
        StackLookasideListEntry = (void *)EtwpGetStackLookasideListEntry();
        if ( !StackLookasideListEntry )
        {
          IoGetStackLimits(&LowLimit, &HighLimit);
          if ( (unsigned __int64)&HighLimit - LowLimit > 0x1440 )
          {
            v66 = alloca(1552LL);
            StackLookasideListEntry = &v136;
            v65 = 192;
          }
        }
        if ( StackLookasideListEntry )
        {
          v67 = 0LL;
          v68 = 1;
          if ( *(_QWORD *)(v162 + 40) == *(_QWORD *)&EventTracingProvGuid.Data1
            && *(_QWORD *)(v162 + 48) == *(_QWORD *)EventTracingProvGuid.Data4
            && *v64 == 18 )
          {
            LODWORD(v39) = (unsigned int)v39 | 0x10;
            v141 = (int)v39;
            v67 = v162 + 80;
            v68 = 0;
          }
          LOBYTE(BugCheckParameter4) = v68;
          EtwpGetStackExtendedHeaderItem(v169, a4, v65, &StackLookasideListEntry, BugCheckParameter4, v67);
          if ( StackLookasideListEntry && v65 == 256 )
            v69 = 2;
          else
            v69 = 0;
          v137 = v69 | v137 & 0xFD;
        }
        v137 |= 1u;
      }
      if ( StackLookasideListEntry )
      {
        LODWORD(v39) = (unsigned int)v39 | 4;
        v141 = (int)v39;
        v31 += *(unsigned __int16 *)StackLookasideListEntry;
        BugCheckParameter3 = v31;
      }
    }
  }
LABEL_117:
  v70 = *(unsigned __int16 *)(v34 + 6);
  v148 = v70;
  v71 = &v183[3 * LODWORD(v183[24])];
  v157 = v71;
  if ( a10 )
  {
    v72 = v163 + 8;
    v28 = a10;
    v73 = Size;
    v74 = v147;
    do
    {
      if ( Size_4 )
        v75 = *(_BYTE *)(v72 + 4);
      else
        v75 = 0;
      if ( v75 )
      {
        if ( v75 == 1 )
        {
          v73 += *(_WORD *)v72;
          LOWORD(Size) = v73;
          v147 = ++v74;
        }
      }
      else
      {
        v31 += *(_DWORD *)v72;
      }
      v72 += 16LL;
      --v28;
    }
    while ( v28 );
    BugCheckParameter3 = v31;
    v71 = v157;
    v70 = v148;
  }
  if ( v147 )
  {
    v31 += ((unsigned __int16)Size + 15) & 0xFFFFFFF8;
    BugCheckParameter3 = v31;
  }
  v76 = v140;
  if ( v140 )
  {
    v31 += (v140 + 15) & 0xFFFFFFF8;
    BugCheckParameter3 = v31;
  }
  *((_DWORD *)v71 + 10) = v31;
  v77 = v150;
  if ( CurrentIrql >= 2u )
  {
    v80 = BugCheckParameter3_4;
    if ( v70 >= *(_DWORD *)(v150 + 16) )
    {
      LODWORD(v81) = 1;
      v159 = 1LL;
    }
    else
    {
      _mm_lfence();
      v81 = *(_QWORD *)(*(_QWORD *)(v150 + 456) + 8LL * v70);
      v159 = v81;
      v76 = v140;
      LODWORD(v39) = v141;
    }
  }
  else
  {
    v78 = 8LL * v70;
    v79 = ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v150 + 448) + v78), 1u);
    v77 = v150;
    if ( v79 )
    {
      if ( v70 >= *(_DWORD *)(v150 + 16) )
      {
        v159 = 1LL;
      }
      else
      {
        _mm_lfence();
        v159 = *(_QWORD *)(v78 + *(_QWORD *)(v150 + 456));
        v76 = v140;
        LODWORD(v39) = v141;
      }
      v80 = 1;
    }
    else
    {
      v80 = BugCheckParameter3_4;
    }
    LODWORD(v81) = v159;
  }
  if ( (v81 & 1) != 0 )
  {
    if ( v80 )
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v77 + 448) + 8LL * v70), 1u);
    if ( v70 == 3 )
    {
      v22 = v150;
      v82 = -1073741058;
      if ( !*(_DWORD *)(v150 + 4068) )
        v82 = -1073741816;
      v153 = v82;
LABEL_150:
      v83 = (__int64)v149;
      goto LABEL_151;
    }
    goto LABEL_174;
  }
  v89 = EtwpReserveTraceBuffer(v81, v31, (unsigned int)&v178, (unsigned int)&v173, 0);
  v157 = (_OWORD *)v89;
  if ( v89 )
  {
    v95 = v159;
    *(_QWORD *)v71 = v159;
    *((_QWORD *)v71 + 1) = v89;
    v71[1] = v178;
    *((_QWORD *)v71 + 4) = v179;
    ++LODWORD(v183[24]);
    *(_DWORD *)v89 = v31 | *(_DWORD *)(v95 + 20);
    v96 = (_WORD *)(v89 + 4);
    v166 = (void *)(v89 + 4);
    *(_WORD *)(v89 + 4) = a6;
    *(_WORD *)(v89 + 6) = a7;
    *(_OWORD *)(v89 + 24) = *(_OWORD *)(v162 + 40);
    *(_OWORD *)(v89 + 40) = *(_OWORD *)v149;
    if ( a8 )
      v97 = *a8;
    else
      v97 = NullGuid;
    *(GUID *)(v89 + 64) = v97;
    *(_QWORD *)(v89 + 16) = v173;
    *(_DWORD *)(v89 + 8) = v185[404];
    *(_DWORD *)(v89 + 12) = v185[402];
    *(_DWORD *)(v89 + 56) = v185[163];
    *(_DWORD *)(v89 + 60) = v185[183];
    if ( !(_DWORD)v39 )
    {
      v103 = v158;
LABEL_220:
      if ( v76 )
      {
        v114 = (unsigned __int16 *)(v89 + v32);
        v154 = v114;
        v115 = (v76 + 15) & 0xFFF8;
        *v114 = v115;
        *(_DWORD *)(v114 + 1) = 12;
        v114[3] = v76;
        v116 = v115 - v76 - 8;
        BugCheckParameter3_4 = v116;
        memmove(v114 + 4, v171, v76);
        memset((char *)v114 + v76 + 8, 0, v116);
        v117 = v158;
        *v96 |= 1u;
        v32 += *v114;
        v142 = v32;
        if ( v117 )
          v117[2] |= 1u;
        v103 = v114;
      }
      v118 = v147;
      v119 = v157;
      if ( v147 )
      {
        v120 = (unsigned __int16 *)((char *)v157 + v32);
        v121 = (unsigned __int16)Size;
        v122 = (Size + 15) & 0xFFF8;
        *v120 = v122;
        *(_DWORD *)(v120 + 1) = 11;
        v120[3] = v121;
        v123 = (char *)(v120 + 4);
        v165 = v120 + 4;
        v176 = (char *)v120 + v121 + 8;
        memset(v176, 0, (unsigned __int16)(v122 - v121 - 8));
        *v96 |= 1u;
        v32 += *v120;
        v142 = v32;
        v118 = v147;
        if ( v103 )
          v103[2] |= 1u;
      }
      else
      {
        v123 = (char *)v165;
      }
      v124 = 0;
      v125 = BugCheckParameter3;
      while ( 1 )
      {
        while ( 1 )
        {
          LODWORD(v154) = v124;
          if ( v124 >= a10 )
          {
            v131 = v159;
            if ( (*(_DWORD *)(v159 + 12) & 0x80000) != 0
              && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
            {
              EtwpSendTraceEvent(v159, &v178);
            }
            if ( *(_QWORD *)(v131 + 1304) )
              EtwpInvokeEventCallback(v131, &v178, v162 + 40, 0LL);
            v27 = v149;
            v22 = v150;
            v26 = v155;
            v28 = 1LL;
            v25 = a10;
            if ( v172 )
              *(_DWORD *)(v172 + 4LL * (v148 >> 5)) |= 1 << (v148 & 0x1F);
            goto LABEL_21;
          }
          v126 = *(unsigned int *)(v163 + 16LL * v124 + 8);
          Size = *(_DWORD *)(v163 + 16LL * v124 + 8);
          v127 = *(_QWORD **)(v163 + 16LL * v124);
          v128 = Size_4 ? *(_BYTE *)(v163 + 16LL * v124 + 12) : 0;
          if ( v128 )
            break;
          v130 = (char *)v119 + v32;
          v166 = v130;
          v32 += v126;
          v142 = v32;
          if ( v32 > v125 )
            KeBugCheckEx(0x11Du, 5uLL, v32, v125, 0LL);
          memmove(v130, v127, v126);
          v118 = v147;
LABEL_244:
          ++v124;
          v123 = (char *)v165;
        }
        if ( v128 != 1 )
        {
          if ( v128 == 3 && (_DWORD)v126 == 8 )
            *((_QWORD *)v119 + 2) = *v127;
          goto LABEL_244;
        }
        if ( !v123 || (v129 = v126, v166 = (void *)v126, &v123[v126] > v176) || !v118 )
          KeBugCheckEx(0x11Du, 5uLL, v32, v125, 0LL);
        memmove(v123, v127, v126);
        v123 += v129;
        v165 = v123;
        v118 = --v147;
        ++v124;
      }
    }
    if ( ((unsigned __int16)v39 & 0x100) != 0 )
    {
      v98 = (unsigned __int16 *)(v89 + 80);
      v158 = v98;
      v99 = CurrentSiloState;
      v100 = (*(_WORD *)(CurrentSiloState + 4200) + 15) & 0xFFF8;
      *v98 = v100;
      v98[1] = 16;
      v98[3] = *(_WORD *)(v99 + 4200);
      v98[2] = 0;
      v101 = v100 - *(_WORD *)(v99 + 4200) - 8;
      v102 = v98 + 4;
      memmove(v98 + 4, *(const void **)(v99 + 4192), *(unsigned __int16 *)(v99 + 4200));
      memset((char *)v102 + *(unsigned __int16 *)(v99 + 4200), 0, v101);
      *v96 |= 1u;
      v103 = v158;
      v32 = *v158 + 80;
      v142 = v32;
      v161 = v158;
      v89 = (__int64)v157;
    }
    else
    {
      v103 = v158;
    }
    if ( ((unsigned __int8)v39 & 8) != 0 )
    {
      v104 = (unsigned __int16 *)(v89 + v32);
      *(_DWORD *)v104 = 65560;
      *((_DWORD *)v104 + 1) = 0x100000;
      *(_OWORD *)(v104 + 4) = *a9;
      *v96 |= 1u;
      v32 += 24;
      v142 = v32;
      if ( v103 )
        v103[2] |= 1u;
      v103 = v104;
      v158 = v104;
      v161 = v104;
    }
    if ( ((unsigned __int8)v39 & 2) != 0 )
    {
      v105 = (unsigned __int16 *)(v89 + v32);
      memmove(v105, Src, *(unsigned __int16 *)Src);
      *v96 |= 1u;
      v32 += *(unsigned __int16 *)Src;
      v142 = v32;
      if ( v103 )
        v103[2] |= 1u;
      v103 = v105;
      v158 = v105;
      v161 = v105;
    }
    if ( ((unsigned __int8)v39 & 1) != 0 )
    {
      v39 = (unsigned __int16 *)((char *)v157 + v32);
      *(_DWORD *)v39 = 196624;
      *((_DWORD *)v39 + 1) = 0x40000;
      SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v107 = 0;
      if ( SessionId != -1 )
        v107 = SessionId;
      *((_DWORD *)v39 + 2) = v107;
      *v96 |= 1u;
      v32 += 16;
      v142 = v32;
      if ( v103 )
        v103[2] |= 1u;
      v103 = v39;
      v158 = v39;
      v161 = v39;
      v76 = v140;
      LOBYTE(v39) = v141;
    }
    v89 = (__int64)v157;
    if ( ((unsigned __int8)v39 & 0x20) != 0 )
    {
      v108 = (unsigned __int16 *)((char *)v157 + v32);
      *(_DWORD *)v108 = 851984;
      *((_DWORD *)v108 + 1) = 0x80000;
      *((_QWORD *)v108 + 1) = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].0 | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
      *v96 |= 1u;
      v32 += 16;
      v142 = v32;
      if ( v103 )
        v103[2] |= 1u;
      v103 = v108;
      v158 = v108;
      v161 = v108;
      v76 = v140;
      LOBYTE(v39) = v141;
    }
    if ( ((unsigned __int8)v39 & 0x40) != 0 )
    {
      v109 = (unsigned __int16 *)(v89 + v32);
      *(_DWORD *)v109 = 655376;
      *((_DWORD *)v109 + 1) = 0x80000;
      if ( (v137 & 4) != 0 )
      {
        v111 = v170;
      }
      else
      {
        v110 = KeGetCurrentPrcb();
        v111 = _InterlockedIncrement64((volatile signed __int64 *)v110->EtwSupport + 1) & 0xFFFFFFFFFFFFLL | ((unsigned __int64)v110->Number << 48);
        v170 = v111;
        v137 |= 4u;
        v76 = v140;
        LOBYTE(v39) = v141;
        if ( v175 )
          *v175 = v111;
      }
      *((_QWORD *)v109 + 1) = v111;
      *v96 |= 1u;
      v32 += 16;
      v142 = v32;
      if ( v103 )
        v103[2] |= 1u;
      v103 = v109;
      v158 = v109;
      v161 = v109;
    }
    if ( ((unsigned __int8)v39 & 4) == 0 )
      goto LABEL_220;
    v112 = (unsigned __int16 *)(v89 + v32);
    memmove(v112, StackLookasideListEntry, *(unsigned __int16 *)StackLookasideListEntry);
    if ( *((_QWORD *)v112 + 1) && ((unsigned __int8)v39 & 0x10) == 0 )
    {
      if ( v150 != EtwpHostSiloState )
        goto LABEL_215;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x41777445u);
      if ( !PoolWithTag )
        goto LABEL_215;
      KeInitializeApc(
        (__int64)PoolWithTag,
        (__int64)v185,
        0,
        (__int64)EtwpCrimsonStackWalkApc,
        0LL,
        (__int64)EtwpCrimsonStackWalkApc,
        0,
        v148);
      if ( !KeInsertQueueApc((__int64)PoolWithTag, *((unsigned int *)v112 + 2), *((unsigned int *)v112 + 3), 0) )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
LABEL_215:
        *((_QWORD *)v112 + 1) = 0LL;
      }
    }
    *v96 |= 1u;
    v32 += *(unsigned __int16 *)StackLookasideListEntry;
    v142 = v32;
    if ( v103 )
      v103[2] |= 1u;
    v103 = v112;
    v158 = v112;
    v161 = v112;
    v89 = (__int64)v157;
    goto LABEL_220;
  }
  v90 = v31;
  v91 = v159;
  ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v159, v90, v88);
  v93 = EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT);
  v83 = (__int64)v149;
  if ( v93 )
    EtwpTraceLostEvent(v162 + 40, v149, v91 + 152, ReserveTraceBufferStatus);
  v94 = v153;
  if ( v153 >= 0 )
  {
    if ( (*(_DWORD *)(v91 + 12) & 0x8000000) == 0 )
      v94 = ReserveTraceBufferStatus;
    v153 = v94;
  }
  if ( v80 )
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v150 + 448) + 8LL * v148), 1u);
  if ( ReserveTraceBufferStatus != -1073741675 )
  {
LABEL_174:
    v27 = v149;
    goto LABEL_54;
  }
  v153 = -1073741675;
  v22 = v150;
LABEL_151:
  if ( (v137 & 2) != 0 )
    RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, (PSLIST_ENTRY)StackLookasideListEntry - 1);
  if ( v153 < 0 )
  {
    EtwpFailLogging(
      *(unsigned __int8 *)(v83 + 4),
      *(_QWORD *)(v83 + 8),
      v162,
      (unsigned int)v183,
      v139,
      v153,
      v83,
      v145 < 2u);
  }
  else
  {
    v84 = 0;
    LODWORD(v154) = 0;
    if ( LODWORD(v183[24]) )
    {
      do
      {
        v28 = *(_QWORD *)&v183[3 * v84 + 1];
        v85 = (signed __int64 *)*((_QWORD *)&v183[3 * v84 + 1] + 1);
        _m_prefetchw(v85);
        v86 = *v85;
        v177 = v86;
        if ( (v28 ^ (unsigned __int64)v86) >= 0xF )
        {
LABEL_158:
          _InterlockedDecrement((volatile signed __int32 *)(v28 + 12));
        }
        else
        {
          while ( 1 )
          {
            v182 = v86 + 1;
            v87 = v86;
            v86 = _InterlockedCompareExchange64(v85, v86 + 1, v86);
            v182 = v86;
            if ( v87 == v86 )
              break;
            v177 = v86;
            if ( (v28 ^ (unsigned __int64)v86) >= 0xF )
              goto LABEL_158;
          }
        }
        if ( CurrentIrql < 2u )
          ExReleaseRundownProtectionCacheAwareEx(
            *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v22 + 448) + 8LL * **(unsigned int **)&v183[3 * v84]),
            1u);
        LODWORD(v154) = (_DWORD)v154 + 1;
        v84 = (unsigned int)v154;
      }
      while ( (unsigned int)v154 < LODWORD(v183[24]) );
    }
  }
  if ( v146 )
    KeLeaveCriticalRegionThread((__int64)v169);
  v132 = (_SLIST_ENTRY *)Src;
  if ( Src )
  {
    v133 = KeGetCurrentPrcb();
    v134 = v133->PPLookasideList[8].P;
    ++v134->TotalFrees;
    if ( LOWORD(v134->ListHead.Alignment) < v134->Depth
      || (++v134->FreeMisses,
          v134 = v133->PPLookasideList[8].L,
          ++v134->TotalFrees,
          LOWORD(v134->ListHead.Alignment) < v134->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v134->ListHead, v132);
    }
    else
    {
      ++v134->FreeMisses;
      ((void (__fastcall *)(_SLIST_ENTRY *, struct _KPRCB *, __int64))v134->FreeEx)(v132, v133, v28);
    }
  }
  return (unsigned int)v153;
}
