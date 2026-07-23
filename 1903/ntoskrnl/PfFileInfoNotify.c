/*
 * XREFs of PfFileInfoNotify @ 0x140093D90
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     ExWaitForRundownProtectionRelease @ 0x140082850 (ExWaitForRundownProtectionRelease.c)
 *     PfSnReferenceProcessTrace @ 0x140094AA0 (PfSnReferenceProcessTrace.c)
 *     PfSnLogPageFaultCommon @ 0x140094BF4 (PfSnLogPageFaultCommon.c)
 *     PfSnCheckLoggingForThread @ 0x14009529C (PfSnCheckLoggingForThread.c)
 *     PfLogEvent @ 0x1400956A8 (PfLogEvent.c)
 *     PfFbLogEntryReserve @ 0x140095794 (PfFbLogEntryReserve.c)
 *     PfFbLogEntryComplete @ 0x14009586C (PfFbLogEntryComplete.c)
 *     PfLogDeleteHelper @ 0x140096098 (PfLogDeleteHelper.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     ExRundownCompleted @ 0x1400E59B0 (ExRundownCompleted.c)
 *     _wcsupr @ 0x1401A0420 (_wcsupr.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401CB9F0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CBA30 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     PfpRpFileKeyUpdate @ 0x1406572D0 (PfpRpFileKeyUpdate.c)
 *     PfSnLogStreamCreate @ 0x140657908 (PfSnLogStreamCreate.c)
 *     PfSnNameRemoveAll @ 0x140657DE0 (PfSnNameRemoveAll.c)
 *     PfSnLogVolumeCreate @ 0x1406DE38C (PfSnLogVolumeCreate.c)
 */

