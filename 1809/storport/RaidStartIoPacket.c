/*
 * XREFs of RaidStartIoPacket @ 0x1C0009C40
 * Callers:
 *     RaidUnitSubmitRequest @ 0x1C0009634 (RaidUnitSubmitRequest.c)
 *     RaUnitScsiIrp @ 0x1C00097A0 (RaUnitScsiIrp.c)
 *     RaidUnitProcessBusyRequest @ 0x1C0015664 (RaidUnitProcessBusyRequest.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000754C (RaidUnitCheckAndAcquirePoFx.c)
 *     RaUnitReleaseRemoveLock @ 0x1C0009540 (RaUnitReleaseRemoveLock.c)
 *     RaidInsertDeviceQueue @ 0x1C000AC00 (RaidInsertDeviceQueue.c)
 *     IsReadWriteRequest @ 0x1C000B920 (IsReadWriteRequest.c)
 *     IsSyncCacheRequest @ 0x1C000D1C8 (IsSyncCacheRequest.c)
 *     RaAllocateIoResource @ 0x1C000D964 (RaAllocateIoResource.c)
 *     RaidGetQosEntryForDeviceEntry @ 0x1C0022408 (RaidGetQosEntryForDeviceEntry.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C002255C (RaidAdapterPoFxIdleComponent.c)
 *     IsUnmapRequest @ 0x1C0022AC4 (IsUnmapRequest.c)
 *     RaidUpdateZoneIoReceiveWithStatus @ 0x1C0026588 (RaidUpdateZoneIoReceiveWithStatus.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C060 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002C3C0 (memset.c)
 *     RaidCompleteRequest @ 0x1C003A710 (RaidCompleteRequest.c)
 *     RaidIsUnresponsiveBlockedCmd @ 0x1C003D364 (RaidIsUnresponsiveBlockedCmd.c)
 *     RaUnitRequestPowerUp @ 0x1C0042688 (RaUnitRequestPowerUp.c)
 *     RaidLogAllocationFailure @ 0x1C0045F8C (RaidLogAllocationFailure.c)
 *     RaAttemptHighWaterMarkIncrease @ 0x1C004BD20 (RaAttemptHighWaterMarkIncrease.c)
 *     PortSrbGetLbaFromCdb @ 0x1C00526EC (PortSrbGetLbaFromCdb.c)
 */

