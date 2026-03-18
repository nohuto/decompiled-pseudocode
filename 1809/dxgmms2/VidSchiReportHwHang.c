/*
 * XREFs of VidSchiReportHwHang @ 0x1C0039C84
 * Callers:
 *     VidSchWaitForCompletionEvent @ 0x1C0066B38 (VidSchWaitForCompletionEvent.c)
 *     VidSchiCheckHwProgress @ 0x1C0069B20 (VidSchiCheckHwProgress.c)
 * Callees:
 *     VidSchiCheckFlipQueueTimeout @ 0x1C0008410 (VidSchiCheckFlipQueueTimeout.c)
 *     VidSchiDecrementContextReference @ 0x1C0010CD0 (VidSchiDecrementContextReference.c)
 *     VidSchiClearFlipDevice @ 0x1C00118C8 (VidSchiClearFlipDevice.c)
 *     VidSchiIncrementContextReference @ 0x1C00125D0 (VidSchiIncrementContextReference.c)
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     VidSchiUnwaitAllContexts @ 0x1C0030A48 (VidSchiUnwaitAllContexts.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C003957C (VidSchiCompleteAllPendingCommand.c)
 *     VidSchiCheckGPUTimeout @ 0x1C00C6794 (VidSchiCheckGPUTimeout.c)
 *     VidSchiBlockDriverCallback @ 0x1C00CB37C (VidSchiBlockDriverCallback.c)
 *     VidSchiMarkTdrFaultingDevice @ 0x1C00CB424 (VidSchiMarkTdrFaultingDevice.c)
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
  __int64 TimeIncrement; // r12
  __int64 v27; // r14
  LARGE_INTEGER v28; // r13
  union _LARGE_INTEGER v29; // rdi
  struct _TDR_RECOVERY_CONTEXT *RecoveryContext; // rax
  struct _VIDSCH_GLOBAL *v31; // r15
  __int64 v32; // rdx
  __int64 v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  union _LARGE_INTEGER *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rbx
  int v40; // eax
  __int64 v41; // rax
  struct _VIDSCH_CONTEXT *v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  int v50; // eax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rsi
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // r8
  unsigned int v63; // ebx
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // rdx
  unsigned int v67; // r9d
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rdx
  unsigned int v71; // ebx
  __int64 v72; // rax
  signed __int32 v73[8]; // [rsp+0h] [rbp-99h] BYREF
  unsigned int v74; // [rsp+20h] [rbp-79h] BYREF
  signed __int64 v75; // [rsp+28h] [rbp-71h]
  int v76; // [rsp+30h] [rbp-69h]
  struct _VIDSCH_CONTEXT *v77; // [rsp+38h] [rbp-61h]
  int v78; // [rsp+40h] [rbp-59h]
  __int64 v79; // [rsp+48h] [rbp-51h]
  __int64 v80; // [rsp+50h] [rbp-49h]
  struct _VIDSCH_GLOBAL *v81; // [rsp+58h] [rbp-41h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+60h] [rbp-39h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-31h] BYREF
  __int64 v84; // [rsp+80h] [rbp-19h] BYREF
  int v85; // [rsp+88h] [rbp-11h]
  PVOID BackTrace[5]; // [rsp+90h] [rbp-9h] BYREF

  v74 = -1;
  v78 = a3;
  v81 = (struct _VIDSCH_GLOBAL *)a1;
  v77 = 0LL;
  v80 = 0LL;
  v75 = 0LL;
  v79 = 0LL;
  v76 = 0;
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
        if ( !(unsigned int)VidSchiCheckFlipQueueTimeout(a1, 0LL, &v74) )
          return 0LL;
        if ( v74 < 0x10 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1648), &LockHandle);
          v24 = *(_QWORD *)(a1 + 8LL * v74 + 2576);
          if ( v24 )
            v76 = *(_DWORD *)(v24 + 66416);
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        }
      }
      v21 = v75;
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
          v79 = *(_QWORD *)(v17 + 40);
          v23 = *(_QWORD *)(v17 + 8LL * *(unsigned int *)(v17 + 1552) + 1560);
          v77 = (struct _VIDSCH_CONTEXT *)v23;
          if ( v23 )
          {
            VidSchiIncrementContextReference(v23, v20);
            v80 = *(_QWORD *)(v23 + 104);
          }
          ++*(_DWORD *)(v17 + 484);
        }
        else
        {
          v21 = v75;
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
  LODWORD(v75) = 0;
  v25 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  v27 = v25 - a2;
  v28 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v29.QuadPart = MEMORY[0xFFFFF78000000014];
  RecoveryContext = TdrCreateRecoveryContext();
  v31 = v81;
  *((_QWORD *)v81 + 301) = RecoveryContext;
  v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v32);
  v34[3] = *((_QWORD *)v31 + 2);
  v34[4] = v25;
  v34[5] = TimeIncrement;
  v34[6] = KeGetCurrentThread();
  v34[7] = *((_QWORD *)v31 + 301);
  WdLogEvent5_WdWarning(v34);
  v37 = (union _LARGE_INTEGER *)WdLogNewEntry5_WdWarning(v36, v35);
  v37[3] = *(union _LARGE_INTEGER *)((char *)v31 + 16);
  v37[4] = v28;
  v37[5] = PerformanceFrequency;
  v37[6] = v29;
  WdLogEvent5_WdWarning(v37);
  v39 = *((_QWORD *)v31 + 301);
  if ( v39 )
  {
    v40 = v78;
    *(_QWORD *)(v39 + 8) = (char *)v31 + 2404;
    *(_DWORD *)(v39 + 16) = v40;
    if ( !*(_QWORD *)(v39 + 32) )
    {
      v41 = *((_QWORD *)v31 + 2);
      *(_QWORD *)(v39 + 32) = v41;
      _InterlockedIncrement64((volatile signed __int64 *)(v41 + 24));
      *(_QWORD *)(v39 + 40) = -1LL;
    }
    v42 = v77;
    if ( !*(_QWORD *)(v39 + 48) && v77 )
    {
      VidSchiIncrementContextReference((__int64)v77, v38);
      *(_QWORD *)(v39 + 48) = v42;
    }
    if ( v80 )
    {
      v43 = *(_QWORD *)(v80 + 40);
      if ( v43 )
      {
        if ( *(_QWORD *)(v43 + 8) )
        {
          *(_QWORD *)(v39 + 2808) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v42 + 13) + 40LL) + 8LL) + 64LL);
          v44 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v42 + 13) + 40LL) + 8LL) + 72LL);
          if ( v44 )
            v45 = *(_QWORD *)(v44 + 80);
          else
            v45 = 0LL;
          *(_QWORD *)(v39 + 96) = v45;
        }
      }
    }
    v46 = *(_QWORD *)(v39 + 32);
    *(_DWORD *)(v39 + 148) = 40971;
    *(_DWORD *)(v39 + 152) = DpiGetDriverVersion(*(_QWORD *)(v46 + 192));
    *(_QWORD *)(v39 + 24) = v27;
    v49 = *((_QWORD *)v31 + 302);
    if ( v49 )
      v50 = *(unsigned __int16 *)(v49 + 4);
    else
      v50 = 0;
    *(_DWORD *)(v39 + 56) = v50;
    *(_QWORD *)(v39 + 72) = v79;
    v51 = v74;
    *(_QWORD *)(v39 + 64) = v21;
    *(_DWORD *)(v39 + 80) = v51;
    if ( (_DWORD)v51 != -1 )
    {
      v48 = (unsigned int)v51;
      v52 = *((_QWORD *)v31 + v51 + 322);
      if ( v52 )
      {
        v53 = *(_QWORD *)(v52 + 16);
        if ( v53 )
        {
          v54 = *(_QWORD *)(v53 + 40);
          if ( v54 )
          {
            *(_QWORD *)(v39 + 2808) = *(_QWORD *)(v54 + 2632);
            v48 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v31 + v48 + 322) + 16LL) + 40LL) + 2640LL);
            *(_QWORD *)(v39 + 96) = v48;
          }
        }
      }
    }
    v55 = v76;
    *(_DWORD *)(v39 + 84) = 0;
    *(_DWORD *)(v39 + 88) = v55;
    if ( (_DWORD)v55 )
    {
      v56 = WdLogNewEntry5_WdWarning(v48, v47);
      *(_QWORD *)(v56 + 24) = *((_QWORD *)v31 + 2);
      *(_QWORD *)(v56 + 32) = v55;
      WdLogEvent5_WdWarning(v56);
    }
    v57 = *(_QWORD *)(v39 + 32);
    v58 = *(_QWORD *)(v57 + 464);
    if ( !v58 )
      v58 = *(_QWORD *)(v57 + 320);
    *(_QWORD *)(v39 + 104) = v58;
    if ( TdrIsRecoveryRequired((struct _TDR_RECOVERY_CONTEXT *)v39) )
    {
      v61 = WdLogNewEntry5_WdWarning(v60, v59);
      *(_QWORD *)(v61 + 24) = *((_QWORD *)v31 + 2);
      *(_QWORD *)(v61 + 32) = *((_QWORD *)v31 + 301);
      WdLogEvent5_WdWarning(v61);
      *((_DWORD *)v31 + 601) = 1;
      VidSchiBlockDriverCallback(v31);
      *((_DWORD *)v31 + 9) = 23;
      RtlClearAllBitsEx((char *)v31 + 568);
      if ( v42 )
        VidSchiMarkTdrFaultingDevice(*((_QWORD *)v42 + 13));
      if ( (unsigned int)DpiGetDriverVersion(*(_QWORD *)(*((_QWORD *)v31 + 2) + 192LL)) >= 0x6002 )
      {
        v63 = 0;
        if ( *((_DWORD *)v31 + 16) )
        {
          while ( 1 )
          {
            if ( !*((_BYTE *)v31 + 55) )
            {
              v64 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v31 + 31) + 8LL * v63) + 96LL);
              if ( *(_DWORD *)(v64 + 2856) )
              {
                v65 = *(unsigned __int16 *)(v64 + 4);
                v66 = *((_QWORD *)v31 + 77);
                v67 = *((_DWORD *)v31 + 172);
                v84 = 0LL;
                v85 = 0;
                v68 = v66 + 8 * v65;
                if ( (unsigned int)v65 >= v67 )
                  v68 = v66;
                HIDWORD(v84) = *(unsigned __int16 *)(*(_QWORD *)v68 + 6LL);
                if ( (unsigned int)v65 < v67 )
                  v66 += 8 * v65;
                LODWORD(v84) = *(unsigned __int16 *)(*(_QWORD *)v66 + 8LL);
                if ( ((int (__fastcall *)(_QWORD, __int64 *))DxgCoreInterface[37])(*((_QWORD *)v31 + 1), &v84) < 0 )
                  break;
              }
            }
            if ( ++v63 >= *((_DWORD *)v31 + 16) )
              goto LABEL_70;
          }
          *((_BYTE *)v31 + 2428) |= 4u;
        }
      }
LABEL_70:
      v69 = *((_QWORD *)v31 + 2);
      *(_BYTE *)(v69 + 2471) = 0;
      _InterlockedOr(v73, 0);
      *(_BYTE *)(v69 + 2470) = 1;
      v70 = *(_QWORD *)(*((_QWORD *)v31 + 1) + 552LL);
      *(_BYTE *)(v70 + 7072) = 1;
      VidSchiCompleteAllPendingCommand((__int64)v31, v70, v62);
      VidSchiUnwaitAllContexts((__int64)v31);
      VidSchiClearFlipDevice(v31, 0LL, 9u);
      v71 = 1;
      goto LABEL_73;
    }
    v72 = WdLogNewEntry5_WdWarning(v60, v59);
    *(_QWORD *)(v72 + 24) = *((_QWORD *)v31 + 2);
    WdLogEvent5_WdWarning(v72);
    TdrCompleteRecoveryContext((struct _TDR_RECOVERY_CONTEXT *)v39, 0, 1);
    *((_QWORD *)v31 + 301) = 0LL;
  }
  v71 = v75;
LABEL_73:
  if ( v77 )
    VidSchiDecrementContextReference(v77, 0);
  return v71;
}
