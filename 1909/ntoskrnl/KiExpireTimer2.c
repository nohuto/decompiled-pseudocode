/*
 * XREFs of KiExpireTimer2 @ 0x14009F5E0
 * Callers:
 *     KiTimer2Expiration @ 0x14009FD10 (KiTimer2Expiration.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x14000D290 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x14000E290 (KiWakeOtherQueueWaiters.c)
 *     KiTryUnwaitThread @ 0x14006A320 (KiTryUnwaitThread.c)
 *     RtlGetInterruptTimePrecise @ 0x14009E740 (RtlGetInterruptTimePrecise.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3310 (KiAcquireKobjectLockSafe.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x140108A18 (KiResetGlobalDpcWatchdogProfiler.c)
 *     EtwGetKernelTraceTimestamp @ 0x1401094D0 (EtwGetKernelTraceTimestamp.c)
 *     KiUpdateTimer2Flags @ 0x1401139F4 (KiUpdateTimer2Flags.c)
 *     KiFinalizeTimer2Disablement @ 0x140113A90 (KiFinalizeTimer2Disablement.c)
 *     KiProcessThreadWaitList @ 0x140114160 (KiProcessThreadWaitList.c)
 *     EtwTraceTimedEvent @ 0x14011D1F0 (EtwTraceTimedEvent.c)
 *     KiInsertTimer2 @ 0x140122C34 (KiInsertTimer2.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     KeIsThreadRunning @ 0x1402A469C (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14032D4A8 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KiExpireTimer2(unsigned __int64 a1, __int64 a2, LARGE_INTEGER a3, _DWORD *a4)
{
  char v4; // si
  __int64 v6; // r12
  __int64 v8; // r13
  int v9; // r15d
  __int64 v10; // rcx
  _QWORD *v11; // rcx
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
  __int64 CurrentThread; // r9
  int v23; // edx
  __int64 *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  bool v27; // zf
  unsigned __int64 v28; // r14
  ULONG_PTR v29; // rsi
  signed __int32 v30; // ecx
  int v31; // r15d
  unsigned int v32; // edx
  signed __int32 v33; // eax
  char v34; // r15
  __int64 result; // rax
  unsigned __int8 IsThreadRunning; // al
  __int64 v37; // r9
  _DWORD *v38; // rdx
  __int64 v39; // rdi
  _DWORD *v40; // rdi
  signed __int32 v41; // eax
  signed __int32 v42; // ett
  __int64 v43; // rdx
  unsigned __int64 v44; // r8
  unsigned __int64 v45; // rcx
  LARGE_INTEGER InterruptTimePrecise; // rax
  unsigned __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  unsigned __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rdi
  char v53; // al
  __int64 v54; // r8
  __int64 v55; // rsi
  _QWORD *v56; // r12
  unsigned __int8 v57; // cl
  struct _KPRCB *v58; // rax
  _KTHREAD *v59; // r13
  unsigned __int8 v60; // al
  __int64 v61; // r13
  int v62; // ecx
  __int64 *v63; // rdx
  signed __int32 v64; // ecx
  char v65; // cl
  char v66; // dl
  char v67; // cl
  char v68; // [rsp+30h] [rbp-79h]
  char v69; // [rsp+32h] [rbp-77h]
  char v70[5]; // [rsp+33h] [rbp-76h] BYREF
  __int64 v71; // [rsp+38h] [rbp-71h]
  __int64 v72; // [rsp+40h] [rbp-69h]
  ULONG_PTR BugCheckParameter3; // [rsp+48h] [rbp-61h]
  __int64 v74; // [rsp+50h] [rbp-59h]
  _DWORD *v75; // [rsp+58h] [rbp-51h]
  LARGE_INTEGER PerformanceCounter; // [rsp+60h] [rbp-49h] BYREF
  __int64 v77; // [rsp+68h] [rbp-41h] BYREF
  __int64 v78; // [rsp+70h] [rbp-39h]
  __int64 v79; // [rsp+78h] [rbp-31h]
  __int64 v80; // [rsp+80h] [rbp-29h]
  ULONG_PTR v81; // [rsp+88h] [rbp-21h]
  __int64 v82; // [rsp+90h] [rbp-19h]
  __int64 v83; // [rsp+98h] [rbp-11h]
  _BYTE v84[32]; // [rsp+A0h] [rbp-9h] BYREF

  v4 = 0;
  v74 = a2;
  v75 = a4;
  v6 = a2;
  v77 = 0LL;
  v78 = 0LL;
  v80 = 0LL;
  v81 = 0LL;
  v82 = 0LL;
  v83 = 0LL;
  memset(v84, 0, sizeof(v84));
  v8 = *(_QWORD *)(v6 + 8);
  v9 = 0;
  v10 = *(_QWORD *)(a1 + 88);
  v69 = 0;
  v72 = v8;
  LODWORD(BugCheckParameter3) = *(_DWORD *)(v8 + 484);
  v79 = 0LL;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v77 = *(_QWORD *)(a1 + 72);
    v78 = *(_QWORD *)(a1 + 80);
    v69 = *(_BYTE *)(a1 + 129);
    v68 = 1;
    v79 = v10;
  }
  else
  {
    v68 = 0;
  }
  if ( v10 && (*(_BYTE *)(a1 + 1) & 0x20) == 0 )
  {
    if ( (*(_BYTE *)(a1 + 129) & 4) != 0 )
    {
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
      v10 = *(_QWORD *)(a1 + 88);
      a3 = InterruptTimePrecise;
    }
    v25 = v10 + a3.QuadPart;
    if ( (unsigned __int64)(v10 + a3.QuadPart) < a3.QuadPart || v25 == -1 )
    {
      v25 = -2LL;
      v4 = 1;
    }
    v26 = *(_QWORD *)(a1 + 80);
    if ( v26 != -1 )
    {
      v43 = v26 - *(_QWORD *)(a1 + 72);
      if ( v43 )
      {
        v44 = v43 + a3.QuadPart;
        if ( (unsigned __int64)(v43 + a3.QuadPart) < a3.QuadPart || v44 == -1LL )
          v44 = -2LL;
        v45 = v44 + v10;
        if ( v45 < v44 || v45 == -1LL )
          v45 = -2LL;
        *(_QWORD *)(a1 + 80) = v45;
      }
      else
      {
        *(_QWORD *)(a1 + 80) = v25;
      }
    }
    *(_QWORD *)(a1 + 72) = v25;
    while ( !(unsigned __int8)KiInsertTimer2(a1, 0LL, v70) )
    {
      if ( v4 )
        goto LABEL_4;
      v47 = *(_QWORD *)(a1 + 72);
      v48 = *(_QWORD *)(a1 + 88);
      v49 = v47 + v48;
      if ( v47 + v48 < v47 || v49 == -1 )
      {
        v49 = -2LL;
        v4 = 1;
      }
      *(_QWORD *)(a1 + 72) = v49;
      v50 = *(_QWORD *)(a1 + 80);
      if ( v50 != -1LL )
      {
        v51 = v50 + v48;
        if ( v50 + v48 < v50 || v51 == -1 )
          v51 = -2LL;
        *(_QWORD *)(a1 + 80) = v51;
      }
    }
    v9 = 1;
  }
LABEL_4:
  v11 = (_QWORD *)(a1 + 8);
  v12 = *(_QWORD **)(a1 + 8);
  v13 = *(_BYTE *)a1 & 0x7F;
  *(_DWORD *)(a1 + 4) = 1;
  if ( v13 == 25 )
  {
    if ( v12 == v11 )
      goto LABEL_36;
    while ( 1 )
    {
      v14 = (_QWORD *)*v12;
      v15 = (__int64)v12;
      v12 = v14;
      v16 = *(_QWORD **)(v15 + 8);
      if ( v14[1] != v15 || *v16 != v15 )
        goto LABEL_7;
      *v16 = v14;
      v14[1] = v16;
      v17 = *(_BYTE *)(v15 + 16);
      if ( v17 == 1 )
      {
        if ( (unsigned __int8)KiTryUnwaitThread(v6, v15, *(unsigned __int16 *)(v15 + 18), 0LL) )
        {
          v27 = (*(_DWORD *)(a1 + 4))-- == 1;
          if ( v27 )
            goto LABEL_35;
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
        CurrentThread = (__int64)CurrentPrcb->CurrentThread;
        v71 = CurrentThread;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          IsThreadRunning = KeIsThreadRunning(CurrentThread);
          EtwTraceEnqueueWork(v37, v15, IsThreadRunning);
        }
        KiAcquireKobjectLockSafe(v18);
        if ( (_QWORD *)*v19 == v19
          || *(_DWORD *)(v18 + 40) >= *(_DWORD *)(v18 + 44)
          || *(_QWORD *)(v71 + 232) == v18 && *(_BYTE *)(v71 + 643) == 15
          || !KiWakeQueueWaiter((__int64)CurrentPrcb, (_QWORD *)v18, v15) )
        {
          v23 = *(_DWORD *)(v18 + 4);
          *(_DWORD *)(v18 + 4) = v23 + 1;
          v24 = *(__int64 **)(v18 + 32);
          if ( *v24 != v18 + 24 )
            goto LABEL_7;
          *(_QWORD *)v15 = v18 + 24;
          *(_QWORD *)(v15 + 8) = v24;
          *v24 = v15;
          *(_QWORD *)(v18 + 32) = v15;
          if ( !v23 && (_QWORD *)*v19 != v19 )
            KiWakeOtherQueueWaiters((__int64)CurrentPrcb, v18);
        }
        _InterlockedAnd((volatile signed __int32 *)v18, 0xFFFFFF7F);
        v27 = (*(_DWORD *)(a1 + 4))-- == 1;
        v6 = v74;
        if ( v27 )
        {
LABEL_35:
          v8 = v72;
          goto LABEL_36;
        }
      }
      else
      {
        KiTryUnwaitThread(v6, v15, 256LL, 0LL);
      }
      if ( v12 == (_QWORD *)(a1 + 8) )
        goto LABEL_35;
    }
  }
  if ( v12 != v11 )
  {
    while ( 1 )
    {
      v52 = (__int64)v12;
      v12 = (_QWORD *)*v12;
      v53 = *(_BYTE *)(v52 + 16);
      if ( v53 == 1 )
      {
        v54 = *(unsigned __int16 *)(v52 + 18);
LABEL_104:
        KiTryUnwaitThread(v6, v52, v54, 0LL);
        goto LABEL_105;
      }
      if ( v53 != 2 )
      {
        v54 = 256LL;
        goto LABEL_104;
      }
      *(_BYTE *)(v52 + 17) = 5;
      v55 = *(_QWORD *)(v52 + 24);
      *(_QWORD *)v52 = 0LL;
      v56 = (_QWORD *)(v55 + 8);
      v57 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v57 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v58 = KeGetCurrentPrcb();
      v71 = (__int64)v58;
      v59 = v58->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        v60 = KeIsThreadRunning(v58->CurrentThread);
        EtwTraceEnqueueWork(v59, v52, v60);
      }
      KiAcquireKobjectLockSafe(v55);
      if ( (_QWORD *)*v56 == v56
        || *(_DWORD *)(v55 + 40) >= *(_DWORD *)(v55 + 44)
        || v59->Queue == (_DISPATCHER_HEADER *volatile)v55 && v59->WaitReason == 15 )
      {
        break;
      }
      v61 = v71;
      if ( !KiWakeQueueWaiter(v71, (_QWORD *)v55, v52) )
        goto LABEL_98;
LABEL_102:
      _InterlockedAnd((volatile signed __int32 *)v55, 0xFFFFFF7F);
      v6 = v74;
LABEL_105:
      v11 = (_QWORD *)(a1 + 8);
      if ( v12 == (_QWORD *)(a1 + 8) )
      {
        v8 = v72;
        goto LABEL_65;
      }
    }
    v61 = v71;
LABEL_98:
    v62 = *(_DWORD *)(v55 + 4);
    *(_DWORD *)(v55 + 4) = v62 + 1;
    v63 = *(__int64 **)(v55 + 32);
    if ( *v63 != v55 + 24 )
LABEL_7:
      __fastfail(3u);
    *(_QWORD *)v52 = v55 + 24;
    *(_QWORD *)(v52 + 8) = v63;
    *v63 = v52;
    *(_QWORD *)(v55 + 32) = v52;
    if ( !v62 && (_QWORD *)*v56 != v56 )
      KiWakeOtherQueueWaiters(v61, v55);
    goto LABEL_102;
  }
LABEL_65:
  v11[1] = v11;
  *v11 = v11;
LABEL_36:
  v28 = 0LL;
  v29 = KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(a1 + 96), KiWaitNever));
  if ( v29 )
  {
    v28 = KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(a1 + 104), KiWaitNever));
    KiUpdateTimer2Flags(a1, v9 | 0x10u, 0LL);
    if ( *(_QWORD *)(v6 + 11528) )
      KiProcessThreadWaitList(v6, 1LL, 0LL);
    v34 = v68;
    if ( v68 )
      EtwGetKernelTraceTimestamp(v84, 1073872896LL);
    v38 = v75;
    v39 = ((*v75)++ & 0xF) + 1LL;
    v40 = &v38[4 * v39];
    *(_QWORD *)v40 = v29;
    v40[2] = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(v6 + 23452) = 0;
    KiResetGlobalDpcWatchdogProfiler(v6);
    *(_BYTE *)(v6 + 11882) = 1;
    ((void (__fastcall *)(unsigned __int64, unsigned __int64))v29)(a1, v28);
    *(_BYTE *)(v6 + 11882) = 0;
    v40[3] = MEMORY[0xFFFFF78000000320];
    _m_prefetchw((const void *)a1);
    v41 = *(_DWORD *)a1;
    do
    {
      v42 = v41;
      v41 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v41 & 0xFFFFEFFF, v41);
    }
    while ( v42 != v41 );
    if ( (v41 & 0x2F00) == 0x2000 )
      KiFinalizeTimer2Disablement(a1);
  }
  else
  {
    v30 = *(_DWORD *)a1;
    v31 = v9 << 8;
    v32 = v31 | *(_DWORD *)a1 & 0xFFFFF07F;
    v33 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v32, *(_DWORD *)a1);
    if ( v30 != v33 )
    {
      do
      {
        v64 = v33;
        v32 = v31 | v33 & 0xFFFFF07F;
        v33 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v32, v33);
      }
      while ( v64 != v33 );
    }
    if ( (v32 & 0x3F00) == 0x2000 )
      KiFinalizeTimer2Disablement(a1);
    v34 = v68;
  }
  result = *(unsigned int *)(v8 + 484);
  if ( (_DWORD)BugCheckParameter3 != (_DWORD)result )
    KeBugCheckEx(0xC7u, 5uLL, v29, (unsigned int)BugCheckParameter3, *(unsigned int *)(v8 + 484));
  if ( v34 )
  {
    v81 = v29;
    v80 = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(v29 ^ _byteswap_uint64(KiWaitAlways ^ a1), KiWaitNever));
    v82 = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(v28 ^ KiWaitAlways), KiWaitNever));
    v65 = (2 * (v69 & 2)) | 8;
    if ( (v69 & 4) == 0 )
      v65 = 2 * (v69 & 2);
    v66 = v65;
    v67 = v65 | 0x10;
    if ( (v69 & 8) == 0 )
      v67 = v66;
    LOBYTE(v83) = v67;
    if ( v29 )
    {
      v67 |= 1u;
      LOBYTE(v83) = v67;
    }
    if ( v79 )
      LOBYTE(v83) = v67 | 2;
    if ( !v29 )
      EtwGetKernelTraceTimestamp(v84, 1073872896LL);
    return EtwTraceTimedEvent(3945, 1073872896, (unsigned int)&v77, 56, 4197890, (__int64)v84);
  }
  return result;
}
