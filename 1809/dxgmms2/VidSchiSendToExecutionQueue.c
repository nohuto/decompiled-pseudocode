/*
 * XREFs of VidSchiSendToExecutionQueue @ 0x1C0005150
 * Callers:
 *     VidSchiSubmitPagingCommand @ 0x1C0067BB0 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C0068800 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiSendToExecutionQueueWithWait @ 0x1C007A8EC (VidSchiSendToExecutionQueueWithWait.c)
 * Callees:
 *     VidSchMarkDeviceAsError @ 0x1C0001010 (VidSchMarkDeviceAsError.c)
 *     VidSchiFillSubmitCommandDataVirtual @ 0x1C0003780 (VidSchiFillSubmitCommandDataVirtual.c)
 *     VidSchiProfilePerformanceTick @ 0x1C0007960 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateContextStatus @ 0x1C0009350 (VidSchiUpdateContextStatus.c)
 *     VidSchiFillPreemptCommandData @ 0x1C0015338 (VidSchiFillPreemptCommandData.c)
 *     VidSchiFillSubmitCommandData @ 0x1C00156C0 (VidSchiFillSubmitCommandData.c)
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     McTemplateK0piixqq @ 0x1C002BABC (McTemplateK0piixqq.c)
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C0039794 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     VidSchIsVSyncEnabled @ 0x1C0069EB0 (VidSchIsVSyncEnabled.c)
 */

