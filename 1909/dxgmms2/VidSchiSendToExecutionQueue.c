/*
 * XREFs of VidSchiSendToExecutionQueue @ 0x1C0005FB0
 * Callers:
 *     VidSchiSubmitPagingCommand @ 0x1C0079440 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C007A0A0 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiSendToExecutionQueueWithWait @ 0x1C007D0AC (VidSchiSendToExecutionQueueWithWait.c)
 * Callees:
 *     VidSchMarkDeviceAsError @ 0x1C0001010 (VidSchMarkDeviceAsError.c)
 *     VidSchiFillSubmitCommandDataVirtual @ 0x1C0004700 (VidSchiFillSubmitCommandDataVirtual.c)
 *     VidSchiProfilePerformanceTick @ 0x1C00088B0 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateContextStatus @ 0x1C000A6F0 (VidSchiUpdateContextStatus.c)
 *     VidSchiFillPreemptCommandData @ 0x1C001416C (VidSchiFillPreemptCommandData.c)
 *     VidSchiFillSubmitCommandData @ 0x1C00147C4 (VidSchiFillSubmitCommandData.c)
 *     __security_check_cookie @ 0x1C0018050 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     McTemplateK0piixqq @ 0x1C002C198 (McTemplateK0piixqq.c)
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C003A19C (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     VidSchIsVSyncEnabled @ 0x1C007B780 (VidSchIsVSyncEnabled.c)
 */

