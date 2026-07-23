/*
 * XREFs of PfFileInfoNotify @ 0x1400D3E60
 * Callers:
 *     <none>
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExWaitForRundownProtectionRelease @ 0x140089880 (ExWaitForRundownProtectionRelease.c)
 *     ExRundownCompleted @ 0x14008F7F0 (ExRundownCompleted.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     PfSnReferenceProcessTrace @ 0x1400D4B30 (PfSnReferenceProcessTrace.c)
 *     PfSnLogPageFaultCommon @ 0x1400D4C84 (PfSnLogPageFaultCommon.c)
 *     PfSnCheckLoggingForThread @ 0x1400D53C0 (PfSnCheckLoggingForThread.c)
 *     PfFbLogEntryComplete @ 0x1400D5420 (PfFbLogEntryComplete.c)
 *     PfLogEvent @ 0x1400D5478 (PfLogEvent.c)
 *     PfFbLogEntryReserve @ 0x1400D5564 (PfFbLogEntryReserve.c)
 *     PfLogDeleteHelper @ 0x1400D6900 (PfLogDeleteHelper.c)
 *     _wcsupr @ 0x140195D90 (_wcsupr.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401C5530 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401C5570 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     PfpRpFileKeyUpdate @ 0x1405D66D0 (PfpRpFileKeyUpdate.c)
 *     PfSnNameRemoveAll @ 0x1405FA650 (PfSnNameRemoveAll.c)
 *     PfSnLogStreamCreate @ 0x14064C084 (PfSnLogStreamCreate.c)
 *     PfSnLogVolumeCreate @ 0x1406BE9B0 (PfSnLogVolumeCreate.c)
 */