void __fastcall VidSchiSendToExecutionQueue(__int64 a1, char a2)
{
  signed __int64 v2; // r14
  __int64 v4; // rsi
  __int64 v5; // r8
  __int64 v6; // r15
  __int64 v7; // r13
  _BYTE *v8; // rbx
  __int64 v9; // rcx
  const char *ProcessImageFileName; // rax
  const char *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  char v14; // al
  __int64 v15; // rcx
  int v16; // ecx
  LARGE_INTEGER *v17; // r15
  KIRQL v18; // r12
  int v19; // r9d
  LARGE_INTEGER v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rdx
  LARGE_INTEGER *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rdx
  int v34; // r8d
  __int64 v35; // r9
  __int64 v36; // rcx
  __int64 v37; // rax
  DWORD v38; // r14d
  __int64 v39; // rcx
  __int64 v40; // rbx
  char v41; // bl
  DWORD v42; // eax
  __int64 v43; // rdx
  unsigned int v44; // ebx
  LARGE_INTEGER v45; // r15
  LARGE_INTEGER *v46; // r13
  unsigned int v47; // edx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  __int32 v51; // r10d
  __int64 v52; // rbx
  __int64 v53; // r13
  _QWORD *v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // rax
  _QWORD *v57; // rax
  KIRQL v58; // al
  __int64 v59; // r8
  _QWORD *v60; // rax
  __int64 v61; // r8
  KIRQL v62; // [rsp+50h] [rbp-B0h]
  char v63; // [rsp+51h] [rbp-AFh] BYREF
  char v64; // [rsp+52h] [rbp-AEh]
  __int64 v65; // [rsp+58h] [rbp-A8h]
  int v66; // [rsp+60h] [rbp-A0h]
  __int64 v67; // [rsp+68h] [rbp-98h]
  LARGE_INTEGER PerformanceCounter; // [rsp+70h] [rbp-90h]
  LARGE_INTEGER *v69; // [rsp+78h] [rbp-88h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-80h] BYREF
  __int128 v71; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v72; // [rsp+B0h] [rbp-50h]
  __int128 v73; // [rsp+C0h] [rbp-40h]
  __int128 v74; // [rsp+D0h] [rbp-30h]
  __int128 v75; // [rsp+E0h] [rbp-20h]
  __int128 v76; // [rsp+F0h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 48);
  v64 = a2;
  v66 = 0;
  v4 = *(_QWORD *)(v2 + 96);
  v5 = *(_QWORD *)(v2 + 104);
  v65 = v5;
  v6 = *(unsigned int *)(v4 + 488);
  v7 = *(_QWORD *)(v4 + 24);
  v67 = v7;
  v8 = (_BYTE *)(v4 + 56 * (v6 + 9));
  if ( v5 == *(_QWORD *)(*(_QWORD *)(v5 + 32) + 224LL) )
  {
    v11 = "System";
  }
  else
  {
    v9 = *(_QWORD *)(v5 + 40);
    if ( v9 && *(_QWORD *)(v9 + 8) )
    {
      ProcessImageFileName = (const char *)PsGetProcessImageFileName(*(_QWORD *)(v9 + 2648));
      v11 = ProcessImageFileName;
      if ( !ProcessImageFileName || !*ProcessImageFileName )
      {
        v5 = v65;
        goto LABEL_12;
      }
      v5 = v65;
    }
    else
    {
      v11 = "Unknown";
    }
  }
  v12 = 16LL;
  v13 = v11 - v8;
  while ( v12 != -2147483630 )
  {
    v14 = v8[v13];
    if ( !v14 )
      break;
    *v8++ = v14;
    if ( !--v12 )
    {
      --v8;
      break;
    }
  }
LABEL_12:
  *v8 = 0;
  v15 = 56 * v6 + v4 + 520;
  *(_DWORD *)v15 = *(_DWORD *)(a1 + 72);
  *(_QWORD *)(v15 + 8) = *(_QWORD *)(a1 + 80);
  *(_DWORD *)(v15 + 16) = *(_DWORD *)(a1 + 88);
  *(_DWORD *)(v15 + 20) = *(_DWORD *)(a1 + 92);
  *(_DWORD *)(v15 + 24) = *(_DWORD *)(a1 + 96);
  *(_QWORD *)(v15 + 32) = *(_QWORD *)(a1 + 104);
  *(_DWORD *)(v4 + 488) = ((_BYTE)v6 + 1) & 0xF;
  v16 = *(_DWORD *)(a1 + 92);
  if ( (v16 & 4) != 0 )
  {
    v43 = *(_QWORD *)(a1 + 56);
    if ( (*(_DWORD *)(v43 + 72) & 0x4000) != 0
      && ((*(_DWORD *)(v5 + 48) & 2) != 0 || *(int *)(v43 + 400) >= 4 || *(_BYTE *)(v7 + 144)) )
    {
      *(_DWORD *)(a1 + 92) = v16 | 0x200;
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 732));
      VidSchIsVSyncEnabled(v7, *(unsigned int *)(*(_QWORD *)(a1 + 56) + 160LL));
    }
  }
  v62 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v7 + 1648), &LockHandle);
  v69 = (LARGE_INTEGER *)(*(_QWORD *)(v4 + 184) + 112LL * *(unsigned int *)(v4 + 196));
  v17 = v69;
  memset(v69, 0, 0x70uLL);
  *(_DWORD *)(v4 + 196) = (*(_DWORD *)(v4 + 196) + 1) & (*(_DWORD *)(v4 + 192) - 1);
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 2860));
  *(_QWORD *)(a1 + 80) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 72) = 9;
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 712));
  v18 = 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v20 = PerformanceCounter;
  v17[1] = PerformanceCounter;
  if ( _InterlockedIncrement((volatile signed __int32 *)(v4 + 2856)) == 1 )
  {
    v21 = *(unsigned int *)(v2 + 404);
    v22 = gulPriorityToYieldPriorityBand[v21];
    if ( gulPriorityToYieldPriorityBand[v21] )
    {
      v23 = (LARGE_INTEGER *)(v4 + 1920 + 8 * v22);
      do
      {
        if ( v23[-4].QuadPart )
          *v23 = v20;
        --v23;
        --v22;
      }
      while ( v22 );
    }
  }
  if ( _InterlockedIncrement((volatile signed __int32 *)(v2 + 780)) == 1 )
  {
    if ( v65 == *(_QWORD *)(v7 + 224) )
      VidSchiUpdateContextStatus(v2, 1LL, 5710LL);
    *(_DWORD *)(v2 + 184) |= 2u;
    v24 = *(unsigned int *)(v2 + 404);
    if ( ++*(_DWORD *)(v4 + 4 * v24 + 1760) == 1 )
      *(_DWORD *)(v4 + 1756) |= 1 << *(_DWORD *)(v2 + 404);
    v66 = 1;
  }
  if ( *(_DWORD *)(a1 + 88) == 3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 2868));
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 2872));
    v44 = *(_DWORD *)(v4 + 1552);
    if ( v44 != *(_DWORD *)(v4 + 1544) )
    {
      v45 = PerformanceCounter;
      do
      {
        v46 = *(LARGE_INTEGER **)(v4 + 8LL * v44 + 1560);
        if ( (v46[23].LowPart & 8) == 0 )
        {
          VidSchiUpdateContextStatus(*(_QWORD *)(v4 + 8LL * v44 + 1560), 2LL, 5771LL);
          if ( v44 == *(_DWORD *)(v4 + 1552) && !v46[62].QuadPart )
            v46[62] = v45;
        }
        v44 = ((_BYTE)v44 + 1) & 0xF;
      }
      while ( v44 != *(_DWORD *)(v4 + 1544) );
      v17 = v69;
      v7 = v67;
    }
    *(_QWORD *)(v4 + 392) = MEMORY[0xFFFFF78000000320];
    KeResetEvent((PRKEVENT)(v4 + 352));
    v47 = *(unsigned __int16 *)(v4 + 4);
    v48 = *(_QWORD *)(v7 + 616);
    v49 = 8LL * *(unsigned __int16 *)(v4 + 4);
    if ( v47 < *(_DWORD *)(v7 + 688) )
      v48 += v49;
    ++*(_QWORD *)(*(_QWORD *)v48 + 104LL);
    v50 = *(_QWORD *)(v7 + 616);
    if ( v47 < *(_DWORD *)(v7 + 688) )
      v50 += v49;
    *(_QWORD *)(a1 + 104) = *(_QWORD *)(*(_QWORD *)v50 + 104LL);
    VidSchiFillPreemptCommandData(a1, &v71);
    _InterlockedExchange((volatile __int32 *)(v4 + 160), v51);
    RtlClearBitEx(v7 + 472, *(unsigned __int16 *)(v4 + 4));
