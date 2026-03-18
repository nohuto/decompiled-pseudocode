/*
 * XREFs of KiHeteroChooseTargetProcessor @ 0x1402AF2E8
 * Callers:
 *     KiDeferredReadyThread @ 0x140068290 (KiDeferredReadyThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiSelectProcessorToPreempt @ 0x14013E860 (KiSelectProcessorToPreempt.c)
 *     KiFindBiasedProcessorIndex @ 0x1401BF02C (KiFindBiasedProcessorIndex.c)
 *     KiIsFavoredCoreRotationActive @ 0x1401BF2B0 (KiIsFavoredCoreRotationActive.c)
 *     KiIsQosGroupingActive @ 0x1401BF2D4 (KiIsQosGroupingActive.c)
 *     KiIsQosGroupingClass @ 0x1401BF2F8 (KiIsQosGroupingClass.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KiIsProcessorIdleSoftParked @ 0x1401BF3AC (KiIsProcessorIdleSoftParked.c)
 *     KiCanSelectSoftParkedProcessor @ 0x1401BF3BC (KiCanSelectSoftParkedProcessor.c)
 *     KiConvertDynamicHeteroPolicy @ 0x1402AEFC0 (KiConvertDynamicHeteroPolicy.c)
 *     KiGenerateHeteroSets @ 0x1402AF0D8 (KiGenerateHeteroSets.c)
 *     KiSelectCandidateProcessor @ 0x1402B5B38 (KiSelectCandidateProcessor.c)
 */

