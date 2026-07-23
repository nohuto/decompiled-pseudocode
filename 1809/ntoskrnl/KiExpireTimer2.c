/*
 * XREFs of KiExpireTimer2 @ 0x1400FB980
 * Callers:
 *     KiTimer2Expiration @ 0x1400FB470 (KiTimer2Expiration.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14008BA90 (RtlGetInterruptTimePrecise.c)
 *     KiWakeQueueWaiter @ 0x1400AC950 (KiWakeQueueWaiter.c)
 *     KiTryUnwaitThread @ 0x1400C4D10 (KiTryUnwaitThread.c)
 *     KiWakeOtherQueueWaiters @ 0x1400CDCE0 (KiWakeOtherQueueWaiters.c)
 *     KiFinalizeTimer2Disablement @ 0x1400FB0DC (KiFinalizeTimer2Disablement.c)
 *     KiUpdateTimer2Flags @ 0x1400FB3AC (KiUpdateTimer2Flags.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1400FB448 (KiResetGlobalDpcWatchdogProfiler.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE90 (KiAcquireKobjectLockSafe.c)
 *     KiProcessThreadWaitList @ 0x1400FBEE0 (KiProcessThreadWaitList.c)
 *     KiTimer2ComputeDueTime @ 0x1400FBFE0 (KiTimer2ComputeDueTime.c)
 *     KiInsertTimer2 @ 0x1400FC880 (KiInsertTimer2.c)
 *     EtwGetKernelTraceTimestamp @ 0x14010E9A0 (EtwGetKernelTraceTimestamp.c)
 *     EtwTraceTimedEvent @ 0x14011BCDC (EtwTraceTimedEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     KeIsThreadRunning @ 0x14028DF98 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14030FF7C (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KiExpireTimer2(unsigned __int64 a1, __int64 a2, LARGE_INTEGER a3, _DWORD *a4)
{
  _QWORD *v4; // r13
  int v5; // ebp
  __int64 v6; // rdi
  __int64 v8; // rdx
  unsigned int v10; // r12d
  _QWORD *v11; // r15
  _QWORD *v12; // r14
  char v13; // al
  _QWORD *v14; // rax
  __int64 v15; // rdi
  _QWORD *v16; // rcx
  char v17; // al
  __int64 v18; // rsi
  _QWORD *v19; // r12
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r13
  struct _KPRCB *CurrentThread; // r9
  __int64 v23; // r8
  bool v24; // zf
  unsigned __int64 v25; // r14
  ULONG_PTR v26; // rsi
  volatile signed __int32 v27; // ecx
  int v28; // ebp
  unsigned int v29; // edx
  signed __int32 v30; // eax
  char v31; // bp
  __int64 result; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned __int64 v35; // r10
  __int64 v36; // rcx
  _DWORD *v37; // rdx
  __int64 v38; // r15
  __int64 v39; // rcx
  __int64 v40; // rdi
  _DWORD *v41; // rdi
  signed __int32 v42; // eax
  signed __int32 v43; // ett
  int v44; // edx
  __int64 *v45; // rcx
  __int64 v46; // rcx
  unsigned __int64 v47; // r8
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rdx
  LARGE_INTEGER InterruptTimePrecise; // rax
  __int64 v52; // rax
  __int64 v53; // rdx
  unsigned __int64 v54; // rcx
  __int64 v55; // rax
  unsigned __int8 IsThreadRunning; // al
  __int64 v57; // r9
  __int64 v58; // rdx
  __int64 v59; // rsi
  char v60; // al
  __int64 v61; // r8
  unsigned __int8 v62; // cl
  _KTHREAD *v63; // r9
  unsigned __int8 v64; // al
  __int64 v65; // r9
  _QWORD *v66; // rdx
  __int64 v67; // rcx
  char v68; // al
  int v69; // r9d
  __int64 *v70; // r8
  signed __int32 v71; // ecx
  char v72; // cl
  char v73; // dl
  char v74; // cl
  char v75; // [rsp+30h] [rbp-F8h]
  char v76; // [rsp+31h] [rbp-F7h] BYREF
  char v77; // [rsp+32h] [rbp-F6h]
  __int64 v78; // [rsp+38h] [rbp-F0h]
  char v79[8]; // [rsp+40h] [rbp-E8h] BYREF
  _QWORD *v80; // [rsp+48h] [rbp-E0h]
  __int64 v81; // [rsp+50h] [rbp-D8h]
  struct _KPRCB *v82; // [rsp+58h] [rbp-D0h]
  _KTHREAD *v83; // [rsp+60h] [rbp-C8h]
  _DWORD *v84; // [rsp+68h] [rbp-C0h]
  LARGE_INTEGER PerformanceCounter; // [rsp+70h] [rbp-B8h] BYREF
  _QWORD v86[2]; // [rsp+78h] [rbp-B0h] BYREF
  __int64 v87; // [rsp+88h] [rbp-A0h]
  __int64 v88; // [rsp+90h] [rbp-98h]
  ULONG_PTR v89; // [rsp+98h] [rbp-90h]
  __int64 v90; // [rsp+A0h] [rbp-88h]
  char v91; // [rsp+A8h] [rbp-80h]
  _BYTE v92[32]; // [rsp+B0h] [rbp-78h] BYREF

  v4 = *(_QWORD **)(a2 + 8);
  v5 = 0;
  v6 = a2;
  v81 = a2;
  v8 = *(_QWORD *)(a1 + 88);
  v10 = *((_DWORD *)v4 + 121);
  LODWORD(v78) = v10;
  v87 = 0LL;
  v84 = a4;
  v77 = 0;
  v80 = v4;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v86[0] = *(_QWORD *)(a1 + 72);
    v86[1] = *(_QWORD *)(a1 + 80);
    v77 = *(_BYTE *)(a1 + 129);
    v75 = 1;
    v87 = v8;
  }
  else
  {
    v75 = 0;
  }
  v76 = 0;
  if ( v8 && (*(_BYTE *)(a1 + 1) & 0x20) == 0 )
  {
    if ( (*(_BYTE *)(a1 + 129) & 4) != 0 )
    {
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
      v8 = *(_QWORD *)(a1 + 88);
      a3 = InterruptTimePrecise;
    }
    v33 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))KiTimer2ComputeDueTime)((LARGE_INTEGER)a3.QuadPart, v8, &v76);
    v36 = *(_QWORD *)(a1 + 80);
    if ( v36 != -1 )
    {
      v46 = v36 - *(_QWORD *)(a1 + 72);
      if ( v46 )
      {
        v47 = v46 + v35;
        if ( v46 + v35 < v35 || v47 == -1LL )
          v47 = -2LL;
        v48 = v34 + v47;
        if ( v34 + v47 < v47 || v48 == -1 )
          v48 = -2LL;
        *(_QWORD *)(a1 + 80) = v48;
      }
      else
      {
        *(_QWORD *)(a1 + 80) = v33;
      }
    }
    *(_QWORD *)(a1 + 72) = v33;
    while ( !(unsigned __int8)KiInsertTimer2(a1, 0LL, v79) )
    {
      if ( v76 )
        goto LABEL_4;
      v52 = KiTimer2ComputeDueTime(*(_QWORD *)(a1 + 72), *(_QWORD *)(a1 + 88), &v76);
      v54 = *(_QWORD *)(a1 + 80);
      *(_QWORD *)(a1 + 72) = v52;
      if ( v54 != -1LL )
      {
        v55 = v54 + v53;
        if ( v54 + v53 < v54 || v55 == -1 )
          v55 = -2LL;
        *(_QWORD *)(a1 + 80) = v55;
      }
    }
    v5 = 1;
  }
LABEL_4:
  v11 = (_QWORD *)(a1 + 8);
  v12 = *(_QWORD **)(a1 + 8);
  v13 = *(_BYTE *)a1 & 0x7F;
  *(_DWORD *)(a1 + 4) = 1;
  if ( v13 == 25 )
  {
    if ( v12 == v11 )
      goto LABEL_19;
    while ( 1 )
    {
      v14 = (_QWORD *)*v12;
      v15 = (__int64)v12;
      v12 = v14;
      v16 = *(_QWORD **)(v15 + 8);
      if ( v14[1] != v15 || *v16 != v15 )
        goto LABEL_100;
      *v16 = v14;
      v14[1] = v16;
      v17 = *(_BYTE *)(v15 + 16);
      if ( v17 == 1 )
      {
        v49 = *(unsigned __int16 *)(v15 + 18);
        v50 = v15;
        v6 = v81;
        if ( (unsigned __int8)KiTryUnwaitThread(v81, v50, v49, 0LL) )
        {
          v24 = (*(_DWORD *)(a1 + 4))-- == 1;
          if ( v24 )
          {
LABEL_18:
            v4 = v80;
            v10 = v78;
            goto LABEL_19;
          }
        }
      }
      else if ( v17 == 2 )
      {
        *(_BYTE *)(v15 + 17) = 5;
        v18 = *(_QWORD *)(v15 + 24);
        *(_QWORD *)v15 = 0LL;
        v19 = (_QWORD *)(v18 + 8);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        CurrentPrcb = KeGetCurrentPrcb();
        CurrentThread = (struct _KPRCB *)CurrentPrcb->CurrentThread;
        v82 = CurrentThread;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          IsThreadRunning = KeIsThreadRunning(CurrentThread);
          EtwTraceEnqueueWork(v57, v15, IsThreadRunning);
        }
        KiAcquireKobjectLockSafe(v18);
        if ( (_QWORD *)*v19 == v19
          || *(_DWORD *)(v18 + 40) >= *(_DWORD *)(v18 + 44)
          || *(_QWORD *)&v82->CFlushSize == v18 && BYTE3(v82->ProcessorState.ContextFrame.Rbx) == 15
          || !KiWakeQueueWaiter((__int64)CurrentPrcb, v18, v15) )
        {
          v44 = *(_DWORD *)(v18 + 4);
          *(_DWORD *)(v18 + 4) = v44 + 1;
          v45 = *(__int64 **)(v18 + 32);
          if ( *v45 != v18 + 24 )
            goto LABEL_100;
          *(_QWORD *)v15 = v18 + 24;
          *(_QWORD *)(v15 + 8) = v45;
          *v45 = v15;
          *(_QWORD *)(v18 + 32) = v15;
          if ( !v44 && (_QWORD *)*v19 != v19 )
            KiWakeOtherQueueWaiters((__int64)CurrentPrcb, v18, v23);
        }
        _InterlockedAnd((volatile signed __int32 *)v18, 0xFFFFFF7F);
        v24 = (*(_DWORD *)(a1 + 4))-- == 1;
        v6 = v81;
        if ( v24 )
          goto LABEL_18;
      }
      else
      {
        v58 = v15;
        v6 = v81;
        KiTryUnwaitThread(v81, v58, 256LL, 0LL);
      }
      if ( v12 == v11 )
        goto LABEL_18;
    }
  }
  if ( v12 != v11 )
  {
    while ( 1 )
    {
      v59 = (__int64)v12;
      v12 = (_QWORD *)*v12;
      v60 = *(_BYTE *)(v59 + 16);
      if ( v60 == 1 )
      {
        v61 = *(unsigned __int16 *)(v59 + 18);
LABEL_97:
        KiTryUnwaitThread(v6, v59, v61, 0LL);
        goto LABEL_98;
      }
      if ( v60 != 2 )
      {
        v61 = 256LL;
        goto LABEL_97;
      }
      *(_BYTE *)(v59 + 17) = 5;
      v78 = *(_QWORD *)(v59 + 24);
      v80 = (_QWORD *)(v78 + 8);
      *(_QWORD *)v59 = 0LL;
      v62 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v62 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v82 = KeGetCurrentPrcb();
      v63 = v82->CurrentThread;
      v83 = v63;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        v64 = KeIsThreadRunning(v63);
        EtwTraceEnqueueWork(v65, v59, v64);
      }
      KiAcquireKobjectLockSafe(v78);
      v66 = v80;
      v67 = v78;
      if ( (_QWORD *)*v66 == v66 || *(_DWORD *)(v78 + 40) >= *(_DWORD *)(v78 + 44) )
        goto LABEL_91;
      if ( v83->Queue == (_DISPATCHER_HEADER *volatile)v78 && v83->WaitReason == 15 )
        break;
      v68 = KiWakeQueueWaiter((__int64)v82, v78, v59);
      v67 = v78;
      if ( !v68 )
      {
        v66 = v80;
        goto LABEL_91;
      }
LABEL_95:
      _InterlockedAnd((volatile signed __int32 *)v67, 0xFFFFFF7F);
LABEL_98:
      if ( v12 == v11 )
        goto LABEL_59;
    }
    v66 = (_QWORD *)(v78 + 8);
LABEL_91:
    v69 = *(_DWORD *)(v67 + 4);
    *(_DWORD *)(v67 + 4) = v69 + 1;
    v70 = *(__int64 **)(v67 + 32);
    if ( *v70 != v67 + 24 )
LABEL_100:
      __fastfail(3u);
    *(_QWORD *)v59 = v67 + 24;
    *(_QWORD *)(v59 + 8) = v70;
    *v70 = v59;
    *(_QWORD *)(v67 + 32) = v59;
    if ( !v69 && (_QWORD *)*v66 != v66 )
    {
      KiWakeOtherQueueWaiters((__int64)v82, v67, (__int64)v70);
      v67 = v78;
    }
    goto LABEL_95;
  }
LABEL_59:
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *v11 = v11;
LABEL_19:
  v25 = 0LL;
  v26 = KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(a1 + 96), KiWaitNever));
  if ( v26 )
  {
    v25 = KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(a1 + 104), KiWaitNever));
    KiUpdateTimer2Flags((volatile signed __int32 *)a1, v5 | 0x10, 0);
    if ( *(_QWORD *)(v6 + 11528) )
      KiProcessThreadWaitList(v6, 1LL, 0LL);
    v31 = v75;
    if ( v75 )
      EtwGetKernelTraceTimestamp(v92, 1073872896LL);
    v37 = v84;
    v38 = v81;
    v39 = v81;
    v40 = ((*v84)++ & 0xF) + 1LL;
    v41 = &v37[4 * v40];
    *(_QWORD *)v41 = v26;
    v41[2] = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(v39 + 23452) = 0;
    KiResetGlobalDpcWatchdogProfiler(v39);
    *(_BYTE *)(v38 + 11882) = 1;
    ((void (__fastcall *)(unsigned __int64, unsigned __int64))v26)(a1, v25);
    *(_BYTE *)(v38 + 11882) = 0;
    v41[3] = MEMORY[0xFFFFF78000000320];
    _m_prefetchw((const void *)a1);
    v42 = *(_DWORD *)a1;
    do
    {
      v43 = v42;
      v42 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v42 & 0xFFFFEFFF, v42);
    }
    while ( v43 != v42 );
    if ( (v42 & 0x2F00) == 0x2000 )
      KiFinalizeTimer2Disablement(a1);
  }
  else
  {
    v27 = *(_DWORD *)a1;
    v28 = v5 << 8;
    v29 = v28 | *(_DWORD *)a1 & 0xFFFFF07F;
    v30 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v29, *(_DWORD *)a1);
    if ( v27 != v30 )
    {
      do
      {
        v71 = v30;
        v29 = v28 | v30 & 0xFFFFF07F;
        v30 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v29, v30);
      }
      while ( v71 != v30 );
    }
    if ( (v29 & 0x3F00) == 0x2000 )
      KiFinalizeTimer2Disablement(a1);
    v31 = v75;
  }
  result = *((unsigned int *)v4 + 121);
  if ( v10 != (_DWORD)result )
    KeBugCheckEx(0xC7u, 5uLL, v26, v10, *((unsigned int *)v4 + 121));
  if ( v31 )
  {
    v89 = v26;
    v88 = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(v26 ^ _byteswap_uint64(KiWaitAlways ^ a1), KiWaitNever));
    v90 = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(v25 ^ KiWaitAlways), KiWaitNever));
    v72 = (2 * (v77 & 2)) | 8;
    if ( (v77 & 4) == 0 )
      v72 = 2 * (v77 & 2);
    v73 = v72;
    v74 = v72 | 0x10;
    if ( (v77 & 8) == 0 )
      v74 = v73;
    v91 = v74;
    if ( v26 )
    {
      v74 |= 1u;
      v91 = v74;
    }
    if ( v87 )
      v91 = v74 | 2;
    if ( !v26 )
      EtwGetKernelTraceTimestamp(v92, 1073872896LL);
    return EtwTraceTimedEvent(3945, 1073872896, (unsigned int)v86, 56, 4197890, (__int64)v92);
  }
  return result;
}