void __fastcall VidSchiSendToExecutionQueue(__int64 a1, char a2)
{
  signed __int64 v2; // r14
  __int64 v4; // rsi
  __int64 v5; // r15
  __int64 v6; // r13
  __int64 v7; // r12
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
  LARGE_INTEGER PerformanceCounter; // rax
  int v19; // r9d
  KIRQL v20; // r12
  LARGE_INTEGER v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rdx
  LARGE_INTEGER *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rdx
  int v35; // r8d
  __int64 v36; // r9
  __int64 v37; // rcx
  __int64 v38; // rax
  DWORD v39; // r14d
  __int64 v40; // rcx
  __int64 v41; // rbx
  char v42; // bl
  DWORD v43; // eax
  __int64 v44; // rdx
  unsigned int i; // r13d
  LARGE_INTEGER *v46; // rcx
  unsigned int v47; // edx
  __int64 v48; // rcx
  __int64 v49; // rax
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
  KIRQL v62; // [rsp+50h] [rbp-79h]
  char v63; // [rsp+51h] [rbp-78h] BYREF
  char v64; // [rsp+52h] [rbp-77h]
  int v65; // [rsp+54h] [rbp-75h]
  __int64 v66; // [rsp+58h] [rbp-71h]
  __int64 v67; // [rsp+60h] [rbp-69h]
  LARGE_INTEGER *v68; // [rsp+68h] [rbp-61h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-59h] BYREF
  _OWORD v70[6]; // [rsp+90h] [rbp-39h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  v64 = a2;
  v65 = 0;
  v4 = *(_QWORD *)(v2 + 96);
  v66 = *(_QWORD *)(v2 + 104);
  v5 = v66;
  v6 = *(_QWORD *)(v4 + 24);
  v67 = v6;
  memset(v70, 0, sizeof(v70));
  v7 = *(unsigned int *)(v4 + 488);
  v8 = (_BYTE *)(v4 + 56 * (v7 + 9));
  if ( v5 == *(_QWORD *)(*(_QWORD *)(v5 + 32) + 224LL) )
  {
    v11 = "System";
  }
  else
  {
    v9 = *(_QWORD *)(v66 + 40);
    if ( v9 && *(_QWORD *)(v9 + 8) )
    {
      ProcessImageFileName = (const char *)PsGetProcessImageFileName(*(_QWORD *)(v9 + 2648));
      v11 = ProcessImageFileName;
      if ( !ProcessImageFileName || !*ProcessImageFileName )
        goto LABEL_11;
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
LABEL_11:
  *v8 = 0;
  v15 = 56 * v7 + v4 + 520;
  *(_DWORD *)v15 = *(_DWORD *)(a1 + 72);
  *(_QWORD *)(v15 + 8) = *(_QWORD *)(a1 + 80);
  *(_DWORD *)(v15 + 16) = *(_DWORD *)(a1 + 88);
  *(_DWORD *)(v15 + 20) = *(_DWORD *)(a1 + 92);
  *(_DWORD *)(v15 + 24) = *(_DWORD *)(a1 + 96);
  *(_QWORD *)(v15 + 32) = *(_QWORD *)(a1 + 104);
  *(_DWORD *)(v4 + 488) = ((_BYTE)v7 + 1) & 0xF;
  v16 = *(_DWORD *)(a1 + 92);
  if ( (v16 & 4) != 0 )
  {
    v44 = *(_QWORD *)(a1 + 56);
    if ( (*(_DWORD *)(v44 + 72) & 0x4000) != 0
      && ((*(_DWORD *)(v5 + 48) & 2) != 0 || *(int *)(v44 + 400) >= 4 || *(_BYTE *)(v6 + 144)) )
    {
      *(_DWORD *)(a1 + 92) = v16 | 0x200;
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 732));
      VidSchIsVSyncEnabled(v6, *(unsigned int *)(*(_QWORD *)(a1 + 56) + 160LL));
    }
  }
  v62 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 1648), &LockHandle);
  v17 = (LARGE_INTEGER *)(*(_QWORD *)(v4 + 184) + 112LL * *(unsigned int *)(v4 + 196));
  memset(v17, 0, 0x70uLL);
  *(_DWORD *)(v4 + 196) = (*(_DWORD *)(v4 + 196) + 1) & (*(_DWORD *)(v4 + 192) - 1);
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 2860));
  *(_QWORD *)(a1 + 80) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 72) = 9;
  _InterlockedIncrement((volatile signed __int32 *)(v6 + 712));
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v20 = 1;
  v17[1] = PerformanceCounter;
  v21 = PerformanceCounter;
  if ( _InterlockedIncrement((volatile signed __int32 *)(v4 + 2856)) == 1 )
  {
    v22 = *(unsigned int *)(v2 + 404);
    v23 = gulPriorityToYieldPriorityBand[v22];
    if ( gulPriorityToYieldPriorityBand[v22] )
    {
      v24 = (LARGE_INTEGER *)(v4 + 1920 + 8 * v23);
      do
      {
        if ( v24[-4].QuadPart )
          *v24 = v21;
        --v24;
        --v23;
      }
      while ( v23 );
    }
  }
  if ( _InterlockedIncrement((volatile signed __int32 *)(v2 + 780)) == 1 )
  {
    if ( v66 == *(_QWORD *)(v6 + 224) )
      VidSchiUpdateContextStatus(v2, 1LL, 5773LL);
    *(_DWORD *)(v2 + 184) |= 2u;
    v25 = *(unsigned int *)(v2 + 404);
    if ( ++*(_DWORD *)(v4 + 4 * v25 + 1760) == 1 )
      *(_DWORD *)(v4 + 1756) |= 1 << *(_DWORD *)(v2 + 404);
    v65 = 1;
  }
  if ( *(_DWORD *)(a1 + 88) == 3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 2868));
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 2872));
    for ( i = *(_DWORD *)(v4 + 1552); i != *(_DWORD *)(v4 + 1544); i = ((_BYTE)i + 1) & 0xF )
    {
      v46 = *(LARGE_INTEGER **)(v4 + 8LL * i + 1560);
      v68 = v46;
      if ( (v46[23].LowPart & 8) == 0 )
      {
        VidSchiUpdateContextStatus(v46, 2LL, 5834LL);
        if ( i == *(_DWORD *)(v4 + 1552) && !v68[62].QuadPart )
          v68[62] = v21;
      }
    }
    *(_QWORD *)(v4 + 392) = MEMORY[0xFFFFF78000000320];
    KeResetEvent((PRKEVENT)(v4 + 352));
    v47 = *(unsigned __int16 *)(v4 + 4);
    v6 = v67;
    v48 = 8LL * *(unsigned __int16 *)(v4 + 4);
    v49 = *(_QWORD *)(v67 + 616);
    if ( v47 < *(_DWORD *)(v67 + 688) )
      v49 += v48;
    ++*(_QWORD *)(*(_QWORD *)v49 + 104LL);
    v50 = *(_QWORD *)(v6 + 616);
    if ( v47 < *(_DWORD *)(v6 + 688) )
      v50 += v48;
    *(_QWORD *)(a1 + 104) = *(_QWORD *)(*(_QWORD *)v50 + 104LL);
    VidSchiFillPreemptCommandData(a1, v70);
    _InterlockedExchange((volatile __int32 *)(v4 + 160), v51);
    RtlClearBitEx(v6 + 472, *(unsigned __int16 *)(v4 + 4));
