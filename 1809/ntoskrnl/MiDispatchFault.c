/*
 * XREFs of MiDispatchFault @ 0x140045FD0
 * Callers:
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     MiInPagePageTable @ 0x140098720 (MiInPagePageTable.c)
 * Callees:
 *     MiAdvanceFaultList @ 0x14002B6E0 (MiAdvanceFaultList.c)
 *     MiResolveTransitionFault @ 0x14003AC00 (MiResolveTransitionFault.c)
 *     MiResolveProtoPteFault @ 0x140042E60 (MiResolveProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x140046D50 (MiResolveDemandZeroFault.c)
 *     MiGetPageTableLockBuffer @ 0x14006CE70 (MiGetPageTableLockBuffer.c)
 *     MiLocateAddress @ 0x140087850 (MiLocateAddress.c)
 *     MiAccessCheck @ 0x14009294C (MiAccessCheck.c)
 *     MiCheckProtoAccess @ 0x140098B50 (MiCheckProtoAccess.c)
 *     PsGetCurrentProcess @ 0x1400F13B0 (PsGetCurrentProcess.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1400FB448 (KiResetGlobalDpcWatchdogProfiler.c)
 *     MiFaultListPagesRemaining @ 0x140120778 (MiFaultListPagesRemaining.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiAdjustFaultList @ 0x140125E50 (MiAdjustFaultList.c)
 *     MiResolvePageFileFault @ 0x140154C44 (MiResolvePageFileFault.c)
 *     MiComputeMaximumFaultCluster @ 0x140168D38 (MiComputeMaximumFaultCluster.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     EtwTraceShouldYieldProcessor @ 0x1403106FC (EtwTraceShouldYieldProcessor.c)
 *     ExSpinLockIsContended @ 0x14031C1F8 (ExSpinLockIsContended.c)
 */