__int64 __fastcall RaidStartIoPacket(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rbx
  __int64 v7; // rsi
  unsigned __int8 v8; // al
  char *v10; // r11
  unsigned int v11; // ebx
  unsigned int v12; // r10d
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // r8
  int v17; // ecx
  int v18; // ecx
  unsigned __int64 v19; // rcx
  char v20; // cl
  char v21; // al
  char v22; // al
  char v23; // r15
  signed __int32 v25; // r13d
  __int64 v26; // r9
  __int64 v27; // r9
  unsigned __int8 v28; // r12
  unsigned int v30; // ebx
  unsigned int i; // r11d
  __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  __int64 v34; // r10
  __int64 v35; // r8
  int v36; // ecx
  int v37; // ecx
  unsigned __int64 v38; // rcx
  unsigned __int8 v39; // bl
  unsigned int v40; // r11d
  unsigned int v41; // r14d
  __int64 v42; // rcx
  unsigned __int64 v43; // rdx
  __int64 v44; // r10
  __int64 v45; // r8
  int v46; // ecx
  int v47; // ecx
  unsigned __int64 v48; // rcx
  int v49; // eax
  unsigned __int64 v50; // rbx
  int v51; // edx
  int v52; // eax
  __int64 v53; // rbx
  __int64 v54; // r14
  char v55; // al
  unsigned __int8 v56; // r14
  unsigned int v57; // r15d
  __int64 v58; // r13
  __int64 v59; // r8
  volatile signed __int32 *v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // r13
  unsigned __int8 v63; // bl
  __int64 v64; // rcx
  unsigned __int64 v65; // r14
  _QWORD *PoolWithTag; // rbx
  __int64 v67; // r12
  ULONGLONG v68; // rax
  int Number; // r9d
  unsigned __int64 v70; // rcx
  __int64 v71; // rax
  char v72; // r13
  __int64 v73; // rbx
  __int64 v74; // rax
  __int64 v75; // r12
  KSPIN_LOCK *v76; // rbx
  unsigned __int64 v77; // rbx
  char inserted; // r14
  int v79; // eax
  unsigned __int8 *v80; // r11
  unsigned int v81; // ebx
  unsigned int v82; // r10d
  __int64 v83; // rcx
  unsigned __int64 v84; // rdx
  __int64 v85; // r9
  __int64 v86; // r8
  int v87; // ecx
  int v88; // ecx
  unsigned __int64 v89; // rcx
  __int64 v90; // rcx
  unsigned __int8 v91; // r8
  __int64 v92; // rsi
  __int64 v93; // rbx
  int v94; // ecx
  PSLIST_ENTRY IoResource; // rcx
  __int64 v96; // rax
  int v97; // r13d
  unsigned int v98; // r8d
  unsigned int v99; // r15d
  PSLIST_ENTRY v100; // rax
  _QWORD *v101; // rcx
  _QWORD *v102; // rax
  __int64 v103; // rbx
  _QWORD *v104; // rcx
  PSLIST_ENTRY v105; // rbx
  void *v106; // r9
  unsigned int v107; // edx
  _SLIST_ENTRY *Next; // rsi
  char v109; // al
  unsigned int v110; // esi
  _QWORD *v111; // rcx
  _QWORD *QosEntryForDeviceEntry; // rax
  __int64 v113; // rbx
  _QWORD *v114; // rcx
  unsigned __int64 v115; // rcx
  char *v116; // rdx
  PSLIST_ENTRY v117; // rdi
  bool v118; // zf
  PSLIST_ENTRY v119; // rbx
  char v120; // [rsp+40h] [rbp-69h]
  char v121; // [rsp+40h] [rbp-69h]
  char v122; // [rsp+41h] [rbp-68h]
  KIRQL v123; // [rsp+42h] [rbp-67h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+44h] [rbp-65h] BYREF
  __int64 v125; // [rsp+48h] [rbp-61h]
  unsigned int v126; // [rsp+50h] [rbp-59h]
  int v127; // [rsp+54h] [rbp-55h]
  int v128; // [rsp+58h] [rbp-51h] BYREF
  int v129; // [rsp+5Ch] [rbp-4Dh] BYREF
  __int64 v130; // [rsp+60h] [rbp-49h] BYREF
  int v131; // [rsp+68h] [rbp-41h]
  struct _KLOCK_QUEUE_HANDLE v132; // [rsp+70h] [rbp-39h] BYREF
  _BYTE v133[8]; // [rsp+88h] [rbp-21h] BYREF
  PSLIST_ENTRY v134; // [rsp+90h] [rbp-19h]
  PSLIST_ENTRY v135; // [rsp+98h] [rbp-11h]
  PSLIST_ENTRY v136; // [rsp+A0h] [rbp-9h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A8h] [rbp-1h] BYREF
  char v138; // [rsp+110h] [rbp+67h]

  v3 = *(_QWORD *)(a2 + 184);
  v4 = 0LL;
  v126 = 0;
  v5 = a2;
  v125 = v3;
  v7 = *(_QWORD *)(v3 + 8);
  v130 = 0LL;
  v128 = 0;
  if ( !*(_BYTE *)(a1 + 3192) )
    goto LABEL_32;
  v8 = *(_BYTE *)(v7 + 2);
  if ( v8 == 40 ? *(_DWORD *)(v7 + 20) : v8 )
    goto LABEL_32;
  if ( v8 != 40 )
  {
    v10 = (char *)(v7 + 72);
    goto LABEL_26;
  }
  v10 = 0LL;
  if ( !*(_DWORD *)(v7 + 20) )
  {
    v11 = *(_DWORD *)(v7 + 56);
    v12 = 0;
    if ( !v11 )
    {
LABEL_17:
      v5 = a2;
      goto LABEL_26;
    }
    while ( 1 )
    {
      v13 = *(unsigned int *)(v7 + 4LL * v12 + 120);
      if ( (unsigned int)v13 < 0x80 )
        goto LABEL_21;
      v14 = *(unsigned int *)(v7 + 16);
      if ( (unsigned int)v13 >= (unsigned int)v14 )
        goto LABEL_21;
      v15 = v13 + v7;
      v16 = (unsigned int)v13;
      v17 = *(_DWORD *)(v13 + v7) - 64;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          if ( v18 == 1 && v16 + 40 <= v14 )
          {
            v10 = (char *)(v15 + 32);
            if ( !*(_DWORD *)(v15 + 12) )
              v10 = 0LL;
            goto LABEL_17;
          }
          goto LABEL_21;
        }
        v19 = v16 + 56;
      }
      else
      {
        v19 = v16 + 40;
      }
      if ( v19 <= v14 )
      {
        v5 = a2;
        if ( *(_BYTE *)(v15 + 10) )
          v10 = (char *)(v15 + 24);
        break;
      }
LABEL_21:
      if ( ++v12 >= v11 )
      {
        v5 = a2;
        break;
      }
    }
  }