LABEL_35:
    v27 = *(unsigned int *)(v4 + 1544);
    v37 = v4 + 8 * v27;
    if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(v37 + 1560), v2, 0LL) )
      goto LABEL_36;
    goto LABEL_85;
  }
  v26 = *(_QWORD *)(a1 + 56);
  LOBYTE(v27) = 0;
  if ( !v26 )
  {
LABEL_30:
    if ( (*(_DWORD *)(a1 + 92) & 0x2000) != 0 )
      VidSchiFillSubmitCommandDataVirtual(a1, v70);
    else
      VidSchiFillSubmitCommandData(a1, v70);
    _InterlockedExchange64((volatile __int64 *)(v4 + 152), *(_QWORD *)(a1 + 104));
    v31 = (_QWORD *)WdLogNewEntry5_WdEvent();
    v31[3] = a1;
    v31[4] = *(_QWORD *)(a1 + 104);
    v31[5] = *(_QWORD *)(a1 + 56);
    v31[6] = *(int *)(a1 + 88);
    v32 = *(_QWORD *)(a1 + 56);
    if ( v32 )
      v33 = *(_QWORD *)(v32 + 112);
    else
      v33 = 0LL;
    v31[7] = v33;
    WdLogEvent5_WdEvent(v31);
    goto LABEL_35;
  }
  VidSchiProfilePerformanceTick(6, v6, 0, v19, 0LL, v26, 0LL, 0LL);
  *(_QWORD *)(*(_QWORD *)(a1 + 56) + 56LL) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(*(_QWORD *)(a1 + 56) + 52LL) = 9;
  if ( (*(_DWORD *)(a1 + 92) & 0x10) != 0 )
  {
    v52 = *(unsigned int *)(*(_QWORD *)(a1 + 56) + 160LL);
    v53 = *(_QWORD *)(v6 + 8 * v52 + 2576);
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
    v6 = v67;
    LOBYTE(v27) = 0;
  }
  v28 = *(_QWORD *)(a1 + 56);
  v29 = *(_QWORD *)(v28 + 88);
  v30 = *(_QWORD *)(v29 + 160);
  if ( !v30 || *(_QWORD *)(v28 + 112) > v30 )
  {
    *(_QWORD *)(v29 + 152) = *(_QWORD *)(v28 + 112);
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 64LL) |= 8u;
    goto LABEL_30;
  }
  v55 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
  v55[3] = 281LL;
  v55[4] = 1792LL;
  v55[5] = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 112LL);
  v55[6] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 88LL) + 160LL);
  v55[7] = 0LL;
  WdLogEvent5_WdCriticalError(v55);
  __debugbreak();
LABEL_85:
  v56 = WdLogNewEntry5_WdAssertion(v37, v34);
  *(_QWORD *)(v56 + 24) = v6;
  *(_QWORD *)(v56 + 32) = a1;
  WdLogEvent5_WdAssertion(v56);
