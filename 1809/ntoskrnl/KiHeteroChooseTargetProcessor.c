/*
 * XREFs of KiHeteroChooseTargetProcessor @ 0x14029887C
 * Callers:
 *     KiDeferredReadyThread @ 0x1400C32D0 (KiDeferredReadyThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiConvertDynamicHeteroPolicy @ 0x1402985A0 (KiConvertDynamicHeteroPolicy.c)
 *     KiGenerateHeteroSets @ 0x14029880C (KiGenerateHeteroSets.c)
 *     KiSelectProcessorToPreempt @ 0x140298CE4 (KiSelectProcessorToPreempt.c)
 *     KiSelectCandidateProcessor @ 0x14029D55C (KiSelectCandidateProcessor.c)
 */

__int64 __fastcall KiHeteroChooseTargetProcessor(_QWORD *a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  unsigned int v4; // eax
  __int64 v6; // r12
  __int64 v8; // r15
  __int64 v9; // r14
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdi
  __int64 v14; // r9
  unsigned __int64 v15; // r8
  int v16; // r10d
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rbx
  char v21; // cl
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int8 v24; // r10
  int v25; // r9d
  unsigned __int64 v26; // rax
  unsigned __int8 v27; // al
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  int v30; // eax
  _DWORD *v31; // rcx
  int v32; // eax
  _DWORD *v33; // rcx
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r8
  char v38; // cl
  int v39; // edx
  unsigned __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rcx
  struct _KPRCB *v43; // rdi
  _DWORD *v44; // rcx
  int v45; // eax
  _DWORD *v46; // rcx
  int v47; // eax
  struct _KPRCB *v48; // rcx
  _DWORD *v49; // rdx
  bool v50; // zf
  _DWORD *v51; // rdi
  struct _KPRCB *v52; // rcx
  _DWORD *v53; // rdx
  int v54; // eax
  _DWORD v56[2]; // [rsp+30h] [rbp-30h] BYREF
  int v57; // [rsp+38h] [rbp-28h]
  int v58; // [rsp+3Ch] [rbp-24h]
  __int64 v59; // [rsp+40h] [rbp-20h] BYREF
  __int64 v60; // [rsp+48h] [rbp-18h] BYREF
  __int64 v61; // [rsp+50h] [rbp-10h]
  __int64 v62; // [rsp+58h] [rbp-8h] BYREF
  unsigned int v63; // [rsp+A8h] [rbp+48h]
  int v64; // [rsp+B0h] [rbp+50h] BYREF
  _DWORD *v65; // [rsp+B8h] [rbp+58h]

  v65 = a4;
  v4 = *(unsigned __int8 *)(a2 + 125);
  v6 = *a3;
  v61 = *a3;
  v63 = v4;
  if ( v4 >= 5 )
  {
    v4 = KiConvertDynamicHeteroPolicy(a2, a2, (__int64)a1);
    v63 = v4;
  }
  v8 = KiProcessorBlock[*(unsigned int *)(a2 + 588)];
  v9 = *(_QWORD *)(v8 + 192);
  while ( 1 )
  {
    v10 = KiGenerateHeteroSets(v9, v6, v4, &v62, &v60, &v59);
    v12 = *(_QWORD *)v9;
    v13 = v59;
    if ( (*(_QWORD *)v9 & v59) != 0 || v10 || (v13 = v59, (*(_QWORD *)(v9 + 80) & v59) != 0) )
    {
      v14 = v60;
    }
    else
    {
      v13 = v6;
      v59 = v6;
      v14 = v6;
      v60 = v6;
      v62 = v6;
    }
    v15 = v13 & v12;
    if ( !v15 )
      break;
    if ( a1[25] != a1[3115] )
    {
      v14 = v60;
      if ( (v15 & *(_QWORD *)(v9 + 8)) != 0 )
        v15 &= *(_QWORD *)(v9 + 8);
    }
    v16 = 0;
    v17 = v62 & v15;
    if ( (v62 & v15) != 0 )
      goto LABEL_16;
    v17 = v14 & v15;
    if ( (v14 & v15) != 0 )
    {
      v16 = 1;
LABEL_16:
      v15 = v17;
    }
    if ( *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 2) )
    {
      v18 = a1[24];
      v19 = *(_DWORD *)(a2 + 120) & 3;
      v11 = v15 & *(_QWORD *)(v18 + 8 * v19 + 296);
      if ( v11 )
        v15 &= *(_QWORD *)(v18 + 8 * v19 + 296);
    }
    v20 = v8;
    if ( (v15 & *(_QWORD *)(v8 + 200)) == 0 || v16 )
    {
      if ( v16 )
      {
        v20 = 0LL;
        v24 = 0;
        if ( v15 )
        {
          v25 = *(unsigned __int16 *)(v9 + 144) << 6;
          do
          {
            _BitScanForward64(&v26, v15);
            v57 = KiProcessorNumberToIndexMappingTable[v25 + (v26 & 0x3F)];
            v11 = KiProcessorBlock[v57];
            if ( v63 - 3 <= 1 )
              v27 = *(_BYTE *)(v11 + 24226);
            else
              v27 = *(_BYTE *)(v11 + 24225);
            if ( !v20 || v27 > v24 )
            {
              v20 = KiProcessorBlock[v57];
              v24 = v27;
            }
            v15 &= ~*(_QWORD *)(v11 + 200);
          }
          while ( v15 );
        }
      }
      else
      {
        v21 = *(_BYTE *)(v8 + 209);
        v22 = v15 & *(_QWORD *)(v8 + 24920);
        if ( !v22 )
          v22 = v15;
        _BitScanForward64(&v22, __ROR8__(v22, v21));
        v11 = 0x140000000uLL;
        v23 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(v8 + 208)
                                                               + (((_BYTE)v22 + v21) & 0x3F)];
        v56[1] = v23;
        v20 = KiProcessorBlock[v23];
      }
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v64 = 0;
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    *v65 = 1;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v30 = SchedulerAssist[5];
        SchedulerAssist[5] = v30 + 1;
        if ( v30 == -1 )
LABEL_38:
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 48), 0LL) )
    {
      v31 = CurrentPrcb->SchedulerAssist;
      if ( v31 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v32 = v31[5] - 1;
          v31[5] = v32;
          if ( !v32 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v64, v11, v15);
      while ( *(_QWORD *)(v20 + 48) );
      v33 = CurrentPrcb->SchedulerAssist;
      if ( v33 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v34 = v33[5];
          v33[5] = v34 + 1;
          if ( v34 == -1 )
            goto LABEL_38;
        }
      }
    }
    v6 = v61;
    if ( !*(_BYTE *)(v20 + 35) )
      return v20;