LABEL_26:
  if ( v10 && ((v20 = *v10, ((*v10 - 8) & 0x5D) == 0) || v20 == 37 || v20 == -98 || (unsigned __int8)(v20 - 94) <= 1u) )
    v120 = 1;
  else
LABEL_32:
    v120 = 0;
  if ( *(_BYTE *)(v7 + 2) == 40 )
    v127 = *(_DWORD *)(v7 + 24);
  else
    v127 = *(_DWORD *)(v7 + 12);
  if ( (*(_BYTE *)(a1 + 450) & 2) != 0 && (unsigned __int8)RaidIsUnresponsiveBlockedCmd(v7) )
  {
    RaUnitReleaseRemoveLock(a1);
    v21 = *(_BYTE *)(v7 + 3);
    if ( *(_BYTE *)(v7 + 2) == 40 )
    {
      v22 = ((v21 >> 7) & 0x80) + 56;
    }
    else
    {
      v23 = 56;
      if ( v21 < 0 )
        v23 = -72;
      v22 = v23;
    }
    *(_BYTE *)(v7 + 3) = v22;
    RaidCompleteRequest(v5, 3221226762LL);
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2080));
    return 1LL;
  }
  KeGetCurrentProcessorNumberEx(&ProcNumber);
  if ( *(_BYTE *)(v7 + 2) == 40 )
  {
    *(struct _PROCESSOR_NUMBER *)(v7 + 96) = ProcNumber;
  }
  else
  {
    if ( !*(_QWORD *)(v7 + 40) )
      *(_QWORD *)(v7 + 40) = *(_QWORD *)(v7 + 56);
    *(struct _PROCESSOR_NUMBER *)(v7 + 56) = ProcNumber;
  }
  v25 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 784), 0, 0);
  if ( !*(_BYTE *)(a1 + 129) )
    goto LABEL_105;
  v26 = *(_QWORD *)(v5 + 184);
  if ( *(_BYTE *)v26 != 15 )
    goto LABEL_105;
  v27 = *(_QWORD *)(v26 + 8);
  v28 = *(_BYTE *)(v27 + 2);
  if ( v28 == 40 ? *(_DWORD *)(v27 + 20) : v28 )
    goto LABEL_105;
  if ( v28 != 40 )
  {
    v4 = v27 + 72;
    goto LABEL_75;
  }
  if ( !*(_DWORD *)(v27 + 20) )
  {
    v30 = *(_DWORD *)(v27 + 56);
    for ( i = 0; i < v30; ++i )
    {
      v32 = *(unsigned int *)(v27 + 4LL * i + 120);
      if ( (unsigned int)v32 < 0x80 )
        continue;
      v33 = *(unsigned int *)(v27 + 16);
      if ( (unsigned int)v32 >= (unsigned int)v33 )
        continue;
      v34 = v32 + v27;
      v35 = (unsigned int)v32;
      v36 = *(_DWORD *)(v32 + v27) - 64;
      if ( v36 )
      {
        v37 = v36 - 1;
        if ( v37 )
        {
          if ( v37 == 1 && v35 + 40 <= v33 )
          {
            v4 = v34 + 32;
            if ( !*(_DWORD *)(v34 + 12) )
              v4 = 0LL;
            break;
          }
          continue;
        }
        v38 = v35 + 56;
      }
      else
      {
        v38 = v35 + 40;
      }
      if ( v38 <= v33 )
      {
        if ( *(_BYTE *)(v34 + 10) )
          v4 = v34 + 24;
        break;
      }
    }
  }
LABEL_75:
  v39 = 0;
  if ( v28 == 40 )
  {
    if ( !*(_DWORD *)(v27 + 20) )
    {
      v40 = 0;
      v41 = *(_DWORD *)(v27 + 56);
      if ( !v41 )
        goto LABEL_93;
      while ( 1 )
      {
        v42 = *(unsigned int *)(v27 + 4LL * v40 + 120);
        if ( (unsigned int)v42 < 0x80 )
          goto LABEL_88;
        v43 = *(unsigned int *)(v27 + 16);
        if ( (unsigned int)v42 >= (unsigned int)v43 )
          goto LABEL_88;
        v44 = v27 + v42;
        v45 = (unsigned int)v42;
        v46 = *(_DWORD *)(v27 + v42) - 64;
        if ( v46 )
        {
          v47 = v46 - 1;
          if ( v47 )
          {
            if ( v47 == 1 && v45 + 40 <= v43 )
              goto LABEL_93;
            goto LABEL_88;
          }
          v48 = v45 + 56;
        }
        else
        {
          v48 = v45 + 40;
        }
        if ( v48 <= v43 )
        {
          v39 = *(_BYTE *)(v44 + 10);
          goto LABEL_93;
        }
LABEL_88:
        if ( ++v40 >= v41 )
          goto LABEL_93;
      }
    }
    v39 = 0;
  }
  else
  {
    v39 = *(_BYTE *)(v27 + 10);
  }