__int64 __fastcall PfFileInfoNotify(_DWORD *a1)
{
  _DWORD *v1; // rdi
  bool v2; // zf
  int v3; // eax
  int v4; // eax
  __int64 *v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r10
  unsigned __int64 v11; // r9
  __int64 v12; // r11
  __int64 v13; // r8
  unsigned int v14; // edx
  __int64 v15; // rcx
  PSLIST_ENTRY v16; // rbx
  unsigned __int64 *v17; // r14
  __int64 v18; // rax
  int v19; // r15d
  PSLIST_ENTRY j; // rcx
  int v21; // esi
  unsigned __int64 v22; // rax
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  _SLIST_ENTRY *Next; // rsi
  __int64 v27; // r14
  unsigned __int64 v28; // r12
  __int64 v29; // r15
  __int64 v30; // r13
  __int64 v31; // rcx
  __int64 v32; // rax
  struct _EX_RUNDOWN_REF *v33; // rsi
  int v34; // ecx
  __int64 v35; // rdx
  __int64 v36; // rax
  unsigned int v37; // edx
  const void *v38; // r12
  int v39; // ebx
  unsigned int v40; // r15d
  unsigned int *v41; // rsi
  int v42; // r9d
  wchar_t *v43; // rcx
  int v44; // ecx
  int v45; // ecx
  int v46; // r15d
  int v47; // r14d
  __int64 v48; // rdx
  int v49; // ecx
  _QWORD *v50; // rcx
  _QWORD *v51; // r8
  unsigned __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rdx
  int v56; // eax
  unsigned int v57; // r15d
  unsigned int *v58; // rsi
  __int16 v59; // cx
  int v60; // ecx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v62; // r12d
  struct _KTHREAD *v63; // rax
  struct _KTHREAD *v64; // rsi
  unsigned int SessionId; // r8d
  __int64 v66; // rdx
  __int64 v67; // rcx
  int v68; // eax
  __int64 v69; // rcx
  _KLOCK_ENTRY *v70; // r15
  __int64 v71; // rcx
  struct _KTHREAD *v72; // rbx
  __int64 v73; // rdx
  __int64 v74; // rcx
  int v75; // eax
  __int64 v76; // rcx
  _KLOCK_ENTRY *v77; // r15
  __int64 v78; // rcx
  __int64 v79; // rdx
  __int64 v80; // rdx
  int v81; // ecx
  struct _KTHREAD *v82; // rax
  unsigned int v83; // r12d
  struct _KTHREAD *v84; // rax
  __int64 i; // rsi
  struct _KTHREAD *v86; // rsi
  unsigned int v87; // r8d
  __int64 v88; // rdx
  __int64 v89; // rcx
  int v90; // eax
  __int64 v91; // rcx
  _KLOCK_ENTRY *v92; // r15
  __int64 v93; // rdx
  __int64 v94; // rcx
  struct _KTHREAD *v95; // rbx
  __int64 v96; // rdx
  __int64 v97; // rcx
  int v98; // eax
  __int64 v99; // rcx
  _KLOCK_ENTRY *v100; // r15
  __int64 v101; // rdx
  __int64 v102; // rcx
  int v103; // [rsp+30h] [rbp-69h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+38h] [rbp-61h]
  unsigned int *v105; // [rsp+40h] [rbp-59h]
  int v106; // [rsp+48h] [rbp-51h]
  int v107; // [rsp+4Ch] [rbp-4Dh]
  int v108; // [rsp+50h] [rbp-49h]
  int v109; // [rsp+54h] [rbp-45h]
  _QWORD v110[3]; // [rsp+58h] [rbp-41h] BYREF
  _QWORD v111[3]; // [rsp+70h] [rbp-29h] BYREF
  __int128 v112; // [rsp+88h] [rbp-11h]
  __int128 v113; // [rsp+98h] [rbp-1h]
  unsigned __int64 v114; // [rsp+A8h] [rbp+Fh]
  BOOL v116; // [rsp+100h] [rbp+67h]
  BOOL v117; // [rsp+100h] [rbp+67h]
  unsigned __int8 AbAllocationRegionCount; // [rsp+100h] [rbp+67h]
  unsigned __int8 v119; // [rsp+100h] [rbp+67h]
  __int64 v120; // [rsp+108h] [rbp+6Fh] BYREF
  int v121; // [rsp+110h] [rbp+77h] BYREF
  int v122; // [rsp+118h] [rbp+7Fh] BYREF

  v1 = a1;
  v2 = *a1 == 15;
  ListEntry = 0LL;
  v105 = 0LL;
  if ( !v2 )
  {
    v21 = -1073741811;
    goto LABEL_63;
  }
  v3 = a1[2];
  if ( (v3 & 8) != 0 )
  {
    v34 = a1[1];
    if ( v34 == 7 )
    {
      v1[4] = _InterlockedIncrement(&dword_1404D8610);
    }
    else
    {
      v60 = v34 - 10;
      if ( !v60 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14043D288, 0LL);
        v62 = -1;
        if ( qword_14043D278 )
        {
          v21 = -1073741791;
        }
        else
        {
          v63 = KeGetCurrentThread();
          --v63->KernelApcDisable;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&BugCheckParameter2, 0LL);
          dword_14043D2A8 &= ~1u;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&BugCheckParameter2);
          v122 = 0;
          v64 = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&BugCheckParameter2) == 1 )
            SessionId = MmGetSessionIdEx((__int64)v64->ApcState.Process);
          else
            SessionId = -1;
          --v64->SpecialApcDisable;
          ++v64->AbAllocationRegionCount;
          LODWORD(v66) = ((char)v64->AbEntrySummary | (char)v64->AbOrphanedEntrySummary) ^ 0x3F;
          v116 = v64->AbAllocationRegionCount == 1;
          v2 = !_BitScanReverse((unsigned int *)&v67, v66);
          v108 = v67;
          if ( v2 )
            goto LABEL_85;
          while ( 1 )
          {
            v68 = 1 << v67;
            v69 = v67;
            v70 = &v64->LockEntries[v69];
            v66 = ~v68 & (unsigned int)v66;
            if ( (v70->AcquiredByte & 1) != 0
              && (*(_DWORD *)&v70->LockState.0 & 1) == 0
              && (*(_QWORD *)&v70->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
              && v70->LockState.SessionId == SessionId )
            {
              v70->AcquiredByte &= ~1u;
              if ( v70->LockState.0 )
                break;
            }
            v2 = !_BitScanReverse((unsigned int *)&v67, v66);
            v108 = v67;
            if ( v2 )
              goto LABEL_85;
          }
          if ( !v70 )
          {
LABEL_85:
            if ( (*((_DWORD *)&v64->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)v64, (ULONG_PTR)&BugCheckParameter2, SessionId, 0LL);
          }
          else
          {
            v70->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v70->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&v64->LockEntries[v69].TreeNode, v66);
            v122 = 0;
            v122 = v70->BoostBitmap.AllFields & 0x1FFFF;
            v70->BoostBitmap.AllFields &= 0xFFFE0000;
            v70->ThreadLocalFlags &= ~1u;
            v70->LockState.0 = 0LL;
            v79 = ((char *)v70 - (char *)v64 - 800) / 96;
            if ( v116 )
              v64->AbEntrySummary |= 1 << v79;
            else
              _InterlockedOr8((volatile signed __int8 *)&v64->AbOrphanedEntrySummary, 1 << v79);
          }
          --v64->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts((ULONG_PTR)v64, (__int64)&BugCheckParameter2, (__int64)&v122);
          v2 = v64->SpecialApcDisable++ == -1;
          if ( v2 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v64->ApcState.ApcListHead[0].Flink != &v64->152 )
            KiCheckForKernelApcDelivery(v71);
          KeLeaveCriticalRegion();
          (*(void (__fastcall **)(__int64 (__fastcall *)(ULONG_PTR)))(*((_QWORD *)v1 + 2) + 32LL))(PfpPrefetchSharedConflictNotifyStart);
          qword_14043D278 = *((_QWORD *)v1 + 2);
          v21 = 0;
          _InterlockedExchange64((volatile __int64 *)&stru_14043D280, 0LL);
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14043D288, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_14043D288);
        v103 = 0;
        v72 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_14043D288) == 1 )
          v62 = MmGetSessionIdEx((__int64)v72->ApcState.Process);
        --v72->SpecialApcDisable;
        ++v72->AbAllocationRegionCount;
        LODWORD(v73) = ((char)v72->AbEntrySummary | (char)v72->AbOrphanedEntrySummary) ^ 0x3F;
        v117 = v72->AbAllocationRegionCount == 1;
        v2 = !_BitScanReverse((unsigned int *)&v74, v73);
        v109 = v74;
        if ( v2 )
          goto LABEL_97;
        while ( 1 )
        {
          v75 = 1 << v74;
          v76 = v74;
          v77 = &v72->LockEntries[v76];
          v73 = ~v75 & (unsigned int)v73;
          if ( (v77->AcquiredByte & 1) != 0
            && (*(_DWORD *)&v77->LockState.0 & 1) == 0
            && (*(_QWORD *)&v77->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_14043D288 & 0x7FFFFFFFFFFFFFFCLL)
            && v77->LockState.SessionId == v62 )
          {
            v77->AcquiredByte &= ~1u;
            if ( v77->LockState.0 )
              break;
          }
          v2 = !_BitScanReverse((unsigned int *)&v74, v73);
          v109 = v74;
          if ( v2 )
            goto LABEL_97;
        }
        if ( !v77 )
        {
LABEL_97:
          if ( (*((_DWORD *)&v72->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v72, (ULONG_PTR)&qword_14043D288, v62, 0LL);
        }
        else
        {
          v77->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v77->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v72->LockEntries[v76].TreeNode, v73);
          v103 = 0;
          v103 = v77->BoostBitmap.AllFields & 0x1FFFF;
          v77->BoostBitmap.AllFields &= 0xFFFE0000;
          v77->ThreadLocalFlags &= ~1u;
          v77->LockState.0 = 0LL;
          v80 = ((char *)v77 - (char *)v72 - 800) / 96;
          if ( v117 )
            v72->AbEntrySummary |= 1 << v80;
          else
            _InterlockedOr8((volatile signed __int8 *)&v72->AbOrphanedEntrySummary, 1 << v80);
        }
        --v72->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v72, (__int64)&qword_14043D288, (__int64)&v103);
        v2 = v72->SpecialApcDisable++ == -1;
        if ( v2 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v72->ApcState.ApcListHead[0].Flink != &v72->152 )
          KiCheckForKernelApcDelivery(v78);
        KeLeaveCriticalRegion();
        goto LABEL_20;
      }
      v81 = v60 - 1;
      if ( !v81 )
      {
        v82 = KeGetCurrentThread();
        --v82->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14043D288, 0LL);
        v83 = -1;
        if ( qword_14043D278 )
        {
          v84 = KeGetCurrentThread();
          --v84->KernelApcDisable;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&BugCheckParameter2, 0LL);
          dword_14043D2A8 |= 1u;
          for ( i = qword_14043D298; (__int64 *)i != &qword_14043D298; i = *(_QWORD *)i )
          {
            *(_DWORD *)(i + 68) |= 4u;
            KeSetEvent((PRKEVENT)(i + 88), 0, 0);
          }
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&BugCheckParameter2);
          LODWORD(v120) = 0;
          v86 = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&BugCheckParameter2) == 1 )
            v87 = MmGetSessionIdEx((__int64)v86->ApcState.Process);
          else
            v87 = -1;
          --v86->SpecialApcDisable;
          ++v86->AbAllocationRegionCount;
          LODWORD(v88) = ((char)v86->AbEntrySummary | (char)v86->AbOrphanedEntrySummary) ^ 0x3F;
          AbAllocationRegionCount = v86->AbAllocationRegionCount;
          v2 = !_BitScanReverse((unsigned int *)&v89, v88);
          v106 = v89;
          if ( v2 )
            goto LABEL_149;
          while ( 1 )
          {
            v90 = 1 << v89;
            v91 = v89;
            v92 = &v86->LockEntries[v91];
            v88 = ~v90 & (unsigned int)v88;
            if ( (v92->AcquiredByte & 1) != 0
              && (*(_DWORD *)&v92->LockState.0 & 1) == 0
              && (*(_QWORD *)&v92->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
              && v92->LockState.SessionId == v87 )
            {
              v92->AcquiredByte &= ~1u;
              if ( v92->LockState.0 )
                break;
            }
            v2 = !_BitScanReverse((unsigned int *)&v89, v88);
            v106 = v89;
            if ( v2 )
              goto LABEL_149;
          }
          if ( !v92 )
          {
LABEL_149:
            if ( (*((_DWORD *)&v86->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)v86, (ULONG_PTR)&BugCheckParameter2, v87, 0LL);
          }
          else
          {
            v92->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v92->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&v86->LockEntries[v91].TreeNode, v88);
            LODWORD(v120) = 0;
            LODWORD(v120) = v92->BoostBitmap.AllFields & 0x1FFFF;
            v92->BoostBitmap.AllFields &= 0xFFFE0000;
            v92->ThreadLocalFlags &= ~1u;
            v92->LockState.0 = 0LL;
            v93 = ((char *)v92 - (char *)v86 - 800) / 96;
            if ( AbAllocationRegionCount == 1 )
              v86->AbEntrySummary |= 1 << v93;
            else
              _InterlockedOr8((volatile signed __int8 *)&v86->AbOrphanedEntrySummary, 1 << v93);
          }
          --v86->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts((ULONG_PTR)v86, (__int64)&BugCheckParameter2, (__int64)&v120);
          v2 = v86->SpecialApcDisable++ == -1;
          if ( v2 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v86->ApcState.ApcListHead[0].Flink != &v86->152 )
            KiCheckForKernelApcDelivery(v94);
          KeLeaveCriticalRegion();
          ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&stru_14043D280);
          ExRundownCompleted((PEX_RUNDOWN_REF)&stru_14043D280);
          qword_14043D278 = 0LL;
          v21 = 0;
        }
        else
        {
          v21 = -1073741275;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14043D288, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_14043D288);
        v121 = 0;
        v95 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_14043D288) == 1 )
          v83 = MmGetSessionIdEx((__int64)v95->ApcState.Process);
        --v95->SpecialApcDisable;
        ++v95->AbAllocationRegionCount;
        LODWORD(v96) = ((char)v95->AbEntrySummary | (char)v95->AbOrphanedEntrySummary) ^ 0x3F;
        v119 = v95->AbAllocationRegionCount;
        v2 = !_BitScanReverse((unsigned int *)&v97, v96);
        v107 = v97;
        if ( v2 )
          goto LABEL_173;
        while ( 1 )
        {
          v98 = 1 << v97;
          v99 = v97;
          v100 = &v95->LockEntries[v99];
          v96 = ~v98 & (unsigned int)v96;
          if ( (v100->AcquiredByte & 1) != 0
            && (*(_DWORD *)&v100->LockState.0 & 1) == 0
            && (*(_QWORD *)&v100->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_14043D288 & 0x7FFFFFFFFFFFFFFCLL)
            && v100->LockState.SessionId == v83 )
          {
            v100->AcquiredByte &= ~1u;
            if ( v100->LockState.0 )
              break;
          }
          v2 = !_BitScanReverse((unsigned int *)&v97, v96);
          v107 = v97;
          if ( v2 )
            goto LABEL_173;
        }
        if ( !v100 )
        {
LABEL_173:
          if ( (*((_DWORD *)&v95->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v95, (ULONG_PTR)&qword_14043D288, v83, 0LL);
        }
        else
        {
          v100->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v100->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v95->LockEntries[v99].TreeNode, v96);
          v121 = 0;
          v121 = v100->BoostBitmap.AllFields & 0x1FFFF;
          v100->BoostBitmap.AllFields &= 0xFFFE0000;
          v100->ThreadLocalFlags &= ~1u;
          v100->LockState.0 = 0LL;
          v101 = ((char *)v100 - (char *)v95 - 800) / 96;
          if ( v119 == 1 )
            v95->AbEntrySummary |= 1 << v101;
          else
            _InterlockedOr8((volatile signed __int8 *)&v95->AbOrphanedEntrySummary, 1 << v101);
        }
        --v95->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v95, (__int64)&qword_14043D288, (__int64)&v121);
        v2 = v95->SpecialApcDisable++ == -1;
        if ( v2 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v95->ApcState.ApcListHead[0].Flink != &v95->152 )
          KiCheckForKernelApcDelivery(v102);
        KeLeaveCriticalRegion();
        goto LABEL_20;
      }
      if ( v81 != 1 )
      {
LABEL_124:
        v21 = -1073741637;
        goto LABEL_63;
      }
      if ( (dword_14043D3D0 & 2) != 0 )
      {
        v21 = -1073741431;
        goto LABEL_63;
      }
    }
    return 0;
  }
  if ( (v3 & 4) != 0 )
  {
    v44 = a1[1];
    if ( v44 )
    {
      v45 = v44 - 2;
      if ( v45 )
      {
        if ( v45 == 1 )
          PfSnNameRemoveAll(*((_QWORD *)v1 + 2));
      }
      else
      {
        PfSnLogStreamCreate(*((_QWORD *)v1 + 2));
      }
    }
    else
    {
      PfSnLogVolumeCreate(*((_QWORD *)v1 + 2));
    }
  }
  if ( (v1[2] & 1) == 0 )
    return 0;
  if ( dword_14043CE20 >= (unsigned int)dword_14043CE24 )
  {
    v49 = v1[1];
    v4 = v49;
    if ( v49 != 4 && v49 != 2 && v49 != 3 )
    {
      v21 = -1073741697;
      goto LABEL_63;
    }
  }
  else
  {
    v4 = v1[1];
  }
  if ( v4 == 4 )
  {
    v5 = (__int64 *)*((_QWORD *)v1 + 2);
    v6 = *((unsigned int *)v5 + 4) + 4095LL;
    v7 = (v6 + (unsigned __int64)(v5[1] & 0xFFF)) >> 12;
    if ( PfSnNumActiveTraces )
    {
      v27 = v5[4];
      v28 = (v6 + (unsigned __int64)(v5[1] & 0xFFF)) >> 12;
      v29 = v5[1];
      v30 = v5[3];
      v31 = *(_QWORD *)(v27 + 544);
      v120 = *v5;
      v32 = PfSnReferenceProcessTrace(v31);
      v33 = (struct _EX_RUNDOWN_REF *)v32;
      if ( v32 )
      {
        if ( (unsigned int)PfSnCheckLoggingForThread(v27, v32, 0LL) )
        {
          v46 = v29 & 0xFFFFF000;
          if ( v7 )
          {
            v47 = v120;
            do
            {
              if ( (int)PfSnLogPageFaultCommon((_DWORD)v33, v47, v30, v46, 0) < 0 )
                break;
              v46 += 4096;
              --v28;
            }
            while ( v28 );
            v1 = a1;
          }
        }
        ExReleaseRundownProtection_0(v33 + 45);
      }
    }
    if ( dword_14043CE20 < (unsigned int)dword_14043CE24 )
    {
      v8 = *((_QWORD *)v1 + 2);
      v9 = *(_QWORD *)(v8 + 32);
      v10 = *(int *)(v8 + 20);
      v11 = *(_QWORD *)(v8 + 8);
      v12 = *(_QWORD *)(v8 + 24);
      v13 = *(_QWORD *)(v9 + 544);
      v14 = (*(_DWORD *)(v9 + 1744) >> 12) & 7;
      if ( (*(_DWORD *)(v13 + 772) & 0x100000) != 0 )
      {
        v56 = 2;
        if ( v14 < 2 )
          v56 = (*(_DWORD *)(v9 + 1744) >> 12) & 7;
        v14 = v56;
      }
      if ( v14 < dword_14043B9AC )
      {
        v21 = 0;
        goto LABEL_20;
      }
      v15 = *(_QWORD *)(v13 + 736);
      *(_QWORD *)&v113 = v7 | (v10 << 63);
      v16 = 0LL;
      v17 = 0LL;
      v18 = (v15 ^ *(_QWORD *)(v13 + 776)) & 0x1FFFFFFFFFFFFFFFLL;
      *(_QWORD *)&v112 = v12;
      *((_QWORD *)&v113 + 1) = v18;
      v114 = __PAIR64__(v15, dword_1404D8610);
      *((_QWORD *)&v112 + 1) = v11 >> 12;
      v19 = dword_14043D15C
          + ((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
            + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)) >> 10);
      if ( ExAcquireRundownProtection_0(&stru_14043CD60) )
      {
        while ( 1 )
        {
          for ( j = RtlpInterlockedPopEntrySList(&stru_14043CD80); !j; j = RtlpInterlockedPopEntrySList(&stru_14043CD80) )
          {
            j = RtlpInterlockedPopEntrySList(&stru_14043CD70);
            if ( j )
              break;
            v21 = ((__int64 (__fastcall *)(struct _EX_RUNDOWN_REF *))qword_14043CDB8)(&stru_14043CD60);
            if ( v21 < 0 )
              goto LABEL_189;
          }
          if ( (__int64)j[2].Next - *((_QWORD *)&j[1].Next + 1) >= 64 )
          {
            v17 = (unsigned __int64 *)*((_QWORD *)&j[1].Next + 1);
            v16 = j;
            v21 = 0;
            goto LABEL_16;
          }
          if ( !*((_DWORD *)&j[2].Next + 2) )
            break;
          ((void (*)(void))qword_14043CDC0)();
          if ( !ExAcquireRundownProtection_0(&stru_14043CD60) )
            goto LABEL_185;
        }
        RtlpInterlockedPushEntrySList(&stru_14043CD70, j);
        v21 = -1073741789;
LABEL_189:
        ++dword_14043CDCC;
        dword_14043CDD0 += 64;
        ExReleaseRundownProtection_0(&stru_14043CD60);
LABEL_16:
        if ( v21 >= 0 )
        {
          v22 = *v17;
          v23 = v112;
          *((_DWORD *)v17 + 2) = v19;
          v24 = v113;
          *v17 = v22 & 0xFFFFFFFFFFFC0000uLL | 0x2A013;
          *((_OWORD *)v17 + 1) = v23;
          *(_QWORD *)&v23 = v114;
          *((_OWORD *)v17 + 2) = v24;
          v17[6] = v23;
          *((_QWORD *)&v16[1].Next + 1) += 64LL;
          ++*((_DWORD *)&v16[2].Next + 2);
          Next = v16[1].Next;
          if ( (__int64)v16[2].Next - *((_QWORD *)&v16[1].Next + 1) < SLODWORD(Next[5].Next) )
          {
            ((void (__fastcall *)(PSLIST_ENTRY))Next[6].Next)(v16);
          }
          else
          {
            RtlpInterlockedPushEntrySList((PSLIST_HEADER)&Next[2], v16);
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Next);
          }
          v21 = 0;
          goto LABEL_20;
        }
      }
      else
      {
LABEL_185:
        v21 = -1073741431;
      }
      _InterlockedExchangeAdd((_DWORD *)&xmmword_14043CF10 + 1, 1u);
      if ( v16 )
        PfFbLogEntryComplete(v16);
