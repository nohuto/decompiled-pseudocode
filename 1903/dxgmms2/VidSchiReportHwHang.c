/*
 * XREFs of VidSchiReportHwHang @ 0x1C003A6AC
 * Callers:
 *     VidSchWaitForCompletionEvent @ 0x1C0077960 (VidSchWaitForCompletionEvent.c)
 *     VidSchiCheckHwProgress @ 0x1C007AA10 (VidSchiCheckHwProgress.c)
 * Callees:
 *     VidSchiCheckFlipQueueTimeout @ 0x1C00094F0 (VidSchiCheckFlipQueueTimeout.c)
 *     VidSchiIncrementContextReference @ 0x1C0010760 (VidSchiIncrementContextReference.c)
 *     VidSchiClearFlipDevice @ 0x1C00113A4 (VidSchiClearFlipDevice.c)
 *     VidSchiDecrementContextReference @ 0x1C0011460 (VidSchiDecrementContextReference.c)
 *     __security_check_cookie @ 0x1C0018060 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     VidSchiUnwaitAllContexts @ 0x1C0031278 (VidSchiUnwaitAllContexts.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C0039FD4 (VidSchiCompleteAllPendingCommand.c)
 *     VidSchiCheckGPUTimeout @ 0x1C00C9808 (VidSchiCheckGPUTimeout.c)
 *     VidSchiBlockDriverCallback @ 0x1C00CE17C (VidSchiBlockDriverCallback.c)
 *     VidSchiMarkTdrFaultingDevice @ 0x1C00CE224 (VidSchiMarkTdrFaultingDevice.c)
 */

__int64 __fastcall VidSchiReportHwHang(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v8; // r12d
  __int64 v9; // rdx
  __int64 v10; // rcx
  PVOID *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  _QWORD *v16; // r8
  __int64 v17; // r14
  signed __int64 v18; // rbx
  signed __int64 v19; // r13
  __int64 v20; // rdx
  signed __int64 v21; // rsi
  signed __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rbx
  ULONG TimeIncrement; // eax
  __int64 v27; // r12
  __int64 v28; // r14
  LARGE_INTEGER v29; // r13
  union _LARGE_INTEGER v30; // rdi
  struct _TDR_RECOVERY_CONTEXT *RecoveryContext; // rax
  struct _VIDSCH_GLOBAL *v32; // r15
  __int64 v33; // rdx
  __int64 v34; // rcx
  _QWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  union _LARGE_INTEGER *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rax
  struct _VIDSCH_CONTEXT *v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  int v51; // eax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rsi
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rax
  unsigned int v63; // ebx
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // rdx
  __int64 v67; // rax
  bool v68; // cf
  __int64 v69; // rax
  unsigned int v70; // ebx
  __int64 v71; // rax
  signed __int32 v72[8]; // [rsp+0h] [rbp-99h] BYREF
  unsigned int v73; // [rsp+20h] [rbp-79h] BYREF
  signed __int64 v74; // [rsp+28h] [rbp-71h]
  int v75; // [rsp+30h] [rbp-69h]
  struct _VIDSCH_CONTEXT *v76; // [rsp+38h] [rbp-61h]
  int v77; // [rsp+40h] [rbp-59h]
  __int64 v78; // [rsp+48h] [rbp-51h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+50h] [rbp-49h] BYREF
  __int64 v80; // [rsp+58h] [rbp-41h]
  struct _VIDSCH_GLOBAL *v81; // [rsp+60h] [rbp-39h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-31h] BYREF
  __int64 v83; // [rsp+80h] [rbp-19h] BYREF
  int v84; // [rsp+88h] [rbp-11h]
  PVOID BackTrace[5]; // [rsp+90h] [rbp-9h] BYREF

  v73 = -1;
  v77 = a3;
  v81 = (struct _VIDSCH_GLOBAL *)a1;
  v76 = 0LL;
  v80 = 0LL;
  v74 = 0LL;
  v78 = 0LL;
  v75 = 0;
  v8 = 0;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(1u, 5u, BackTrace, 0LL);
  v11 = (PVOID *)WdLogNewEntry5_WdWarning(v10, v9);
  v11[3] = BackTrace[0];
  v11[4] = BackTrace[1];
  v11[5] = BackTrace[2];
  v11[6] = BackTrace[3];
  v11[7] = BackTrace[4];
  WdLogEvent5_WdWarning(v11);
  if ( *(_QWORD *)(a1 + 2408) )
  {
    v14 = WdLogNewEntry5_WdWarning(v13, v12);
    *(_QWORD *)(v14 + 24) = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(v14 + 32) = *(_QWORD *)(a1 + 2408);
    WdLogEvent5_WdWarning(v14);
    return 1LL;
  }
  if ( a3 != 1 && (unsigned int)(a3 - 9) > 2 )
  {
    if ( a3 != 2 )
    {
      if ( a3 == 3 )
      {
        KeFlushQueuedDpcs();
        if ( !(unsigned int)VidSchiCheckFlipQueueTimeout(a1, 0LL, &v73) )
          return 0LL;
        if ( v73 < 0x10 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1648), &LockHandle);
          v24 = *(_QWORD *)(a1 + 8LL * v73 + 2576);
          if ( v24 )
            v75 = *(_DWORD *)(v24 + 66432);
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        }
      }
      v21 = v74;
      goto LABEL_25;
    }
    KeFlushQueuedDpcs();
    if ( *(_DWORD *)(a1 + 712) )
    {
      v16 = (_QWORD *)(a1 + 2416);
      if ( a4 )
      {
        *v16 = a4;
      }
      else if ( !(unsigned int)VidSchiCheckGPUTimeout(a1, 0LL, v16) )
      {
        return 0LL;
      }
      v17 = *(_QWORD *)(a1 + 2416);
      if ( *(_DWORD *)(v17 + 2856) )
      {
        v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 96), 0LL, 0LL);
        v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 120), 0LL, 0LL);
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1648), &LockHandle);
        v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 96), 0LL, 0LL);
        v22 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 120), 0LL, 0LL);
        if ( v18 == v21 && v19 == v22 )
        {
          v78 = *(_QWORD *)(v17 + 40);
          v23 = *(_QWORD *)(v17 + 8LL * *(unsigned int *)(v17 + 1552) + 1560);
          v76 = (struct _VIDSCH_CONTEXT *)v23;
          if ( v23 )
          {
            VidSchiIncrementContextReference(v23, v20);
            v80 = *(_QWORD *)(v23 + 104);
          }
          ++*(_DWORD *)(v17 + 484);
        }
        else
        {
          v21 = v74;
          v8 = 1;
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        goto LABEL_39;
      }
    }
    return 0LL;
  }
  if ( !a4 )
    a4 = **(_QWORD **)(a1 + 616);
  *(_QWORD *)(a1 + 2416) = a4;
  v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(a4 + 96), 0LL, 0LL);