LABEL_93:
  if ( !v4
    || ((*(_BYTE *)v4 - 10) & 0x5F) != 0
    || !*(_DWORD *)(a1 + 812)
    || (v28 != 40 ? (v49 = *(_DWORD *)(v27 + 12)) : (v49 = *(_DWORD *)(v27 + 24)),
        (v49 & 0x1000) == 0 || !*(_QWORD *)(a1 + 3280)) )
  {
LABEL_104:
    v3 = v125;
    LODWORD(v4) = 0;
LABEL_105:
    v51 = a3;
    goto LABEL_106;
  }
  v50 = (unsigned __int64)*(unsigned int *)(a1 + 812) * PortSrbGetLbaFromCdb(v4, v39) / *(_QWORD *)(a1 + 3256);
  v131 = v50;
  if ( !(unsigned __int8)RaidUpdateZoneIoReceiveWithStatus(a1 + 656, a2) && !v25 )
  {
    RtlInterlockedSetBitRun(a1 + 3288, (unsigned int)v50, 1LL);
    goto LABEL_104;
  }
  v3 = v125;
  v51 = a3 | 0x20;
  a3 |= 0x20u;
  LODWORD(v4) = 0;
LABEL_106:
  LOBYTE(v52) = *(_BYTE *)(v7 + 2);
  if ( (_BYTE)v52 == 40 )
    v52 = *(_DWORD *)(v7 + 20);
  else
    v52 = (unsigned __int8)v52;
  switch ( v52 )
  {
    case 0:
    case 2:
    case 7:
    case 9:
    case 18:
    case 19:
    case 23:
    case 32:
    case 36:
    case 37:
      v53 = *(_QWORD *)(a1 + 24);
      goto LABEL_117;
    case 8:
      v53 = *(_QWORD *)(a1 + 24);
      if ( *(_BYTE *)(v53 + 403) )
        goto LABEL_117;
      goto LABEL_118;
    case 16:
      v53 = *(_QWORD *)(a1 + 24);
      if ( !v53 || (*(_BYTE *)(v53 + 540) & 0x10) == 0 )
        goto LABEL_118;
LABEL_117:
      if ( (v127 & 0x100800) == 0 )
        goto LABEL_120;
LABEL_118:
      *(_QWORD *)(v3 + 16) = 0LL;
      a3 = v51 | 8;
      if ( RaidUnitCheckAndAcquirePoFx(a1) )
      {
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
        goto LABEL_156;
      }
      v53 = *(_QWORD *)(a1 + 24);
      if ( !*(_QWORD *)(v53 + 5152) )
      {
LABEL_156:
        v62 = a2;
        goto LABEL_157;
      }
LABEL_120:
      v54 = v53;
      if ( KeGetCurrentIrql() < 2u && *(char *)(a1 + 448) >= 0 )
      {
        v55 = *(_BYTE *)(a1 + 449);
        if ( (v55 & 1) == 0 )
        {
          v56 = 0;
          v57 = 5;
          v138 = 0;
          v58 = *(_QWORD *)(a2 + 184);
          if ( *(_QWORD *)(v53 + 5152) )
          {
            if ( *(char *)(v53 + 108) < 0 )
            {
              _InterlockedIncrement64((volatile signed __int64 *)(v53 + 5472));
              if ( (*(_BYTE *)(v53 + 109) & 1) != 0 )
                _InterlockedIncrement64((volatile signed __int64 *)(v53 + 5480));
            }
            v59 = 5LL;
            if ( !*(_DWORD *)(v53 + 92) )
              v59 = 1LL;
            PoFxActivateComponent(**(_QWORD **)(v53 + 5152), 0LL, v59);
            v55 = *(_BYTE *)(a1 + 449);
            v56 = 2;
            v138 = 2;
          }
          if ( v55 < 0 && ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736)) )
          {
            if ( *(char *)(v53 + 108) < 0 )
            {
              _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2040));
              if ( (*(_BYTE *)(v53 + 109) & 1) != 0 )
                _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2048));
            }
            v60 = *(volatile signed __int32 **)(a1 + 1744);
            if ( (v60[35] & 1) != 0 )
            {
              _InterlockedIncrement(v60 + 34);
              v60 = *(volatile signed __int32 **)(a1 + 1744);
            }
            v61 = *(_QWORD *)v60;
            if ( !*(_DWORD *)(a1 + 916) )
              v57 = 1;
            PoFxActivateComponent(v61, 0LL, v57);
            ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
            v56 = v138 | 1;
          }
          *(_QWORD *)(v58 + 16) = v56 & 1 | (unsigned __int64)(2 * ((v56 >> 1) & 1u));
          LODWORD(v4) = 0;
          goto LABEL_156;
        }
      }
      v62 = a2;
      v63 = 0;
      v122 = 0;
      v4 = *(_QWORD *)(a2 + 184);
      if ( *(_QWORD *)(v54 + 5152) )
      {
        if ( *(char *)(v54 + 108) < 0 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)(v54 + 5472));
          if ( (*(_BYTE *)(v54 + 109) & 1) != 0 )
            _InterlockedIncrement64((volatile signed __int64 *)(v54 + 5480));
        }
        PoFxActivateComponent(**(_QWORD **)(v54 + 5152), 0LL, 2LL);
        v122 = 2;
        v63 = 2;
      }
      if ( *(char *)(a1 + 449) < 0 && ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736)) )
      {
        if ( *(char *)(v54 + 108) < 0 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2040));
          if ( (*(_BYTE *)(v54 + 109) & 1) != 0 )
            _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2048));
        }
        v64 = *(_QWORD *)(a1 + 1744);
        if ( (*(_DWORD *)(v64 + 140) & 1) != 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v64 + 136));
          v64 = *(_QWORD *)(a1 + 1744);
        }
        PoFxActivateComponent(*(_QWORD *)v64, 0LL, 2LL);
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
        v63 = v122 | 1;
      }
      *(_QWORD *)(v4 + 16) = v63 & 1 | (unsigned __int64)(2 * ((v63 >> 1) & 1u));
      LODWORD(v4) = 0;
