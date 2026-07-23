/*
 * XREFs of EtwpEventWriteFull @ 0x1400C8420
 * Callers:
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     EtwWriteKMSecurityEvent @ 0x140188E40 (EtwWriteKMSecurityEvent.c)
 *     EtwWriteString @ 0x14030E1F0 (EtwWriteString.c)
 *     EtwpCrimsonStackWalkApc @ 0x14030E570 (EtwpCrimsonStackWalkApc.c)
 *     EtwpDiskProvTraceDisk @ 0x140310AC4 (EtwpDiskProvTraceDisk.c)
 *     EtwWriteErrorLogEntry @ 0x14070D930 (EtwWriteErrorLogEntry.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     KeInitializeApc @ 0x14008A350 (KeInitializeApc.c)
 *     EtwpReserveTraceBuffer @ 0x1400C7540 (EtwpReserveTraceBuffer.c)
 *     KeGetEffectiveIrql @ 0x1400CABB0 (KeGetEffectiveIrql.c)
 *     IoGetStackLimits @ 0x1400CABD0 (IoGetStackLimits.c)
 *     KeAreInterruptsEnabled @ 0x1400CADE4 (KeAreInterruptsEnabled.c)
 *     MmCanThreadFault @ 0x1400CC2D4 (MmCanThreadFault.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1400D78F0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     KeInsertQueueApc @ 0x1400F1500 (KeInsertQueueApc.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400F9890 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpFailLogging @ 0x14011318C (EtwpFailLogging.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x14013F790 (EtwpGetReserveTraceBufferStatus.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     EvaluateCurrentState @ 0x1401B3F70 (EvaluateCurrentState.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401C5530 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401C5570 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x14030E6C4 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpGetStackLookasideListEntry @ 0x14030F420 (EtwpGetStackLookasideListEntry.c)
 *     EtwpGetCurrentSiloState @ 0x1403128F4 (EtwpGetCurrentSiloState.c)
 *     EtwpTraceLostEvent @ 0x140312938 (EtwpTraceLostEvent.c)
 *     EtwpSendTraceEvent @ 0x14031344C (EtwpSendTraceEvent.c)
 *     EtwpInvokeEventCallback @ 0x140313F44 (EtwpInvokeEventCallback.c)
 *     EtwpApplyEventIdPayloadFilter @ 0x1403141D0 (EtwpApplyEventIdPayloadFilter.c)
 *     EtwpApplyEventNameFilter @ 0x1403143B8 (EtwpApplyEventNameFilter.c)
 *     EtwpApplyStackWalkIdFilter @ 0x1403147A4 (EtwpApplyStackWalkIdFilter.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x14064A1F0 (EtwpGetSidExtendedHeaderItem.c)
 *     EtwpApplyLevelKwFilter @ 0x1408C2EC4 (EtwpApplyLevelKwFilter.c)
 */