LABEL_39:
  if ( v8 )
    return 0LL;
LABEL_25:
  ++*(_DWORD *)(a1 + 2424);
  LODWORD(v74) = 0;
  v25 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  PerformanceFrequency.QuadPart = 0LL;
  v27 = TimeIncrement;
  v28 = v25 - a2;
  v29 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v30.QuadPart = MEMORY[0xFFFFF78000000014];
  RecoveryContext = TdrCreateRecoveryContext();
  v32 = v81;
  *((_QWORD *)v81 + 301) = RecoveryContext;
  v35 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, v33);
  v35[3] = *((_QWORD *)v32 + 2);
  v35[4] = v25;
  v35[5] = v27;
  v35[6] = KeGetCurrentThread();
  v35[7] = *((_QWORD *)v32 + 301);
  WdLogEvent5_WdWarning(v35);
  v38 = (union _LARGE_INTEGER *)WdLogNewEntry5_WdWarning(v37, v36);
  v38[3] = *(union _LARGE_INTEGER *)((char *)v32 + 16);
  v38[4] = v29;
  v38[5] = PerformanceFrequency;
  v38[6] = v30;
  WdLogEvent5_WdWarning(v38);
  v40 = *((_QWORD *)v32 + 301);
  if ( v40 )
  {
    *(_DWORD *)(v40 + 16) = v77;
    v41 = *(_QWORD *)(v40 + 32);
    *(_QWORD *)(v40 + 8) = (char *)v32 + 2404;
    if ( !v41 )
    {
      v42 = *((_QWORD *)v32 + 2);
      *(_QWORD *)(v40 + 32) = v42;
      _InterlockedIncrement64((volatile signed __int64 *)(v42 + 24));
      *(_QWORD *)(v40 + 40) = -1LL;
      v41 = *(_QWORD *)(v40 + 32);
    }
    ++*(_DWORD *)(v41 + 2588);
    v43 = v76;
    if ( !*(_QWORD *)(v40 + 48) && v76 )
    {
      VidSchiIncrementContextReference((__int64)v76, v39);
      *(_QWORD *)(v40 + 48) = v43;
    }
    if ( v80 )
    {
      v44 = *(_QWORD *)(v80 + 40);
      if ( v44 )
      {
        if ( *(_QWORD *)(v44 + 8) )
        {
          *(_QWORD *)(v40 + 2808) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v43 + 13) + 40LL) + 8LL) + 64LL);
          v45 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v43 + 13) + 40LL) + 8LL) + 72LL);
          if ( v45 )
            v46 = *(_QWORD *)(v45 + 80);
          else
            v46 = 0LL;
          *(_QWORD *)(v40 + 96) = v46;
        }
      }
    }
    v47 = *(_QWORD *)(v40 + 32);
    *(_DWORD *)(v40 + 148) = 45060;
    *(_DWORD *)(v40 + 152) = DpiGetDriverVersion(*(_QWORD *)(v47 + 192));
    *(_QWORD *)(v40 + 24) = v28;
    v50 = *((_QWORD *)v32 + 302);
    if ( v50 )
      v51 = *(unsigned __int16 *)(v50 + 4);
    else
      v51 = 0;
    *(_DWORD *)(v40 + 56) = v51;
    *(_QWORD *)(v40 + 72) = v78;
    v52 = v73;
    *(_QWORD *)(v40 + 64) = v21;
    *(_DWORD *)(v40 + 80) = v52;
    if ( (_DWORD)v52 != -1 )
    {
      v49 = (unsigned int)v52;
      v53 = *((_QWORD *)v32 + v52 + 322);
      if ( v53 )
      {
        v54 = *(_QWORD *)(v53 + 16);
        if ( v54 )
        {
          v55 = *(_QWORD *)(v54 + 40);
          if ( v55 )
          {
            *(_QWORD *)(v40 + 2808) = *(_QWORD *)(v55 + 2632);
            v49 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v32 + v49 + 322) + 16LL) + 40LL) + 2640LL);
            *(_QWORD *)(v40 + 96) = v49;
          }
        }
      }
    }
    v56 = v75;
    *(_DWORD *)(v40 + 84) = 0;
    *(_DWORD *)(v40 + 88) = v56;
    if ( (_DWORD)v56 )
    {
      v57 = WdLogNewEntry5_WdWarning(v49, v48);
      *(_QWORD *)(v57 + 24) = *((_QWORD *)v32 + 2);
      *(_QWORD *)(v57 + 32) = v56;
      WdLogEvent5_WdWarning(v57);
    }
    v58 = *(_QWORD *)(v40 + 32);
    v59 = *(_QWORD *)(v58 + 464);
    if ( !v59 )
      v59 = *(_QWORD *)(v58 + 320);
    *(_QWORD *)(v40 + 104) = v59;
    if ( TdrIsRecoveryRequired((struct _TDR_RECOVERY_CONTEXT *)v40) )
    {
      v62 = WdLogNewEntry5_WdWarning(v61, v60);
      *(_QWORD *)(v62 + 24) = *((_QWORD *)v32 + 2);
      *(_QWORD *)(v62 + 32) = *((_QWORD *)v32 + 301);
      WdLogEvent5_WdWarning(v62);
      *((_DWORD *)v32 + 601) = 1;
      VidSchiBlockDriverCallback(v32);
      *((_DWORD *)v32 + 9) = 23;
      RtlClearAllBitsEx((char *)v32 + 568);
      if ( v43 )
        VidSchiMarkTdrFaultingDevice(*((_QWORD *)v43 + 13));
      if ( (unsigned int)DpiGetDriverVersion(*(_QWORD *)(*((_QWORD *)v32 + 2) + 192LL)) >= 0x6002 )
      {
        v63 = 0;
        if ( *((_DWORD *)v32 + 16) )
        {
          while ( 1 )
          {
            if ( !*((_BYTE *)v32 + 55) )
            {
              v64 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v32 + 31) + 8LL * v63) + 96LL);
              if ( *(_DWORD *)(v64 + 2856) )
              {
                v65 = *(unsigned __int16 *)(v64 + 4);
                v66 = *((_QWORD *)v32 + 77);
                v83 = 0LL;
                v84 = 0;
                v67 = v66 + 8 * v65;
                v68 = (unsigned int)v65 < *((_DWORD *)v32 + 172);
                if ( (unsigned int)v65 >= *((_DWORD *)v32 + 172) )
                  v67 = v66;
                HIDWORD(v83) = *(unsigned __int16 *)(*(_QWORD *)v67 + 6LL);
                if ( v68 )
                  v66 += 8 * v65;
                LODWORD(v83) = *(unsigned __int16 *)(*(_QWORD *)v66 + 8LL);
                if ( ((int (__fastcall *)(_QWORD, __int64 *))DxgCoreInterface[37])(*((_QWORD *)v32 + 1), &v83) < 0 )
                  break;
              }
            }
            if ( ++v63 >= *((_DWORD *)v32 + 16) )
              goto LABEL_70;
          }
          *((_BYTE *)v32 + 2428) |= 4u;
        }
      }
LABEL_70:
      v69 = *((_QWORD *)v32 + 2);
      *(_BYTE *)(v69 + 2503) = 0;
      _InterlockedOr(v72, 0);
      *(_BYTE *)(v69 + 2502) = 1;
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v32 + 1) + 552LL) + 7072LL) = 1;
      VidSchiCompleteAllPendingCommand((__int64)v32);
      VidSchiUnwaitAllContexts((__int64)v32);
      VidSchiClearFlipDevice(v32, 0LL, 9u);
      v70 = 1;
      goto LABEL_73;
    }
    v71 = WdLogNewEntry5_WdWarning(v61, v60);
    *(_QWORD *)(v71 + 24) = *((_QWORD *)v32 + 2);
    WdLogEvent5_WdWarning(v71);
    TdrCompleteRecoveryContext((struct _TDR_RECOVERY_CONTEXT *)v40, 0, 1);
    *((_QWORD *)v32 + 301) = 0LL;
  }
  v70 = v74;
LABEL_73:
  if ( v76 )
    VidSchiDecrementContextReference(v76, 0);
  return v70;
}
