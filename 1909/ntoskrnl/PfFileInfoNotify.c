/*
 * XREFs of PfFileInfoNotify @ 0x1400D10B0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     ExWaitForRundownProtectionRelease @ 0x140082C50 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     PfSnReferenceProcessTrace @ 0x1400D1DC0 (PfSnReferenceProcessTrace.c)
 *     PfSnLogPageFaultCommon @ 0x1400D1F14 (PfSnLogPageFaultCommon.c)
 *     PfSnCheckLoggingForThread @ 0x1400D25BC (PfSnCheckLoggingForThread.c)
 *     PfLogEvent @ 0x1400D29C8 (PfLogEvent.c)
 *     PfFbLogEntryReserve @ 0x1400D2AB4 (PfFbLogEntryReserve.c)
 *     PfFbLogEntryComplete @ 0x1400D2B8C (PfFbLogEntryComplete.c)
 *     PfLogDeleteHelper @ 0x1400D33B8 (PfLogDeleteHelper.c)
 *     ExRundownCompleted @ 0x1400EA950 (ExRundownCompleted.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     _wcsupr @ 0x1401A0B40 (_wcsupr.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401CC570 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CC5B0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     PfpRpFileKeyUpdate @ 0x14066A2F0 (PfpRpFileKeyUpdate.c)
 *     PfSnLogStreamCreate @ 0x14066A928 (PfSnLogStreamCreate.c)
 *     PfSnNameRemoveAll @ 0x14066AE00 (PfSnNameRemoveAll.c)
 *     PfSnLogVolumeCreate @ 0x1406DF72C (PfSnLogVolumeCreate.c)
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
  __int64 v15; // rcx
  PSLIST_ENTRY v16; // rbx
  unsigned __int64 *v17; // rdi
  __int64 v18; // rax
  int v19; // r15d
  PSLIST_ENTRY j; // rcx
  int v21; // r14d
  unsigned __int64 v22; // rax
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  _SLIST_ENTRY *Next; // rdi
  __int64 v27; // r14
  unsigned __int64 v28; // r12
  __int64 v29; // r15
  __int64 v30; // r13
  __int64 v31; // rcx
  __int64 v32; // rax
  struct _EX_RUNDOWN_REF *v33; // rdi
  int v34; // ecx
  __int64 v35; // rdx
  __int64 v36; // rax
  unsigned int v37; // edx
  const void *v38; // r12
  int v39; // ebx
  unsigned int v40; // r13d
  unsigned int *v41; // rdi
  int v42; // r9d
  wchar_t *v43; // rcx
  int v44; // r15d
  int v45; // r14d
  int v46; // eax
  int v47; // ecx
  __int64 v48; // rdx
  __int64 *v49; // rcx
  __int64 *v50; // r8
  unsigned __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rdx
  int v55; // eax
  unsigned int v56; // r13d
  unsigned int *v57; // rdi
  __int16 v58; // cx
  int v59; // ecx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v61; // r12d
  struct _KTHREAD *v62; // rax
  struct _KTHREAD *v63; // r14
  unsigned int SessionId; // r8d
  unsigned int v65; // edx
  __int64 v66; // rcx
  int v67; // eax
  __int64 v68; // rcx
  _KLOCK_ENTRY *v69; // r15
  __int64 v70; // rdx
  __int64 v71; // rcx
  struct _KTHREAD *v72; // rbx
  unsigned int v73; // edx
  __int64 v74; // rcx
  int v75; // eax
  __int64 v76; // rcx
  _KLOCK_ENTRY *v77; // r15
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rdx
  __int64 v81; // rdx
  int v82; // ecx
  struct _KTHREAD *v83; // rax
  unsigned int v84; // r12d
  struct _KTHREAD *v85; // rax
  __int64 i; // r14
  struct _KTHREAD *v87; // r14
  unsigned int v88; // r8d
  unsigned int v89; // edx
  __int64 v90; // rcx
  int v91; // eax
  __int64 v92; // rcx
  _KLOCK_ENTRY *v93; // r15
  __int64 v94; // rdx
  __int64 v95; // rdx
  __int64 v96; // rcx
  struct _KTHREAD *v97; // rbx
  unsigned int v98; // edx
  __int64 v99; // rcx
  int v100; // eax
  __int64 v101; // rcx
  _KLOCK_ENTRY *v102; // r15
  __int64 v103; // rdx
  __int64 v104; // rdx
  __int64 v105; // rcx
  int v106; // [rsp+30h] [rbp-69h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+38h] [rbp-61h]
  unsigned int *v108; // [rsp+40h] [rbp-59h]
  int v109; // [rsp+48h] [rbp-51h]
  int v110; // [rsp+4Ch] [rbp-4Dh]
  int v111; // [rsp+50h] [rbp-49h]
  int v112; // [rsp+54h] [rbp-45h]
  __int64 v113; // [rsp+58h] [rbp-41h] BYREF
  __int64 v114; // [rsp+60h] [rbp-39h]
  unsigned __int64 v115; // [rsp+68h] [rbp-31h]
  __int64 v116; // [rsp+70h] [rbp-29h] BYREF
  __int64 v117; // [rsp+78h] [rbp-21h]
  __int64 v118; // [rsp+80h] [rbp-19h]
  __int128 v119; // [rsp+88h] [rbp-11h]
  __int128 v120; // [rsp+98h] [rbp-1h]
  unsigned __int64 v121; // [rsp+A8h] [rbp+Fh]
  unsigned __int8 AbAllocationRegionCount; // [rsp+100h] [rbp+67h]
  unsigned __int8 v124; // [rsp+100h] [rbp+67h]
  unsigned __int8 v125; // [rsp+100h] [rbp+67h]
  unsigned __int8 v126; // [rsp+100h] [rbp+67h]
  __int64 v127; // [rsp+108h] [rbp+6Fh] BYREF
  int v128; // [rsp+110h] [rbp+77h] BYREF
  int v129; // [rsp+118h] [rbp+7Fh] BYREF

  v1 = *(_DWORD *)a1 == 15;
  v2 = (_DWORD *)a1;
  v113 = 0LL;
  v114 = 0LL;
  v115 = 0LL;
  v116 = 0LL;
  v117 = 0LL;
  v118 = 0LL;
  ListEntry = 0LL;
  v108 = 0LL;
  if ( !v1 )
  {
    v21 = -1073741811;
    goto LABEL_58;
  }
  v3 = *(_DWORD *)(a1 + 8);
  if ( (v3 & 8) != 0 )
  {
    v34 = *(_DWORD *)(a1 + 4);
    if ( v34 == 7 )
    {
      v2[4] = _InterlockedIncrement(&dword_140503750);
    }
    else
    {
      v59 = v34 - 10;
      if ( !v59 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140467988, 0LL);
        v61 = -1;
        if ( qword_140467978 )
        {
          v21 = -1073741791;
        }
        else
        {
          v62 = KeGetCurrentThread();
          --v62->KernelApcDisable;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140467990, 0LL);
          dword_1404679A8 &= ~1u;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140467990, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_140467990);
          v129 = 0;
          v63 = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_140467990) == 1 )
            SessionId = MmGetSessionIdEx((__int64)v63->ApcState.Process);
          else
            SessionId = -1;
          --v63->SpecialApcDisable;
          ++v63->AbAllocationRegionCount;
          v65 = ((char)v63->AbEntrySummary | (char)v63->AbOrphanedEntrySummary) ^ 0x3F;
          AbAllocationRegionCount = v63->AbAllocationRegionCount;
          v1 = !_BitScanReverse((unsigned int *)&v66, v65);
          v111 = v66;
          if ( v1 )
            goto LABEL_88;
          while ( 1 )
          {
            v67 = 1 << v66;
            v68 = v66;
            v69 = &v63->LockEntries[v68];
            v65 &= ~v67;
            if ( (v69->AcquiredByte & 1) != 0
              && (*(_DWORD *)&v69->LockState.0 & 1) == 0
              && (*(_QWORD *)&v69->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_140467990 & 0x7FFFFFFFFFFFFFFCLL)
              && v69->LockState.SessionId == SessionId )
            {
              v69->AcquiredByte &= ~1u;
              if ( v69->LockState.0 )
                break;
            }
            v1 = !_BitScanReverse((unsigned int *)&v66, v65);
            v111 = v66;
            if ( v1 )
              goto LABEL_88;
          }
          if ( !v69 )
          {
LABEL_88:
            if ( (*((_DWORD *)&v63->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)v63, (ULONG_PTR)&qword_140467990, SessionId, 0LL);
          }
          else
          {
            v69->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v69->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&v63->LockEntries[v68].TreeNode);
            v129 = v69->BoostBitmap.AllFields & 0x1FFFF;
            v69->BoostBitmap.AllFields &= 0xFFFE0000;
            v69->ThreadLocalFlags &= ~1u;
            v69->LockState.0 = 0LL;
            v80 = ((char *)v69 - (char *)v63 - 800) / 96;
            if ( AbAllocationRegionCount == 1 )
              v63->AbEntrySummary |= 1 << v80;
            else
              _InterlockedOr8((volatile signed __int8 *)&v63->AbOrphanedEntrySummary, 1 << v80);
          }
          --v63->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts((ULONG_PTR)v63, (__int64)&qword_140467990, &v129);
          v1 = v63->SpecialApcDisable++ == -1;
          if ( v1 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v63->ApcState.ApcListHead[0].Flink != &v63->152 )
            KiCheckForKernelApcDelivery(v71, v70);
          KeLeaveCriticalRegion();
          (*(void (__fastcall **)(__int64 (__fastcall *)(ULONG_PTR)))(*((_QWORD *)v2 + 2) + 32LL))(PfpPrefetchSharedConflictNotifyStart);
          qword_140467978 = *((_QWORD *)v2 + 2);
          v21 = 0;
          _InterlockedExchange64((volatile __int64 *)&stru_140467980, 0LL);
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140467988, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_140467988);
        v106 = 0;
        v72 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_140467988) == 1 )
          v61 = MmGetSessionIdEx((__int64)v72->ApcState.Process);
        --v72->SpecialApcDisable;
        ++v72->AbAllocationRegionCount;
        v73 = ((char)v72->AbEntrySummary | (char)v72->AbOrphanedEntrySummary) ^ 0x3F;
        v124 = v72->AbAllocationRegionCount;
        v1 = !_BitScanReverse((unsigned int *)&v74, v73);
        v112 = v74;
        if ( v1 )
          goto LABEL_100;
        while ( 1 )
        {
          v75 = 1 << v74;
          v76 = v74;
          v77 = &v72->LockEntries[v76];
          v73 &= ~v75;
          if ( (v77->AcquiredByte & 1) != 0
            && (*(_DWORD *)&v77->LockState.0 & 1) == 0
            && (*(_QWORD *)&v77->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_140467988 & 0x7FFFFFFFFFFFFFFCLL)
            && v77->LockState.SessionId == v61 )
          {
            v77->AcquiredByte &= ~1u;
            if ( v77->LockState.0 )
              break;
          }
          v1 = !_BitScanReverse((unsigned int *)&v74, v73);
          v112 = v74;
          if ( v1 )
            goto LABEL_100;
        }
        if ( !v77 )
        {
LABEL_100:
          if ( (*((_DWORD *)&v72->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v72, (ULONG_PTR)&qword_140467988, v61, 0LL);
        }
        else
        {
          v77->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v77->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v72->LockEntries[v76].TreeNode);
          v106 = v77->BoostBitmap.AllFields & 0x1FFFF;
          v77->BoostBitmap.AllFields &= 0xFFFE0000;
          v77->ThreadLocalFlags &= ~1u;
          v77->LockState.0 = 0LL;
          v81 = ((char *)v77 - (char *)v72 - 800) / 96;
          if ( v124 == 1 )
            v72->AbEntrySummary |= 1 << v81;
          else
            _InterlockedOr8((volatile signed __int8 *)&v72->AbOrphanedEntrySummary, 1 << v81);
        }
        --v72->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v72, (__int64)&qword_140467988, &v106);
        v1 = v72->SpecialApcDisable++ == -1;
        if ( v1 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v72->ApcState.ApcListHead[0].Flink != &v72->152 )
          KiCheckForKernelApcDelivery(v79, v78);
        KeLeaveCriticalRegion();
        goto LABEL_20;
      }
      v82 = v59 - 1;
      if ( !v82 )
      {
        v83 = KeGetCurrentThread();
        --v83->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140467988, 0LL);
        v84 = -1;
        if ( qword_140467978 )
        {
          v85 = KeGetCurrentThread();
          --v85->KernelApcDisable;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140467990, 0LL);
          dword_1404679A8 |= 1u;
          for ( i = qword_140467998; (__int64 *)i != &qword_140467998; i = *(_QWORD *)i )
          {
            *(_DWORD *)(i + 68) |= 4u;
            KeSetEvent((PRKEVENT)(i + 88), 0, 0);
          }
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140467990, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_140467990);
          LODWORD(v127) = 0;
          v87 = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_140467990) == 1 )
            v88 = MmGetSessionIdEx((__int64)v87->ApcState.Process);
          else
            v88 = -1;
          --v87->SpecialApcDisable;
          ++v87->AbAllocationRegionCount;
          v89 = ((char)v87->AbEntrySummary | (char)v87->AbOrphanedEntrySummary) ^ 0x3F;
          v125 = v87->AbAllocationRegionCount;
          v1 = !_BitScanReverse((unsigned int *)&v90, v89);
          v109 = v90;
          if ( v1 )
            goto LABEL_152;
          while ( 1 )
          {
            v91 = 1 << v90;
            v92 = v90;
            v93 = &v87->LockEntries[v92];
            v89 &= ~v91;
            if ( (v93->AcquiredByte & 1) != 0
              && (*(_DWORD *)&v93->LockState.0 & 1) == 0
              && (*(_QWORD *)&v93->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_140467990 & 0x7FFFFFFFFFFFFFFCLL)
              && v93->LockState.SessionId == v88 )
            {
              v93->AcquiredByte &= ~1u;
              if ( v93->LockState.0 )
                break;
            }
            v1 = !_BitScanReverse((unsigned int *)&v90, v89);
            v109 = v90;
            if ( v1 )
              goto LABEL_152;
          }
          if ( !v93 )
          {
LABEL_152:
            if ( (*((_DWORD *)&v87->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)v87, (ULONG_PTR)&qword_140467990, v88, 0LL);
          }
          else
          {
            v93->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v93->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&v87->LockEntries[v92].TreeNode);
            LODWORD(v127) = v93->BoostBitmap.AllFields & 0x1FFFF;
            v93->BoostBitmap.AllFields &= 0xFFFE0000;
            v93->ThreadLocalFlags &= ~1u;
            v93->LockState.0 = 0LL;
            v94 = ((char *)v93 - (char *)v87 - 800) / 96;
            if ( v125 == 1 )
              v87->AbEntrySummary |= 1 << v94;
            else
              _InterlockedOr8((volatile signed __int8 *)&v87->AbOrphanedEntrySummary, 1 << v94);
          }
          --v87->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts((ULONG_PTR)v87, (__int64)&qword_140467990, &v127);
          v1 = v87->SpecialApcDisable++ == -1;
          if ( v1 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v87->ApcState.ApcListHead[0].Flink != &v87->152 )
            KiCheckForKernelApcDelivery(v96, v95);
          KeLeaveCriticalRegion();
          ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&stru_140467980);
          ExRundownCompleted((PEX_RUNDOWN_REF)&stru_140467980);
          qword_140467978 = 0LL;
          v21 = 0;
        }
        else
        {
          v21 = -1073741275;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140467988, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_140467988);
        v128 = 0;
        v97 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_140467988) == 1 )
          v84 = MmGetSessionIdEx((__int64)v97->ApcState.Process);
        --v97->SpecialApcDisable;
        ++v97->AbAllocationRegionCount;
        v98 = ((char)v97->AbEntrySummary | (char)v97->AbOrphanedEntrySummary) ^ 0x3F;
        v126 = v97->AbAllocationRegionCount;
        v1 = !_BitScanReverse((unsigned int *)&v99, v98);
        v110 = v99;
        if ( v1 )
          goto LABEL_176;
        while ( 1 )
        {
          v100 = 1 << v99;
          v101 = v99;
          v102 = &v97->LockEntries[v101];
          v98 &= ~v100;
          if ( (v102->AcquiredByte & 1) != 0
            && (*(_DWORD *)&v102->LockState.0 & 1) == 0
            && (*(_QWORD *)&v102->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_140467988 & 0x7FFFFFFFFFFFFFFCLL)
            && v102->LockState.SessionId == v84 )
          {
            v102->AcquiredByte &= ~1u;
            if ( v102->LockState.0 )
              break;
          }
          v1 = !_BitScanReverse((unsigned int *)&v99, v98);
          v110 = v99;
          if ( v1 )
            goto LABEL_176;
        }
        if ( !v102 )
        {
LABEL_176:
          if ( (*((_DWORD *)&v97->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v97, (ULONG_PTR)&qword_140467988, v84, 0LL);
        }
        else
        {
          v102->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v102->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v97->LockEntries[v101].TreeNode);
          v128 = v102->BoostBitmap.AllFields & 0x1FFFF;
          v102->BoostBitmap.AllFields &= 0xFFFE0000;
          v102->ThreadLocalFlags &= ~1u;
          v102->LockState.0 = 0LL;
          v103 = ((char *)v102 - (char *)v97 - 800) / 96;
          if ( v126 == 1 )
            v97->AbEntrySummary |= 1 << v103;
          else
            _InterlockedOr8((volatile signed __int8 *)&v97->AbOrphanedEntrySummary, 1 << v103);
        }
        --v97->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v97, (__int64)&qword_140467988, &v128);
        v1 = v97->SpecialApcDisable++ == -1;
        if ( v1 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v97->ApcState.ApcListHead[0].Flink != &v97->152 )
          KiCheckForKernelApcDelivery(v105, v104);
        KeLeaveCriticalRegion();
        goto LABEL_20;
      }
      if ( v82 != 1 )
      {
LABEL_127:
        v21 = -1073741637;
        goto LABEL_58;
      }
      if ( (dword_140467AD0 & 2) != 0 )
      {
        v21 = -1073741431;
        goto LABEL_58;
      }
    }
    return 0;
  }
  if ( (v3 & 4) != 0 )
  {
    v46 = *(_DWORD *)(a1 + 4);
    if ( v46 == 2 )
    {
      PfSnLogStreamCreate(*(_QWORD *)(a1 + 16));
    }
    else if ( v46 )
    {
      if ( v46 == 3 )
        PfSnNameRemoveAll(*(_QWORD *)(a1 + 16));
    }
    else
    {
      PfSnLogVolumeCreate(*(_QWORD *)(a1 + 16));
    }
  }
  if ( (v2[2] & 1) == 0 )
    return 0;
  if ( dword_140467520 >= (unsigned int)dword_140467524 )
  {
    v47 = v2[1];
    v4 = v47;
    if ( v47 != 4 && v47 != 2 && v47 != 3 )
    {
      v21 = -1073741697;
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
      v27 = v5[4];
      v28 = (v6 + (unsigned __int64)(v5[1] & 0xFFF)) >> 12;
      v29 = v5[1];
      v30 = v5[3];
      v31 = *(_QWORD *)(v27 + 544);
      v127 = *v5;
      v32 = PfSnReferenceProcessTrace(v31);
      v33 = (struct _EX_RUNDOWN_REF *)v32;
      if ( v32 )
      {
        if ( (unsigned int)PfSnCheckLoggingForThread(v27, v32, 0LL) )
        {
          v44 = v29 & 0xFFFFF000;
          if ( v7 )
          {
            v45 = v127;
            do
            {
              if ( (int)PfSnLogPageFaultCommon((_DWORD)v33, v45, v30, v44, 0) < 0 )
                break;
              v44 += 4096;
              --v28;
            }
            while ( v28 );
            v2 = (_DWORD *)a1;
          }
        }
        ExReleaseRundownProtection_0(v33 + 45);
      }
    }
    if ( dword_140467520 < (unsigned int)dword_140467524 )
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
        v55 = 2;
        if ( v14 < 2 )
          v55 = (*(_DWORD *)(v9 + 1760) >> 12) & 7;
        v14 = v55;
      }
      if ( v14 < dword_14046606C )
      {
        v21 = 0;
        goto LABEL_20;
      }
      v15 = *(_QWORD *)(v13 + 744);
      *(_QWORD *)&v120 = v7 | (v10 << 63);
      v16 = 0LL;
      v17 = 0LL;
      v18 = (v15 ^ *(_QWORD *)(v13 + 784)) & 0x1FFFFFFFFFFFFFFFLL;
      *(_QWORD *)&v119 = v12;
      *((_QWORD *)&v120 + 1) = v18;
      v121 = __PAIR64__(v15, dword_140503750);
      *((_QWORD *)&v119 + 1) = v11 >> 12;
      v19 = dword_14046785C
          + ((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
            + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10);
      if ( ExAcquireRundownProtection_0(&stru_140467460) )
      {
        while ( 1 )
        {
          for ( j = RtlpInterlockedPopEntrySList(&stru_140467480); !j; j = RtlpInterlockedPopEntrySList(&stru_140467480) )
          {
            j = RtlpInterlockedPopEntrySList(&stru_140467470);
            if ( j )
              break;
            v21 = ((__int64 (__fastcall *)(struct _EX_RUNDOWN_REF *))qword_1404674B8)(&stru_140467460);
            if ( v21 < 0 )
              goto LABEL_44;
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
          ((void (*)(void))qword_1404674C0)();
          if ( !ExAcquireRundownProtection_0(&stru_140467460) )
            goto LABEL_188;
        }
        RtlpInterlockedPushEntrySList(&stru_140467470, j);
        v21 = -1073741789;
LABEL_44:
        ++dword_1404674CC;
        dword_1404674D0 += 64;
        ExReleaseRundownProtection_0(&stru_140467460);
LABEL_16:
        if ( v21 >= 0 )
        {
          v22 = *v17;
          v23 = v119;
          *((_DWORD *)v17 + 2) = v19;
          v24 = v120;
          *v17 = v22 & 0xFFFFFFFFFFFC0000uLL | 0x2A013;
          *((_OWORD *)v17 + 1) = v23;
          *(_QWORD *)&v23 = v121;
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
LABEL_188:
        v21 = -1073741431;
      }
      _InterlockedExchangeAdd((_DWORD *)&xmmword_140467610 + 1, 1u);
      if ( v16 )
        PfFbLogEntryComplete(v16);
LABEL_20:
      if ( v21 >= 0 )
        return (unsigned int)v21;
      goto LABEL_58;
    }
    v21 = -1073741697;
LABEL_58:
    if ( (int)v2[1] <= 3 )
      ++dword_140467624;
    return (unsigned int)v21;
  }
  switch ( v4 )
  {
    case 0:
      v56 = 2 * *(unsigned __int16 *)(*((_QWORD *)v2 + 2) + 30LL);
      v21 = PfFbLogEntryReserve(&stru_1404673E0);
      if ( v21 < 0 )
        goto LABEL_20;
      v57 = v108;
      *v108 = (8 * ((v56 + 65) & 0xFFFFFFF8)) | *v108 & 0x80000002 | 2;
      v57[1] = *(_DWORD *)(*((_QWORD *)v2 + 2) + 52LL);
      v57[2] = *(_DWORD *)(*((_QWORD *)v2 + 2) + 56LL);
      *((_QWORD *)v57 + 3) = *(_QWORD *)(*((_QWORD *)v2 + 2) + 8LL);
      v57[9] ^= (v57[9] ^ *(_DWORD *)(*((_QWORD *)v2 + 2) + 48LL)) & 0xF;
      v57[9] ^= ((unsigned __int8)v57[9] ^ (unsigned __int8)*(_DWORD *)(*((_QWORD *)v2 + 2) + 48LL)) & 0xF0;
      *((_QWORD *)v57 + 2) = *(_QWORD *)(*((_QWORD *)v2 + 2) + 16LL);
      v57[8] = *(_DWORD *)(*((_QWORD *)v2 + 2) + 24LL);
      v58 = 2 * *(_WORD *)(*((_QWORD *)v2 + 2) + 30LL);
      *((_WORD *)v57 + 20) = v58;
      *((_WORD *)v57 + 21) = v58;
      memmove(v57 + 14, *(const void **)(*((_QWORD *)v2 + 2) + 40LL), v56);
      v43 = (wchar_t *)(v57 + 14);
      *((_WORD *)v57 + *(unsigned __int16 *)(*((_QWORD *)v2 + 2) + 30LL) + 28) = 0;
      goto LABEL_32;
    case 1:
      PfLogDeleteHelper(2LL, *(_QWORD *)(*((_QWORD *)v2 + 2) + 8LL), *(unsigned int *)(*((_QWORD *)v2 + 2) + 56LL));
      return 0;
    case 2:
      v35 = *((_QWORD *)v2 + 2);
      if ( HIWORD(*(_DWORD *)(v35 + 32)) <= (unsigned int)(unsigned __int16)*(_DWORD *)(v35 + 32) )
        return 0;
      PfpRpFileKeyUpdate(&unk_1404678D8, v35, 1LL);
      if ( dword_140467520 >= (unsigned int)dword_140467524 )
      {
        v21 = -1073741697;
        goto LABEL_58;
      }
      v36 = *((_QWORD *)v2 + 2);
      v37 = *(_DWORD *)(v36 + 32);
      v38 = (const void *)(*(_QWORD *)(v36 + 24) + 2LL * (unsigned __int16)v37);
      v39 = HIWORD(v37) - (unsigned __int16)v37;
      v40 = 2 * v39;
      v21 = PfFbLogEntryReserve(&stru_1404673E0);
      if ( v21 < 0 )
        goto LABEL_20;
      v41 = v108;
      *v108 = *v108 & 0x80000000 | (8 * ((v40 + 53) & 0xFFFFFF8));
      v41[1] = *(_DWORD *)(*((_QWORD *)v2 + 2) + 40LL);
      v41[2] = *(_DWORD *)(*((_QWORD *)v2 + 2) + 44LL);
      *((_QWORD *)v41 + 3) = *(_QWORD *)(*((_QWORD *)v2 + 2) + 8LL);
      v41[8] = *(_DWORD *)(*((_QWORD *)v2 + 2) + 48LL);
      *((_QWORD *)v41 + 2) = *(_QWORD *)(*((_QWORD *)v2 + 2) + 16LL);
      v41[10] ^= (v41[10] ^ *(_DWORD *)(*((_QWORD *)v2 + 2) + 36LL)) & 1;
      v42 = v41[10] ^ ((unsigned __int8)v41[10] ^ (unsigned __int8)(*(_DWORD *)(*((_QWORD *)v2 + 2) + 36LL) >> 3)) & 2;
      v41[10] = v42;
      v41[10] = v42 ^ ((unsigned __int8)v42 ^ (unsigned __int8)(2 * *(_DWORD *)(*((_QWORD *)v2 + 2) + 36LL))) & 4;
      *((_WORD *)v41 + 21) = v39;
      memmove(v41 + 11, v38, v40);
      v43 = (wchar_t *)(v41 + 11);
      *((_WORD *)v41 + *((unsigned __int16 *)v41 + 21) + 22) = 0;
LABEL_32:
      wcsupr(v43);
      PfFbLogEntryComplete(ListEntry);
      return 0;
    case 3:
      v48 = *((_QWORD *)v2 + 2);
      if ( HIWORD(*(_DWORD *)(v48 + 32)) <= (unsigned int)(unsigned __int16)*(_DWORD *)(v48 + 32) )
        return 0;
      PfpRpFileKeyUpdate(&unk_1404678D8, v48, 0LL);
      if ( dword_140467520 < (unsigned int)dword_140467524 )
      {
        PfLogDeleteHelper(0LL, *(_QWORD *)(*((_QWORD *)v2 + 2) + 16LL), *(unsigned int *)(*((_QWORD *)v2 + 2) + 44LL));
        return 0;
      }
      v21 = -1073741697;
      goto LABEL_58;
    case 8:
      v53 = *((_QWORD *)v2 + 2);
      v50 = &v113;
      HIDWORD(v113) = 0;
      v54 = *(_QWORD *)(v53 + 16);
      LODWORD(v113) = *(_DWORD *)(v53 + 4);
      v114 = *(_QWORD *)(v53 + 8);
      v115 = (2LL * (*(_DWORD *)v53 & 3)) | (v54 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      v51 = ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
          + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24);
      v52 = 24LL;
      goto LABEL_62;
    case 13:
      v49 = (__int64 *)*((_QWORD *)v2 + 2);
      if ( !v49[1] )
      {
        v21 = -1073741747;
        goto LABEL_58;
      }
      v117 = v49[1];
      v50 = &v116;
      v118 = (unsigned int)dword_140503750;
      v116 = *v49;
      v51 = ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
          + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24);
      v52 = 31LL;
LABEL_62:
      PfLogEvent(v52, dword_14046785C + (unsigned int)(v51 >> 10), v50);
      v21 = 0;
      break;
    default:
      goto LABEL_127;
  }
  return (unsigned int)v21;
}