LABEL_157:
      v65 = -1LL;
      if ( v120 )
      {
        PoolWithTag = 0LL;
        if ( *(_DWORD *)(a1 + 3216) != -1 || *(_DWORD *)(a1 + 3200) != -1 || *(_DWORD *)(a1 + 3204) )
        {
          v67 = *(_QWORD *)(a1 + 8);
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x54436152u);
          if ( PoolWithTag )
          {
            *PoolWithTag = 0LL;
            PoolWithTag[1] = 0LL;
            PoolWithTag[2] = 0LL;
            PoolWithTag[3] = 0LL;
            PoolWithTag[4] = 0LL;
            PoolWithTag[5] = 0LL;
            PoolWithTag[6] = 0LL;
            *(_DWORD *)PoolWithTag = 300819165;
            if ( *(_DWORD *)(a1 + 3216) == -1 )
              v68 = -1LL;
            else
              v68 = (unsigned int)(5000000 * *(_DWORD *)(a1 + 3216)) + KeQueryUnbiasedInterruptTime();
            PoolWithTag[1] = v68;
            a3 |= 0x10u;
            PoolWithTag[6] = a1;
            PoolWithTag[5] = v62;
          }
          else
          {
            RaidLogAllocationFailure(v67, 512LL, 56LL, 1413701970LL);
          }
          LODWORD(v4) = 0;
        }
        if ( *(_BYTE *)(v7 + 2) == 40 )
        {
          if ( PoolWithTag )
          {
            PoolWithTag[2] = *(_QWORD *)(v7 + 96);
            *(_QWORD *)(v7 + 96) = PoolWithTag;
          }
          *(_DWORD *)(v7 + 40) = *(_DWORD *)(a1 + 3208);
        }
        else
        {
          if ( PoolWithTag )
          {
            PoolWithTag[2] = *(_QWORD *)(v7 + 48);
            *(_QWORD *)(v7 + 48) = PoolWithTag;
          }
          *(_DWORD *)(v7 + 20) = *(_DWORD *)(a1 + 3208);
        }
      }
      v123 = KfRaiseIrql(2u);
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4804LL) & 1) == 0
        || ProcNumber.Group >= (unsigned int)g_RaidPerfRedirectGroupCount
        || (Number = ProcNumber.Number,
            (unsigned int)ProcNumber.Number >= *((_DWORD *)g_RaidDPCRedirectionProcessors + ProcNumber.Group))
        || (v70 = (unsigned __int64)(ProcNumber.Number + (ProcNumber.Group << 6)) << 7,
            *(_DWORD *)((char *)g_RaidPerProcessorState + v70 + 80)) )
      {
        v121 = 0;
      }
      else
      {
        _InterlockedExchange((volatile __int32 *)((char *)g_RaidPerProcessorState + v70 + 80), 2);
        v121 = 1;
      }
      v71 = v125;
      v72 = 0;
      v73 = a2;
      *(_BYTE *)(a2 + 141) = -87;
      *(_QWORD *)(v71 + 32) = a1;
      v74 = *(_QWORD *)(a1 + 24);
      if ( v74 )
      {
        v75 = *(_QWORD *)(a1 + 504);
        if ( v75 )
        {
          if ( *(_QWORD *)(v74 + 5064) )
          {
            if ( *(_DWORD *)(v75 + 8) )
            {
              do
              {
                v76 = (KSPIN_LOCK *)(v75 + (((unsigned int)v4 + 1LL) << 6));
                KeAcquireInStackQueuedSpinLock(v76 + 5, &LockHandle);
                if ( (KSPIN_LOCK *)*v76 != v76 && *(_QWORD *)(*v76 + 40) < v65 )
                  v65 = *(_QWORD *)(*v76 + 40);
                KeReleaseInStackQueuedSpinLock(&LockHandle);
                LODWORD(v4) = v4 + 1;
              }
              while ( (unsigned int)v4 < *(_DWORD *)(v75 + 8) );
            }
            v77 = 0LL;
            if ( v65 != -1LL )
              v77 = v65;
            if ( v77 )
              v72 = KeQueryUnbiasedInterruptTime() - v77 > *(_QWORD *)(*(_QWORD *)(a1 + 24) + 5064LL);
            v73 = a2;
          }
        }
      }
      if ( *(_BYTE *)(v7 + 2) == 40 )
      {
        *(_DWORD *)(v7 + 4) = 0;
        *(_DWORD *)(v7 + 28) = 0;
      }
      inserted = RaidInsertDeviceQueue(
                   (int)a1 + 656,
                   v73,
                   a3,
                   Number,
                   v72,
                   (__int64)&v130,
                   (__int64)&v129,
                   (__int64)&v128);
      if ( !inserted )
        goto LABEL_234;
      if ( v72 )
        ++*(_QWORD *)(a1 + 1968);
      if ( *(_BYTE *)(v7 + 2) != 40 )
        goto LABEL_226;
      v79 = HIDWORD(v130);
      *(_DWORD *)(v7 + 4) = v130;
      *(_DWORD *)(v7 + 28) = v79;
      if ( !*(_DWORD *)(a1 + 2220) )
        goto LABEL_226;
      if ( *(_BYTE *)(v7 + 2) != 40 )
      {
        v80 = (unsigned __int8 *)(v7 + 72);
        goto LABEL_221;
      }
      v80 = 0LL;
      if ( *(_DWORD *)(v7 + 20) )
        goto LABEL_221;
      v81 = *(_DWORD *)(v7 + 56);
      v82 = 0;
      if ( !v81 )
      {
LABEL_212:
        v73 = a2;
        goto LABEL_221;
      }
      while ( 1 )
      {
        v83 = *(unsigned int *)(v7 + 4LL * v82 + 120);
        if ( (unsigned int)v83 < 0x80 )
          goto LABEL_216;
        v84 = *(unsigned int *)(v7 + 16);
        if ( (unsigned int)v83 >= (unsigned int)v84 )
          goto LABEL_216;
        v85 = v7 + v83;
        v86 = (unsigned int)v83;
        v87 = *(_DWORD *)(v7 + v83) - 64;
        if ( !v87 )
          break;
        v88 = v87 - 1;
        if ( !v88 )
        {
          v89 = v86 + 56;
          goto LABEL_215;
        }
        if ( v88 == 1 && v86 + 40 <= v84 )
        {
          v80 = (unsigned __int8 *)(v85 + 32);
          if ( !*(_DWORD *)(v85 + 12) )
            v80 = 0LL;
          goto LABEL_212;
        }
LABEL_216:
        if ( ++v82 >= v81 )
        {
          v73 = a2;
          goto LABEL_221;
        }
      }
      v89 = v86 + 40;