__int64 __fastcall KiHeteroChooseTargetProcessor(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  unsigned int v4; // eax
  __int64 v6; // rbx
  _QWORD *v7; // r13
  __int64 v8; // r14
  bool CanSelectSoftParkedProcessor; // r12
  __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r11
  __int64 v15; // rdi
  unsigned __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r9
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r9
  int v21; // r9d
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rbx
  unsigned __int64 v26; // r9
  int BiasedProcessorIndex; // eax
  char v28; // cl
  unsigned __int64 v29; // rax
  int v30; // ecx
  __int64 v31; // rdx
  unsigned __int8 v32; // r10
  int v33; // r9d
  unsigned __int64 v34; // rax
  __int64 v35; // rdx
  unsigned __int8 v36; // al
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  int v39; // eax
  _DWORD *v40; // rcx
  int v41; // eax
  _DWORD *v42; // rcx
  int v43; // eax
  unsigned __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  char v47; // cl
  int v48; // edx
  unsigned __int64 v49; // rax
  struct _KPRCB *v50; // rdi
  _DWORD *v51; // rcx
  int v52; // eax
  _DWORD *v53; // rcx
  int v54; // eax
  __int64 v55; // rdx
  struct _KPRCB *v56; // rcx
  _DWORD *v57; // rdx
  bool v58; // zf
  _DWORD *v59; // rdi
  struct _KPRCB *v60; // rcx
  _DWORD *v61; // rdx
  int v62; // eax
  _DWORD v64[2]; // [rsp+30h] [rbp-38h] BYREF
  int v65; // [rsp+38h] [rbp-30h]
  int v66; // [rsp+3Ch] [rbp-2Ch]
  __int64 v67; // [rsp+40h] [rbp-28h]
  __int64 v68; // [rsp+48h] [rbp-20h] BYREF
  __int64 v69; // [rsp+50h] [rbp-18h] BYREF
  __int64 v70; // [rsp+58h] [rbp-10h] BYREF
  unsigned int v72; // [rsp+B8h] [rbp+50h]
  int v73; // [rsp+C0h] [rbp+58h] BYREF
  _DWORD *v74; // [rsp+C8h] [rbp+60h]

  v74 = a4;
  v4 = *(unsigned __int8 *)(a2 + 125);
  v6 = *a3;
  v7 = (_QWORD *)a1;
  v67 = *a3;
  v72 = v4;
  if ( v4 >= 5 )
  {
    v4 = KiConvertDynamicHeteroPolicy(a2, a2, a1);
    v72 = v4;
  }
  v8 = KiProcessorBlock[*(unsigned int *)(a2 + 588)];
  CanSelectSoftParkedProcessor = 0;
  v10 = *(_QWORD *)(v8 + 192);
  do
  {
    while ( 1 )
    {
      v11 = KiGenerateHeteroSets(v10, v6, v4, &v70, &v69, &v68);
      v13 = *(_QWORD *)v10;
      v14 = 0LL;
      if ( CanSelectSoftParkedProcessor && !v13 )
      {
        v12 = *(_QWORD *)(v10 + 16);
        v13 = v12 & *(_QWORD *)(v10 + 88);
      }
      v15 = v68;
      if ( (v13 & v68) == 0 && !v11 )
      {
        v15 = v68;
        if ( (*(_QWORD *)(v10 + 80) & v68) == 0 )
        {
          v15 = v6;
          v68 = v6;
          v69 = v6;
          v70 = v6;
        }
      }
      v16 = v15 & v13;
      if ( CanSelectSoftParkedProcessor )
      {
        if ( v16 )
          goto LABEL_15;
        v15 = v68;
        v16 = v68 & *(_QWORD *)(v10 + 16) & *(_QWORD *)(v10 + 88);
      }
      if ( !v16 )
        break;
LABEL_15:
      if ( v7[25] != v7[3115] )
      {
        if ( KiIsQosGroupingActive() && (v16 & v17) != 0 && KiIsQosGroupingClass(*(_DWORD *)(a2 + 120) & 3) )
        {
          v16 = v19 & ~v18;
          if ( !v16 )
            v16 = v19;
        }
        else
        {
          v20 = v16 & v18;
          if ( v20 )
            v16 = v20;
        }
      }
      v21 = v14;
      v22 = v70 & v16;
      if ( (v70 & v16) == 0 )
      {
        v22 = v69 & v16;
        if ( (v69 & v16) == 0 )
          goto LABEL_28;
        v21 = 1;
      }
      v16 = v22;
LABEL_28:
      if ( KeHeteroSystemQos != (_DWORD)v14 )
      {
        v23 = v7[24];
        v24 = *(_DWORD *)(a2 + 120) & 3;
        if ( (v16 & *(_QWORD *)(v23 + 8 * v24 + 304)) != 0 )
          v16 &= *(_QWORD *)(v23 + 8 * v24 + 304);
      }
      v25 = v8;
      if ( (v16 & *(_QWORD *)(v8 + 200)) == 0 || v21 )
      {
        if ( v21 )
        {
          v25 = v14;
          v32 = v14;
          if ( v16 )
          {
            v33 = *(unsigned __int16 *)(v10 + 144) << 6;
            do
            {
              _BitScanForward64(&v34, v16);
              v65 = v34 & 0x3F;
              v35 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v33 + v65]];
              if ( v72 - 3 <= 1 )
                v36 = *(_BYTE *)(v35 + 24226);
              else
                v36 = *(_BYTE *)(v35 + 24225);
              if ( !v25 || v36 > v32 )
              {
                v25 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v33 + v65]];
                v32 = v36;
              }
              v16 &= ~*(_QWORD *)(v35 + 200);
            }
            while ( v16 );
          }
        }
        else
        {
          if ( KiIsFavoredCoreRotationActive() )
          {
            BiasedProcessorIndex = KiFindBiasedProcessorIndex(
                                     *(unsigned __int8 *)(v8 + 208),
                                     (*(_QWORD *)(a2 + 72) >> KiFavoredCoreCycleTimeBits)
                                   + *(unsigned __int8 *)(v8 + 209),
                                     v26);
          }
          else
          {
            v28 = *(_BYTE *)(v8 + 209);
            _BitScanForward64(&v29, __ROR8__(v26, v28));
            v30 = ((_BYTE)v29 + v28) & 0x3F;
            v31 = v30 + (*(unsigned __int8 *)(v8 + 208) << 6);
            v64[1] = v30;
            BiasedProcessorIndex = KiProcessorNumberToIndexMappingTable[v31];
          }
          v25 = KiProcessorBlock[BiasedProcessorIndex];
        }
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v73 = 0;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      *v74 = 1;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v39 = SchedulerAssist[5];
          SchedulerAssist[5] = v39 + 1;
          if ( v39 == -1 )