__int64 __fastcall MiDispatchFault(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r12
  __m128i v3; // xmm3
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __m128i v6; // xmm2
  __int128 v7; // xmm4
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm0
  __int64 v11; // r11
  ULONG_PTR v12; // r15
  unsigned int v13; // edi
  _QWORD *v14; // r13
  unsigned __int64 v15; // rbx
  struct _KPRCB *v16; // rcx
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // r10
  __int64 Address; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // r9
  __int64 v25; // rcx
  LONG *v26; // rax
  unsigned __int64 v27; // rbx
  char v28; // di
  struct _KPRCB *CurrentPrcb; // rax
  bool v30; // zf
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  __int64 v32; // rdx
  int IsContended; // edx
  _DWORD *PageTableLockBuffer; // rax
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 DpcRequestSummary; // r8
  unsigned int DpcWatchdogCount; // edi
  unsigned int DpcTimeCount; // esi
  unsigned int v42; // ebx
  _KTHREAD *NextThread; // rax
  unsigned __int64 v44; // rbx
  __int64 v45; // rax
  __int64 v46; // rax
  int v47; // ecx
  __int64 v48; // rcx
  int v49; // eax
  int v50; // eax
  int v51; // eax
  __int16 v52; // ax
  void *v53; // rax
  int v54; // eax
  int v55; // eax
  int v56; // ebx
  __int8 v57; // al
  __int64 v58; // rax
  __int64 v59; // xmm1_8
  int v61; // [rsp+38h] [rbp-D0h]
  int v62; // [rsp+3Ch] [rbp-CCh] BYREF
  _QWORD *v63; // [rsp+40h] [rbp-C8h]
  __int64 v64; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v65; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v66; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v67; // [rsp+60h] [rbp-A8h]
  __int64 v68; // [rsp+68h] [rbp-A0h]
  _QWORD *v69; // [rsp+70h] [rbp-98h]
  unsigned __int64 v70; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v71; // [rsp+80h] [rbp-88h]
  __int64 v72[2]; // [rsp+88h] [rbp-80h]
  __int128 v73; // [rsp+98h] [rbp-70h]
  __m256i v74; // [rsp+A8h] [rbp-60h]
  __int128 v75; // [rsp+C8h] [rbp-40h]
  __int128 v76; // [rsp+D8h] [rbp-30h]
  __int128 v77; // [rsp+E8h] [rbp-20h]
  __int64 v78; // [rsp+F8h] [rbp-10h]

  v2 = 0LL;
  *a2 = 0LL;
  v3 = *(__m128i *)a1;
  v4 = *(_OWORD *)(a1 + 80);
  v5 = *(_OWORD *)(a1 + 32);
  v6 = *(__m128i *)(a1 + 48);
  v7 = *(_OWORD *)(a1 + 16);
  v69 = a2;
  v75 = v4;
  v8 = *(_OWORD *)(a1 + 112);
  v68 = a1;
  v73 = v5;
  v9 = *(_OWORD *)(a1 + 64);
  v64 = 0LL;
  v77 = v8;
  *(_OWORD *)&v74.m256i_u64[2] = v9;
  v10 = *(_OWORD *)(a1 + 96);
  v70 = v3.m128i_i64[0];
  *(__m128i *)v74.m256i_i8 = v6;
  v71 = _mm_srli_si128(v3, 8).m128i_u64[0];
  v63 = (_QWORD *)(v71 & 2);
  v76 = v10;
  v78 = *(_QWORD *)(a1 + 128);
  v67 = _mm_srli_si128(v6, 8).m128i_u64[0];
  v11 = v7;
  v61 = 0;
  v12 = (((unsigned __int64)v3.m128i_i64[0] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_OWORD *)v72 = v7;
  v13 = 0;
  if ( (v7 & 1) == 0 || (v14 = (_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFEuLL), *(_BYTE *)(v7 & 0xFFFFFFFFFFFFFFFEuLL) != 5) )
  {
    if ( (v7 & 1) == 0
      || (v14 = (_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFEuLL), *(_BYTE *)(v7 & 0xFFFFFFFFFFFFFFFEuLL) != 2)
      && ((v7 & 1) == 0 || (v14 = (_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFEuLL), *(_BYTE *)(v7 & 0xFFFFFFFFFFFFFFFEuLL) != 1)) )
    {
      v14 = 0LL;
    }
  }
  v15 = v70 & 0xFFFFFFFFFFFFF000uLL;
  v66 = 0LL;
  v16 = (struct _KPRCB *)(v7 & 0xFFFFFFFFFFFFFFFEuLL);
  v17 = 0LL;
  if ( (_QWORD)v7 == (v7 & 0xFFFFFFFFFFFFFFFEuLL) || (v18 = MiFaultListPagesRemaining(&v70), v18 == 1) )
  {
    v74.m256i_i8[21] &= ~2u;
    v19 = 1LL;
    goto LABEL_24;
  }
  v16 = (struct _KPRCB *)(((((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 3) & 0x1FF);
  v19 = 512LL - (_QWORD)v16;
  v20 = 512LL - (_QWORD)v16;
  if ( v18 <= 512 - (__int64)v16 )
    v20 = v18;
  if ( v15 < 0xFFFF800000000000uLL )
  {
    Address = *((_QWORD *)&v75 + 1);
    if ( *((_QWORD *)&v75 + 1) || (Address = MiLocateAddress(v15), v11 = v72[0], Address) )
      v19 = (*(unsigned int *)(Address + 28) | ((unsigned __int64)*(unsigned __int8 *)(Address + 33) << 32))
          - (v15 >> 12)
          + 1;
    else
      v19 = 1LL;
  }
  if ( v20 <= v19 )
    v19 = v20;
  if ( v19 > 1 )
    v74.m256i_i8[21] |= 4u;
  v74.m256i_i8[21] &= ~2u;
  if ( !v19 )
    goto LABEL_165;
LABEL_24:
  while ( 1 )
  {
    v22 = 0xFFFFF6FB7DBEDFFFuLL;
    v23 = 0xFFFFF6FB7DBED000uLL;
    if ( (v74.m256i_i8[21] & 8) != 0 )
      break;
LABEL_87:
    v44 = *(_QWORD *)v12;
    if ( v12 >= 0xFFFFF6FB7DBED000uLL
      && v12 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(v16, v22)
      && (v44 & 1) != 0
      && ((v44 & 0x20) == 0 || (v44 & 0x42) == 0) )
    {
      v22 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v22 )
      {
        v45 = *(_QWORD *)(v22 + 8 * ((v12 >> 3) & 0x1FF));
        v22 = v44 | 0x20;
        if ( (v45 & 0x20) == 0 )
          v22 = v44;
        v44 = v22;
        if ( (v45 & 0x42) != 0 )
          v44 = v22 | 0x42;
      }
      v11 = v72[0];
    }
    if ( !v44 || (v44 & 1) != 0 )
    {
      v47 = 0;
      goto LABEL_145;
    }
    v62 = 256;
    if ( (v44 & 0x400) != 0 )
    {
      if ( (_QWORD)v76 )
        goto LABEL_113;
      v46 = MiCheckProtoAccess(v12, &v62);
      v11 = v72[0];
      if ( !v46 )
      {
        v47 = -1073741819;
        goto LABEL_145;
      }
      LODWORD(v48) = v62;
      *(_QWORD *)&v76 = v46;
    }
    else
    {
      if ( (v74.m256i_i8[21] & 8) == 0 )
        goto LABEL_113;
      v48 = (v44 >> 5) & 0x1F;
    }
    if ( (_DWORD)v48 != 256 )
    {
      if ( (v48 & 0xFFFFFFF8) == 0x10 && (v74.m256i_i8[21] & 8) != 0 )
      {
        v47 = -1073741819;
        goto LABEL_145;
      }
      v49 = MiAccessCheck(v12, v11, 0);
      v11 = v72[0];
      v47 = v49;
      if ( v49 )
        goto LABEL_145;
    }
LABEL_113:
    if ( (v72[0] & 1) != 0 && *(_BYTE *)(v11 & 0xFFFFFFFFFFFFFFFEuLL) == 2 )
    {
      MiAdjustFaultList(&v70, v22, v23);
      v11 = v72[0];
    }
    if ( (v44 & 0x400) != 0 )
    {
      v50 = MiResolveProtoPteFault((__int64)&v70, v63, &v64);
      v11 = v72[0];
      v47 = v50;
      goto LABEL_145;
    }
    if ( (v44 & 0x800) != 0 )
    {
      v51 = MiResolveTransitionFault((__int64)&v70, v12, 0LL, v63, &v64);
      v11 = v72[0];
      v47 = v51;
      goto LABEL_145;
    }
    if ( (v44 & 4) != 0 )
    {
      if ( (v74.m256i_i8[21] & 8) != 0 )
      {
        if ( v14 )
        {
          MiAdvanceFaultList(v14);
          v11 = v72[0];
        }
        v47 = -1073740748;
      }
      else
      {
        v55 = MiResolvePageFileFault(&v70, v12, 0LL, &v64);
        v11 = v72[0];
        v47 = v55;
      }
      goto LABEL_145;
    }
    v47 = 0;
    if ( (v11 & 1) == 0
      || *(_BYTE *)(v11 & 0xFFFFFFFFFFFFFFFEuLL) != 1
      || (*(_DWORD *)((v11 & 0xFFFFFFFFFFFFFFFEuLL) + 80) & 0x4000) != 0 )
    {
      if ( (v11 & 1) != 0 )
      {
        if ( *(_BYTE *)(v11 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
          goto LABEL_135;
        if ( (v11 & 1) != 0 )
        {
          if ( *(_BYTE *)(v11 & 0xFFFFFFFFFFFFFFFEuLL) != 3 )
          {
            if ( (v11 & 1) != 0 )
              goto LABEL_138;
            goto LABEL_129;
          }
LABEL_135:
          if ( v70 < 0xFFFF800000000000uLL || ((v44 >> 5) & 0x18) != 0x10 )
            goto LABEL_138;
          v47 = -1073741819;
          goto LABEL_145;
        }
      }
LABEL_129:
      if ( !v11 )
        goto LABEL_138;
      v52 = *(_WORD *)(v11 + 368);
      if ( v52 == 16 )
      {
        v53 = &ExpInterlockedPopEntrySListFault;
      }
      else
      {
        if ( v52 != 51 )
          goto LABEL_138;
        v53 = (void *)KeUserPopEntrySListFault;
      }
      if ( *(void **)(v11 + 360) != v53 )
      {
LABEL_138:
        v54 = MiResolveDemandZeroFault(&v70, v12, 0LL, v63);
        v11 = v72[0];
        v47 = v54;
        goto LABEL_145;
      }
      goto LABEL_135;
    }
LABEL_145:
    v56 = v47;
    if ( (v74.m256i_i8[21] & 8) != 0 )
      v56 = v13;
    v13 = v56;
    if ( v47 < 0 )
      goto LABEL_164;
    v70 += 4096LL;
    v57 = v74.m256i_i8[21] | 8;
    v12 += 8LL;
    v74.m256i_i8[21] = v57;
    ++v17;
    v72[1] = v12;
    v66 = v17;
    if ( (v57 & 2) != 0 )
    {
      v74.m256i_i8[21] = v57 & 0xFD;
      if ( v17 == v19 )
        goto LABEL_164;
      v19 = MiComputeMaximumFaultCluster(&v70, v19 - v17);
      if ( v19 == 1 && (v74.m256i_i8[21] & 4) != 0 )
        v74.m256i_i8[21] &= ~4u;
      v11 = v72[0];
      v17 = 0LL;
      v66 = 0LL;
    }
    *(_QWORD *)&v76 = 0LL;
    v16 = (struct _KPRCB *)(v11 & 1);
    if ( (v11 & 1) == 0 || *(_BYTE *)(v11 & 0xFFFFFFFFFFFFFFFEuLL) != 2 )
    {
      v71 &= ~2uLL;
      v63 = 0LL;
    }
    if ( (v11 & 1) != 0 )
    {
      if ( *(_BYTE *)(v11 & 0xFFFFFFFFFFFFFFFEuLL) == 5 )
        v11 &= ~1uLL;
      v72[0] = v11;
    }
    v13 = v56;
    if ( v17 >= v19 )
      goto LABEL_164;
    v61 = v56;
  }
  v24 = v67;
  if ( (*(_BYTE *)(v67 + 187) & 8) != 0 )
    goto LABEL_164;
  v25 = *(unsigned __int8 *)(v67 + 184);
  if ( (v25 & 0x40) != 0 && (unsigned __int64)(*(_QWORD *)(v67 + 120) + 1LL) >= *(_QWORD *)(v67 + 152) )
    goto LABEL_164;
  LOBYTE(v25) = v25 & 7;
  v26 = &dword_14043C7C0;
  if ( (_BYTE)v25 != 2 )
    v26 = (LONG *)(v67 + 192);
  if ( (*v26 & 0x40000000) != 0 || (v74.m256i_i8[21] & 1) != 0 )
    goto LABEL_164;
  v27 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v28 = *(_BYTE *)(v67 + 184) & 7;
  if ( ((v12 >> 9) & 0x7FFFFFFFF8LL) != 0x7B7DBEDF68LL )
  {
    if ( v28 )
    {
      if ( v27 >= 0xFFFFF6FB7DBED000uLL && v27 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        PageTableLockBuffer = (_DWORD *)MiGetPageTableLockBuffer(
                                          v67,
                                          ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                                          &v65);
        v30 = ((*PageTableLockBuffer >> v65) & 2) == 0;
        goto LABEL_64;
      }
    }
    else if ( v27 >= 0xFFFFF6FB7DBED000uLL && v27 <= 0xFFFFF6FB7DBEDFFFuLL )
    {
      v25 = *(_QWORD *)(PsGetCurrentProcess(v25, 0xFFFFF6FB7DBEDFFFuLL) + 1296);
      v32 = *(_QWORD *)(v25 + 552);
      if ( v32 )
      {
        IsContended = ExSpinLockIsContended(v32 + 4 * ((((v12 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF));
LABEL_63:
        v30 = IsContended == 0;
        goto LABEL_64;
      }
      v24 = v67;
    }
    v35 = *(_QWORD *)v27;
    if ( v27 >= 0xFFFFF6FB7DBED000uLL
      && v27 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(v25, v35)
      && (v35 & 1) != 0
      && ((v35 & 0x20) == 0 || (v35 & 0x42) == 0) )
    {
      v36 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v36 )
      {
        v37 = v35 | 0x20;
        v38 = *(_QWORD *)(v36 + 8 * ((v27 >> 3) & 0x1FF));
        if ( (v38 & 0x20) == 0 )
          v37 = v35;
        v35 = v37;
        if ( (v38 & 0x42) != 0 )
          v35 = v37 | 0x42;
      }
    }
    IsContended = (v35 >> 60) & 2;
    goto LABEL_63;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( v28 )
  {
    if ( v28 == 7 )
    {
      v30 = CurrentPrcb->SelfmapLockHandle[1].LockQueue.Next == 0LL;
    }
    else
    {
      if ( v28 == 5 )
        Next = CurrentPrcb->SelfmapLockHandle[0].LockQueue.Next;
      else
        Next = CurrentPrcb->SelfmapLockHandle[3].LockQueue.Next;
      v30 = Next == 0LL;
    }
  }
  else
  {
    v30 = CurrentPrcb->SelfmapLockHandle[2].LockQueue.Next == 0LL;
  }
LABEL_64:
  if ( !v30 )
    goto LABEL_163;
  v16 = KeGetCurrentPrcb();
  DpcRequestSummary = (unsigned int)v16->DpcRequestSummary;
  DpcWatchdogCount = v16->DpcWatchdogCount;
  DpcTimeCount = v16->DpcTimeCount;
  if ( (DpcRequestSummary & 1) == 0 )
  {
    v22 = 0LL;
    if ( (DpcRequestSummary & 0x1E) != 0 )
    {
      v42 = 2;
      goto LABEL_83;
    }
    if ( v16->QuantumEnd )
    {
      v42 = 3;
      goto LABEL_83;
    }
    NextThread = v16->NextThread;
    if ( NextThread && NextThread != v16->CurrentThread )
    {
      v42 = 4;
      goto LABEL_83;
    }
LABEL_76:
    if ( DpcWatchdogCount <= 7 )
    {
LABEL_86:
      v11 = v72[0];
      v13 = v61;
      v17 = v66;
      v23 = 0xFFFFF6FB7DBED000uLL;
      goto LABEL_87;
    }
    if ( !(_DWORD)v22 )
      goto LABEL_82;
    goto LABEL_78;
  }
  v22 = 1LL;
  if ( DpcTimeCount <= 7 )
    goto LABEL_76;
  if ( v16->QuantumEnd )
  {
    v42 = 1;
    goto LABEL_83;
  }
LABEL_78:
  if ( (DpcRequestSummary & 0x1E) != 0 )
  {
    v42 = 5;
    goto LABEL_83;
  }
  if ( v16->CurrentThread != v16->IdleThread )
  {
    v42 = 6;
    goto LABEL_83;
  }
LABEL_82:
  _disable();
  v16->DpcWatchdogCount = 0;
  v16->DpcTimeCount = 0;
  KiResetGlobalDpcWatchdogProfiler(v16, v22, DpcRequestSummary, v24);
  _enable();
  v42 = 0;
LABEL_83:
  if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
    EtwTraceShouldYieldProcessor(v42, DpcWatchdogCount, DpcTimeCount);
  if ( !v42 )
    goto LABEL_86;
LABEL_163:
  v13 = v61;
LABEL_164:
  v2 = v64;
LABEL_165:
  v58 = v68;
  v59 = v74.m256i_i64[3];
  *(_OWORD *)(v68 + 112) = v77;
  *(_QWORD *)(v58 + 128) = v78;
  *(_QWORD *)(v58 + 104) = *((_QWORD *)&v76 + 1);
  *(_OWORD *)(v58 + 56) = *(_OWORD *)&v74.m256i_u64[1];
  *(_QWORD *)(v58 + 72) = v59;
  if ( v13 == -1073532109 )
    *v69 = v2;
  return v13;
}