LABEL_215:
      if ( v89 > v84 )
        goto LABEL_216;
      v73 = a2;
      if ( *(_BYTE *)(v85 + 10) )
        v80 = (unsigned __int8 *)(v85 + 24);
LABEL_221:
      if ( v80
        && ((unsigned int)IsReadWriteRequest(*(unsigned int *)(v7 + 20), *v80)
         || (unsigned int)IsUnmapRequest(v90, v91)
         || (unsigned int)IsSyncCacheRequest()) )
      {
        *(_DWORD *)(v7 + 48) = v128;
      }
LABEL_226:
      switch ( v129 )
      {
        case 1:
          _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2176));
          break;
        case 4:
          _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2184));
          break;
        case 5:
          _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2192));
          break;
        case 6:
          _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2200));
          break;
      }
LABEL_234:
      if ( (a3 & 8) == 0 && *(_BYTE *)(a1 + 695) && *(char *)(a1 + 449) >= 0 )
        RaUnitRequestPowerUp(a1);
      if ( inserted )
        goto LABEL_270;
      *(_BYTE *)(v73 + 141) = -88;
      v92 = v73 + 120;
      v93 = *(_QWORD *)(a1 + 664);
      if ( *(int *)(v93 + 44) > 0 || *(int *)(v93 + 40) > 0 )
      {
        KeAcquireInStackQueuedSpinLockAtDpcLevel(*(PKSPIN_LOCK *)(a1 + 664), &v132);
        if ( *(int *)(v93 + 44) <= 0 && *(int *)(v93 + 40) <= 0 )
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v132);
          goto LABEL_244;
        }
        v111 = *(_QWORD **)(v93 + 16);
        if ( *v111 == v93 + 8 )
        {
          *(_QWORD *)v92 = v93 + 8;
          *(_QWORD *)(v92 + 8) = v111;
          *v111 = v92;
          *(_QWORD *)(v93 + 16) = v92;
          ++*(_DWORD *)(v93 + 24);
          if ( (*(_BYTE *)(v92 + 22) & 0x20) == 0 )
            goto LABEL_269;
          QosEntryForDeviceEntry = (_QWORD *)RaidGetQosEntryForDeviceEntry(v92);
          v113 = v93 + 264;
          v114 = *(_QWORD **)(v113 + 8);
          if ( *v114 == v113 )
          {
            *QosEntryForDeviceEntry = v113;
            QosEntryForDeviceEntry[1] = v114;
            *v114 = QosEntryForDeviceEntry;
            *(_QWORD *)(v113 + 8) = QosEntryForDeviceEntry;
            goto LABEL_269;
          }
        }
