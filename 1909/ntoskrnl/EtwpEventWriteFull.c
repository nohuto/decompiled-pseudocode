/*
 * XREFs of EtwpEventWriteFull @ 0x1400A0020
 * Callers:
 *     EtwWriteEx @ 0x1400366F0 (EtwWriteEx.c)
 *     EtwWriteKMSecurityEvent @ 0x14013350C (EtwWriteKMSecurityEvent.c)
 *     EtwWriteString @ 0x14032B660 (EtwWriteString.c)
 *     EtwpCrimsonStackWalkApc @ 0x14032B9E0 (EtwpCrimsonStackWalkApc.c)
 *     EtwpDiskProvTraceDisk @ 0x14032E234 (EtwpDiskProvTraceDisk.c)
 *     EtwWriteErrorLogEntry @ 0x14073A070 (EtwWriteErrorLogEntry.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 *     KeInitializeApc @ 0x140082030 (KeInitializeApc.c)
 *     MmCanThreadFault @ 0x14009F55C (MmCanThreadFault.c)
 *     KeGetEffectiveIrql @ 0x1400A16B0 (KeGetEffectiveIrql.c)
 *     IoGetStackLimits @ 0x1400A2DA0 (IoGetStackLimits.c)
 *     KeAreInterruptsEnabled @ 0x1400A3040 (KeAreInterruptsEnabled.c)
 *     EtwpReserveTraceBuffer @ 0x1400A3060 (EtwpReserveTraceBuffer.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1400D3DA0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     KeInsertQueueApc @ 0x1400E5200 (KeInsertQueueApc.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400F2760 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpFailLogging @ 0x14013BA44 (EtwpFailLogging.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401CC570 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CC5B0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x14032BB2C (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpGetStackLookasideListEntry @ 0x14032C920 (EtwpGetStackLookasideListEntry.c)
 *     EtwpGetCurrentSiloState @ 0x1403303B4 (EtwpGetCurrentSiloState.c)
 *     EtwpTraceLostEvent @ 0x1403303F8 (EtwpTraceLostEvent.c)
 *     EtwpSendTraceEvent @ 0x140330F08 (EtwpSendTraceEvent.c)
 *     EtwpInvokeEventCallback @ 0x140331A84 (EtwpInvokeEventCallback.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x140331B9C (EtwpGetReserveTraceBufferStatus.c)
 *     EtwpApplyEventIdPayloadFilter @ 0x140331DD4 (EtwpApplyEventIdPayloadFilter.c)
 *     EtwpApplyEventNameFilter @ 0x140331FAC (EtwpApplyEventNameFilter.c)
 *     EtwpApplyStackWalkIdFilter @ 0x1403323A0 (EtwpApplyStackWalkIdFilter.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140658230 (EtwpGetSidExtendedHeaderItem.c)
 *     EtwpApplyLevelKwFilter @ 0x1408FE798 (EtwpApplyLevelKwFilter.c)
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
  __int64 v88; // r9
  __int64 v89; // rdx
  __int64 v90; // rsi
  unsigned int ReserveTraceBufferStatus; // ebx
  BOOLEAN v92; // al
  int v93; // ecx
  __int64 v94; // rax
  _WORD *v95; // r15
  GUID v96; // xmm0
  unsigned __int16 *v97; // r9
  __int64 v98; // r14
  unsigned __int16 v99; // si
  unsigned __int16 v100; // si
  _WORD *v101; // rdi
  unsigned __int16 *v102; // rsi
  unsigned __int16 *v103; // rcx
  unsigned __int16 *v104; // rdi
  int SessionId; // eax
  int v106; // ecx
  unsigned __int16 *v107; // rdx
  unsigned __int16 *v108; // r8
  struct _KPRCB *v109; // rcx
  unsigned __int64 v110; // rax
  unsigned __int16 *v111; // rdi
  PVOID PoolWithTag; // rbx
  unsigned __int16 *v113; // rdi
  unsigned __int16 v114; // si
  unsigned __int16 v115; // si
  unsigned __int16 *v116; // r9
  int v117; // r10d
  _OWORD *v118; // r14
  unsigned __int16 *v119; // rbx
  __int64 v120; // rax
  unsigned __int16 v121; // dx
  char *v122; // r12
  unsigned int v123; // edi
  unsigned int v124; // esi
  size_t v125; // rdx
  _QWORD *v126; // r9
  char v127; // r8
  size_t v128; // rbx
  char *v129; // rcx
  __int64 v130; // rbx
  _SLIST_ENTRY *v131; // r14
  struct _KPRCB *v132; // rdx
  _GENERAL_LOOKASIDE *v133; // rcx
  int BugCheckParameter4; // [rsp+0h] [rbp-640h]
  char v135; // [rsp+30h] [rbp-610h] BYREF
  char v136; // [rsp+640h] [rbp+0h]
  unsigned __int8 CurrentIrql; // [rsp+641h] [rbp+1h]
  unsigned __int8 v138; // [rsp+648h] [rbp+8h]
  unsigned __int16 v139; // [rsp+650h] [rbp+10h]
  int v140; // [rsp+654h] [rbp+14h]
  int v141; // [rsp+658h] [rbp+18h]
  int BugCheckParameter3; // [rsp+65Ch] [rbp+1Ch]
  unsigned __int16 BugCheckParameter3_4; // [rsp+660h] [rbp+20h]
  unsigned __int8 v144; // [rsp+664h] [rbp+24h]
  char v145; // [rsp+665h] [rbp+25h]
  int v146; // [rsp+668h] [rbp+28h]
  unsigned int v147; // [rsp+66Ch] [rbp+2Ch]
  unsigned __int16 *v148; // [rsp+670h] [rbp+30h]
  __int64 v149; // [rsp+678h] [rbp+38h]
  int Size; // [rsp+680h] [rbp+40h]
  __int16 Size_4; // [rsp+684h] [rbp+44h]
  int v152; // [rsp+688h] [rbp+48h]
  unsigned __int16 *v153; // [rsp+690h] [rbp+50h]
  __int64 v154; // [rsp+698h] [rbp+58h]
  void *Src; // [rsp+6A0h] [rbp+60h]
  _OWORD *v156; // [rsp+6A8h] [rbp+68h]
  unsigned __int16 *v157; // [rsp+6B0h] [rbp+70h]
  __int64 v158; // [rsp+6B8h] [rbp+78h]
  void *StackLookasideListEntry; // [rsp+6C0h] [rbp+80h] BYREF
  unsigned __int16 *v160; // [rsp+6C8h] [rbp+88h]
  __int64 v161; // [rsp+6D0h] [rbp+90h]
  __int64 v162; // [rsp+6D8h] [rbp+98h]
  _DWORD *v163; // [rsp+6E0h] [rbp+A0h]
  void *v164; // [rsp+6E8h] [rbp+A8h]
  void *v165; // [rsp+6F0h] [rbp+B0h]
  __int64 v166; // [rsp+6F8h] [rbp+B8h]
  __int64 v167; // [rsp+700h] [rbp+C0h]
  struct _KTHREAD *v168; // [rsp+708h] [rbp+C8h]
  unsigned __int64 v169; // [rsp+710h] [rbp+D0h]
  void *v170; // [rsp+718h] [rbp+D8h]
  __int64 v171; // [rsp+720h] [rbp+E0h]
  __int64 v172; // [rsp+728h] [rbp+E8h] BYREF
  __int64 CurrentSiloState; // [rsp+730h] [rbp+F0h]
  unsigned __int64 *v174; // [rsp+738h] [rbp+F8h]
  char *v175; // [rsp+740h] [rbp+100h]
  signed __int64 v176; // [rsp+748h] [rbp+108h]
  __int128 v177; // [rsp+750h] [rbp+110h] BYREF
  __int64 v178; // [rsp+760h] [rbp+120h]
  unsigned __int64 HighLimit; // [rsp+768h] [rbp+128h] BYREF
  unsigned __int64 LowLimit; // [rsp+770h] [rbp+130h] BYREF
  signed __int64 v181; // [rsp+778h] [rbp+138h]
  _OWORD v182[25]; // [rsp+780h] [rbp+140h] BYREF
  _DWORD *v184; // [rsp+9C8h] [rbp+388h]

  v154 = a14;
  v161 = a1;
  v138 = a2;
  v148 = a5;
  v162 = a11;
  v171 = a13;
  v170 = a16;
  v174 = a17;
  v152 = 0;
  memset(v182, 0, 0x188uLL);
  Src = 0LL;
  v163 = 0LL;
  StackLookasideListEntry = 0LL;
  v169 = 0LL;
  Size_4 = a15 & 0x200;
  CurrentSiloState = EtwpGetCurrentSiloState();
  if ( a10 > 0x80 )
    return 3221225485LL;
  v21 = v154;
  if ( !v154 )
    v21 = a1;
  v154 = v21;
  v167 = v21;
  if ( !v170 || (a15 & 0x400) != 0 )
    v139 = 0;
  else
    v139 = *(_WORD *)v170;
  v136 = 0;
  v22 = *(_QWORD *)(a1 + 392);
  v149 = v22;
  v166 = v22;
  if ( v174 && *v174 )
  {
    v169 = *v174;
    v136 = 4;
  }
  CurrentThread = KeGetCurrentThread();
  v168 = CurrentThread;
  v24 = a12;
  if ( !a12 )
    v24 = (__int64)CurrentThread;
  v184 = (_DWORD *)v24;
  if ( (unsigned __int8)KeAreInterruptsEnabled(CurrentThread, v19) )
    CurrentIrql = KeGetCurrentIrql();
  else
    CurrentIrql = 15;
  v144 = CurrentIrql;
  v145 = 0;
  if ( !CurrentIrql )
  {
    --v168->KernelApcDisable;
    v145 = 1;
  }
  v138 &= ~a3;
  v27 = v148;
  v28 = 1LL;
  while ( 1 )
  {
LABEL_21:
    v29 = !_BitScanForward((unsigned int *)&v30, v138);
    LODWORD(v153) = v30;
    if ( v29 )
      goto LABEL_150;
    v158 = 1LL;
    v177 = 0uLL;
    v178 = 0LL;
    v172 = 0LL;
    v31 = 80;
    BugCheckParameter3 = 80;
    v32 = 80;
    v141 = 80;
    v157 = 0LL;
    v160 = 0LL;
    LOBYTE(BugCheckParameter3_4) = 0;
    LOWORD(Size) = 0;
    v146 = 0;
    v164 = 0LL;
    v175 = 0LL;
    v138 &= v138 - 1;
    v33 = (unsigned int)v30;
    v34 = v26 + 32 * (v30 + 4);
    if ( v171 )
    {
      v35 = *(_DWORD *)(v171 + 4LL * (*(unsigned __int16 *)(v34 + 6) >> 5));
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
  v140 = 0;
  v40 = *(_QWORD *)(v26 + 384);
  if ( v40 )
  {
    v41 = *(_DWORD *)(104 * v33 + v40);
    if ( (v41 & 0x80000200) == 0x80000200 || (v41 & 0x80000100) == 0x80000100 )
    {
      if ( !(unsigned __int8)EtwpApplyEventIdPayloadFilter(
                               v26,
                               (_DWORD)v153,
                               0,
                               (_DWORD)v27,
                               *v27,
                               v25,
                               v162,
                               0,
                               CurrentIrql) )
      {
LABEL_54:
        v22 = v149;
        v26 = v154;
        v28 = 1LL;
        v25 = a10;
        goto LABEL_21;
      }
      v26 = v154;
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
        LODWORD(v39) = v140;
      }
      if ( v44 )
      {
        v46 = *(_BYTE *)(v44 + 1);
        if ( (*((_BYTE *)v27 + 4) <= v46 || !v46)
          && (!v43 || (v43 & *(_QWORD *)(v44 + 8)) != 0 && (v43 & *(_QWORD *)(v44 + 16)) == *(_QWORD *)(v44 + 16))
          && !(unsigned __int8)EtwpApplyEventNameFilter(
                                 v26,
                                 (_DWORD)v153,
                                 a10,
                                 v162,
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
    v140 = 8;
  }
  if ( (*(_DWORD *)(v34 + 8) & 0xFFFFFF9F) != 0 )
  {
    if ( EtwpPagingDisabled || (a4 & 1) != 0 || !MmCanThreadFault() || (v47 = 128, BYTE6(v168[1].Queue)) )
      v47 = 0;
    LODWORD(v39) = v47 | (unsigned int)v39 & 0xFFFFFF7F;
    v140 = (int)v39;
    v48 = *(_DWORD *)(v34 + 8);
    v49 = (char)v39;
    if ( (v48 & 0x800) != 0 && CurrentSiloState != EtwpHostSiloState )
    {
      LODWORD(v39) = (unsigned int)v39 | 0x100;
      v140 = (int)v39;
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
      v163 = v50;
      if ( v50 )
      {
        EtwpGetSidExtendedHeaderItem();
        v50 = Src;
      }
      v27 = v148;
      LODWORD(v39) = v140;
      if ( v50 )
      {
LABEL_77:
        LODWORD(v39) = (unsigned int)v39 | 2;
        v140 = (int)v39;
        v31 += *(unsigned __int16 *)v50;
        BugCheckParameter3 = v31;
      }
    }
    v54 = *(_DWORD *)(v34 + 8);
    if ( (v54 & 2) != 0 )
    {
      LODWORD(v39) = (unsigned int)v39 | 1;
      v140 = (int)v39;
      v31 += 16;
      BugCheckParameter3 = v31;
    }
    if ( (v54 & 0x80u) != 0 )
    {
      if ( (unsigned __int8)KeGetEffectiveIrql() < 2u || (LODWORD(v39) = v140, !KeGetCurrentPrcb()->NestingLevel) )
      {
        LODWORD(v39) = (unsigned int)v39 | 0x20;
        v140 = (int)v39;
        v31 += 16;
        BugCheckParameter3 = v31;
      }
    }
    v55 = *(_DWORD *)(v34 + 8);
    if ( (v55 & 0x100) != 0 )
    {
      LODWORD(v39) = (unsigned int)v39 | 0x40;
      v140 = (int)v39;
      v31 += 16;
      BugCheckParameter3 = v31;
    }
    if ( (v55 & 4) != 0 && !EtwpPagingDisabled )
    {
      v56 = *(_QWORD *)(v154 + 384);
      if ( v56
        && ((v57 = *(_DWORD *)(104 * v33 + v56), (v57 & 0x80001000) == 0x80001000)
         || (v57 & 0x80002000) == 0x80002000
         || (v57 & 0x80004000) == 0x80004000) )
      {
        v59 = *((_QWORD *)v27 + 1);
        v60 = *((unsigned __int8 *)v27 + 4);
        v61 = (unsigned int)v153;
        if ( !(unsigned __int8)EtwpApplyLevelKwFilter(v154, (unsigned int)v153, v60, v59) )
          goto LABEL_117;
        v64 = v148;
        LOBYTE(v62) = v144 < 2u;
        if ( !(unsigned __int8)EtwpApplyStackWalkIdFilter(*v148, v63, v61, v62)
          || !(unsigned __int8)EtwpApplyEventNameFilter(
                                 v154,
                                 v61,
                                 a10,
                                 v162,
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
        v64 = v148;
      }
      if ( (v136 & 1) == 0 )
      {
        v65 = 256;
        StackLookasideListEntry = (void *)EtwpGetStackLookasideListEntry();
        if ( !StackLookasideListEntry )
        {
          IoGetStackLimits(&LowLimit, &HighLimit);
          if ( (unsigned __int64)&HighLimit - LowLimit > 0x1440 )
          {
            v66 = alloca(1552LL);
            StackLookasideListEntry = &v135;
            v65 = 192;
          }
        }
        if ( StackLookasideListEntry )
        {
          v67 = 0LL;
          v68 = 1;
          if ( *(_QWORD *)(v161 + 40) == *(_QWORD *)&EventTracingProvGuid.Data1
            && *(_QWORD *)(v161 + 48) == *(_QWORD *)EventTracingProvGuid.Data4
            && *v64 == 18 )
          {
            LODWORD(v39) = (unsigned int)v39 | 0x10;
            v140 = (int)v39;
            v67 = v161 + 80;
            v68 = 0;
          }
          LOBYTE(BugCheckParameter4) = v68;
          EtwpGetStackExtendedHeaderItem(v168, a4, v65, &StackLookasideListEntry, BugCheckParameter4, v67);
          if ( StackLookasideListEntry && v65 == 256 )
            v69 = 2;
          else
            v69 = 0;
          v136 = v69 | v136 & 0xFD;
        }
        v136 |= 1u;
      }
      if ( StackLookasideListEntry )
      {
        LODWORD(v39) = (unsigned int)v39 | 4;
        v140 = (int)v39;
        v31 += *(unsigned __int16 *)StackLookasideListEntry;
        BugCheckParameter3 = v31;
      }
    }
  }
LABEL_117:
  v70 = *(unsigned __int16 *)(v34 + 6);
  v147 = v70;
  v71 = &v182[3 * LODWORD(v182[24])];
  v156 = v71;
  if ( a10 )
  {
    v72 = v162 + 8;
    v28 = a10;
    v73 = Size;
    v74 = v146;
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
          v146 = ++v74;
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
    v71 = v156;
    v70 = v147;
  }
  if ( v146 )
  {
    v31 += ((unsigned __int16)Size + 15) & 0xFFFFFFF8;
    BugCheckParameter3 = v31;
  }
  v76 = v139;
  if ( v139 )
  {
    v31 += (v139 + 15) & 0xFFFFFFF8;
    BugCheckParameter3 = v31;
  }
  *((_DWORD *)v71 + 10) = v31;
  v77 = v149;
  if ( CurrentIrql >= 2u )
  {
    v80 = BugCheckParameter3_4;
    if ( v70 >= *(_DWORD *)(v149 + 16) )
    {
      LODWORD(v81) = 1;
      v158 = 1LL;
    }
    else
    {
      _mm_lfence();
      v81 = *(_QWORD *)(*(_QWORD *)(v149 + 456) + 8LL * v70);
      v158 = v81;
      v76 = v139;
      LODWORD(v39) = v140;
    }
  }
  else
  {
    v78 = 8LL * v70;
    v79 = ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v149 + 448) + v78), 1u);
    v77 = v149;
    if ( v79 )
    {
      if ( v70 >= *(_DWORD *)(v149 + 16) )
      {
        v158 = 1LL;
      }
      else
      {
        _mm_lfence();
        v158 = *(_QWORD *)(v78 + *(_QWORD *)(v149 + 456));
        v76 = v139;
        LODWORD(v39) = v140;
      }
      v80 = 1;
    }
    else
    {
      v80 = BugCheckParameter3_4;
    }
    LODWORD(v81) = v158;
  }
  if ( (v81 & 1) != 0 )
  {
    if ( v80 )
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v77 + 448) + 8LL * v70), 1u);
    if ( v70 == 3 )
    {
      v22 = v149;
      v82 = -1073741058;
      if ( !*(_DWORD *)(v149 + 4068) )
        v82 = -1073741816;
      v152 = v82;
LABEL_150:
      v83 = (__int64)v148;
      goto LABEL_151;
    }
    goto LABEL_174;
  }
  v88 = EtwpReserveTraceBuffer(v81, v31, (unsigned int)&v177, (unsigned int)&v172, 0);
  v156 = (_OWORD *)v88;
  if ( v88 )
  {
    v94 = v158;
    *(_QWORD *)v71 = v158;
    *((_QWORD *)v71 + 1) = v88;
    v71[1] = v177;
    *((_QWORD *)v71 + 4) = v178;
    ++LODWORD(v182[24]);
    *(_DWORD *)v88 = v31 | *(_DWORD *)(v94 + 20);
    v95 = (_WORD *)(v88 + 4);
    v165 = (void *)(v88 + 4);
    *(_WORD *)(v88 + 4) = a6;
    *(_WORD *)(v88 + 6) = a7;
    *(_OWORD *)(v88 + 24) = *(_OWORD *)(v161 + 40);
    *(_OWORD *)(v88 + 40) = *(_OWORD *)v148;
    if ( a8 )
      v96 = *a8;
    else
      v96 = NullGuid;
    *(GUID *)(v88 + 64) = v96;
    *(_QWORD *)(v88 + 16) = v172;
    *(_DWORD *)(v88 + 8) = v184[404];
    *(_DWORD *)(v88 + 12) = v184[402];
    *(_DWORD *)(v88 + 56) = v184[163];
    *(_DWORD *)(v88 + 60) = v184[183];
    if ( !(_DWORD)v39 )
    {
      v102 = v157;
LABEL_220:
      if ( v76 )
      {
        v113 = (unsigned __int16 *)(v88 + v32);
        v153 = v113;
        v114 = (v76 + 15) & 0xFFF8;
        *v113 = v114;
        *(_DWORD *)(v113 + 1) = 12;
        v113[3] = v76;
        v115 = v114 - v76 - 8;
        BugCheckParameter3_4 = v115;
        memmove(v113 + 4, v170, v76);
        memset((char *)v113 + v76 + 8, 0, v115);
        v116 = v157;
        *v95 |= 1u;
        v32 += *v113;
        v141 = v32;
        if ( v116 )
          v116[2] |= 1u;
        v102 = v113;
      }
      v117 = v146;
      v118 = v156;
      if ( v146 )
      {
        v119 = (unsigned __int16 *)((char *)v156 + v32);
        v120 = (unsigned __int16)Size;
        v121 = (Size + 15) & 0xFFF8;
        *v119 = v121;
        *(_DWORD *)(v119 + 1) = 11;
        v119[3] = v120;
        v122 = (char *)(v119 + 4);
        v164 = v119 + 4;
        v175 = (char *)v119 + v120 + 8;
        memset(v175, 0, (unsigned __int16)(v121 - v120 - 8));
        *v95 |= 1u;
        v32 += *v119;
        v141 = v32;
        v117 = v146;
        if ( v102 )
          v102[2] |= 1u;
      }
      else
      {
        v122 = (char *)v164;
      }
      v123 = 0;
      v124 = BugCheckParameter3;
      while ( 1 )
      {
        while ( 1 )
        {
          LODWORD(v153) = v123;
          if ( v123 >= a10 )
          {
            v130 = v158;
            if ( (*(_DWORD *)(v158 + 12) & 0x80000) != 0
              && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
            {
              EtwpSendTraceEvent(v158, &v177);
            }
            if ( *(_QWORD *)(v130 + 1272) )
              EtwpInvokeEventCallback(v130, &v177, v161 + 40, 0LL);
            v27 = v148;
            v22 = v149;
            v26 = v154;
            v28 = 1LL;
            v25 = a10;
            if ( v171 )
              *(_DWORD *)(v171 + 4LL * (v147 >> 5)) |= 1 << (v147 & 0x1F);
            goto LABEL_21;
          }
          v125 = *(unsigned int *)(v162 + 16LL * v123 + 8);
          Size = *(_DWORD *)(v162 + 16LL * v123 + 8);
          v126 = *(_QWORD **)(v162 + 16LL * v123);
          v127 = Size_4 ? *(_BYTE *)(v162 + 16LL * v123 + 12) : 0;
          if ( v127 )
            break;
          v129 = (char *)v118 + v32;
          v165 = v129;
          v32 += v125;
          v141 = v32;
          if ( v32 > v124 )
            KeBugCheckEx(0x11Du, 5uLL, v32, v124, 0LL);
          memmove(v129, v126, v125);
          v117 = v146;
LABEL_244:
          ++v123;
          v122 = (char *)v164;
        }
        if ( v127 != 1 )
        {
          if ( v127 == 3 && (_DWORD)v125 == 8 )
            *((_QWORD *)v118 + 2) = *v126;
          goto LABEL_244;
        }
        if ( !v122 || (v128 = v125, v165 = (void *)v125, &v122[v125] > v175) || !v117 )
          KeBugCheckEx(0x11Du, 5uLL, v32, v124, 0LL);
        memmove(v122, v126, v125);
        v122 += v128;
        v164 = v122;
        v117 = --v146;
        ++v123;
      }
    }
    if ( ((unsigned __int16)v39 & 0x100) != 0 )
    {
      v97 = (unsigned __int16 *)(v88 + 80);
      v157 = v97;
      v98 = CurrentSiloState;
      v99 = (*(_WORD *)(CurrentSiloState + 4200) + 15) & 0xFFF8;
      *v97 = v99;
      v97[1] = 16;
      v97[3] = *(_WORD *)(v98 + 4200);
      v97[2] = 0;
      v100 = v99 - *(_WORD *)(v98 + 4200) - 8;
      v101 = v97 + 4;
      memmove(v97 + 4, *(const void **)(v98 + 4192), *(unsigned __int16 *)(v98 + 4200));
      memset((char *)v101 + *(unsigned __int16 *)(v98 + 4200), 0, v100);
      *v95 |= 1u;
      v102 = v157;
      v32 = *v157 + 80;
      v141 = v32;
      v160 = v157;
      v88 = (__int64)v156;
    }
    else
    {
      v102 = v157;
    }
    if ( ((unsigned __int8)v39 & 8) != 0 )
    {
      v103 = (unsigned __int16 *)(v88 + v32);
      *(_DWORD *)v103 = 65560;
      *((_DWORD *)v103 + 1) = 0x100000;
      *(_OWORD *)(v103 + 4) = *a9;
      *v95 |= 1u;
      v32 += 24;
      v141 = v32;
      if ( v102 )
        v102[2] |= 1u;
      v102 = v103;
      v157 = v103;
      v160 = v103;
    }
    if ( ((unsigned __int8)v39 & 2) != 0 )
    {
      v104 = (unsigned __int16 *)(v88 + v32);
      memmove(v104, Src, *(unsigned __int16 *)Src);
      *v95 |= 1u;
      v32 += *(unsigned __int16 *)Src;
      v141 = v32;
      if ( v102 )
        v102[2] |= 1u;
      v102 = v104;
      v157 = v104;
      v160 = v104;
    }
    if ( ((unsigned __int8)v39 & 1) != 0 )
    {
      v39 = (unsigned __int16 *)((char *)v156 + v32);
      *(_DWORD *)v39 = 196624;
      *((_DWORD *)v39 + 1) = 0x40000;
      SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v106 = 0;
      if ( SessionId != -1 )
        v106 = SessionId;
      *((_DWORD *)v39 + 2) = v106;
      *v95 |= 1u;
      v32 += 16;
      v141 = v32;
      if ( v102 )
        v102[2] |= 1u;
      v102 = v39;
      v157 = v39;
      v160 = v39;
      v76 = v139;
      LOBYTE(v39) = v140;
    }
    v88 = (__int64)v156;
    if ( ((unsigned __int8)v39 & 0x20) != 0 )
    {
      v107 = (unsigned __int16 *)((char *)v156 + v32);
      *(_DWORD *)v107 = 851984;
      *((_DWORD *)v107 + 1) = 0x80000;
      *((_QWORD *)v107 + 1) = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].0 | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
      *v95 |= 1u;
      v32 += 16;
      v141 = v32;
      if ( v102 )
        v102[2] |= 1u;
      v102 = v107;
      v157 = v107;
      v160 = v107;
      v76 = v139;
      LOBYTE(v39) = v140;
    }
    if ( ((unsigned __int8)v39 & 0x40) != 0 )
    {
      v108 = (unsigned __int16 *)(v88 + v32);
      *(_DWORD *)v108 = 655376;
      *((_DWORD *)v108 + 1) = 0x80000;
      if ( (v136 & 4) != 0 )
      {
        v110 = v169;
      }
      else
      {
        v109 = KeGetCurrentPrcb();
        v110 = _InterlockedIncrement64((volatile signed __int64 *)v109->EtwSupport + 1) & 0xFFFFFFFFFFFFLL | ((unsigned __int64)v109->Number << 48);
        v169 = v110;
        v136 |= 4u;
        v76 = v139;
        LOBYTE(v39) = v140;
        if ( v174 )
          *v174 = v110;
      }
      *((_QWORD *)v108 + 1) = v110;
      *v95 |= 1u;
      v32 += 16;
      v141 = v32;
      if ( v102 )
        v102[2] |= 1u;
      v102 = v108;
      v157 = v108;
      v160 = v108;
    }
    if ( ((unsigned __int8)v39 & 4) == 0 )
      goto LABEL_220;
    v111 = (unsigned __int16 *)(v88 + v32);
    memmove(v111, StackLookasideListEntry, *(unsigned __int16 *)StackLookasideListEntry);
    if ( *((_QWORD *)v111 + 1) && ((unsigned __int8)v39 & 0x10) == 0 )
    {
      if ( v149 != EtwpHostSiloState )
        goto LABEL_215;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x41777445u);
      if ( !PoolWithTag )
        goto LABEL_215;
      KeInitializeApc(
        (__int64)PoolWithTag,
        (__int64)v184,
        0,
        (__int64)EtwpCrimsonStackWalkApc,
        0LL,
        (__int64)EtwpCrimsonStackWalkApc,
        0,
        v147);
      if ( !(unsigned __int8)KeInsertQueueApc(
                               PoolWithTag,
                               *((unsigned int *)v111 + 2),
                               *((unsigned int *)v111 + 3),
                               0LL) )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
LABEL_215:
        *((_QWORD *)v111 + 1) = 0LL;
      }
    }
    *v95 |= 1u;
    v32 += *(unsigned __int16 *)StackLookasideListEntry;
    v141 = v32;
    if ( v102 )
      v102[2] |= 1u;
    v102 = v111;
    v157 = v111;
    v160 = v111;
    v88 = (__int64)v156;
    goto LABEL_220;
  }
  v89 = v31;
  v90 = v158;
  ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v158, v89);
  v92 = EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT);
  v83 = (__int64)v148;
  if ( v92 )
    EtwpTraceLostEvent(v161 + 40, v148, v90 + 152, ReserveTraceBufferStatus);
  v93 = v152;
  if ( v152 >= 0 )
  {
    if ( (*(_DWORD *)(v90 + 12) & 0x8000000) == 0 )
      v93 = ReserveTraceBufferStatus;
    v152 = v93;
  }
  if ( v80 )
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v149 + 448) + 8LL * v147), 1u);
  if ( ReserveTraceBufferStatus != -1073741675 )
  {
LABEL_174:
    v27 = v148;
    goto LABEL_54;
  }
  v152 = -1073741675;
  v22 = v149;
LABEL_151:
  if ( (v136 & 2) != 0 )
    RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, (PSLIST_ENTRY)StackLookasideListEntry - 1);
  if ( v152 < 0 )
  {
    EtwpFailLogging(
      *(unsigned __int8 *)(v83 + 4),
      *(_QWORD *)(v83 + 8),
      v161,
      (unsigned int)v182,
      v138,
      v152,
      v83,
      v144 < 2u);
  }
  else
  {
    v84 = 0;
    LODWORD(v153) = 0;
    if ( LODWORD(v182[24]) )
    {
      do
      {
        v28 = *(_QWORD *)&v182[3 * v84 + 1];
        v85 = (signed __int64 *)*((_QWORD *)&v182[3 * v84 + 1] + 1);
        _m_prefetchw(v85);
        v86 = *v85;
        v176 = v86;
        if ( (v28 ^ (unsigned __int64)v86) >= 0xF )
        {
LABEL_158:
          _InterlockedDecrement((volatile signed __int32 *)(v28 + 12));
        }
        else
        {
          while ( 1 )
          {
            v181 = v86 + 1;
            v87 = v86;
            v86 = _InterlockedCompareExchange64(v85, v86 + 1, v86);
            v181 = v86;
            if ( v87 == v86 )
              break;
            v176 = v86;
            if ( (v28 ^ (unsigned __int64)v86) >= 0xF )
              goto LABEL_158;
          }
        }
        if ( CurrentIrql < 2u )
          ExReleaseRundownProtectionCacheAwareEx(
            *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v22 + 448) + 8LL * **(unsigned int **)&v182[3 * v84]),
            1u);
        LODWORD(v153) = (_DWORD)v153 + 1;
        v84 = (unsigned int)v153;
      }
      while ( (unsigned int)v153 < LODWORD(v182[24]) );
    }
  }
  if ( v145 )
    KeLeaveCriticalRegionThread((__int64)v168);
  v131 = (_SLIST_ENTRY *)Src;
  if ( Src )
  {
    v132 = KeGetCurrentPrcb();
    v133 = v132->PPLookasideList[8].P;
    ++v133->TotalFrees;
    if ( LOWORD(v133->ListHead.Alignment) < v133->Depth
      || (++v133->FreeMisses,
          v133 = v132->PPLookasideList[8].L,
          ++v133->TotalFrees,
          LOWORD(v133->ListHead.Alignment) < v133->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v133->ListHead, v131);
    }
    else
    {
      ++v133->FreeMisses;
      ((void (__fastcall *)(_SLIST_ENTRY *, struct _KPRCB *, __int64))v133->FreeEx)(v131, v132, v28);
    }
  }
  return (unsigned int)v152;
}