__int64 __fastcall EtwpEventWriteFull(
        _QWORD *a1,
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
  __int64 v19; // r15
  int v20; // r14d
  __int64 v21; // rdx
  int v22; // ecx
  unsigned __int16 v23; // ax
  __int64 v25; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v27; // rax
  __int64 v28; // r9
  int v29; // ebx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rsi
  __int64 v33; // r11
  bool v34; // zf
  __int64 v35; // rcx
  unsigned int v36; // r15d
  __int64 v37; // r12
  __int64 v38; // r13
  int v39; // ecx
  unsigned __int8 v40; // al
  __int64 v41; // rax
  _KPROCESS *Process; // rcx
  __int64 v43; // rcx
  int v44; // ecx
  __int64 v46; // rcx
  unsigned __int8 v47; // al
  int v48; // ebx
  int v49; // edi
  unsigned int v50; // r14d
  int v51; // eax
  int v52; // eax
  unsigned __int16 *v53; // rcx
  struct _KPRCB *CurrentPrcb; // rsi
  _GENERAL_LOOKASIDE *P; // rdi
  PSLIST_ENTRY v56; // rcx
  _GENERAL_LOOKASIDE *L; // rdi
  int v58; // eax
  int v59; // eax
  __int64 v60; // rcx
  int v61; // ecx
  bool v62; // al
  unsigned __int16 *v63; // r12
  unsigned __int8 v64; // si
  unsigned int v65; // edi
  int v66; // esi
  unsigned int v67; // edi
  void *v68; // rsp
  _QWORD *v69; // rdx
  char v70; // r8
  char v71; // cl
  _OWORD *v72; // r12
  unsigned int v73; // esi
  unsigned __int16 *v74; // rdi
  char v75; // al
  int v76; // eax
  unsigned int v77; // edi
  int v78; // ebx
  __int64 v79; // r15
  unsigned int v80; // edi
  __int64 v81; // r8
  signed __int64 *v82; // rdx
  signed __int64 v83; // rax
  signed __int64 v84; // rtt
  unsigned __int16 v85; // r13
  unsigned int v86; // eax
  __int64 v87; // rdi
  BOOLEAN v88; // al
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 v93; // rdx
  unsigned __int64 v94; // rsi
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rsi
  unsigned int ReserveTraceBufferStatus; // ebx
  char v99; // r12
  __int64 v100; // rdx
  __int64 v101; // r8
  __int64 v102; // r9
  int v103; // eax
  char v104; // cl
  int v105; // eax
  unsigned __int8 v106; // cl
  _WORD *v107; // r12
  GUID v108; // xmm0
  unsigned __int16 *v109; // rdx
  __int64 v110; // r15
  unsigned __int16 v111; // si
  unsigned __int16 v112; // si
  _WORD *v113; // rdi
  _DWORD *v114; // rdi
  unsigned __int16 *v115; // rcx
  int SessionId; // eax
  int v117; // ecx
  unsigned __int16 *v118; // rdx
  unsigned __int16 *v119; // r8
  struct _KPRCB *v120; // rcx
  unsigned __int64 v121; // rax
  PVOID PoolWithTag; // rbx
  __int16 v123; // si
  unsigned __int16 v124; // si
  int v125; // r15d
  unsigned __int16 *v126; // rdx
  int v127; // r10d
  unsigned __int64 v128; // rsi
  unsigned __int16 *v129; // rbx
  __int64 v130; // rcx
  unsigned __int16 v131; // dx
  char *v132; // r13
  unsigned int i; // edi
  size_t v134; // rdx
  _QWORD *v135; // r9
  char v136; // r8
  size_t v137; // rbx
  void *v138; // rcx
  __int64 v139; // rbx
  _SLIST_ENTRY *v140; // r8
  struct _KPRCB *v141; // rdx
  _GENERAL_LOOKASIDE *v142; // rcx
  int BugCheckParameter4; // [rsp+0h] [rbp-640h]
  char v144; // [rsp+30h] [rbp-610h] BYREF
  char v145; // [rsp+640h] [rbp+0h]
  unsigned __int8 CurrentIrql; // [rsp+641h] [rbp+1h]
  unsigned __int8 v147; // [rsp+642h] [rbp+2h]
  char v148; // [rsp+648h] [rbp+8h]
  unsigned int v149; // [rsp+650h] [rbp+10h]
  unsigned __int16 v150; // [rsp+654h] [rbp+14h]
  unsigned int v151; // [rsp+658h] [rbp+18h]
  int v152; // [rsp+65Ch] [rbp+1Ch]
  int v153; // [rsp+660h] [rbp+20h]
  int v154; // [rsp+664h] [rbp+24h]
  int Size; // [rsp+668h] [rbp+28h]
  int Size_4; // [rsp+66Ch] [rbp+2Ch]
  unsigned __int8 v157; // [rsp+670h] [rbp+30h]
  char v158; // [rsp+671h] [rbp+31h]
  unsigned int j; // [rsp+674h] [rbp+34h]
  int v160; // [rsp+678h] [rbp+38h]
  unsigned int v161; // [rsp+67Ch] [rbp+3Ch]
  __int64 v162; // [rsp+680h] [rbp+40h]
  __int16 v163; // [rsp+688h] [rbp+48h]
  unsigned __int16 *v164; // [rsp+690h] [rbp+50h]
  unsigned __int16 *v165; // [rsp+698h] [rbp+58h]
  void *Src; // [rsp+6A0h] [rbp+60h]
  __int64 v167; // [rsp+6A8h] [rbp+68h]
  __int64 v168; // [rsp+6B0h] [rbp+70h]
  unsigned int v169; // [rsp+6B8h] [rbp+78h]
  void *StackLookasideListEntry; // [rsp+6C0h] [rbp+80h] BYREF
  _DWORD *v171; // [rsp+6C8h] [rbp+88h]
  unsigned __int64 v172; // [rsp+6D0h] [rbp+90h]
  __int64 v173; // [rsp+6D8h] [rbp+98h]
  PSLIST_ENTRY v174; // [rsp+6E0h] [rbp+A0h]
  void *v175; // [rsp+6E8h] [rbp+A8h]
  _QWORD *v176; // [rsp+6F0h] [rbp+B0h]
  void *v177; // [rsp+6F8h] [rbp+B8h]
  __int64 v178; // [rsp+700h] [rbp+C0h]
  __int64 v179; // [rsp+708h] [rbp+C8h]
  struct _KTHREAD *v180; // [rsp+710h] [rbp+D0h]
  unsigned __int64 v181; // [rsp+718h] [rbp+D8h]
  void *v182; // [rsp+720h] [rbp+E0h]
  __int64 v183; // [rsp+728h] [rbp+E8h]
  __int64 CurrentSiloState; // [rsp+730h] [rbp+F0h]
  unsigned __int64 *v185; // [rsp+738h] [rbp+F8h]
  char *v186; // [rsp+740h] [rbp+100h]
  _OWORD *v187; // [rsp+748h] [rbp+108h]
  unsigned __int64 HighLimit; // [rsp+750h] [rbp+110h] BYREF
  unsigned __int64 LowLimit; // [rsp+758h] [rbp+118h] BYREF
  __int64 v190[2]; // [rsp+760h] [rbp+120h] BYREF
  __int128 v191; // [rsp+770h] [rbp+130h] BYREF
  __int64 v192; // [rsp+780h] [rbp+140h]
  _OWORD v193[24]; // [rsp+790h] [rbp+150h] BYREF
  unsigned int v194; // [rsp+910h] [rbp+2D0h]
  _DWORD *v196; // [rsp+9D8h] [rbp+398h]

  v154 = a2;
  v187 = a9;
  v19 = a14;
  v176 = a1;
  v164 = a5;
  v173 = a11;
  v183 = a13;
  v182 = a16;
  v185 = a17;
  v20 = 0;
  Size_4 = 0;
  Src = 0LL;
  v174 = 0LL;
  StackLookasideListEntry = 0LL;
  v181 = 0LL;
  v163 = a15 & 0x200;
  CurrentSiloState = EtwpGetCurrentSiloState();
  LOBYTE(v22) = 0;
  v152 = v22;
  v23 = 0;
  if ( a10 > 0x80 )
    return 3221225485LL;
  if ( !a14 )
    v19 = (__int64)a1;
  v167 = v19;
  v25 = v19;
  v179 = v19;
  if ( v182 && (a15 & 0x400) == 0 )
    v23 = *(_WORD *)v182;
  v150 = v23;
  v145 = 0;
  v194 = 0;
  v162 = v176[49];
  v178 = v162;
  if ( v185 && *v185 )
  {
    v181 = *v185;
    v145 = 4;
  }
  CurrentThread = KeGetCurrentThread();
  v180 = CurrentThread;
  v27 = a12;
  if ( !a12 )
    v27 = (__int64)CurrentThread;
  v196 = (_DWORD *)v27;
  if ( (unsigned __int8)KeAreInterruptsEnabled(CurrentThread, v21) )
    CurrentIrql = KeGetCurrentIrql();
  else
    CurrentIrql = 15;
  v157 = CurrentIrql;
  v158 = 0;
  if ( !CurrentIrql )
  {
    --v180->KernelApcDisable;
    v158 = 1;
  }
  v29 = v154;
  LOBYTE(v29) = ~a3 & v154;
  v30 = 80LL;
  v31 = 1LL;
  LODWORD(v32) = 0;
  v33 = (__int64)v164;
LABEL_22:
  while ( 2 )
  {
    while ( 2 )
    {
      while ( 2 )
      {
        while ( 2 )
        {
          v34 = !_BitScanForward((unsigned int *)&v35, (unsigned __int8)v29);
          j = v35;
          if ( v34 )
            goto LABEL_139;
          v36 = 80;
          Size = 80;
          v153 = 80;
          v165 = 0LL;
          v171 = 0LL;
          v161 = 0;
          v160 = 0;
          v175 = 0LL;
          v186 = 0LL;
          LOBYTE(v152) = 0;
          v168 = 1LL;
          LOBYTE(v29) = (v29 - 1) & v29;
          v154 = v29;
          v148 = v29;
          v37 = (unsigned int)v35;
          v38 = v25 + 32 * (v35 + 4);
          if ( v183 )
          {
            v39 = *(_DWORD *)(v183 + 4LL * (*(unsigned __int16 *)(v38 + 6) >> 5));
            v30 = 80LL;
            if ( _bittest(&v39, *(_BYTE *)(v38 + 6) & 0x1F) )
              continue;
          }
          break;
        }
        v30 = *(_QWORD *)(v33 + 8);
        if ( !*(_DWORD *)v38 || (v40 = *(_BYTE *)(v38 + 4), *(_BYTE *)(v33 + 4) > v40) && v40 )
        {
LABEL_21:
          v30 = 80LL;
          continue;
        }
        break;
      }
      v31 = *(unsigned int *)(v38 + 8);
      if ( (v31 & 0x40) == 0 || v30 )
      {
        if ( (v30 & *(_QWORD *)(v38 + 16)) == 0 )
        {
LABEL_20:
          v31 = 1LL;
          goto LABEL_21;
        }
        v41 = v30 & *(_QWORD *)(v38 + 24);
        v30 = 80LL;
        if ( v41 != *(_QWORD *)(v38 + 24) )
        {
          v31 = 1LL;
          continue;
        }
      }
      break;
    }
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( (a4 & 2) != 0 || SLODWORD(Process[1].DirectoryTableBase) < 0 )
    {
      v30 = 80LL;
      v31 = 1LL;
      if ( (*(_DWORD *)(v38 + 8) & 0x200) != 0 )
        continue;
    }
    break;
  }
  v43 = *(_QWORD *)(v25 + 384);
  if ( v43 )
  {
    v44 = *(_DWORD *)(104 * v37 + v43);
    if ( (v44 & 0x80000200) == 0x80000200 || (v44 & 0x80000100) == 0x80000100 )
    {
      if ( !(unsigned __int8)EtwpApplyEventIdPayloadFilter(v25, j, 0, v33, *(_WORD *)v33, v28, v173, 0, CurrentIrql) )
      {
LABEL_54:
        v33 = (__int64)v164;
        v28 = a10;
        goto LABEL_20;
      }
      v33 = (__int64)v164;
    }
  }
  if ( v163 )
  {
    v28 = *(_QWORD *)(v33 + 8);
    v46 = 0LL;
    v30 = *(_QWORD *)(v25 + 384);
    if ( v30 )
    {
      v31 = v30 + 104 * v37;
      if ( (*(_DWORD *)v31 & 0x80000400) == 0x80000400 )
        v46 = *(_QWORD *)(v31 + 96);
      if ( v46 )
      {
        v47 = *(_BYTE *)(v46 + 1);
        if ( (*(_BYTE *)(v33 + 4) <= v47 || !v47)
          && (!v28 || (v28 & *(_QWORD *)(v46 + 8)) != 0 && (v28 & *(_QWORD *)(v46 + 16)) == *(_QWORD *)(v46 + 16))
          && !(unsigned __int8)EtwpApplyEventNameFilter(
                                 v25,
                                 j,
                                 a10,
                                 v173,
                                 0,
                                 CurrentIrql,
                                 *(_BYTE *)(v33 + 4),
                                 *(_QWORD *)(v33 + 8),
                                 0) )
        {
          goto LABEL_54;
        }
      }
    }
  }
  v48 = v187 != 0LL ? 8 : 0;
  v49 = 104;
  if ( !v187 )
    v49 = 80;
  v50 = v49;
  v149 = v49;
  if ( (*(_DWORD *)(v38 + 8) & 0xFFFFFF9F) != 0 )
  {
    if ( EtwpPagingDisabled
      || (a4 & 1) != 0
      || !(unsigned int)MmCanThreadFault(v187, v30, v31, v28)
      || BYTE6(v180[1].Queue) )
    {
      v51 = 0;
    }
    else
    {
      v51 = 128;
    }
    v48 |= v51;
    v52 = *(_DWORD *)(v38 + 8);
    v149 = v49;
    if ( (v52 & 0x800) != 0 )
    {
      if ( CurrentSiloState )
      {
        v149 = v49;
        if ( CurrentSiloState != EtwpHostSiloState )
        {
          v48 |= 0x100u;
          v50 = v49 + ((*(unsigned __int16 *)(CurrentSiloState + 4200) + 15) & 0xFFFFFFF8);
          v149 = v50;
        }
      }
      v36 = Size;
    }
    if ( (v52 & 1) != 0 && (v48 & 0x80u) != 0 )
    {
      v53 = (unsigned __int16 *)Src;
      if ( Src )
        goto LABEL_79;
      CurrentPrcb = KeGetCurrentPrcb();
      P = CurrentPrcb->PPLookasideList[8].P;
      ++P->TotalAllocates;
      v56 = RtlpInterlockedPopEntrySList(&P->ListHead);
      Src = v56;
      if ( !v56 )
      {
        ++P->AllocateMisses;
        L = CurrentPrcb->PPLookasideList[8].L;
        ++L->TotalAllocates;
        v56 = RtlpInterlockedPopEntrySList(&L->ListHead);
        Src = v56;
        if ( !v56 )
        {
          ++L->AllocateMisses;
          v56 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))L->AllocateEx)(
                                (unsigned int)L->Type,
                                L->Size,
                                L->Tag);
          Src = v56;
        }
      }
      if ( v56 )
        LODWORD(v56->Next) = CurrentPrcb->Number;
      v174 = v56;
      if ( v56 )
      {
        EtwpGetSidExtendedHeaderItem();
        v53 = (unsigned __int16 *)Src;
        if ( Src )
        {
LABEL_79:
          v48 |= 2u;
          v50 += *v53;
          v149 = v50;
        }
      }
    }
    v58 = *(_DWORD *)(v38 + 8);
    if ( (v58 & 2) != 0 )
    {
      v48 |= 1u;
      v50 += 16;
      v149 = v50;
    }
    if ( (v58 & 0x80u) != 0 && ((unsigned __int8)KeGetEffectiveIrql() < 2u || !KeGetCurrentPrcb()->NestingLevel) )
    {
      v48 |= 0x20u;
      v50 += 16;
      v149 = v50;
    }
    v59 = *(_DWORD *)(v38 + 8);
    if ( (v59 & 0x100) != 0 )
    {
      v48 |= 0x40u;
      v50 += 16;
      v149 = v50;
    }
    if ( (v59 & 4) != 0 && !EtwpPagingDisabled )
    {
      v60 = *(_QWORD *)(v167 + 384);
      v62 = 0;
      if ( v60 )
      {
        v61 = *(_DWORD *)(104 * v37 + v60);
        if ( (v61 & 0x80001000) == 0x80001000 || (v61 & 0x80002000) == 0x80002000 || (v61 & 0x80004000) == 0x80004000 )
          v62 = 1;
      }
      v63 = v164;
      if ( !v62
        || (v64 = v157,
            v65 = j,
            (unsigned __int8)EtwpApplyLevelKwFilter(
                               v167,
                               j,
                               *((unsigned __int8 *)v164 + 4),
                               *((_QWORD *)v164 + 1),
                               v157 < 2u))
        && (LOBYTE(v28) = v64 < 2u, v66 = v167, (unsigned __int8)EtwpApplyStackWalkIdFilter(*v63, v167, v65, v28))
        && (unsigned __int8)EtwpApplyEventNameFilter(
                              v66,
                              v65,
                              a10,
                              v173,
                              0,
                              CurrentIrql,
                              *((_BYTE *)v63 + 4),
                              *((_QWORD *)v63 + 1),
                              1) )
      {
        if ( (v145 & 1) == 0 )
        {
          v67 = 256;
          StackLookasideListEntry = (void *)EtwpGetStackLookasideListEntry();
          if ( !StackLookasideListEntry )
          {
            IoGetStackLimits(&LowLimit, &HighLimit);
            if ( (unsigned __int64)&HighLimit - LowLimit > 0x1440 )
            {
              v68 = alloca(1552LL);
              StackLookasideListEntry = &v144;
              v67 = 192;
            }
          }
          if ( StackLookasideListEntry )
          {
            v69 = 0LL;
            v70 = 1;
            if ( v176[5] == *(_QWORD *)&EventTracingProvGuid.Data1
              && v176[6] == *(_QWORD *)EventTracingProvGuid.Data4
              && *v63 == 18 )
            {
              v48 |= 0x10u;
              v69 = v176 + 10;
              v70 = 0;
            }
            LOBYTE(BugCheckParameter4) = v70;
            EtwpGetStackExtendedHeaderItem(v180, a4, v67, &StackLookasideListEntry, BugCheckParameter4, v69);
            if ( StackLookasideListEntry && v67 == 256 )
              v71 = 2;
            else
              v71 = 0;
            v145 = v71 | v145 & 0xFD;
          }
          v145 |= 1u;
        }
        if ( StackLookasideListEntry )
        {
          v48 |= 4u;
          v50 += *(unsigned __int16 *)StackLookasideListEntry;
          v149 = v50;
        }
      }
    }
  }
  v151 = *(unsigned __int16 *)(v38 + 6);
  v169 = v151;
  v72 = &v193[3 * v194];
  v73 = 0;
  if ( a10 )
  {
    v74 = (unsigned __int16 *)(v173 + 8);
    while ( !(unsigned int)EvaluateCurrentState(&g_Feature_1748494648_61231940_FeatureDescriptorDetails, v30, v31, v28)
         || *(_DWORD *)v74 <= 0xFFFFu )
    {
      if ( v163 )
        v75 = *((_BYTE *)v74 + 4);
      else
        v75 = 0;
      if ( v75 )
      {
        if ( v75 == 1 )
        {
          if ( (unsigned int)EvaluateCurrentState(
                               &g_Feature_1748494648_61231940_FeatureDescriptorDetails,
                               v30,
                               v31,
                               v28) )
            v76 = *(_DWORD *)v74;
          else
            v76 = *v74;
          ++v160;
          v161 += v76;
        }
      }
      else
      {
        v50 += *(_DWORD *)v74;
        v149 = v50;
      }
      ++v73;
      v74 += 8;
      if ( v73 >= a10 )
        goto LABEL_132;
    }
    v20 = Size_4;
    if ( Size_4 >= 0 )
      v20 = -2147483643;
    v78 = (unsigned __int8)v154;
    goto LABEL_138;
  }