LABEL_36:
    v26 = *(unsigned int *)(v4 + 1544);
    v36 = v4 + 8 * v26;
    if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(v36 + 1560), v2, 0LL) )
      goto LABEL_37;
    goto LABEL_89;
  }
  v25 = *(_QWORD *)(a1 + 56);
  LOBYTE(v26) = 0;
  if ( !v25 )
  {
LABEL_31:
    if ( (*(_DWORD *)(a1 + 92) & 0x2000) != 0 )
      VidSchiFillSubmitCommandDataVirtual(a1, &v71);
    else
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))VidSchiFillSubmitCommandData)(a1, &v71, (LARGE_INTEGER)v20.QuadPart);
    _InterlockedExchange64((volatile __int64 *)(v4 + 152), *(_QWORD *)(a1 + 104));
    v30 = (_QWORD *)WdLogNewEntry5_WdEvent();
    v30[3] = a1;
    v30[4] = *(_QWORD *)(a1 + 104);
    v30[5] = *(_QWORD *)(a1 + 56);
    v30[6] = *(int *)(a1 + 88);
    v31 = *(_QWORD *)(a1 + 56);
    if ( v31 )
      v32 = *(_QWORD *)(v31 + 112);
    else
      v32 = 0LL;
    v30[7] = v32;
    WdLogEvent5_WdEvent(v30);
    goto LABEL_36;
  }
  VidSchiProfilePerformanceTick(6, v7, 0, v19, 0LL, v25, 0LL, 0LL);
  *(_QWORD *)(*(_QWORD *)(a1 + 56) + 56LL) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(*(_QWORD *)(a1 + 56) + 52LL) = 9;
  if ( (*(_DWORD *)(a1 + 92) & 0x10) != 0 )
  {
    v52 = *(unsigned int *)(*(_QWORD *)(a1 + 56) + 160LL);
    v53 = *(_QWORD *)(v7 + 8 * v52 + 2576);
    if ( ((*(_DWORD *)(v53 + 4) - 3) & 0xFFFFFFFD) == 0 )
    {
      v54 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
      v54[3] = 281LL;
      v54[4] = 3072LL;
      v54[5] = *(_QWORD *)(a1 + 56);
      v54[6] = v52;
      v54[7] = *(int *)(v53 + 4);
      WdLogEvent5_WdCriticalError(v54);
      __debugbreak();
    }
    v7 = v67;
    LOBYTE(v26) = 0;
  }
  v27 = *(_QWORD *)(a1 + 56);
  v28 = *(_QWORD *)(v27 + 88);
  v29 = *(_QWORD *)(v28 + 160);
  if ( !v29 || *(_QWORD *)(v27 + 112) > v29 )
  {
    *(_QWORD *)(v28 + 152) = *(_QWORD *)(v27 + 112);
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 64LL) |= 8u;
    goto LABEL_31;
  }
  v55 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
  v55[3] = 281LL;
  v55[4] = 1792LL;
  v55[5] = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 112LL);
  v55[6] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 88LL) + 160LL);
  v55[7] = 0LL;
  WdLogEvent5_WdCriticalError(v55);
  __debugbreak();
