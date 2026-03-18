/*
 * XREFs of MiDispatchFault @ 0x1400CBFD0
 * Callers:
 *     MiInPagePageTable @ 0x14005D730 (MiInPagePageTable.c)
 *     MmAccessFault @ 0x1400CA7B0 (MmAccessFault.c)
 * Callees:
 *     MiLocateAddress @ 0x140073CF0 (MiLocateAddress.c)
 *     MiResolveDemandZeroFault @ 0x1400CCE70 (MiResolveDemandZeroFault.c)
 *     MiResolveProtoPteFault @ 0x1400D15C0 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x1400D23E0 (MiResolveTransitionFault.c)
 *     MiAdvanceFaultList @ 0x1400F57E0 (MiAdvanceFaultList.c)
 *     MiGetPageTableLockBuffer @ 0x1400FE0EC (MiGetPageTableLockBuffer.c)
 *     MiCheckProtoAccess @ 0x140102060 (MiCheckProtoAccess.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x140109A48 (KiResetGlobalDpcWatchdogProfiler.c)
 *     MiFaultListPagesRemaining @ 0x140121AEC (MiFaultListPagesRemaining.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiAdjustFaultList @ 0x140126F74 (MiAdjustFaultList.c)
 *     MiAccessCheck @ 0x14012DD24 (MiAccessCheck.c)
 *     MiResolvePageFileFault @ 0x140163A68 (MiResolvePageFileFault.c)
 *     MiComputeMaximumFaultCluster @ 0x140170328 (MiComputeMaximumFaultCluster.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRspInIstStack @ 0x1402A9AE8 (KiRspInIstStack.c)
 *     EtwTraceShouldYieldProcessor @ 0x14032E3AC (EtwTraceShouldYieldProcessor.c)
 */