LABEL_20:
      if ( v21 >= 0 )
        return (unsigned int)v21;
      goto LABEL_63;
    }
    v21 = -1073741697;
LABEL_63:
    if ( (int)v1[1] <= 3 )
      ++dword_14043CF24;
    return (unsigned int)v21;
  }
  switch ( v4 )
  {
    case 0:
      v57 = 2 * *(unsigned __int16 *)(*((_QWORD *)v1 + 2) + 30LL);
      v21 = PfFbLogEntryReserve(&stru_14043CCE0);
      if ( v21 < 0 )
        goto LABEL_20;
      v58 = v105;
      *v105 = (8 * ((v57 + 65) & 0xFFFFFFF8)) | *v105 & 0x80000002 | 2;
      v58[1] = *(_DWORD *)(*((_QWORD *)v1 + 2) + 52LL);
      v58[2] = *(_DWORD *)(*((_QWORD *)v1 + 2) + 56LL);
      *((_QWORD *)v58 + 3) = *(_QWORD *)(*((_QWORD *)v1 + 2) + 8LL);
      v58[9] ^= (v58[9] ^ *(_DWORD *)(*((_QWORD *)v1 + 2) + 48LL)) & 0xF;
      v58[9] ^= ((unsigned __int8)v58[9] ^ (unsigned __int8)*(_DWORD *)(*((_QWORD *)v1 + 2) + 48LL)) & 0xF0;
      *((_QWORD *)v58 + 2) = *(_QWORD *)(*((_QWORD *)v1 + 2) + 16LL);
      v58[8] = *(_DWORD *)(*((_QWORD *)v1 + 2) + 24LL);
      v59 = 2 * *(_WORD *)(*((_QWORD *)v1 + 2) + 30LL);
      *((_WORD *)v58 + 20) = v59;
      *((_WORD *)v58 + 21) = v59;
      memmove(v58 + 14, *(const void **)(*((_QWORD *)v1 + 2) + 40LL), v57);
      v43 = (wchar_t *)(v58 + 14);
      *((_WORD *)v58 + *(unsigned __int16 *)(*((_QWORD *)v1 + 2) + 30LL) + 28) = 0;
      goto LABEL_32;
    case 1:
      PfLogDeleteHelper(2LL, *(_QWORD *)(*((_QWORD *)v1 + 2) + 8LL), *(unsigned int *)(*((_QWORD *)v1 + 2) + 56LL));
      return 0;
    case 2:
      v35 = *((_QWORD *)v1 + 2);
      if ( HIWORD(*(_DWORD *)(v35 + 32)) <= (unsigned int)(unsigned __int16)*(_DWORD *)(v35 + 32) )
        return 0;
      PfpRpFileKeyUpdate(&unk_14043D1D8, v35, 1LL);
      if ( dword_14043CE20 >= (unsigned int)dword_14043CE24 )
      {
        v21 = -1073741697;
        goto LABEL_63;
      }
      v36 = *((_QWORD *)v1 + 2);
      v37 = *(_DWORD *)(v36 + 32);
      v38 = (const void *)(*(_QWORD *)(v36 + 24) + 2LL * (unsigned __int16)v37);
      v39 = HIWORD(v37) - (unsigned __int16)v37;
      v40 = 2 * v39;
      v21 = PfFbLogEntryReserve(&stru_14043CCE0);
      if ( v21 < 0 )
        goto LABEL_20;
      v41 = v105;
      *v105 = *v105 & 0x80000000 | (8 * ((v40 + 53) & 0xFFFFFF8));
      v41[1] = *(_DWORD *)(*((_QWORD *)v1 + 2) + 40LL);
      v41[2] = *(_DWORD *)(*((_QWORD *)v1 + 2) + 44LL);
      *((_QWORD *)v41 + 3) = *(_QWORD *)(*((_QWORD *)v1 + 2) + 8LL);
      v41[8] = *(_DWORD *)(*((_QWORD *)v1 + 2) + 48LL);
      *((_QWORD *)v41 + 2) = *(_QWORD *)(*((_QWORD *)v1 + 2) + 16LL);
      v41[10] ^= (v41[10] ^ *(_DWORD *)(*((_QWORD *)v1 + 2) + 36LL)) & 1;
      v42 = v41[10] ^ ((unsigned __int8)v41[10] ^ (unsigned __int8)(*(_DWORD *)(*((_QWORD *)v1 + 2) + 36LL) >> 3)) & 2;
      v41[10] = v42;
      v41[10] = v42 ^ ((unsigned __int8)v42 ^ (unsigned __int8)(2 * *(_DWORD *)(*((_QWORD *)v1 + 2) + 36LL))) & 4;
      *((_WORD *)v41 + 21) = v39;
      memmove(v41 + 11, v38, v40);
      v43 = (wchar_t *)(v41 + 11);
      *((_WORD *)v41 + *((unsigned __int16 *)v41 + 21) + 22) = 0;
LABEL_32:
      wcsupr(v43);
      PfFbLogEntryComplete(ListEntry);
      return 0;
    case 3:
      v48 = *((_QWORD *)v1 + 2);
      if ( HIWORD(*(_DWORD *)(v48 + 32)) <= (unsigned int)(unsigned __int16)*(_DWORD *)(v48 + 32) )
        return 0;
      PfpRpFileKeyUpdate(&unk_14043D1D8, v48, 0LL);
      if ( dword_14043CE20 < (unsigned int)dword_14043CE24 )
      {
        PfLogDeleteHelper(0LL, *(_QWORD *)(*((_QWORD *)v1 + 2) + 16LL), *(unsigned int *)(*((_QWORD *)v1 + 2) + 44LL));
        return 0;
      }
      v21 = -1073741697;
      goto LABEL_63;
    case 8:
      v54 = *((_QWORD *)v1 + 2);
      v110[0] = 0LL;
      v55 = *(_QWORD *)(v54 + 16) + 4095LL;
      LODWORD(v110[0]) = *(_DWORD *)(v54 + 4);
      v110[1] = *(_QWORD *)(v54 + 8);
      v110[2] = (2LL * (*(_DWORD *)v54 & 3)) | v55 & 0xFFFFFFFFFFFFF000uLL;
      v51 = v110;
      v52 = ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
          + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8);
      v53 = 24LL;
      goto LABEL_60;
    case 13:
      v50 = (_QWORD *)*((_QWORD *)v1 + 2);
      if ( !v50[1] )
      {
        v21 = -1073741747;
        goto LABEL_63;
      }
      v111[1] = v50[1];
      v111[2] = (unsigned int)dword_1404D8610;
      v111[0] = *v50;
      v51 = v111;
      v52 = ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
          + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8);
      v53 = 31LL;
LABEL_60:
      PfLogEvent(v53, dword_14043D15C + (unsigned int)(v52 >> 10), v51);
      v21 = 0;
      break;
    default:
      goto LABEL_124;
  }
  return (unsigned int)v21;
}