LABEL_281:
        __fastfail(3u);
      }
LABEL_244:
      v94 = *(_DWORD *)(v93 + 128);
      if ( v94 )
      {
        v96 = (unsigned int)(v94 * HIDWORD(KeGetPcr()[1].LockArray)) / *(_DWORD *)(v93 + 132);
        v97 = v96;
        IoResource = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v93 + 64) + 8 * v96));
        if ( !IoResource )
        {
          v98 = *(_DWORD *)(v93 + 128);
          v99 = 1;
          if ( v98 <= 1 )
            goto LABEL_252;
          while ( !IoResource )
          {
            v100 = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v93 + 64) + 8LL * ((v99 + v97) % v98)));
            v98 = *(_DWORD *)(v93 + 128);
            ++v99;
            IoResource = v100;
            if ( v99 >= v98 )
            {
              if ( !v100 )
                goto LABEL_252;
              break;
            }
          }
        }
        LODWORD(IoResource->Next) = v97;
        goto LABEL_252;
      }
      IoResource = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v93 + 64));
LABEL_252:
      if ( IoResource
        || *(_DWORD *)(v93 + 136) < *(_DWORD *)(v93 + 144)
        && (RaAttemptHighWaterMarkIncrease(v93),
            (IoResource = (PSLIST_ENTRY)RaAllocateIoResource((PSLIST_HEADER)(v93 + 64))) != 0LL) )
      {
        if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v93 + 192)) >= *(_DWORD *)(v93 + 36) )
          *(_DWORD *)(v93 + 36) = *(_DWORD *)(v93 + 192);
        v105 = IoResource + 2;
        v135 = IoResource + 2;
        v136 = IoResource + 52;
        v134 = IoResource + 68;
        v106 = (void *)*((_QWORD *)&IoResource[49].Next + 1);
        v107 = *((_DWORD *)&IoResource[48].Next + 2);
        LOBYTE(IoResource[3].Next) &= 0x9Cu;
        Next = IoResource[51].Next;
        WORD1(IoResource[3].Next) = -1;
        v109 = (char)IoResource[3].Next;
        LODWORD(IoResource[2].Next) = 523124044;
        *((_QWORD *)&IoResource[2].Next + 1) = 0LL;
        BYTE4(IoResource[3].Next) = -1;
        *((_DWORD *)&IoResource[3].Next + 2) = 0;
        *((_QWORD *)&IoResource[8].Next + 1) = 0LL;
        IoResource[9].Next = 0LL;
        *((_QWORD *)&IoResource[10].Next + 1) = 0LL;
        *((_QWORD *)&IoResource[11].Next + 1) = 0LL;
        IoResource[11].Next = 0LL;
        IoResource[14].Next = 0LL;
        IoResource[12].Next = 0LL;
        *((_QWORD *)&IoResource[12].Next + 1) = 0LL;
        *((_QWORD *)&IoResource[15].Next + 1) = 0LL;
        IoResource[16].Next = 0LL;
        *((_QWORD *)&IoResource[9].Next + 1) = 0LL;
        *((_QWORD *)&IoResource[45].Next + 1) = 0LL;
        IoResource[46].Next = 0LL;
        *((_QWORD *)&IoResource[46].Next + 1) = 0LL;
        IoResource[47].Next = 0LL;
        *((_DWORD *)&IoResource[48].Next + 2) = v107;
        *((_QWORD *)&IoResource[49].Next + 1) = v106;
        if ( v106 )
        {
          memset(v106, 0, v107);
          v109 = (char)v105[1].Next;
        }
        BYTE1(v105[1].Next) &= 0xF0u;
        LOBYTE(v105[1].Next) = v109 & 0x7F;
        v105[48].Next = 0LL;
        *((_DWORD *)&v105[46].Next + 3) = 0;
        *((_DWORD *)&v105[48].Next + 2) = 0;
        v105[49].Next = Next;
        (*(void (__fastcall **)(_QWORD, __int64, _BYTE *, _QWORD))(a1 + 648))(*(_QWORD *)(a1 + 640), a2, v133, 0LL);
        v110 = 1;
      }
      else
      {
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v93, &v132);
        v101 = *(_QWORD **)(v93 + 16);
        if ( *v101 != v93 + 8 )
          goto LABEL_281;
        *(_QWORD *)v92 = v93 + 8;
        *(_QWORD *)(v92 + 8) = v101;
        *v101 = v92;
        *(_QWORD *)(v93 + 16) = v92;
        ++*(_DWORD *)(v93 + 24);
        *(_DWORD *)(v93 + 40) = 1;
        if ( (*(_BYTE *)(v92 + 22) & 0x20) != 0 )
        {
          v102 = (_QWORD *)RaidGetQosEntryForDeviceEntry(v92);
          v103 = v93 + 264;
          v104 = *(_QWORD **)(v103 + 8);
          if ( *v104 != v103 )
            goto LABEL_281;
          *v102 = v103;
          v102[1] = v104;
          *v104 = v102;
          *(_QWORD *)(v103 + 8) = v102;
        }