__int64 __fastcall PfFileInfoNotify(__int64 a1)
{
  bool v1; // zf
  _DWORD *v2; // rsi
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
  PSLIST_ENTRY v15; // rbx
  unsigned __int64 *v16; // rdi
  __int64 v17; // rax
  int v18; // r15d
  PSLIST_ENTRY j; // rcx
  int v20; // r14d
  unsigned __int64 v21; // rax
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  _SLIST_ENTRY *Next; // rdi
  __int64 v26; // r14
  unsigned __int64 v27; // r12
  __int64 v28; // r15
  __int64 v29; // r13
  __int64 v30; // rcx
  __int64 v31; // rax
  struct _EX_RUNDOWN_REF *v32; // rdi
  int v33; // ecx
  __int64 v34; // rdx
  __int64 v35; // rax
  unsigned int v36; // edx
  const void *v37; // r12
  int v38; // ebx
  unsigned int v39; // r13d
  unsigned int *v40; // rdi
  int v41; // r9d
  wchar_t *v42; // rcx
  int v43; // r15d
  int v44; // r14d
  int v45; // eax
  int v46; // ecx
  __int64 v47; // rdx
  __int64 *v48; // rcx
  __int64 *v49; // r8
  unsigned __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rdx
  int v54; // eax
  unsigned int v55; // r13d
  unsigned int *v56; // rdi
  __int16 v57; // cx
  int v58; // ecx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v60; // r12d
  struct _KTHREAD *v61; // rax
  struct _KTHREAD *v62; // r14
  unsigned int SessionId; // r8d
  unsigned int v64; // edx
  __int64 v65; // rcx
  int v66; // eax
  __int64 v67; // rcx
  _KLOCK_ENTRY *v68; // r15
  struct _KTHREAD *v69; // rbx
  unsigned int v70; // edx
  __int64 v71; // rcx
  int v72; // eax
  __int64 v73; // rcx
  _KLOCK_ENTRY *v74; // r15
  __int64 v75; // rdx
  __int64 v76; // rdx
  int v77; // ecx
  struct _KTHREAD *v78; // rax
  unsigned int v79; // r12d
  struct _KTHREAD *v80; // rax
  __int64 i; // r14
  struct _KTHREAD *v82; // r14
  unsigned int v83; // r8d
  unsigned int v84; // edx
  __int64 v85; // rcx
  int v86; // eax
  __int64 v87; // rcx
  _KLOCK_ENTRY *v88; // r15
  __int64 v89; // rdx
  struct _KTHREAD *v90; // rbx
  unsigned int v91; // edx
  __int64 v92; // rcx
  int v93; // eax
  __int64 v94; // rcx
  _KLOCK_ENTRY *v95; // r15
  __int64 v96; // rdx
  int v97; // [rsp+30h] [rbp-69h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+38h] [rbp-61h]
  unsigned int *v99; // [rsp+40h] [rbp-59h]
  int v100; // [rsp+48h] [rbp-51h]
  int v101; // [rsp+4Ch] [rbp-4Dh]
  int v102; // [rsp+50h] [rbp-49h]
  int v103; // [rsp+54h] [rbp-45h]
  __int64 v104; // [rsp+58h] [rbp-41h] BYREF
  __int64 v105; // [rsp+60h] [rbp-39h]
  unsigned __int64 v106; // [rsp+68h] [rbp-31h]
  __int64 v107; // [rsp+70h] [rbp-29h] BYREF
  __int64 v108; // [rsp+78h] [rbp-21h]
  __int64 v109; // [rsp+80h] [rbp-19h]
  __int128 v110; // [rsp+88h] [rbp-11h]
  __int128 v111; // [rsp+98h] [rbp-1h]
  __int64 v112; // [rsp+A8h] [rbp+Fh]
  unsigned __int8 AbAllocationRegionCount; // [rsp+100h] [rbp+67h]
  unsigned __int8 v115; // [rsp+100h] [rbp+67h]
  unsigned __int8 v116; // [rsp+100h] [rbp+67h]
  unsigned __int8 v117; // [rsp+100h] [rbp+67h]
  __int64 v118; // [rsp+108h] [rbp+6Fh] BYREF
  int v119; // [rsp+110h] [rbp+77h] BYREF
  int v120; // [rsp+118h] [rbp+7Fh] BYREF

  v1 = *(_DWORD *)a1 == 15;
  v2 = (_DWORD *)a1;
  v104 = 0LL;
  v105 = 0LL;
  v106 = 0LL;
  v107 = 0LL;
  v108 = 0LL;
  v109 = 0LL;
  ListEntry = 0LL;
  v99 = 0LL;
  if ( !v1 )
  {
    v20 = -1073741811;
    goto LABEL_58;
  }
  v3 = *(_DWORD *)(a1 + 8);
  if ( (v3 & 8) != 0 )
  {
    v33 = *(_DWORD *)(a1 + 4);
    if ( v33 == 7 )
    {
      v2[4] = _InterlockedIncrement(&dword_140503A10);
    }
    else
    {
      v58 = v33 - 10;
      if ( !v58 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140467C88, 0LL);
        v60 = -1;
        if ( qword_140467C78 )
        {
          v20 = -1073741791;
        }
        else
        {
          v61 = KeGetCurrentThread();
          --v61->KernelApcDisable;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140467C90, 0LL);
          dword_140467CA8 &= ~1u;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140467C90, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(&qword_140467C90);
          v120 = 0;
          v62 = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_140467C90) == 1 )
            SessionId = MmGetSessionIdEx((__int64)v62->ApcState.Process);
          else
            SessionId = -1;
          --v62->SpecialApcDisable;
          ++v62->AbAllocationRegionCount;
          v64 = ((char)v62->AbEntrySummary | (char)v62->AbOrphanedEntrySummary) ^ 0x3F;
          AbAllocationRegionCount = v62->AbAllocationRegionCount;
          v1 = !_BitScanReverse((unsigned int *)&v65, v64);
          v102 = v65;
          if ( v1 )
            goto LABEL_88;
          while ( 1 )
          {
            v66 = 1 << v65;
            v67 = v65;
            v68 = &v62->LockEntries[v67];
            v64 &= ~v66;
            if ( (v68->AcquiredByte & 1) != 0
              && (*(_DWORD *)&v68->LockState.0 & 1) == 0
              && (*(_QWORD *)&v68->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_140467C90 & 0x7FFFFFFFFFFFFFFCLL)
              && v68->LockState.SessionId == SessionId )
            {
              v68->AcquiredByte &= ~1u;
              if ( v68->LockState.0 )
                break;
            }
            v1 = !_BitScanReverse((unsigned int *)&v65, v64);
            v102 = v65;
            if ( v1 )
              goto LABEL_88;
          }
          if ( !v68 )
          {
LABEL_88:
            if ( (*((_DWORD *)&v62->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)v62, (ULONG_PTR)&qword_140467C90, SessionId, 0LL);
          }
          else
          {
            v68->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v68->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&v62->LockEntries[v67].TreeNode);
            v120 = v68->BoostBitmap.AllFields & 0x1FFFF;
            v68->BoostBitmap.AllFields &= 0xFFFE0000;
            v68->ThreadLocalFlags &= ~1u;
            v68->LockState.0 = 0LL;
            v75 = ((char *)v68 - (char *)v62 - 800) / 96;
            if ( AbAllocationRegionCount == 1 )
              v62->AbEntrySummary |= 1 << v75;
            else
              _InterlockedOr8((volatile signed __int8 *)&v62->AbOrphanedEntrySummary, 1 << v75);
          }
          --v62->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts((ULONG_PTR)v62, (__int64)&qword_140467C90, &v120);
          v1 = v62->SpecialApcDisable++ == -1;
          if ( v1 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v62->ApcState.ApcListHead[0].Flink != &v62->152 )
            KiCheckForKernelApcDelivery();
          KeLeaveCriticalRegion();
          (*(void (__fastcall **)(__int64 (__fastcall *)(ULONG_PTR)))(*((_QWORD *)v2 + 2) + 32LL))(PfpPrefetchSharedConflictNotifyStart);
          qword_140467C78 = *((_QWORD *)v2 + 2);
          v20 = 0;
          _InterlockedExchange64((volatile __int64 *)&stru_140467C80, 0LL);
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140467C88, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(&qword_140467C88);
        v97 = 0;
        v69 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_140467C88) == 1 )
          v60 = MmGetSessionIdEx((__int64)v69->ApcState.Process);
        --v69->SpecialApcDisable;
        ++v69->AbAllocationRegionCount;
        v70 = ((char)v69->AbEntrySummary | (char)v69->AbOrphanedEntrySummary) ^ 0x3F;
        v115 = v69->AbAllocationRegionCount;
        v1 = !_BitScanReverse((unsigned int *)&v71, v70);
        v103 = v71;
        if ( v1 )
          goto LABEL_100;
        while ( 1 )
        {
          v72 = 1 << v71;
          v73 = v71;
          v74 = &v69->LockEntries[v73];
          v70 &= ~v72;
          if ( (v74->AcquiredByte & 1) != 0
            && (*(_DWORD *)&v74->LockState.0 & 1) == 0
            && (*(_QWORD *)&v74->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_140467C88 & 0x7FFFFFFFFFFFFFFCLL)
            && v74->LockState.SessionId == v60 )
          {
            v74->AcquiredByte &= ~1u;
            if ( v74->LockState.0 )
              break;
          }
          v1 = !_BitScanReverse((unsigned int *)&v71, v70);
          v103 = v71;
          if ( v1 )
            goto LABEL_100;
        }
        if ( !v74 )
        {
LABEL_100:
          if ( (*((_DWORD *)&v69->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v69, (ULONG_PTR)&qword_140467C88, v60, 0LL);
        }
        else
        {
          v74->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v74->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v69->LockEntries[v73].TreeNode);
          v97 = v74->BoostBitmap.AllFields & 0x1FFFF;
          v74->BoostBitmap.AllFields &= 0xFFFE0000;
          v74->ThreadLocalFlags &= ~1u;
          v74->LockState.0 = 0LL;
          v76 = ((char *)v74 - (char *)v69 - 800) / 96;
          if ( v115 == 1 )
            v69->AbEntrySummary |= 1 << v76;
          else
            _InterlockedOr8((volatile signed __int8 *)&v69->AbOrphanedEntrySummary, 1 << v76);
        }
        --v69->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v69, (__int64)&qword_140467C88, &v97);
        v1 = v69->SpecialApcDisable++ == -1;
        if ( v1 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v69->ApcState.ApcListHead[0].Flink != &v69->152 )
          KiCheckForKernelApcDelivery();
        KeLeaveCriticalRegion();
        goto LABEL_20;
      }
      v77 = v58 - 1;
      if ( !v77 )
      {
        v78 = KeGetCurrentThread();
        --v78->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140467C88, 0LL);
        v79 = -1;
        if ( qword_140467C78 )
        {
          v80 = KeGetCurrentThread();
          --v80->KernelApcDisable;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140467C90, 0LL);
          dword_140467CA8 |= 1u;
          for ( i = qword_140467C98; (__int64 *)i != &qword_140467C98; i = *(_QWORD *)i )
          {
            *(_DWORD *)(i + 68) |= 4u;
            KeSetEvent((PRKEVENT)(i + 88), 0, 0);
          }
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140467C90, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(&qword_140467C90);
          LODWORD(v118) = 0;
          v82 = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_140467C90) == 1 )
            v83 = MmGetSessionIdEx((__int64)v82->ApcState.Process);
          else
            v83 = -1;
          --v82->SpecialApcDisable;
          ++v82->AbAllocationRegionCount;
          v84 = ((char)v82->AbEntrySummary | (char)v82->AbOrphanedEntrySummary) ^ 0x3F;
          v116 = v82->AbAllocationRegionCount;
          v1 = !_BitScanReverse((unsigned int *)&v85, v84);
          v100 = v85;
          if ( v1 )
            goto LABEL_152;
          while ( 1 )
          {
            v86 = 1 << v85;
            v87 = v85;
            v88 = &v82->LockEntries[v87];
            v84 &= ~v86;
            if ( (v88->AcquiredByte & 1) != 0
              && (*(_DWORD *)&v88->LockState.0 & 1) == 0
              && (*(_QWORD *)&v88->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_140467C90 & 0x7FFFFFFFFFFFFFFCLL)
              && v88->LockState.SessionId == v83 )
            {
              v88->AcquiredByte &= ~1u;
              if ( v88->LockState.0 )
                break;
            }
            v1 = !_BitScanReverse((unsigned int *)&v85, v84);
            v100 = v85;
            if ( v1 )
              goto LABEL_152;
          }
          if ( !v88 )
          {
LABEL_152:
            if ( (*((_DWORD *)&v82->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)v82, (ULONG_PTR)&qword_140467C90, v83, 0LL);
          }
          else
          {
            v88->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v88->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&v82->LockEntries[v87].TreeNode);
            LODWORD(v118) = v88->BoostBitmap.AllFields & 0x1FFFF;
            v88->BoostBitmap.AllFields &= 0xFFFE0000;
            v88->ThreadLocalFlags &= ~1u;
            v88->LockState.0 = 0LL;
            v89 = ((char *)v88 - (char *)v82 - 800) / 96;
            if ( v116 == 1 )
              v82->AbEntrySummary |= 1 << v89;
            else
              _InterlockedOr8((volatile signed __int8 *)&v82->AbOrphanedEntrySummary, 1 << v89);
          }
          --v82->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts((ULONG_PTR)v82, (__int64)&qword_140467C90, &v118);
          v1 = v82->SpecialApcDisable++ == -1;
          if ( v1 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v82->ApcState.ApcListHead[0].Flink != &v82->152 )
            KiCheckForKernelApcDelivery();
          KeLeaveCriticalRegion();
          ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&stru_140467C80);
          ExRundownCompleted((PEX_RUNDOWN_REF)&stru_140467C80);
          qword_140467C78 = 0LL;
          v20 = 0;
        }
        else
        {
          v20 = -1073741275;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140467C88, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(&qword_140467C88);
        v119 = 0;
        v90 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_140467C88) == 1 )
          v79 = MmGetSessionIdEx((__int64)v90->ApcState.Process);
        --v90->SpecialApcDisable;
        ++v90->AbAllocationRegionCount;
        v91 = ((char)v90->AbEntrySummary | (char)v90->AbOrphanedEntrySummary) ^ 0x3F;
        v117 = v90->AbAllocationRegionCount;
        v1 = !_BitScanReverse((unsigned int *)&v92, v91);
        v101 = v92;
        if ( v1 )
          goto LABEL_176;
        while ( 1 )
        {
          v93 = 1 << v92;
          v94 = v92;
          v95 = &v90->LockEntries[v94];
          v91 &= ~v93;
          if ( (v95->AcquiredByte & 1) != 0
            && (*(_DWORD *)&v95->LockState.0 & 1) == 0
            && (*(_QWORD *)&v95->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_140467C88 & 0x7FFFFFFFFFFFFFFCLL)
            && v95->LockState.SessionId == v79 )
          {
            v95->AcquiredByte &= ~1u;
            if ( v95->LockState.0 )
              break;
          }
          v1 = !_BitScanReverse((unsigned int *)&v92, v91);
          v101 = v92;
          if ( v1 )
            goto LABEL_176;
        }
        if ( !v95 )
        {
LABEL_176:
          if ( (*((_DWORD *)&v90->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v90, (ULONG_PTR)&qword_140467C88, v79, 0LL);
        }
        else
        {
          v95->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v95->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v90->LockEntries[v94].TreeNode);
          v119 = v95->BoostBitmap.AllFields & 0x1FFFF;
          v95->BoostBitmap.AllFields &= 0xFFFE0000;
          v95->ThreadLocalFlags &= ~1u;
          v95->LockState.0 = 0LL;
          v96 = ((char *)v95 - (char *)v90 - 800) / 96;
          if ( v117 == 1 )
            v90->AbEntrySummary |= 1 << v96;
          else
            _InterlockedOr8((volatile signed __int8 *)&v90->AbOrphanedEntrySummary, 1 << v96);
        }
        --v90->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v90, (__int64)&qword_140467C88, &v119);
        v1 = v90->SpecialApcDisable++ == -1;
        if ( v1 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v90->ApcState.ApcListHead[0].Flink != &v90->152 )
          KiCheckForKernelApcDelivery();
        KeLeaveCriticalRegion();
        goto LABEL_20;
      }
      if ( v77 != 1 )
      {
LABEL_127:
        v20 = -1073741637;
        goto LABEL_58;
      }
      if ( (dword_140467DD0 & 2) != 0 )
      {
        v20 = -1073741431;
        goto LABEL_58;
      }
    }
    return 0;
  }
  if ( (v3 & 4) != 0 )
  {
    v45 = *(_DWORD *)(a1 + 4);
    if ( v45 == 2 )
    {
      PfSnLogStreamCreate(*(_QWORD *)(a1 + 16));
    }
    else if ( v45 )
    {
      if ( v45 == 3 )
        PfSnNameRemoveAll(*(_QWORD *)(a1 + 16));
    }
    else
    {
      PfSnLogVolumeCreate(*(_QWORD *)(a1 + 16));
    }
  }
  if ( (v2[2] & 1) == 0 )
    return 0;
  if ( dword_140467820 >= (unsigned int)dword_140467824 )
  {
    v46 = v2[1];
    v4 = v46;
    if ( v46 != 4 && v46 != 2 && v46 != 3 )
    {
      v20 = -1073741697;
      goto LABEL_58;
    }
  }
  else
  {
    v4 = v2[1];
  }
  if ( v4 == 4 )
  {
    v5 = (__int64 *)*((_QWORD *)v2 + 2);
    v6 = *((unsigned int *)v5 + 4) + 4095LL;
    v7 = (v6 + (unsigned __int64)(v5[1] & 0xFFF)) >> 12;
    if ( PfSnNumActiveTraces )
    {
      v26 = v5[4];
      v27 = (v6 + (unsigned __int64)(v5[1] & 0xFFF)) >> 12;
      v28 = v5[1];
      v29 = v5[3];
      v30 = *(_QWORD *)(v26 + 544);
      v118 = *v5;
      v31 = PfSnReferenceProcessTrace(v30);
      v32 = (struct _EX_RUNDOWN_REF *)v31;
      if ( v31 )
      {
        if ( (unsigned int)PfSnCheckLoggingForThread(v26, v31, 0LL) )
        {
          v43 = v28 & 0xFFFFF000;
          if ( v7 )
          {
            v44 = v118;
            do
            {
              if ( (int)PfSnLogPageFaultCommon((_DWORD)v32, v44, v29, v43, 0) < 0 )
                break;
              v43 += 4096;
              --v27;
            }
            while ( v27 );
            v2 = (_DWORD *)a1;
          }
        }
        ExReleaseRundownProtection_0(v32 + 45);
      }
    }
    if ( dword_140467820 < (unsigned int)dword_140467824 )
    {
      v8 = *((_QWORD *)v2 + 2);
      v9 = *(_QWORD *)(v8 + 32);
      v10 = *(int *)(v8 + 20);
      v11 = *(_QWORD *)(v8 + 8);
      v12 = *(_QWORD *)(v8 + 24);
      v13 = *(_QWORD *)(v9 + 544);
      v14 = (*(_DWORD *)(v9 + 1760) >> 12) & 7;
      if ( (*(_DWORD *)(v13 + 780) & 0x100000) != 0 )
      {
        v54 = 2;
        if ( v14 < 2 )
          v54 = (*(_DWORD *)(v9 + 1760) >> 12) & 7;
        v14 = v54;
      }
      if ( v14 < dword_14046636C )
      {
        v20 = 0;
        goto LABEL_20;
      }
      *(_QWORD *)&v110 = v12;
      *(_QWORD *)&v111 = v7 | (v10 << 63);
      v15 = 0LL;
      v16 = 0LL;
      v17 = v13 ^ *(_QWORD *)(v13 + 784);
      *((_QWORD *)&v110 + 1) = v11 >> 12;
      *((_QWORD *)&v111 + 1) = v17 & 0x1FFFFFFFFFFFFFFFLL;
      LODWORD(v112) = dword_140503A10;
      HIDWORD(v112) = *(_DWORD *)(v13 + 744);
      v18 = dword_140467B5C
          + ((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
            + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10);
      if ( ExAcquireRundownProtection_0(&stru_140467760) )
      {
        while ( 1 )
        {
          for ( j = RtlpInterlockedPopEntrySList(&stru_140467780); !j; j = RtlpInterlockedPopEntrySList(&stru_140467780) )
          {
            j = RtlpInterlockedPopEntrySList(&stru_140467770);
            if ( j )
              break;
            v20 = ((__int64 (__fastcall *)(struct _EX_RUNDOWN_REF *))qword_1404677B8)(&stru_140467760);
            if ( v20 < 0 )
              goto LABEL_44;
          }
          if ( (__int64)j[2].Next - *((_QWORD *)&j[1].Next + 1) >= 64 )
          {
            v16 = (unsigned __int64 *)*((_QWORD *)&j[1].Next + 1);
            v15 = j;
            v20 = 0;
            goto LABEL_16;
          }
          if ( !*((_DWORD *)&j[2].Next + 2) )
            break;
          ((void (*)(void))qword_1404677C0)();
          if ( !ExAcquireRundownProtection_0(&stru_140467760) )
            goto LABEL_188;
        }
        RtlpInterlockedPushEntrySList(&stru_140467770, j);
        v20 = -1073741789;
LABEL_44:
        ++dword_1404677CC;
        dword_1404677D0 += 64;
        ExReleaseRundownProtection_0(&stru_140467760);
LABEL_16:
        if ( v20 >= 0 )
        {
          v21 = *v16;
          v22 = v110;
          *((_DWORD *)v16 + 2) = v18;
          v23 = v111;
          *v16 = v21 & 0xFFFFFFFFFFFC0000uLL | 0x2A013;
          *((_OWORD *)v16 + 1) = v22;
          *(_QWORD *)&v22 = v112;
          *((_OWORD *)v16 + 2) = v23;
          v16[6] = v22;
          *((_QWORD *)&v15[1].Next + 1) += 64LL;
          ++*((_DWORD *)&v15[2].Next + 2);
          Next = v15[1].Next;
          if ( (__int64)v15[2].Next - *((_QWORD *)&v15[1].Next + 1) < SLODWORD(Next[5].Next) )
          {
            ((void (__fastcall *)(PSLIST_ENTRY))Next[6].Next)(v15);
          }
          else
          {
            RtlpInterlockedPushEntrySList((PSLIST_HEADER)&Next[2], v15);
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Next);
          }
          v20 = 0;
          goto LABEL_20;
        }
      }
      else
      {
LABEL_188:
        v20 = -1073741431;
      }
      _InterlockedExchangeAdd((_DWORD *)&xmmword_140467910 + 1, 1u);
      if ( v15 )
        PfFbLogEntryComplete(v15);
LABEL_20:
      if ( v20 >= 0 )
        return (unsigned int)v20;
      goto LABEL_58;
    }
    v20 = -1073741697;
LABEL_58:
    if ( (int)v2[1] <= 3 )
      ++dword_140467924;
    return (unsigned int)v20;
  }
  switch ( v4 )
  {
    case 0:
      v55 = 2 * *(unsigned __int16 *)(*((_QWORD *)v2 + 2) + 30LL);
      v20 = PfFbLogEntryReserve(&stru_1404676E0);
      if ( v20 < 0 )
        goto LABEL_20;
      v56 = v99;
      *v99 = (8 * ((v55 + 65) & 0xFFFFFFF8)) | *v99 & 0x80000002 | 2;
      v56[1] = *(_DWORD *)(*((_QWORD *)v2 + 2) + 52LL);
      v56[2] = *(_DWORD *)(*((_QWORD *)v2 + 2) + 56LL);
      *((_QWORD *)v56 + 3) = *(_QWORD *)(*((_QWORD *)v2 + 2) + 8LL);
      v56[9] ^= (v56[9] ^ *(_DWORD *)(*((_QWORD *)v2 + 2) + 48LL)) & 0xF;
      v56[9] ^= ((unsigned __int8)v56[9] ^ (unsigned __int8)*(_DWORD *)(*((_QWORD *)v2 + 2) + 48LL)) & 0xF0;
      *((_QWORD *)v56 + 2) = *(_QWORD *)(*((_QWORD *)v2 + 2) + 16LL);
      v56[8] = *(_DWORD *)(*((_QWORD *)v2 + 2) + 24LL);
      v57 = 2 * *(_WORD *)(*((_QWORD *)v2 + 2) + 30LL);
      *((_WORD *)v56 + 20) = v57;
      *((_WORD *)v56 + 21) = v57;
      memmove(v56 + 14, *(const void **)(*((_QWORD *)v2 + 2) + 40LL), v55);
      v42 = (wchar_t *)(v56 + 14);
      *((_WORD *)v56 + *(unsigned __int16 *)(*((_QWORD *)v2 + 2) + 30LL) + 28) = 0;
      goto LABEL_32;
    case 1:
      PfLogDeleteHelper(2LL, *(_QWORD *)(*((_QWORD *)v2 + 2) + 8LL), *(unsigned int *)(*((_QWORD *)v2 + 2) + 56LL));
      return 0;
    case 2:
      v34 = *((_QWORD *)v2 + 2);
      if ( HIWORD(*(_DWORD *)(v34 + 32)) <= (unsigned int)(unsigned __int16)*(_DWORD *)(v34 + 32) )
        return 0;
      PfpRpFileKeyUpdate(&unk_140467BD8, v34, 1LL);
      if ( dword_140467820 >= (unsigned int)dword_140467824 )
      {
        v20 = -1073741697;
        goto LABEL_58;
      }
      v35 = *((_QWORD *)v2 + 2);
      v36 = *(_DWORD *)(v35 + 32);
      v37 = (const void *)(*(_QWORD *)(v35 + 24) + 2LL * (unsigned __int16)v36);
      v38 = HIWORD(v36) - (unsigned __int16)v36;
      v39 = 2 * v38;
      v20 = PfFbLogEntryReserve(&stru_1404676E0);
      if ( v20 < 0 )
        goto LABEL_20;
      v40 = v99;
      *v99 = *v99 & 0x80000000 | (8 * ((v39 + 53) & 0xFFFFFF8));
      v40[1] = *(_DWORD *)(*((_QWORD *)v2 + 2) + 40LL);
      v40[2] = *(_DWORD *)(*((_QWORD *)v2 + 2) + 44LL);
      *((_QWORD *)v40 + 3) = *(_QWORD *)(*((_QWORD *)v2 + 2) + 8LL);
      v40[8] = *(_DWORD *)(*((_QWORD *)v2 + 2) + 48LL);
      *((_QWORD *)v40 + 2) = *(_QWORD *)(*((_QWORD *)v2 + 2) + 16LL);
      v40[10] ^= (v40[10] ^ *(_DWORD *)(*((_QWORD *)v2 + 2) + 36LL)) & 1;
      v41 = v40[10] ^ ((unsigned __int8)v40[10] ^ (unsigned __int8)(*(_DWORD *)(*((_QWORD *)v2 + 2) + 36LL) >> 3)) & 2;
      v40[10] = v41;
      v40[10] = v41 ^ ((unsigned __int8)v41 ^ (unsigned __int8)(2 * *(_DWORD *)(*((_QWORD *)v2 + 2) + 36LL))) & 4;
      *((_WORD *)v40 + 21) = v38;
      memmove(v40 + 11, v37, v39);
      v42 = (wchar_t *)(v40 + 11);
      *((_WORD *)v40 + *((unsigned __int16 *)v40 + 21) + 22) = 0;
LABEL_32:
      wcsupr(v42);
      PfFbLogEntryComplete(ListEntry);
      return 0;
    case 3:
      v47 = *((_QWORD *)v2 + 2);
      if ( HIWORD(*(_DWORD *)(v47 + 32)) <= (unsigned int)(unsigned __int16)*(_DWORD *)(v47 + 32) )
        return 0;
      PfpRpFileKeyUpdate(&unk_140467BD8, v47, 0LL);
      if ( dword_140467820 < (unsigned int)dword_140467824 )
      {
        PfLogDeleteHelper(0LL, *(_QWORD *)(*((_QWORD *)v2 + 2) + 16LL), *(unsigned int *)(*((_QWORD *)v2 + 2) + 44LL));
        return 0;
      }
      v20 = -1073741697;
      goto LABEL_58;
    case 8:
      v52 = *((_QWORD *)v2 + 2);
      v49 = &v104;
      HIDWORD(v104) = 0;
      v53 = *(_QWORD *)(v52 + 16);
      LODWORD(v104) = *(_DWORD *)(v52 + 4);
      v105 = *(_QWORD *)(v52 + 8);
      v106 = (2LL * (*(_DWORD *)v52 & 3)) | (v53 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      v50 = ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
          + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24);
      v51 = 24LL;
      goto LABEL_62;
    case 13:
      v48 = (__int64 *)*((_QWORD *)v2 + 2);
      if ( !v48[1] )
      {
        v20 = -1073741747;
        goto LABEL_58;
      }
      v108 = v48[1];
      v49 = &v107;
      v109 = (unsigned int)dword_140503A10;
      v107 = *v48;
      v50 = ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
          + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24);
      v51 = 31LL;
LABEL_62:
      PfLogEvent(v51, dword_140467B5C + (unsigned int)(v50 >> 10), v49);
      v20 = 0;
      break;
    default:
      goto LABEL_127;
  }
  return (unsigned int)v20;
}