LABEL_132:
  if ( v160 )
  {
    v77 = (v161 + 15) & 0xFFFFFFF8;
    if ( (unsigned int)EvaluateCurrentState(&g_Feature_1748494648_61231940_FeatureDescriptorDetails, v30, v31, v28)
      && v77 > 0xFFFF )
    {
      goto LABEL_135;
    }
    v50 += v77;
    v149 = v50;
  }
  v85 = v150;
  if ( v150 )
  {
    if ( (unsigned int)EvaluateCurrentState(&g_Feature_1748494648_61231940_FeatureDescriptorDetails, v30, v31, v28) )
    {
      v86 = (v85 + 15) & 0xFFFFFFF8;
      if ( v86 > 0xFFFF )
      {
LABEL_135:
        v20 = Size_4;
        if ( Size_4 >= 0 )
          v20 = -1073741675;
        v78 = (unsigned __int8)v154;
LABEL_138:
        v29 = v78 | (1 << j);
        LODWORD(v32) = v151;
LABEL_139:
        v79 = v162;
LABEL_140:
        v80 = 0;
        goto LABEL_141;
      }
    }
    else
    {
      v86 = (v85 + 15) & 0xFFFFFFF8;
    }
    v50 += v86;
    v149 = v50;
  }
  *((_DWORD *)v72 + 10) = v50;
  v32 = v151;
  if ( CurrentIrql >= 2u )
  {
    v30 = v162;
    LOBYTE(v87) = v152;
    if ( v151 >= *(_DWORD *)(v162 + 16) )
    {
      v89 = 1LL;
      v168 = 1LL;
    }
    else
    {
      _mm_lfence();
      v89 = *(_QWORD *)(*(_QWORD *)(v162 + 456) + 8LL * v151);
      v168 = v89;
      v85 = v150;
    }
  }
  else
  {
    v87 = 8LL * v151;
    v88 = ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v162 + 448) + v87), 1u);
    v30 = v162;
    if ( v88 )
    {
      if ( (unsigned int)v32 >= *(_DWORD *)(v162 + 16) )
      {
        v168 = 1LL;
      }
      else
      {
        _mm_lfence();
        v168 = *(_QWORD *)(v87 + *(_QWORD *)(v162 + 456));
        v85 = v150;
      }
      LOBYTE(v87) = 1;
      v152 = v87;
    }
    else
    {
      LOBYTE(v87) = v152;
    }
    v89 = v168;
  }
  if ( (v89 & 1) != 0 )
  {
    if ( (_BYTE)v87 )
    {
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v30 + 448) + 8 * v32), 1u);
      LODWORD(v87) = (unsigned __int8)v87;
      if ( (unsigned int)EvaluateCurrentState(&g_Feature_1748494648_61231940_FeatureDescriptorDetails, v90, v91, v92) )
        LODWORD(v87) = 0;
      v152 = v87;
    }
    if ( (_DWORD)v32 == 3 )
    {
      v79 = v162;
      v20 = -1073741058;
      if ( !*(_DWORD *)(v162 + 4068) )
        v20 = -1073741816;
      LOBYTE(v29) = v154;
      goto LABEL_140;
    }
    v20 = Size_4;