LABEL_269:
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v132);
LABEL_270:
        v110 = v126;
      }
      if ( v121 == 1
        && (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4804LL) & 1) != 0
        && ProcNumber.Group < (unsigned int)g_RaidPerfRedirectGroupCount
        && (unsigned int)ProcNumber.Number < *((_DWORD *)g_RaidDPCRedirectionProcessors + ProcNumber.Group) )
      {
        v115 = (unsigned __int64)(ProcNumber.Number + (ProcNumber.Group << 6)) << 7;
        v116 = (char *)g_RaidPerProcessorState + 64;
        _InterlockedExchange((volatile __int32 *)((char *)g_RaidPerProcessorState + v115 + 80), 1);
        v117 = ExpInterlockedFlushSList((PSLIST_HEADER)&v116[v115]);
        while ( v117 )
        {
          v118 = (BYTE1(v117[-1].Next) & 1) == 0;
          v119 = v117 - 2;
          v117 = v117->Next;
          if ( !v118 )
          {
            RaidAdapterPoFxIdleComponent(*((_QWORD *)&v119[13].Next + 1), *((unsigned int *)&v119[46].Next + 3), 0LL);
            BYTE1(v119[1].Next) &= ~1u;
          }
          ((void (__fastcall *)(PSLIST_ENTRY))v119[41].Next)(v119);
        }
        _InterlockedExchange(
          (volatile __int32 *)g_RaidPerProcessorState
        + 32 * (unsigned __int64)(ProcNumber.Number + (ProcNumber.Group << 6))
        + 20,
          0);
      }
      KeLowerIrql(v123);
      return v110;
    default:
      goto LABEL_118;
  }
}