__int64 __fastcall MiDispatchFault(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __m128i v4; // xmm3
  __int128 v5; // xmm0
  __m128i v6; // xmm2
  __int128 v7; // xmm4
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm0
  unsigned __int64 v11; // rsi
  __int64 v12; // r11
  ULONG_PTR v13; // r15
  unsigned int v14; // r12d
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rbx
  _BYTE *v18; // rcx
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // r10
  unsigned __int64 Address; // rax
  __int64 v22; // rdx
  __int128 v23; // xmm0
  int v24; // ecx
  __int64 v25; // xmm1_8
  __int64 v27; // r8
  unsigned __int64 v28; // rax
  unsigned __int64 DpcRequestSummary; // r8
  unsigned __int64 v30; // r10
  __int64 v31; // rcx
  LONG *v32; // rax
  char v33; // dl
  struct _KPRCB *CurrentPrcb; // rax
  bool v35; // zf
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  int v37; // edx
  _DWORD *PageTableLockBuffer; // rax
  unsigned __int64 v39; // rdx
  unsigned __int64 DeepFreezeStartTime; // rax
  __int64 v41; // r8
  __int64 v42; // rax
  struct _KPRCB *v43; // rcx
  unsigned int DpcWatchdogCount; // edi
  unsigned int DpcTimeCount; // esi
  unsigned int v46; // ebx
  _KTHREAD *NextThread; // rax
  unsigned __int64 v48; // rbx
  __int64 v49; // rax
  __int64 v50; // rax
  int v51; // ecx
  __int64 v52; // rcx
  int v53; // eax
  int v54; // eax
  int v55; // eax
  __int16 v56; // cx
  bool v57; // al
  void *v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  unsigned __int64 v62; // rax
  int v63; // eax
  int v64; // eax
  int v65; // ebx
  __int8 v66; // al
  __int64 v68; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v69; // [rsp+48h] [rbp-C0h]
  __int64 v70; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v71; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v72; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v73; // [rsp+68h] [rbp-A0h]
  _QWORD *v74; // [rsp+70h] [rbp-98h]
  unsigned __int64 v75; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v76; // [rsp+80h] [rbp-88h]
  __int64 v77[2]; // [rsp+88h] [rbp-80h]
  __int128 v78; // [rsp+98h] [rbp-70h]
  __m256i v79; // [rsp+A8h] [rbp-60h]
  __int128 v80; // [rsp+C8h] [rbp-40h]
  __int128 v81; // [rsp+D8h] [rbp-30h]
  __int128 v82; // [rsp+E8h] [rbp-20h]
  __int64 v83; // [rsp+F8h] [rbp-10h]

  *(_QWORD *)a2 = 0LL;
  v4 = *(__m128i *)a1;
  v5 = *(_OWORD *)(a1 + 32);
  v6 = *(__m128i *)(a1 + 48);
  v7 = *(_OWORD *)(a1 + 16);
  v80 = *(_OWORD *)(a1 + 80);
  v8 = *(_OWORD *)(a1 + 112);
  v78 = v5;
  v9 = *(_OWORD *)(a1 + 64);
  v74 = (_QWORD *)a2;
  v82 = v8;
  *(_OWORD *)&v79.m256i_u64[2] = v9;
  v10 = *(_OWORD *)(a1 + 96);
  v75 = v4.m128i_i64[0];
  *(__m128i *)v79.m256i_i8 = v6;
  v76 = _mm_srli_si128(v4, 8).m128i_u64[0];
  v69 = v76 & 2;
  v11 = _mm_srli_si128(v6, 8).m128i_u64[0];
  v81 = v10;
  *(_QWORD *)&v10 = *(_QWORD *)(a1 + 128);
  v70 = 0LL;
  v83 = v10;
  v73 = v11;
  v12 = v7;
  v13 = (((unsigned __int64)v4.m128i_i64[0] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_OWORD *)v77 = v7;
  v14 = 0;
  if ( (v7 & 1) == 0 || (v15 = v7 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)(v7 & 0xFFFFFFFFFFFFFFFEuLL) != 5) )
  {
    if ( (v7 & 1) == 0
      || (v15 = v7 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)(v7 & 0xFFFFFFFFFFFFFFFEuLL) != 2)
      && ((v7 & 1) == 0 || (v15 = v7 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)(v7 & 0xFFFFFFFFFFFFFFFEuLL) != 1)) )
    {
      v15 = 0LL;
    }
  }
  v16 = 0LL;
  v72 = 0LL;
  v17 = v75 & 0xFFFFFFFFFFFFF000uLL;
  v18 = (_BYTE *)(v7 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (_QWORD)v7 == (v7 & 0xFFFFFFFFFFFFFFFEuLL) )
  {
    if ( ((v7 & 1) == 0 || *v18 != 1 && ((v7 & 1) == 0 || *v18 != 3 && (v7 & 1) == 0))
      && (_QWORD)v7
      && *(_WORD *)(v7 + 368) == 16
      && ((*(_DWORD *)(v7 + 376) & 0x200) != 0
       || !(unsigned int)KiRspInIstStack(3LL, *(_QWORD *)(v7 + 384), a3, a4)
       && !(unsigned int)KiRspInIstStack(2LL, a2, v27, a4)) )
    {
      v28 = *(_QWORD *)(v12 + 360);
      if ( KiDynamicTraceEnabled )
      {
        if ( v28 >= ControlPc && v28 < qword_140572A78 )
          KeGetCurrentIrql();
      }
    }
    goto LABEL_42;
  }
  a2 = MiFaultListPagesRemaining(&v75);
  if ( a2 == 1 )
  {
LABEL_42:
    v79.m256i_i8[21] &= ~2u;
    v19 = 1LL;
    goto LABEL_43;
  }
  v19 = 512 - (((((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 3) & 0x1FF);
  v20 = v19;
  if ( a2 <= v19 )
    v20 = a2;
  if ( v17 < 0xFFFF800000000000uLL )
  {
    Address = *((_QWORD *)&v80 + 1);
    if ( *((_QWORD *)&v80 + 1) || (Address = MiLocateAddress(v17), v12 = v77[0], Address) )
      v19 = (*(unsigned int *)(Address + 28) | ((unsigned __int64)*(unsigned __int8 *)(Address + 33) << 32))
          - (v17 >> 12)
          + 1;
    else
      v19 = 1LL;
  }
  if ( v20 <= v19 )
    v19 = v20;
  if ( v19 > 1 )
    v79.m256i_i8[21] |= 4u;
  v79.m256i_i8[21] &= ~2u;
  if ( !v19 )
    goto LABEL_22;
  while ( 1 )
  {
LABEL_43:
    DpcRequestSummary = 0xFFFFF6FB7DBEDFFFuLL;
    v30 = 0xFFFFF6FB7DBED000uLL;
    if ( (v79.m256i_i8[21] & 8) != 0 )
    {
      if ( (*(_BYTE *)(v11 + 187) & 8) != 0 )
        goto LABEL_22;
      v31 = *(unsigned __int8 *)(v11 + 184);
      if ( (v31 & 0x40) != 0 && (unsigned __int64)(*(_QWORD *)(v11 + 120) + 1LL) >= *(_QWORD *)(v11 + 152) )
        goto LABEL_22;
      LOBYTE(v31) = v31 & 7;
      v32 = &dword_140467200;
      if ( (_BYTE)v31 != 2 )
        v32 = (LONG *)(v11 + 192);
      if ( (*v32 & 0x40000000) != 0 || (v79.m256i_i8[21] & 1) != 0 )
        goto LABEL_22;
      a4 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v33 = *(_BYTE *)(v11 + 184) & 7;
      if ( ((v13 >> 9) & 0x7FFFFFFFF8LL) == 0x7B7DBEDF68LL )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        if ( v33 )
        {
          if ( v33 == 7 )
          {
            v35 = CurrentPrcb->SelfmapLockHandle[1].LockQueue.Next == 0LL;
          }
          else
          {
            if ( v33 == 5 )
              Next = CurrentPrcb->SelfmapLockHandle[0].LockQueue.Next;
            else
              Next = CurrentPrcb->SelfmapLockHandle[3].LockQueue.Next;
            v35 = Next == 0LL;
          }
        }
        else
        {
          v35 = CurrentPrcb->SelfmapLockHandle[2].LockQueue.Next == 0LL;
        }
LABEL_82:
        if ( !v35 )
          goto LABEL_22;
        v43 = KeGetCurrentPrcb();
        DpcRequestSummary = (unsigned int)v43->DpcRequestSummary;
        DpcWatchdogCount = v43->DpcWatchdogCount;
        DpcTimeCount = v43->DpcTimeCount;
        if ( (DpcRequestSummary & 1) != 0 )
        {
          a2 = 1LL;
          if ( DpcTimeCount > 7 )
          {
            if ( v43->QuantumEnd )
            {
              v46 = 1;
LABEL_101:
              if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
                EtwTraceShouldYieldProcessor(v46, DpcWatchdogCount, DpcTimeCount);
              if ( v46 )
                goto LABEL_22;
              v30 = 0xFFFFF6FB7DBED000uLL;
              goto LABEL_105;
            }
LABEL_96:
            if ( (DpcRequestSummary & 0x1E) != 0 )
            {
              v46 = 5;
              goto LABEL_101;
            }
            if ( v43->CurrentThread != v43->IdleThread )
            {
              v46 = 6;
              goto LABEL_101;
            }
LABEL_100:
            _disable();
            v43->DpcWatchdogCount = 0;
            v43->DpcTimeCount = 0;
            KiResetGlobalDpcWatchdogProfiler(v43);
            _enable();
            v46 = 0;
            goto LABEL_101;
          }
        }
        else
        {
          a2 = 0LL;
          if ( (DpcRequestSummary & 0x1E) != 0 )
          {
            v46 = 2;
            goto LABEL_101;
          }
          if ( v43->QuantumEnd )
          {
            v46 = 3;
            goto LABEL_101;
          }
          NextThread = v43->NextThread;
          if ( NextThread && NextThread != v43->CurrentThread )
          {
            v46 = 4;
            goto LABEL_101;
          }
        }
        if ( DpcWatchdogCount <= 7 )
        {
LABEL_105:
          v12 = v77[0];
          v16 = v72;
          v11 = v73;
          goto LABEL_106;
        }
        if ( !(_DWORD)a2 )
          goto LABEL_100;
        goto LABEL_96;
      }
      if ( v33 )
      {
        if ( a4 >= 0xFFFFF6FB7DBED000uLL && a4 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          PageTableLockBuffer = (_DWORD *)MiGetPageTableLockBuffer(
                                            v11,
                                            ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                                            &v71);
          v35 = ((*PageTableLockBuffer >> v71) & 2) == 0;
          goto LABEL_82;
        }
      }
      else if ( a4 >= 0xFFFFF6FB7DBED000uLL && a4 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        v31 = *(_QWORD *)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[14] + 608LL);
        if ( v31 )
        {
          a4 = (((v13 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF;
          v37 = (*(_DWORD *)(v31 + 4 * a4) >> 30) & 1;
LABEL_81:
          v35 = v37 == 0;
          goto LABEL_82;
        }
      }
      v39 = *(_QWORD *)a4;
      if ( a4 >= 0xFFFFF6FB7DBED000uLL
        && a4 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(v31)
        && (v39 & 1) != 0
        && ((v39 & 0x20) == 0 || (v39 & 0x42) == 0) )
      {
        DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
        if ( DeepFreezeStartTime )
        {
          a4 = (a4 >> 3) & 0x1FF;
          v41 = v39 | 0x20;
          v42 = *(_QWORD *)(DeepFreezeStartTime + 8 * a4);
          if ( (v42 & 0x20) == 0 )
            v41 = v39;
          v39 = v41;
          if ( (v42 & 0x42) != 0 )
            v39 = v41 | 0x42;
        }
      }
      v37 = (v39 >> 60) & 2;
      goto LABEL_81;
    }
LABEL_106:
    v48 = *(_QWORD *)v13;
    if ( v13 >= v30
      && v13 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL)
      && (v48 & 1) != 0
      && ((v48 & 0x20) == 0 || (v48 & 0x42) == 0) )
    {
      a2 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
      if ( a2 )
      {
        v49 = *(_QWORD *)(a2 + 8 * ((v13 >> 3) & 0x1FF));
        a2 = v48 | 0x20;
        if ( (v49 & 0x20) == 0 )
          a2 = v48;
        v48 = a2;
        if ( (v49 & 0x42) != 0 )
          v48 = a2 | 0x42;
      }
      v12 = v77[0];
    }
    if ( !v48 || (v48 & 1) != 0 )
    {
      v51 = 0;
      goto LABEL_172;
    }
    LODWORD(v68) = 256;
    if ( (v48 & 0x400) != 0 )
    {
      if ( !(_QWORD)v81 )
      {
        v50 = MiCheckProtoAccess(v13, &v68, DpcRequestSummary);
        v12 = v77[0];
        if ( !v50 )
        {
          v51 = -1073741819;
          goto LABEL_172;
        }
        LODWORD(v52) = v68;
        *(_QWORD *)&v81 = v50;
        goto LABEL_127;
      }
    }
    else if ( (v79.m256i_i8[21] & 8) != 0 )
    {
      v52 = (v48 >> 5) & 0x1F;
LABEL_127:
      if ( (_DWORD)v52 != 256 )
      {
        if ( (v52 & 0xFFFFFFF8) == 0x10 && (v79.m256i_i8[21] & 8) != 0 )
        {
          v51 = -1073741819;
          goto LABEL_172;
        }
        v53 = MiAccessCheck(v13, v12, 0);
        v12 = v77[0];
        v51 = v53;
        if ( v53 )
          goto LABEL_172;
      }
    }
    if ( (v77[0] & 1) != 0 && *(_BYTE *)(v12 & 0xFFFFFFFFFFFFFFFEuLL) == 2 )
    {
      MiAdjustFaultList(&v75, a2, DpcRequestSummary);
      v12 = v77[0];
    }
    if ( (v48 & 0x400) != 0 )
    {
      v54 = MiResolveProtoPteFault(&v75, v69, &v70);
      v12 = v77[0];
      v51 = v54;
      goto LABEL_172;
    }
    if ( (v48 & 0x800) != 0 )
    {
      v55 = MiResolveTransitionFault(&v75, v13, 0LL, v69, &v70);
      v12 = v77[0];
      v51 = v55;
      goto LABEL_172;
    }
    if ( (v48 & 4) != 0 )
    {
      if ( (v79.m256i_i8[21] & 8) != 0 )
      {
        if ( v15 )
        {
          MiAdvanceFaultList(v15);
          v12 = v77[0];
        }
        v51 = -1073740748;
      }
      else
      {
        v64 = MiResolvePageFileFault(&v75, v13, 0LL, &v70);
        v12 = v77[0];
        v51 = v64;
      }
    }
    else
    {
      v51 = 0;
      a2 = v12 & 1;
      if ( (v12 & 1) == 0
        || *(_BYTE *)(v12 & 0xFFFFFFFFFFFFFFFEuLL) != 1
        || (*(_DWORD *)((v12 & 0xFFFFFFFFFFFFFFFEuLL) + 80) & 0x4000) != 0 )
      {
        if ( (v12 & 1) == 0 )
          goto LABEL_148;
        if ( *(_BYTE *)(v12 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
          goto LABEL_162;
        if ( (v12 & 1) == 0 )
          goto LABEL_148;
        if ( *(_BYTE *)(v12 & 0xFFFFFFFFFFFFFFFEuLL) == 3 )
          goto LABEL_162;
        if ( (v12 & 1) == 0 )
        {
LABEL_148:
          if ( v12 )
          {
            v56 = *(_WORD *)(v12 + 368);
            v57 = 0;
            if ( v56 == 16 )
            {
              if ( (*(_DWORD *)(v12 + 376) & 0x200) == 0
                && ((unsigned int)KiRspInIstStack(3LL, *(_QWORD *)(v12 + 384), DpcRequestSummary, a4)
                 || (unsigned int)KiRspInIstStack(2LL, v59, v60, v61)) )
              {
                goto LABEL_165;
              }
              v58 = &ExpInterlockedPopEntrySListFault;
              v62 = *(_QWORD *)(v12 + 360);
              v57 = KiDynamicTraceEnabled && v62 >= ControlPc && v62 < qword_140572A78 && KeGetCurrentIrql() == 15;
            }
            else
            {
              if ( v56 != 51 )
                goto LABEL_165;
              v58 = (void *)KeUserPopEntrySListFault;
            }
            if ( *(void **)(v12 + 360) == v58 || v57 )
            {
LABEL_162:
              if ( v75 >= 0xFFFF800000000000uLL && ((v48 >> 5) & 0x18) == 0x10 )
              {
                v51 = -1073741819;
                goto LABEL_172;
              }
            }
          }
        }
LABEL_165:
        v63 = MiResolveDemandZeroFault(&v75, v13, 0LL, v69);
        v12 = v77[0];
        v51 = v63;
      }
    }
LABEL_172:
    v65 = v51;
    if ( (v79.m256i_i8[21] & 8) != 0 )
      v65 = v14;
    if ( v51 < 0 )
      break;
    v75 += 4096LL;
    v66 = v79.m256i_i8[21] | 8;
    v13 += 8LL;
    v79.m256i_i8[21] = v66;
    ++v16;
    v77[1] = v13;
    v72 = v16;
    if ( (v66 & 2) != 0 )
    {
      v14 = v65;
      v79.m256i_i8[21] = v66 & 0xFD;
      if ( v16 == v19 )
        goto LABEL_22;
      v19 = MiComputeMaximumFaultCluster(&v75, v19 - v16);
      if ( v19 == 1 && (v79.m256i_i8[21] & 4) != 0 )
        v79.m256i_i8[21] &= ~4u;
      v12 = v77[0];
      v16 = 0LL;
      v72 = 0LL;
    }
    *(_QWORD *)&v81 = 0LL;
    if ( (v12 & 1) == 0 || *(_BYTE *)(v12 & 0xFFFFFFFFFFFFFFFEuLL) != 2 )
    {
      v76 &= ~2uLL;
      v69 = 0LL;
    }
    if ( (v12 & 1) != 0 )
    {
      if ( *(_BYTE *)(v12 & 0xFFFFFFFFFFFFFFFEuLL) == 5 )
        v12 &= ~1uLL;
      v77[0] = v12;
    }
    v14 = v65;
    if ( v16 >= v19 )
      goto LABEL_22;
  }
  v14 = v65;
  if ( v51 != -1073741802 )
  {
LABEL_22:
    v22 = a1;
    goto LABEL_23;
  }
  v22 = a1;
  if ( (v80 & 0x100) != 0 )
    *(_DWORD *)(a1 + 80) |= 0x100u;
LABEL_23:
  v23 = *(_OWORD *)&v79.m256i_u64[1];
  v24 = v80;
  v25 = v79.m256i_i64[3];
  *(_OWORD *)(v22 + 112) = v82;
  *(_QWORD *)(v22 + 128) = v83;
  *(_QWORD *)(v22 + 104) = *((_QWORD *)&v81 + 1);
  *(_OWORD *)(v22 + 56) = v23;
  *(_QWORD *)(v22 + 72) = v25;
  if ( (v24 & 0x80u) != 0 )
    *(_DWORD *)(v22 + 80) ^= (*(_DWORD *)(v22 + 80) ^ v24) & 0x80;
  if ( v14 == -1073532109 )
    *v74 = v70;
  return v14;
}