LABEL_89:
  v56 = WdLogNewEntry5_WdAssertion(v36, v33);
  *(_QWORD *)(v56 + 24) = v7;
  *(_QWORD *)(v56 + 32) = a1;
  WdLogEvent5_WdAssertion(v56);
LABEL_37:
  _InterlockedExchange((volatile __int32 *)(v4 + 1544), ((_BYTE)v26 + 1) & 0xF);
  if ( v66 )
  {
    v37 = *(_QWORD *)(v2 + 96);
    v63 = 0;
    DpSynchronizeExecution(
      *(_QWORD *)(*(_QWORD *)(v37 + 24) + 24LL),
      VidSchiStartContextRunningTimeAtISR,
      v2,
      *(unsigned int *)(*(_QWORD *)(v37 + 24) + 32LL),
      &v63);
  }
  else if ( bTracingEnabled )
  {
    v35 = *(_QWORD *)(v2 + 56);
    if ( !v35 || (*(_DWORD *)(v2 + 112) & 0x40) != 0 )
      LODWORD(v35) = v2;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      McTemplateK0piixqq(
        v36,
        v33,
        v34,
        v35,
        *(_QWORD *)(v2 + 448),
        *(_QWORD *)(v2 + 440),
        *(_QWORD *)(v4 + 2000),
        *(_DWORD *)(v2 + 436),
        3);
  }
  _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 436), 1, 0);
  v38 = 0;
  VidSchiProfilePerformanceTick(7, v7, v4, v35, 0LL, 0LL, a1, 0LL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v39 = *(unsigned int *)(v4 + 1400);
  v40 = v39;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 8 * v39 + 1416), a1, 0LL) )
  {
    v57 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v57[6] = v4 + 1416 + 8 * v40;
    v57[3] = 281LL;
    v57[4] = 2048LL;
    v57[5] = v40;
    v57[7] = a1;
    WdLogEvent5_WdCriticalError(v57);
    __debugbreak();
  }
  else
  {
    v40 = v65;
    _InterlockedExchange((volatile __int32 *)(v4 + 1400), ((_BYTE)v39 + 1) & 0xF);
    if ( *(_DWORD *)(v7 + 2404) )
      goto LABEL_92;
    if ( !*(_BYTE *)(v40 + 204) && !_InterlockedCompareExchange((volatile signed __int32 *)(v40 + 200), 0, 0) )
    {
LABEL_43:
      *(_DWORD *)(a1 + 92) |= 0x20u;
      v41 = 1;
      if ( *(_DWORD *)(a1 + 88) == 3 )
      {
        if ( *(_BYTE *)(v7 + 49) )
        {
          KeLowerIrql(v62);
          v41 = 0;
        }
        _InterlockedExchange((volatile __int32 *)(v4 + 480), 1);
        *(_DWORD *)(v4 + 176) = v71;
        v17->LowPart = 3;
        *(_OWORD *)&v17[2].LowPart = v71;
        v42 = ((__int64 (__fastcall *)(_QWORD, __int128 *))DxgCoreInterface[27])(*(_QWORD *)(v7 + 8), &v71);
      }
      else
      {
        *(_QWORD *)(v4 + 168) = *(_QWORD *)(a1 + 104);
        if ( (*(_DWORD *)(a1 + 92) & 0x2000) != 0 )
        {
          v18 = v62;
          KeLowerIrql(v62);
          v41 = 0;
          v42 = ((__int64 (__fastcall *)(_QWORD, __int128 *))DxgCoreInterface[52])(*(_QWORD *)(v7 + 8), &v71);
          v17->LowPart = 2;
          *(_OWORD *)&v17[2].LowPart = v71;
          *(_OWORD *)&v17[4].LowPart = v72;
          *(_OWORD *)&v17[6].LowPart = v73;
          *(_OWORD *)&v17[8].LowPart = v74;
          v17[10].LowPart = v42;
LABEL_46:
          v38 = v42;
          if ( !v42 )
            goto LABEL_47;
          if ( v64 )
          {
            VidSchMarkDeviceAsError(v65, 19LL, 0);
            LOBYTE(v59) = 1;
            VidSchiCompletePendingCommandInNodeHwQueue(v4, *(_QWORD *)(v4 + 152), v59);
            *(_QWORD *)(v4 + 72) = *(_QWORD *)(v4 + 152);
LABEL_47:
            ++*(_QWORD *)(v7 + 408);
            if ( v41 )
              KeLowerIrql(v18);
            return;
          }
          v60 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
          v60[5] = (int)v38;
          v60[6] = &v71;
          v60[3] = 281LL;
          v60[4] = 2LL;
          v60[7] = a1;
          WdLogEvent5_WdCriticalError(v60);
          __debugbreak();
          goto LABEL_98;
        }
        v42 = ((__int64 (__fastcall *)(_QWORD, __int128 *))DxgCoreInterface[26])(*(_QWORD *)(v7 + 8), &v71);
        v17->LowPart = 1;
        *(_OWORD *)&v17[2].LowPart = v71;
        *(_OWORD *)&v17[4].LowPart = v72;
        *(_OWORD *)&v17[6].LowPart = v73;
        *(_OWORD *)&v17[8].LowPart = v74;
        *(_OWORD *)&v17[10].LowPart = v75;
        *(_OWORD *)&v17[12].LowPart = v76;
      }
      v18 = v62;
      goto LABEL_46;
    }
  }
  if ( *(_DWORD *)(a1 + 88) )
    goto LABEL_43;
LABEL_92:
  KeLowerIrql(v62);
  v17->LowPart = 7;
  v17[2] = *(LARGE_INTEGER *)(v4 + 152);
  LOBYTE(v17[3].LowPart) = *(_BYTE *)(v7 + 2428) & 1;
  BYTE1(v17[3].LowPart) = *(_DWORD *)(v7 + 2404) != 0;
  if ( !*(_BYTE *)(v40 + 204) && !_InterlockedCompareExchange((volatile signed __int32 *)(v40 + 200), 0, 0) )
  {
    v58 = 0;
    goto LABEL_99;
  }
LABEL_98:
  v58 = v18;
LABEL_99:
  BYTE2(v17[3].u.LowPart) = v58;
  if ( (v18 & *(_BYTE *)(v7 + 2428)) != 0 || *(_DWORD *)(v7 + 2404) != v38 )
    v61 = 0LL;
  else
    v61 = v18;
  VidSchiCompletePendingCommandInNodeHwQueue(v4, *(_QWORD *)(v4 + 152), v61);
}
