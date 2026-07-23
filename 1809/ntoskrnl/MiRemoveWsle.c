/*
 * XREFs of MiRemoveWsle @ 0x14006A860
 * Callers:
 *     MiDecommitPages @ 0x140068940 (MiDecommitPages.c)
 *     MiDeleteVa @ 0x1400696F0 (MiDeleteVa.c)
 *     MiTerminateWsle @ 0x14007AC90 (MiTerminateWsle.c)
 *     MiTerminateWsleCluster @ 0x14007B958 (MiTerminateWsleCluster.c)
 *     MiConvertPrivateToProto @ 0x140082EA0 (MiConvertPrivateToProto.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400230C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiLookupDataTableEntry @ 0x1400DA610 (MiLookupDataTableEntry.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiLogRemoveWsleEvent @ 0x1402A7FDC (MiLogRemoveWsleEvent.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14031C2A4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14031C468 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

char __fastcall MiRemoveWsle(__int64 a1, unsigned __int64 a2, __int64 a3, char a4, int a5, int a6)
{
  LONG *v6; // r12
  unsigned __int64 v9; // rbp
  volatile signed __int32 *v11; // rsi
  struct _KPRCB *CurrentPrcb; // r15
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v14; // edx
  unsigned __int64 v15; // r11
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r8
  char v18; // cl
  char v19; // cl
  int v20; // r15d
  unsigned __int8 v21; // di
  int v22; // esi
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r9
  unsigned __int64 *v25; // r10
  unsigned __int64 v26; // rdx
  unsigned __int8 v27; // al
  unsigned __int64 v28; // rcx
  signed __int64 v29; // rax
  struct _KPRCB *v30; // rcx
  _DWORD *v31; // rdx
  _QWORD *v32; // rdi
  __int64 v33; // r13
  unsigned __int64 v34; // r9
  __int64 v35; // r10
  volatile signed __int64 *v36; // rdx
  signed __int64 v37; // rtt
  __int64 v38; // rax
  _DWORD *v39; // rcx
  __int64 v40; // rcx
  _QWORD *v41; // rax
  _QWORD *v42; // rdx
  _QWORD *v43; // rdi
  _QWORD *v44; // rcx
  int v45; // eax
  int v46; // eax
  bool v47; // zf
  signed __int32 v48; // eax
  unsigned __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rdx
  unsigned __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  _QWORD v57[11]; // [rsp+20h] [rbp-58h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]
  int v59; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v60; // [rsp+88h] [rbp+10h] BYREF

  v6 = &dword_14043C7E8;
  v9 = a2;
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
    v11 = &dword_14043C7E8;
  else
    v11 = (volatile signed __int32 *)(a1 + 232);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    LOBYTE(a2) = -1;
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v11, a2);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v59 = 0;
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v45 = SchedulerAssist[5];
        SchedulerAssist[5] = v45 + 1;
        if ( v45 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset(v11, 0x1Fu) )
    {
      v39 = CurrentPrcb->SchedulerAssist;
      if ( v39 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v46 = v39[5] - 1;
          v39[5] = v46;
          if ( !v46 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      v59 = ExpWaitForSpinLockExclusiveAndAcquire(v11, 0xFFu);
    }
    v14 = *v11;
    while ( (v14 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v14 & 0x40000000) == 0 )
      {
        v48 = _InterlockedCompareExchange(v11, v14 | 0x40000000, v14);
        v47 = v14 == v48;
        v14 = v48;
        if ( !v47 )
          continue;
      }
      KeYieldProcessorEx(&v59);
      v14 = *v11;
    }
  }
  v15 = 0xFFFFF68000000000uLL;
  v16 = 0xFFFFF6FFFFFFFFFFuLL;
  if ( a6 )
  {
    *(_QWORD *)(a1 + 144) -= a3;
    if ( v9 < 0xFFFFF68000000000uLL || v9 > 0xFFFFF6FFFFFFFFFFuLL )
      *(_QWORD *)(a1 + 128) -= a3;
  }
  v17 = 0x7FFFFFFFF8LL;
  if ( (*(_BYTE *)(a1 + 184) & 7) == 4 )
  {
    if ( PsNtosImageBase
      && (v9 < PsNtosImageEnd && v9 >= (unsigned __int64)PsNtosImageBase
       || v9 < PsHalImageEnd && v9 >= (unsigned __int64)PsHalImageBase) )
    {
      LODWORD(xmmword_140439FE0) = xmmword_140439FE0 - a3;
    }
    else if ( (unsigned int)MiGetSystemRegionType(v9) == 12 )
    {
      v38 = MiLookupDataTableEntry((__int64)(((v15 + (v17 & (v9 >> 9))) << 25) - (v15 << 25)) >> 16, 2LL);
      v15 = 0xFFFFF68000000000uLL;
      v16 = 0xFFFFF6FFFFFFFFFFuLL;
      if ( v38 )
        DWORD1(xmmword_140439FE0) -= a3;
    }
  }
  v18 = *(_BYTE *)(a1 + 184);
  *(_QWORD *)(a1 + 136) -= a3;
  v19 = v18 & 7;
  v20 = 1;
  if ( v9 < v15 || v9 > v16 )
  {
    *(_QWORD *)(a1 + 120) -= a3;
    v21 = a4 & 0xF;
    v22 = 1;
    if ( v21 == 8 )
      goto LABEL_22;
  }
  else
  {
    v22 = 0;
    if ( v19 )
      goto LABEL_22;
    v21 = a4 & 0xF;
  }
  v17 = -a3;
  if ( v9 < v15 || v9 > v16 )
  {
    v23 = ((v9 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v24 = *(_QWORD *)v23;
    if ( v23 >= 0xFFFFF6FB7DBED000uLL
      && v23 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v24 & 1) != 0
      && ((v24 & 0x20) == 0 || (v24 & 0x42) == 0) )
    {
      v49 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v49 )
      {
        v50 = *(_QWORD *)(v49 + 8 * ((v23 >> 3) & 0x1FF));
        v51 = v24 | 0x20;
        if ( (v50 & 0x20) == 0 )
          v51 = v24;
        v24 = v51;
        if ( (v50 & 0x42) != 0 )
          v24 = v51 | 0x42;
      }
    }
    v60 = v24;
    if ( (unsigned __int64)&v60 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)&v60 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v24 & 1) != 0
      && ((v24 & 0x20) == 0 || (v24 & 0x42) == 0) )
    {
      v52 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v52 )
      {
        v53 = *(_QWORD *)(v52 + 8 * (((unsigned __int64)&v60 >> 3) & 0x1FF));
        v54 = v24 | 0x20;
        if ( (v53 & 0x20) == 0 )
          v54 = v24;
        v24 = v54;
        if ( (v53 & 0x42) != 0 )
          v24 = v54 | 0x42;
      }
    }
    v25 = (unsigned __int64 *)(48 * ((v24 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
    v26 = *v25;
    v27 = (*v25 >> 14) & 7;
    if ( ((*v25 >> 4) & 0x3FF) != 0 )
    {
      if ( v21 == v27 )
      {
        v28 = v26 ^ ((unsigned __int16)v26 ^ (unsigned __int16)(16 * (((*v25 >> 4) & 0x3FF) - a3))) & 0x3FF0;
LABEL_20:
        *v25 = v28;
        goto LABEL_21;
      }
      if ( v21 > v27 )
      {
        v28 = v26 & 0xFFFFFFFFFFFE000FuLL | (16 * (v17 & 0x3FF | ((unsigned __int64)(v21 & 7) << 10)));
        goto LABEL_20;
      }
    }
  }
LABEL_21:
  *(_QWORD *)(a1 + 8LL * v21 + 40) -= a3;
  if ( v21 != 7 )
    goto LABEL_22;
  v32 = *(_QWORD **)(qword_14043B808 + 8LL * *(unsigned __int16 *)(a1 + 174));
  v33 = v32[878];
  if ( *(_QWORD *)(a1 + 96) < *(_QWORD *)(v33 + 64) )
  {
    if ( a3 >= 0 && *(_QWORD *)(a1 + 24) && v32[880] != a1 + 24 )
    {
      v20 = 2;
      goto LABEL_43;
    }
  }
  else if ( a3 <= 0 && *(_QWORD *)(a1 + 24) && v32[879] != a1 + 24 )
  {
LABEL_43:
    v57[0] = 0LL;
    v57[1] = &qword_14043BF40;
    KxAcquireQueuedSpinLock(v57);
    if ( !*(_BYTE *)(v33 + 53) )
    {
      v40 = *(_QWORD *)(a1 + 24);
      v41 = (_QWORD *)(a1 + 24);
      if ( v40 )
      {
        v42 = *(_QWORD **)(a1 + 32);
        if ( *(_QWORD **)(v40 + 8) == v41 && (_QWORD *)*v42 == v41 )
        {
          v43 = v32 + 879;
          *v42 = v40;
          *(_QWORD *)(v40 + 8) = v42;
          if ( v20 == 1 )
          {
            v55 = *v43;
            if ( *(_QWORD **)(*v43 + 8LL) == v43 )
            {
              *v41 = v55;
              *(_QWORD *)(a1 + 32) = v43;
              *(_QWORD *)(v55 + 8) = v41;
              *v43 = v41;
              goto LABEL_45;
            }
          }
          else
          {
            v44 = (_QWORD *)v43[1];
            if ( (_QWORD *)*v44 == v43 )
            {
              *v41 = v43;
              *(_QWORD *)(a1 + 32) = v44;
              *v44 = v41;
              v43[1] = v41;
              goto LABEL_45;
            }
          }
        }
        __fastfail(3u);
      }
    }
    *(_BYTE *)(v33 + 54) = 1;
LABEL_45:
    KxReleaseQueuedSpinLock(v57);
    v15 = 0xFFFFF68000000000uLL;
  }
LABEL_22:
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
  {
    qword_14043C848 -= a3;
    if ( v22 == 1 )
      qword_14043C850 -= a3;
  }
  LOBYTE(v29) = *(_BYTE *)(a1 + 184) & 7;
  if ( (_BYTE)v29 != 2 )
    v6 = (LONG *)(a1 + 232);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    LOBYTE(v29) = ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v6, retaddr);
    v15 = 0xFFFFF68000000000uLL;
  }
  else
  {
    *v6 = 0;
  }
  v30 = KeGetCurrentPrcb();
  v31 = v30->SchedulerAssist;
  if ( v31 )
  {
    if ( v30->NestingLevel <= 1u )
    {
      LODWORD(v29) = v31[5] - 1;
      v31[5] = v29;
      if ( !(_DWORD)v29 )
      {
        LOBYTE(v29) = KiRemoveSystemWorkPriorityKick(v30);
        v15 = 0xFFFFF68000000000uLL;
      }
    }
  }
  if ( v22 == 1 )
  {
    if ( a5 == 9 || a5 == 10 && (LOBYTE(v29) = v15, (*(_BYTE *)(((v9 >> 9) & 0x7FFFFFFFF8LL) + v15) & 1) != 0) )
    {
      if ( a3 )
      {
        v17 = v9;
        v34 = (unsigned __int64)(unsigned __int8)a5 << 56;
        v35 = a3;
        do
        {
          v36 = (volatile signed __int64 *)(v15 + ((v17 >> 9) & 0x7FFFFFFFF8LL));
          v29 = *v36;
          do
          {
            v37 = v29;
            v29 = _InterlockedCompareExchange64(v36, v34 | v29 & 0x80FFFFFFFFFFFFFFuLL, v29);
          }
          while ( v37 != v29 );
          v17 += 4096LL;
          --v35;
        }
        while ( v35 );
      }
    }
  }
  if ( (DWORD1(PerfGlobalGroupMask) & 0x8000000) != 0 && a3 )
  {
    do
    {
      LOBYTE(v29) = MiLogRemoveWsleEvent(v9, *(_BYTE *)(a1 + 184) & 7, v17);
      v9 += 4096LL;
      --a3;
    }
    while ( a3 );
  }
  return v29;
}