LABEL_201:
    v29 = v154;
    v33 = (__int64)v164;
    v28 = a10;
    v25 = v167;
    goto LABEL_20;
  }
  v80 = 0;
  v94 = EtwpReserveTraceBuffer((unsigned int *)v89, v50, (__int64)&v191, v190, 0);
  v172 = v94;
  if ( v94 )
  {
    *(_QWORD *)v72 = v168;
    *((_QWORD *)v72 + 1) = v94;
    v72[1] = v191;
    *((_QWORD *)v72 + 4) = v192;
    ++v194;
    v105 = EvaluateCurrentState(&g_Feature_1748494648_61231940_FeatureDescriptorDetails, v93, v95, v96);
    v106 = v152;
    if ( v105 )
      v106 = 0;
    v152 = v106;
    v147 = v106;
    *(_DWORD *)v94 = v50 | *(_DWORD *)(v168 + 20);
    v107 = (_WORD *)(v94 + 4);
    v177 = (void *)(v94 + 4);
    *(_WORD *)(v94 + 4) = a6;
    *(_WORD *)(v94 + 6) = a7;
    *(_OWORD *)(v94 + 24) = *(_OWORD *)(v176 + 5);
    *(_OWORD *)(v94 + 40) = *(_OWORD *)v164;
    if ( a8 )
      v108 = *a8;
    else
      v108 = NullGuid;
    *(GUID *)(v94 + 64) = v108;
    *(_QWORD *)(v94 + 16) = v190[0];
    *(_DWORD *)(v94 + 8) = v196[400];
    *(_DWORD *)(v94 + 12) = v196[398];
    *(_DWORD *)(v94 + 56) = v196[163];
    *(_DWORD *)(v94 + 60) = v196[183];
    if ( !v48 )
    {
      v114 = v165;
LABEL_249:
      if ( v85 )
      {
        v114 = (_DWORD *)(v94 + v36);
        v190[1] = (__int64)v114;
        v123 = (v85 + 15) & 0xFFF8;
        *(_WORD *)v114 = v123;
        *(_DWORD *)((char *)v114 + 2) = 12;
        *((_WORD *)v114 + 3) = v85;
        v124 = v123 - v85 - 8;
        LOWORD(j) = v124;
        memmove(v114 + 2, v182, v85);
        memset((char *)v114 + v85 + 8, 0, v124);
        v125 = Size;
        v126 = v165;
        *v107 |= 1u;
        v36 = *(unsigned __int16 *)v114 + v125;
        v153 = v36;
        if ( v126 )
          v126[2] |= 1u;
      }
      v127 = v160;
      v128 = v172;
      if ( v160 )
      {
        v129 = (unsigned __int16 *)(v172 + v36);
        v130 = v161;
        v131 = (v161 + 15) & 0xFFF8;
        *v129 = v131;
        *(_DWORD *)(v129 + 1) = 11;
        v129[3] = v130;
        v132 = (char *)(v129 + 4);
        v175 = v129 + 4;
        v186 = (char *)v129 + v130 + 8;
        memset(v186, 0, (unsigned __int16)(v131 - v130 - 8));
        *v107 |= 1u;
        v36 += *v129;
        v153 = v36;
        v127 = v160;
        if ( v114 )
          *((_WORD *)v114 + 2) |= 1u;
      }
      else
      {
        v132 = (char *)v175;
      }
      for ( i = 0; ; ++i )
      {
        while ( 1 )
        {
          v161 = i;
          if ( i >= a10 )
          {
            v139 = v168;
            if ( (*(_DWORD *)(v168 + 12) & 0x80000) != 0
              && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
            {
              EtwpSendTraceEvent(v168, &v191);
            }
            if ( *(_QWORD *)(v139 + 1272) )
              EtwpInvokeEventCallback(v139, &v191);
            v20 = Size_4;
            LODWORD(v32) = v151;
            v29 = v154;
            v33 = (__int64)v164;
            v28 = a10;
            v25 = v167;
            v30 = 80LL;
            v31 = 1LL;
            if ( v183 )
            {
              *(_DWORD *)(v183 + 4LL * (v151 >> 5)) |= 1 << (v151 & 0x1F);
              v30 = 80LL;
            }
            goto LABEL_22;
          }
          v134 = *(unsigned int *)(v173 + 16LL * i + 8);
          Size = *(_DWORD *)(v173 + 16LL * i + 8);
          v135 = *(_QWORD **)(v173 + 16LL * i);
          v136 = v163 ? *(_BYTE *)(v173 + 16LL * i + 12) : 0;
          if ( v136 )
            break;
          v138 = (void *)(v128 + v36);
          v177 = v138;
          v36 += v134;
          v153 = v36;
          if ( v36 > v50 )
            KeBugCheckEx(0x11Du, 5uLL, v36, v50, 0LL);
          memmove(v138, v135, v134);
          v127 = v160;
LABEL_272:
          ++i;
          v132 = (char *)v175;
        }
        if ( v136 != 1 )
        {
          if ( v136 == 3 && (_DWORD)v134 == 8 )
            *(_QWORD *)(v128 + 16) = *v135;
          goto LABEL_272;
        }
        if ( !v132 || (v137 = v134, v177 = (void *)v134, &v132[v134] > v186) || !v127 )
          KeBugCheckEx(0x11Du, 5uLL, v36, v50, 0LL);
        memmove(v132, v135, v134);
        v132 += v137;
        v175 = v132;
        v127 = --v160;
      }
    }
    if ( (v48 & 0x100) != 0 )
    {
      v109 = (unsigned __int16 *)(v94 + 80);
      v165 = v109;
      v110 = CurrentSiloState;
      v111 = (*(_WORD *)(CurrentSiloState + 4200) + 15) & 0xFFF8;
      *v109 = v111;
      v109[1] = 16;
      v109[3] = *(_WORD *)(v110 + 4200);
      v109[2] = 0;
      v112 = v111 - *(_WORD *)(v110 + 4200) - 8;
      v113 = v109 + 4;
      memmove(v109 + 4, *(const void **)(v110 + 4192), *(unsigned __int16 *)(v110 + 4200));
      memset((char *)v113 + *(unsigned __int16 *)(v110 + 4200), 0, v112);
      *v107 |= 1u;
      v114 = v165;
      v36 = *v165 + 80;
      Size = v36;
      v153 = v36;
      v171 = v165;
      v94 = v172;
    }
    else
    {
      v114 = v165;
    }
    if ( (v48 & 8) != 0 )
    {
      v115 = (unsigned __int16 *)(v94 + v36);
      *(_DWORD *)v115 = 65560;
      *((_DWORD *)v115 + 1) = 0x100000;
      *(_OWORD *)(v115 + 4) = *a9;
      *v107 |= 1u;
      v36 += 24;
      Size = v36;
      v153 = v36;
      if ( v114 )
        *((_WORD *)v114 + 2) |= 1u;
      v114 = v115;
      v165 = v115;
      v171 = v115;
    }
    if ( (v48 & 2) != 0 )
    {
      v114 = (_DWORD *)(v94 + v36);
      memmove(v114, Src, *(unsigned __int16 *)Src);
      *v107 |= 1u;
      v36 += *(unsigned __int16 *)Src;
      Size = v36;
      v153 = v36;
      if ( v165 )
        v165[2] |= 1u;
      v165 = (unsigned __int16 *)v114;
      v171 = v114;
    }
    if ( (v48 & 1) != 0 )
    {
      v114 = (_DWORD *)(v94 + v36);
      *v114 = 196624;
      v114[1] = 0x40000;
      SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v117 = 0;
      if ( SessionId != -1 )
        v117 = SessionId;
      v114[2] = v117;
      *v107 |= 1u;
      v36 += 16;
      Size = v36;
      v153 = v36;
      if ( v165 )
        v165[2] |= 1u;
      v165 = (unsigned __int16 *)v114;
      v171 = v114;
      v85 = v150;
    }
    if ( (v48 & 0x20) != 0 )
    {
      v118 = (unsigned __int16 *)(v94 + v36);
      *(_DWORD *)v118 = 851984;
      *((_DWORD *)v118 + 1) = 0x80000;
      *((_QWORD *)v118 + 1) = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[16] | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
      *v107 |= 1u;
      v36 += 16;
      Size = v36;
      v153 = v36;
      if ( v114 )
        *((_WORD *)v114 + 2) |= 1u;
      v114 = v118;
      v165 = v118;
      v171 = v118;
      v85 = v150;
    }
    if ( (v48 & 0x40) != 0 )
    {
      v119 = (unsigned __int16 *)(v94 + v36);
      *(_DWORD *)v119 = 655376;
      *((_DWORD *)v119 + 1) = 0x80000;
      if ( (v145 & 4) != 0 )
      {
        v121 = v181;
      }
      else
      {
        v120 = KeGetCurrentPrcb();
        v121 = _InterlockedIncrement64((volatile signed __int64 *)v120->EtwSupport + 1) & 0xFFFFFFFFFFFFLL | ((unsigned __int64)v120->Number << 48);
        v181 = v121;
        v145 |= 4u;
        v85 = v150;
        if ( v185 )
          *v185 = v121;
      }
      *((_QWORD *)v119 + 1) = v121;
      *v107 |= 1u;
      v36 += 16;
      Size = v36;
      v153 = v36;
      if ( v114 )
        *((_WORD *)v114 + 2) |= 1u;
      v114 = v119;
      v165 = v119;
      v171 = v119;
    }
    if ( (v48 & 4) == 0 )
      goto LABEL_249;
    v114 = (_DWORD *)(v94 + v36);
    memmove(v114, StackLookasideListEntry, *(unsigned __int16 *)StackLookasideListEntry);
    if ( *((_QWORD *)v114 + 1) && (v48 & 0x10) == 0 )
    {
      if ( v162 != EtwpHostSiloState )
        goto LABEL_244;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x41777445u);
      if ( !PoolWithTag )
        goto LABEL_244;
      KeInitializeApc(
        (__int64)PoolWithTag,
        (__int64)v196,
        0,
        (__int64)EtwpCrimsonStackWalkApc,
        0LL,
        (__int64)EtwpCrimsonStackWalkApc,
        0,
        v151);
      if ( !(unsigned __int8)KeInsertQueueApc(PoolWithTag, (unsigned int)v114[2], (unsigned int)v114[3], 0LL) )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
LABEL_244:
        *((_QWORD *)v114 + 1) = 0LL;
      }
    }
    *v107 |= 1u;
    v36 += *(unsigned __int16 *)StackLookasideListEntry;
    Size = v36;
    v153 = v36;
    if ( v165 )
      v165[2] |= 1u;
    v165 = (unsigned __int16 *)v114;
    v171 = v114;
    goto LABEL_249;
  }
  v97 = v168;
  ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v168, v50);
  if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
    EtwpTraceLostEvent(v176 + 5, v164, v97 + 152, ReserveTraceBufferStatus);
  v20 = Size_4;
  if ( Size_4 >= 0 )
  {
    if ( (*(_DWORD *)(v97 + 12) & 0x8000000) == 0 )
      v20 = ReserveTraceBufferStatus;
    Size_4 = v20;
  }
  v99 = v152;
  v79 = v162;
  if ( (_BYTE)v152 )
  {
    LODWORD(v32) = v151;
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v162 + 448) + 8LL * v151), 1u);
    v103 = EvaluateCurrentState(&g_Feature_1748494648_61231940_FeatureDescriptorDetails, v100, v101, v102);
    v104 = v99;
    if ( v103 )
      v104 = 0;
    LOBYTE(v152) = v104;
  }
  else
  {
    LODWORD(v32) = v151;
  }
  v30 = 3221225621LL;
  if ( ReserveTraceBufferStatus != -1073741675 )
    goto LABEL_201;
  v20 = -1073741675;
  LOBYTE(v29) = v154;