LABEL_68:
    _InterlockedAnd64((volatile signed __int64 *)(v20 + 48), 0LL);
    v48 = KeGetCurrentPrcb();
    v4 = v63;
    v49 = v48->SchedulerAssist;
    if ( v49 )
    {
      if ( v48->NestingLevel <= 1u )
      {
        v50 = v49[5]-- == 1;
        v4 = v63;
        if ( v50 )
        {
          KiRemoveSystemWorkPriorityKick((__int64)v48);
          v4 = v63;
        }
      }
    }
  }
  if ( v14 == v13 )
    v14 = 0LL;
  v35 = KiSelectProcessorToPreempt(a2, v8, v13, v14);
  v20 = v35;
  if ( (v13 & *(_QWORD *)(v35 + 200)) == 0 )
  {
    v38 = *(_BYTE *)(v35 + 209);
    v39 = *(unsigned __int8 *)(v35 + 208);
    _BitScanForward64(&v40, __ROR8__(v13, v38));
    v41 = (v39 << 6) + (((_BYTE)v40 + v38) & 0x3Fu);
    v36 = 0x140000000uLL;
    v42 = (unsigned int)KiProcessorNumberToIndexMappingTable[v41];
    v58 = v42;
    v20 = KiProcessorBlock[v42];
  }
  v43 = KeGetCurrentPrcb();
  v56[0] = 0;
  while ( 1 )
  {
    v44 = v43->SchedulerAssist;
    if ( v44 )
    {
      if ( v43->NestingLevel <= 1u )
      {
        v45 = v44[5];
        v44[5] = v45 + 1;
        if ( v45 == -1 )
          KiRemoveSystemWorkPriorityKick((__int64)v43);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v20 + 48), 0LL) )
      break;
    v46 = v43->SchedulerAssist;
    if ( v46 )
    {
      if ( v43->NestingLevel <= 1u )
      {
        v47 = v46[5] - 1;
        v46[5] = v47;
        if ( !v47 )
          KiRemoveSystemWorkPriorityKick((__int64)v43);
      }
    }
    do
      KeYieldProcessorEx(v56, v36, v37);
    while ( *(_QWORD *)(v20 + 48) );
  }
  v6 = v61;
  if ( (*(_QWORD *)v9 & v59) != 0 )
    goto LABEL_68;
  v51 = v65;
  v50 = (*(_BYTE *)(v20 + 35) & 2) == 0;
  *v65 = 0;
  if ( !v50 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v20 + 48), 0LL);
    v52 = KeGetCurrentPrcb();
    v53 = v52->SchedulerAssist;
    if ( v53 )
    {
      if ( v52->NestingLevel <= 1u )
      {
        v54 = v53[5] - 1;
        v53[5] = v54;
        if ( !v54 )
          KiRemoveSystemWorkPriorityKick((__int64)v52);
      }
    }
    v20 = KiSelectCandidateProcessor(v20, a2, v59);
    if ( (*(_BYTE *)(v20 + 35) & 1) == 0 )
      *v51 = 1;
  }
  return v20;
}