LABEL_36:
  _InterlockedExchange((volatile __int32 *)(v4 + 1544), ((_BYTE)v27 + 1) & 0xF);
  if ( v65 )
  {
    v38 = *(_QWORD *)(v2 + 96);
    v63 = 0;
    DpSynchronizeExecution(
      *(_QWORD *)(*(_QWORD *)(v38 + 24) + 24LL),
      VidSchiStartContextRunningTimeAtISR,
      v2,
      *(unsigned int *)(*(_QWORD *)(v38 + 24) + 32LL),
      &v63);
  }
  else if ( bTracingEnabled )
  {
    v36 = *(_QWORD *)(v2 + 56);
    if ( !v36 || (*(_DWORD *)(v2 + 112) & 0x40) != 0 )
      LODWORD(v36) = v2;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
      McTemplateK0piixqq(
        v37,
        v34,
        v35,
        v36,
        *(_QWORD *)(v2 + 448),
        *(_QWORD *)(v2 + 440),
        *(_QWORD *)(v4 + 2000),
        *(_DWORD *)(v2 + 436),
        3);
  }
  _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 436), 1, 0);
  v39 = 0;
  VidSchiProfilePerformanceTick(7, v6, v4, v36, 0LL, 0LL, a1, 0LL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v40 = *(unsigned int *)(v4 + 1400);
  v41 = v40;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 8 * v40 + 1416), a1, 0LL) )
  {
    v57 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v57[6] = v4 + 1416 + 8 * v41;
    v57[3] = 281LL;
    v57[4] = 2048LL;
    v57[5] = v41;
    v57[7] = a1;
    WdLogEvent5_WdCriticalError(v57);
    __debugbreak();
  }
  else
  {
    v41 = v66;
    _InterlockedExchange((volatile __int32 *)(v4 + 1400), ((_BYTE)v40 + 1) & 0xF);
    if ( *(_DWORD *)(v6 + 2404) )
      goto LABEL_88;
    if ( !*(_BYTE *)(v41 + 204) && !_InterlockedCompareExchange((volatile signed __int32 *)(v41 + 200), 0, 0) )
    {
LABEL_42:
      *(_DWORD *)(a1 + 92) |= 0x20u;
      v42 = 1;
      if ( *(_DWORD *)(a1 + 88) == 3 )
      {
        if ( *(_BYTE *)(v6 + 49) )
        {
          KeLowerIrql(v62);
          v42 = 0;
        }
        _InterlockedExchange((volatile __int32 *)(v4 + 480), 1);
        *(_DWORD *)(v4 + 176) = v70[0];
        v17->LowPart = 3;
        *(_OWORD *)&v17[2].LowPart = v70[0];
        v43 = ((__int64 (__fastcall *)(_QWORD, _OWORD *))DxgCoreInterface[27])(*(_QWORD *)(v6 + 8), v70);
      }
      else
      {
        *(_QWORD *)(v4 + 168) = *(_QWORD *)(a1 + 104);
        if ( (*(_DWORD *)(a1 + 92) & 0x2000) != 0 )
        {
          v20 = v62;
          KeLowerIrql(v62);
          v42 = 0;
          v43 = ((__int64 (__fastcall *)(_QWORD, _OWORD *))DxgCoreInterface[52])(*(_QWORD *)(v6 + 8), v70);
          v17->LowPart = 2;
          *(_OWORD *)&v17[2].LowPart = v70[0];
          *(_OWORD *)&v17[4].LowPart = v70[1];
          *(_OWORD *)&v17[6].LowPart = v70[2];
          *(_OWORD *)&v17[8].LowPart = v70[3];
          v17[10].LowPart = v43;
LABEL_45:
          v39 = v43;
          if ( !v43 )
            goto LABEL_46;
          if ( v64 )
          {
            VidSchMarkDeviceAsError(v66);
            LOBYTE(v59) = 1;
            VidSchiCompletePendingCommandInNodeHwQueue(v4, *(_QWORD *)(v4 + 152), v59);
            *(_QWORD *)(v4 + 72) = *(_QWORD *)(v4 + 152);
LABEL_46:
            ++*(_QWORD *)(v6 + 408);
            if ( v42 )
              KeLowerIrql(v20);
            return;
          }
          v60 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
          v60[5] = (int)v39;
          v60[6] = v70;
          v60[3] = 281LL;
          v60[4] = 2LL;
          v60[7] = a1;
          WdLogEvent5_WdCriticalError(v60);
          __debugbreak();
          goto LABEL_94;
        }
        v43 = ((__int64 (__fastcall *)(_QWORD, _OWORD *))DxgCoreInterface[26])(*(_QWORD *)(v6 + 8), v70);
        v17->LowPart = 1;
        *(_OWORD *)&v17[2].LowPart = v70[0];
        *(_OWORD *)&v17[4].LowPart = v70[1];
        *(_OWORD *)&v17[6].LowPart = v70[2];
        *(_OWORD *)&v17[8].LowPart = v70[3];
        *(_OWORD *)&v17[10].LowPart = v70[4];
        *(_OWORD *)&v17[12].LowPart = v70[5];
      }
      v20 = v62;
      goto LABEL_45;
    }
  }
  if ( *(_DWORD *)(a1 + 88) )
    goto LABEL_42;
LABEL_88:
  KeLowerIrql(v62);
  v17->LowPart = 7;
  v17[2] = *(LARGE_INTEGER *)(v4 + 152);
  LOBYTE(v17[3].LowPart) = *(_BYTE *)(v6 + 2428) & 1;
  BYTE1(v17[3].LowPart) = *(_DWORD *)(v6 + 2404) != 0;
  if ( !*(_BYTE *)(v41 + 204) && !_InterlockedCompareExchange((volatile signed __int32 *)(v41 + 200), 0, 0) )
  {
    v58 = 0;
    goto LABEL_95;
  }
LABEL_94:
  v58 = v20;
LABEL_95:
  BYTE2(v17[3].u.LowPart) = v58;
  if ( (v20 & *(_BYTE *)(v6 + 2428)) != 0 || *(_DWORD *)(v6 + 2404) != v39 )
    v61 = 0LL;
  else
    v61 = v20;
  VidSchiCompletePendingCommandInNodeHwQueue(v4, *(_QWORD *)(v4 + 152), v61);
}