LABEL_141:
  if ( (unsigned int)EvaluateCurrentState(&g_Feature_1748494648_61231940_FeatureDescriptorDetails, v30, v31, v28)
    && (_BYTE)v152 )
  {
    ExReleaseRundownProtectionCacheAwareEx(
      *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v79 + 448) + 8LL * (unsigned int)v32),
      1u);
  }
  if ( (v145 & 2) != 0 )
    RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, (PSLIST_ENTRY)StackLookasideListEntry - 1);
  if ( v20 < 0 )
  {
    EtwpFailLogging(
      *((unsigned __int8 *)v164 + 4),
      *((_QWORD *)v164 + 1),
      (_DWORD)v176,
      (unsigned int)v193,
      v29,
      v20,
      (__int64)v164,
      v157 < 2u);
  }
  else
  {
    for ( j = 0; j < v194; v80 = j )
    {
      v81 = *(_QWORD *)&v193[3 * v80 + 1];
      v82 = (signed __int64 *)*((_QWORD *)&v193[3 * v80 + 1] + 1);
      _m_prefetchw(v82);
      v83 = *v82;
      if ( (v81 ^ (unsigned __int64)*v82) >= 0xF )
      {
LABEL_151:
        _InterlockedDecrement((volatile signed __int32 *)(v81 + 12));
      }
      else
      {
        while ( 1 )
        {
          v84 = v83;
          v83 = _InterlockedCompareExchange64(v82, v83 + 1, v83);
          if ( v84 == v83 )
            break;
          if ( (v81 ^ (unsigned __int64)v83) >= 0xF )
            goto LABEL_151;
        }
      }
      if ( CurrentIrql < 2u )
        ExReleaseRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v79 + 448) + 8LL * **(unsigned int **)&v193[3 * v80]),
          1u);
      ++j;
    }
  }
  if ( v158 )
    KeLeaveCriticalRegionThread((__int64)v180);
  v140 = (_SLIST_ENTRY *)Src;
  if ( Src )
  {
    v141 = KeGetCurrentPrcb();
    v142 = v141->PPLookasideList[8].P;
    ++v142->TotalFrees;
    if ( LOWORD(v142->ListHead.Alignment) < v142->Depth
      || (++v142->FreeMisses,
          v142 = v141->PPLookasideList[8].L,
          ++v142->TotalFrees,
          LOWORD(v142->ListHead.Alignment) < v142->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v142->ListHead, v140);
    }
    else
    {
      ++v142->FreeMisses;
      ((void (__fastcall *)(_SLIST_ENTRY *))v142->FreeEx)(v140);
    }
  }
  return (unsigned int)v20;
}