LABEL_50:
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 48), 0LL) )
      {
        v40 = CurrentPrcb->SchedulerAssist;
        if ( v40 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v41 = v40[5] - 1;
            v40[5] = v41;
            if ( !v41 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v73);
        while ( *(_QWORD *)(v25 + 48) );
        v42 = CurrentPrcb->SchedulerAssist;
        if ( v42 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v43 = v42[5];
            v42[5] = v43 + 1;
            if ( v43 == -1 )
              goto LABEL_50;
          }
        }
      }
      v7 = (_QWORD *)a1;
      if ( !*(_BYTE *)(v25 + 35) )
        return v25;
      v44 = 0LL;
      if ( CanSelectSoftParkedProcessor && KiIsProcessorIdleSoftParked(v25) )
        return v25;
      _InterlockedAnd64((volatile signed __int64 *)(v25 + 48), v44);
LABEL_88:
      v56 = KeGetCurrentPrcb();
      v4 = v72;
      v6 = v67;
      v57 = v56->SchedulerAssist;
      if ( v57 )
      {
        if ( v56->NestingLevel <= 1u )
        {
          v58 = v57[5]-- == 1;
          v4 = v72;
          if ( v58 )
          {
            KiRemoveSystemWorkPriorityKick((__int64)v56);
            v4 = v72;
          }
        }
      }
    }
    if ( !PoSoftParkingAllowed )
      break;
    if ( CanSelectSoftParkedProcessor )
      break;
    CanSelectSoftParkedProcessor = KiCanSelectSoftParkedProcessor(v12, v8);
    v4 = v72;
  }
  while ( CanSelectSoftParkedProcessor );
  v45 = v69;
  if ( v69 == v15 )
    v45 = 0LL;
  v46 = KiSelectProcessorToPreempt(a2, v8, v15, v45);
  v25 = v46;
  if ( (v15 & *(_QWORD *)(v46 + 200)) == 0 )
  {
    v47 = *(_BYTE *)(v46 + 209);
    v48 = *(unsigned __int8 *)(v46 + 208);
    _BitScanForward64(&v49, __ROR8__(v15, v47));
    v66 = ((_BYTE)v49 + v47) & 0x3F;
    v25 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v66 + (v48 << 6)]];
  }
  v50 = KeGetCurrentPrcb();
  v64[0] = 0;
  while ( 1 )
  {
    v51 = v50->SchedulerAssist;
    if ( v51 )
    {
      if ( v50->NestingLevel <= 1u )
      {
        v52 = v51[5];
        v51[5] = v52 + 1;
        if ( v52 == -1 )
          KiRemoveSystemWorkPriorityKick((__int64)v50);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v25 + 48), 0LL) )
      break;
    v53 = v50->SchedulerAssist;
    if ( v53 )
    {
      if ( v50->NestingLevel <= 1u )
      {
        v54 = v53[5] - 1;
        v53[5] = v54;
        if ( !v54 )
          KiRemoveSystemWorkPriorityKick((__int64)v50);
      }
    }
    do
      KeYieldProcessorEx(v64);
    while ( *(_QWORD *)(v25 + 48) );
  }
  v55 = *(_QWORD *)v10;
  v7 = (_QWORD *)a1;
  if ( CanSelectSoftParkedProcessor )
    v55 |= *(_QWORD *)(v10 + 16) & *(_QWORD *)(v10 + 88);
  if ( (v55 & v68) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v25 + 48), 0LL);
    goto LABEL_88;
  }
  v59 = v74;
  v58 = (*(_BYTE *)(v25 + 35) & 2) == 0;
  *v74 = 0;
  if ( !v58 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v25 + 48), 0LL);
    v60 = KeGetCurrentPrcb();
    v61 = v60->SchedulerAssist;
    if ( v61 )
    {
      if ( v60->NestingLevel <= 1u )
      {
        v62 = v61[5] - 1;
        v61[5] = v62;
        if ( !v62 )
          KiRemoveSystemWorkPriorityKick((__int64)v60);
      }
    }
    v25 = KiSelectCandidateProcessor(v25, a2, v68);
    if ( (*(_BYTE *)(v25 + 35) & 1) == 0 )
      *v59 = 1;
  }
  return v25;
}
