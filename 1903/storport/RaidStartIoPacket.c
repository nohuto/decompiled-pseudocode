/*
 * XREFs of RaidStartIoPacket @ 0x1C00081C0
 * Callers:
 *     RaidUnitSubmitRequest @ 0x1C0007BC8 (RaidUnitSubmitRequest.c)
 *     RaUnitScsiIrp @ 0x1C0007D30 (RaUnitScsiIrp.c)
 *     RaidUnitProcessBusyRequest @ 0x1C0011538 (RaidUnitProcessBusyRequest.c)
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C00079A0 (RaUnitReleaseRemoveLock.c)
 *     RaidInsertDeviceQueue @ 0x1C0009090 (RaidInsertDeviceQueue.c)
 *     RaidUnitStartDeviceBusy @ 0x1C00093C4 (RaidUnitStartDeviceBusy.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000950C (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidCompleteRequestEx @ 0x1C000A830 (RaidCompleteRequestEx.c)
 *     RaAllocateIoResource @ 0x1C000B6C0 (RaAllocateIoResource.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C001ED44 (RaidAdapterPoFxIdleComponent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00234D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0023840 (memset.c)
 *     RaidGetIoStartingLbaAndLength @ 0x1C0036AAC (RaidGetIoStartingLbaAndLength.c)
 *     RaidGetQosEntryForDeviceEntry @ 0x1C0038518 (RaidGetQosEntryForDeviceEntry.c)
 *     RaidZoneWriteGroupListSearchRequest @ 0x1C0038908 (RaidZoneWriteGroupListSearchRequest.c)
 *     RaidIsUnresponsiveBlockedCmd @ 0x1C0039544 (RaidIsUnresponsiveBlockedCmd.c)
 *     RaUnitRequestPowerUp @ 0x1C003F320 (RaUnitRequestPowerUp.c)
 *     RaidLogAllocationFailure @ 0x1C0043224 (RaidLogAllocationFailure.c)
 *     RaAttemptHighWaterMarkIncrease @ 0x1C0049590 (RaAttemptHighWaterMarkIncrease.c)
 */

__int64 __fastcall RaidStartIoPacket(__int64 a1, __int64 a2, int a3)
{
  int v3; // edi
  IRP *v4; // rsi
  __int64 v6; // rax
  __int64 v7; // r15
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
  char v23; // di
  _IO_STACK_LOCATION *v25; // r9
  _IO_SECURITY_CONTEXT *SecurityContext; // r9
  unsigned __int8 v27; // si
  unsigned int FullCreateOptions; // eax
  _IO_SECURITY_CONTEXT *v29; // rdi
  unsigned int AccessState; // ebx
  unsigned int i; // r11d
  __int64 v32; // rcx
  unsigned __int64 DesiredAccess; // rdx
  __int64 v34; // r10
  __int64 v35; // r8
  int v36; // ecx
  int v37; // ecx
  unsigned __int64 v38; // rcx
  unsigned int v39; // r11d
  unsigned int j; // r10d
  __int64 v41; // rcx
  unsigned __int64 v42; // r8
  __int64 v43; // rdx
  int v44; // ecx
  int v45; // ecx
  unsigned __int64 v46; // rcx
  int v47; // edx
  int SecurityQos; // eax
  __int64 v49; // rdi
  __int64 v50; // r10
  __int64 v51; // r11
  unsigned int v52; // ebx
  unsigned int k; // r9d
  __int64 v54; // rcx
  unsigned __int64 v55; // rdx
  __int64 v56; // r8
  int v57; // ecx
  int v58; // ecx
  unsigned __int64 v59; // rcx
  int v60; // r8d
  unsigned __int64 v61; // rax
  char v62; // dl
  char v63; // cl
  char v64; // cl
  char v65; // al
  int v66; // eax
  bool v67; // zf
  __int64 v68; // rax
  __int64 v69; // rbx
  char v70; // al
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  unsigned __int8 v72; // di
  unsigned int v73; // esi
  __int64 v74; // r8
  volatile signed __int32 *v75; // rcx
  __int64 v76; // rcx
  unsigned __int64 v77; // rsi
  _QWORD *PoolWithTag; // rbx
  __int64 v79; // r14
  ULONGLONG v80; // rax
  __int64 v81; // rdi
  int Number; // r9d
  unsigned __int64 v83; // rcx
  __int64 v84; // rax
  char v85; // r12
  __int64 v86; // rax
  __int64 v87; // r14
  unsigned int v88; // edi
  KSPIN_LOCK *v89; // rbx
  unsigned __int64 v90; // rbx
  char inserted; // bl
  int v92; // eax
  __int64 v93; // rbx
  _QWORD *v94; // rdi
  int v95; // ecx
  PSLIST_ENTRY IoResource; // rcx
  __int64 v97; // rax
  int v98; // r12d
  unsigned int v99; // r8d
  unsigned int v100; // r15d
  PSLIST_ENTRY v101; // rax
  _QWORD *v102; // rcx
  _QWORD *v103; // rax
  __int64 v104; // rbx
  _QWORD *v105; // rcx
  PSLIST_ENTRY v106; // rbx
  void *v107; // r9
  unsigned int v108; // edx
  _SLIST_ENTRY *Next; // rdi
  char v110; // al
  unsigned int v111; // r15d
  _QWORD *v112; // rcx
  _QWORD *QosEntryForDeviceEntry; // rax
  __int64 v114; // rbx
  _QWORD *v115; // rcx
  unsigned __int64 v116; // rcx
  char *v117; // rdx
  PSLIST_ENTRY v118; // rdi
  PSLIST_ENTRY v119; // rbx
  KIRQL v120; // [rsp+40h] [rbp-69h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+44h] [rbp-65h] BYREF
  int v122; // [rsp+4Ch] [rbp-5Dh]
  int v123; // [rsp+50h] [rbp-59h] BYREF
  __int64 v124; // [rsp+58h] [rbp-51h] BYREF
  unsigned __int64 v125; // [rsp+60h] [rbp-49h] BYREF
  __int64 v126; // [rsp+68h] [rbp-41h]
  struct _KLOCK_QUEUE_HANDLE v127; // [rsp+70h] [rbp-39h] BYREF
  __int64 v128; // [rsp+88h] [rbp-21h] BYREF
  PSLIST_ENTRY v129; // [rsp+90h] [rbp-19h]
  PSLIST_ENTRY v130; // [rsp+98h] [rbp-11h]
  PSLIST_ENTRY v131; // [rsp+A0h] [rbp-9h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A8h] [rbp-1h] BYREF
  char v133; // [rsp+110h] [rbp+67h]
  char v134; // [rsp+110h] [rbp+67h]
  int v136; // [rsp+120h] [rbp+77h]
  char v137; // [rsp+128h] [rbp+7Fh]

  v136 = a3;
  v3 = a3;
  v128 = 0LL;
  v4 = (IRP *)a2;
  v129 = 0LL;
  v130 = 0LL;
  v131 = 0LL;
  v6 = *(_QWORD *)(a2 + 184);
  ProcNumber = 0;
  v126 = v6;
  v124 = 0LL;
  v7 = *(_QWORD *)(v6 + 8);
  if ( !*(_BYTE *)(a1 + 2720) )
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
    if ( v11 )
    {
      do
      {
        v13 = *(unsigned int *)(v7 + 4LL * v12 + 120);
        if ( (unsigned int)v13 < 0x80 )
          continue;
        v14 = *(unsigned int *)(v7 + 16);
        if ( (unsigned int)v13 >= (unsigned int)v14 )
          continue;
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
              break;
            }
            continue;
          }
          v19 = v16 + 56;
        }
        else
        {
          v19 = v16 + 40;
        }
        if ( v19 <= v14 )
        {
          if ( *(_BYTE *)(v15 + 10) )
            v10 = (char *)(v15 + 24);
          break;
        }
      }
      while ( ++v12 < v11 );
    }
  }
LABEL_26:
  if ( v10 && ((v20 = *v10, ((*v10 - 8) & 0x5D) == 0) || v20 == 37 || v20 == -98 || (unsigned __int8)(v20 - 94) <= 1u) )
    v133 = 1;
  else
LABEL_32:
    v133 = 0;
  if ( *(_BYTE *)(v7 + 2) == 40 )
    v122 = *(_DWORD *)(v7 + 24);
  else
    v122 = *(_DWORD *)(v7 + 12);
  if ( (*(_BYTE *)(a1 + 162) & 2) != 0 && (unsigned __int8)RaidIsUnresponsiveBlockedCmd(v7) )
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
    RaidCompleteRequestEx(v4);
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1824));
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
  if ( !*(_BYTE *)(a1 + 129) || (v25 = v4->Tail.Overlay.CurrentStackLocation, v25->MajorFunction != 15) )
  {
LABEL_129:
    LOBYTE(v66) = *(_BYTE *)(v7 + 2);
    if ( (_BYTE)v66 == 40 )
      v66 = *(_DWORD *)(v7 + 20);
    else
      v66 = (unsigned __int8)v66;
    if ( !v66 )
      goto LABEL_139;
    switch ( v66 )
    {
      case 2:
      case 7:
      case 9:
      case 18:
      case 19:
      case 23:
      case 32:
      case 36:
      case 37:
        goto LABEL_139;
      case 8:
        v67 = *(_BYTE *)(*(_QWORD *)(a1 + 24) + 387LL) == 0;
        break;
      case 16:
        v68 = *(_QWORD *)(a1 + 24);
        if ( !v68 )
          goto LABEL_140;
        v67 = (*(_BYTE *)(v68 + 524) & 0x10) == 0;
        break;
      default:
        goto LABEL_140;
    }
    if ( !v67 )
    {
LABEL_139:
      if ( (v122 & 0x100800) == 0 )
      {
        v69 = *(_QWORD *)(a1 + 24);
        goto LABEL_145;
      }
    }
LABEL_140:
    v136 = v3 | 8;
    *(_QWORD *)(v126 + 16) = 0LL;
    if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx(a1) )
    {
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1480));
      goto LABEL_167;
    }
    v69 = *(_QWORD *)(a1 + 24);
    if ( !*(_QWORD *)(v69 + 5024) )
      goto LABEL_167;
LABEL_145:
    if ( KeGetCurrentIrql() >= 2u || *(char *)(a1 + 160) < 0 || (v70 = *(_BYTE *)(a1 + 161), (v70 & 1) != 0) )
    {
      RaidUnitStartDeviceBusy(a1, v4, 2LL);
    }
    else
    {
      CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
      v72 = 0;
      v73 = 5;
      v137 = 0;
      if ( *(_QWORD *)(v69 + 5024) )
      {
        if ( *(char *)(v69 + 108) < 0 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)(v69 + 5336));
          if ( (*(_BYTE *)(v69 + 109) & 1) != 0 )
            _InterlockedIncrement64((volatile signed __int64 *)(v69 + 5344));
        }
        v74 = 5LL;
        if ( !*(_DWORD *)(v69 + 92) )
          v74 = 1LL;
        PoFxActivateComponent(**(_QWORD **)(v69 + 5024), 0LL, v74);
        v70 = *(_BYTE *)(a1 + 161);
        v72 = 2;
        v137 = 2;
      }
      if ( v70 < 0 && ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1480)) )
      {
        if ( *(char *)(v69 + 108) < 0 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1784));
          if ( (*(_BYTE *)(v69 + 109) & 1) != 0 )
            _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1792));
        }
        v75 = *(volatile signed __int32 **)(a1 + 1488);
        if ( (v75[35] & 1) != 0 )
        {
          _InterlockedIncrement(v75 + 34);
          v75 = *(volatile signed __int32 **)(a1 + 1488);
        }
        v76 = *(_QWORD *)v75;
        if ( !*(_DWORD *)(a1 + 684) )
          v73 = 1;
        PoFxActivateComponent(v76, 0LL, v73);
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1480));
        v72 = v137 | 1;
      }
      CurrentStackLocation->Parameters.QueryDirectory.FileName = (_UNICODE_STRING *)(v72 & 1 | (unsigned __int64)(2 * ((v72 >> 1) & 1u)));
    }
LABEL_167:
    v77 = -1LL;
    if ( !v133 )
    {
      v81 = a2;
      goto LABEL_186;
    }
    PoolWithTag = 0LL;
    if ( *(_DWORD *)(a1 + 2744) != -1 || *(_DWORD *)(a1 + 2728) != -1 || *(_DWORD *)(a1 + 2732) )
    {
      v79 = *(_QWORD *)(a1 + 8);
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
        if ( *(_DWORD *)(a1 + 2744) == -1 )
          v80 = -1LL;
        else
          v80 = (unsigned int)(5000000 * *(_DWORD *)(a1 + 2744)) + KeQueryUnbiasedInterruptTime();
        PoolWithTag[1] = v80;
        v81 = a2;
        v136 |= 0x10u;
        PoolWithTag[5] = a2;
        PoolWithTag[6] = a1;
LABEL_178:
        if ( *(_BYTE *)(v7 + 2) == 40 )
        {
          if ( PoolWithTag )
          {
            PoolWithTag[2] = *(_QWORD *)(v7 + 96);
            *(_QWORD *)(v7 + 96) = PoolWithTag;
          }
          *(_DWORD *)(v7 + 40) = *(_DWORD *)(a1 + 2736);
        }
        else
        {
          if ( PoolWithTag )
          {
            PoolWithTag[2] = *(_QWORD *)(v7 + 48);
            *(_QWORD *)(v7 + 48) = PoolWithTag;
          }
          *(_DWORD *)(v7 + 20) = *(_DWORD *)(a1 + 2736);
        }
LABEL_186:
        v120 = KfRaiseIrql(2u);
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4740LL) & 1) == 0
          || ProcNumber.Group >= (unsigned int)g_RaidPerfRedirectGroupCount
          || (Number = ProcNumber.Number,
              (unsigned int)ProcNumber.Number >= *((_DWORD *)g_RaidDPCRedirectionProcessors + ProcNumber.Group))
          || (v83 = (unsigned __int64)(ProcNumber.Number + (ProcNumber.Group << 6)) << 7,
              *(_DWORD *)((char *)g_RaidPerProcessorState + v83 + 80)) )
        {
          v134 = 0;
        }
        else
        {
          _InterlockedExchange((volatile __int32 *)((char *)g_RaidPerProcessorState + v83 + 80), 2);
          v134 = 1;
        }
        v84 = v126;
        v85 = 0;
        *(_BYTE *)(v81 + 141) = -87;
        *(_QWORD *)(v84 + 32) = a1;
        v86 = *(_QWORD *)(a1 + 24);
        if ( v86 )
        {
          v87 = *(_QWORD *)(a1 + 216);
          if ( v87 )
          {
            if ( *(_QWORD *)(v86 + 4984) )
            {
              v88 = 0;
              memset(&LockHandle, 0, sizeof(LockHandle));
              if ( *(_DWORD *)(v87 + 8) )
              {
                do
                {
                  v89 = (KSPIN_LOCK *)(v87 + ((v88 + 1LL) << 6));
                  KeAcquireInStackQueuedSpinLock(v89 + 5, &LockHandle);
                  if ( (KSPIN_LOCK *)*v89 != v89 && *(_QWORD *)(*v89 + 40) < v77 )
                    v77 = *(_QWORD *)(*v89 + 40);
                  KeReleaseInStackQueuedSpinLock(&LockHandle);
                  ++v88;
                }
                while ( v88 < *(_DWORD *)(v87 + 8) );
              }
              v90 = 0LL;
              if ( v77 != -1LL )
                v90 = v77;
              if ( v90 )
                v85 = KeQueryUnbiasedInterruptTime() - v90 > *(_QWORD *)(*(_QWORD *)(a1 + 24) + 4984LL);
            }
          }
        }
        inserted = RaidInsertDeviceQueue((int)a1 + 400, a2, v136, Number, v85, (__int64)&v124, (__int64)&v123);
        if ( inserted )
        {
          if ( v85 )
            ++*(_QWORD *)(a1 + 1712);
          if ( *(_BYTE *)(v7 + 2) == 40 )
          {
            v92 = HIDWORD(v124);
            *(_DWORD *)(v7 + 4) = v124;
            *(_DWORD *)(v7 + 28) = v92;
          }
          switch ( v123 )
          {
            case 1:
              _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1912));
              break;
            case 4:
              _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1920));
              break;
            case 5:
              _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1928));
              break;
            case 6:
              _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1936));
              break;
          }
        }
        if ( (v136 & 8) == 0 && *(_BYTE *)(a1 + 439) && *(char *)(a1 + 161) >= 0 )
          RaUnitRequestPowerUp(a1);
        if ( inserted )
          goto LABEL_253;
        *(_BYTE *)(a2 + 141) = -88;
        v93 = *(_QWORD *)(a1 + 408);
        v94 = (_QWORD *)(a2 + 120);
        memset(&v127, 0, sizeof(v127));
        if ( *(int *)(v93 + 44) > 0 || *(int *)(v93 + 40) > 0 )
        {
          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v93, &v127);
          if ( *(int *)(v93 + 44) > 0 || *(int *)(v93 + 40) > 0 )
          {
            v112 = *(_QWORD **)(v93 + 16);
            if ( *v112 != v93 + 8 )
              goto LABEL_264;
            *v94 = v93 + 8;
            *(_QWORD *)(a2 + 128) = v112;
            *v112 = v94;
            *(_QWORD *)(v93 + 16) = v94;
            ++*(_DWORD *)(v93 + 24);
            if ( (*(_BYTE *)(a2 + 142) & 0x20) != 0 )
            {
              QosEntryForDeviceEntry = (_QWORD *)RaidGetQosEntryForDeviceEntry(a2 + 120);
              v114 = v93 + 264;
              v115 = *(_QWORD **)(v114 + 8);
              if ( *v115 != v114 )
                goto LABEL_264;
              *QosEntryForDeviceEntry = v114;
              QosEntryForDeviceEntry[1] = v115;
              *v115 = QosEntryForDeviceEntry;
              *(_QWORD *)(v114 + 8) = QosEntryForDeviceEntry;
            }
            goto LABEL_252;
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v127);
        }
        v95 = *(_DWORD *)(v93 + 128);
        if ( !v95 )
        {
          IoResource = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v93 + 64));
          goto LABEL_235;
        }
        v97 = (unsigned int)(v95 * HIDWORD(KeGetPcr()[1].LockArray)) / *(_DWORD *)(v93 + 132);
        v98 = v97;
        IoResource = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v93 + 64) + 8 * v97));
        if ( !IoResource )
        {
          v99 = *(_DWORD *)(v93 + 128);
          v100 = 1;
          if ( v99 <= 1 )
            goto LABEL_235;
          while ( !IoResource )
          {
            v101 = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v93 + 64) + 8LL * ((v100 + v98) % v99)));
            v99 = *(_DWORD *)(v93 + 128);
            ++v100;
            IoResource = v101;
            if ( v100 >= v99 )
            {
              if ( !v101 )
                goto LABEL_235;
              break;
            }
          }
        }
        LODWORD(IoResource->Next) = v98;
LABEL_235:
        if ( IoResource
          || *(_DWORD *)(v93 + 136) < *(_DWORD *)(v93 + 144)
          && (RaAttemptHighWaterMarkIncrease(v93),
              (IoResource = (PSLIST_ENTRY)RaAllocateIoResource((PSLIST_HEADER)(v93 + 64))) != 0LL) )
        {
          if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v93 + 192)) >= *(_DWORD *)(v93 + 36) )
            *(_DWORD *)(v93 + 36) = *(_DWORD *)(v93 + 192);
          v106 = IoResource + 2;
          v130 = IoResource + 2;
          v131 = IoResource + 52;
          v129 = IoResource + 68;
          v107 = (void *)*((_QWORD *)&IoResource[49].Next + 1);
          v108 = *((_DWORD *)&IoResource[48].Next + 2);
          LOBYTE(IoResource[3].Next) &= 0x9Cu;
          Next = IoResource[51].Next;
          WORD1(IoResource[3].Next) = -1;
          v110 = (char)IoResource[3].Next;
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
          *((_DWORD *)&IoResource[48].Next + 2) = v108;
          *((_QWORD *)&IoResource[49].Next + 1) = v107;
          if ( v107 )
          {
            memset(v107, 0, v108);
            v110 = (char)v106[1].Next;
          }
          BYTE1(v106[1].Next) &= 0xF0u;
          LOBYTE(v106[1].Next) = v110 & 0x7F;
          v106[48].Next = 0LL;
          *((_DWORD *)&v106[46].Next + 3) = 0;
          *((_DWORD *)&v106[48].Next + 2) = 0;
          v106[49].Next = Next;
          (*(void (__fastcall **)(_QWORD, __int64, __int64 *))(a1 + 392))(*(_QWORD *)(a1 + 384), a2, &v128);
          v111 = 1;
          goto LABEL_254;
        }
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v93, &v127);
        v102 = *(_QWORD **)(v93 + 16);
        if ( *v102 != v93 + 8 )
          goto LABEL_264;
        *v94 = v93 + 8;
        *(_QWORD *)(a2 + 128) = v102;
        *v102 = v94;
        *(_QWORD *)(v93 + 16) = v94;
        ++*(_DWORD *)(v93 + 24);
        *(_DWORD *)(v93 + 40) = 1;
        if ( (*(_BYTE *)(a2 + 142) & 0x20) != 0 )
        {
          v103 = (_QWORD *)RaidGetQosEntryForDeviceEntry(v94);
          v104 = v93 + 264;
          v105 = *(_QWORD **)(v104 + 8);
          if ( *v105 == v104 )
          {
            *v103 = v104;
            v103[1] = v105;
            *v105 = v103;
            *(_QWORD *)(v104 + 8) = v103;
            goto LABEL_252;
          }
LABEL_264:
          __fastfail(3u);
        }
LABEL_252:
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v127);
LABEL_253:
        v111 = 0;
LABEL_254:
        if ( v134 == 1
          && (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4740LL) & 1) != 0
          && ProcNumber.Group < (unsigned int)g_RaidPerfRedirectGroupCount
          && (unsigned int)ProcNumber.Number < *((_DWORD *)g_RaidDPCRedirectionProcessors + ProcNumber.Group) )
        {
          v116 = (unsigned __int64)(ProcNumber.Number + (ProcNumber.Group << 6)) << 7;
          v117 = (char *)g_RaidPerProcessorState + 64;
          _InterlockedExchange((volatile __int32 *)((char *)g_RaidPerProcessorState + v116 + 80), 1);
          v118 = ExpInterlockedFlushSList((PSLIST_HEADER)&v117[v116]);
          while ( v118 )
          {
            v67 = (BYTE1(v118[-1].Next) & 1) == 0;
            v119 = v118 - 2;
            v118 = v118->Next;
            if ( !v67 )
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
        KeLowerIrql(v120);
        return v111;
      }
      RaidLogAllocationFailure(v79, 512LL, 56LL, 1413701970LL);
    }
    v81 = a2;
    goto LABEL_178;
  }
  SecurityContext = v25->Parameters.Create.SecurityContext;
  v27 = BYTE2(SecurityContext->SecurityQos);
  if ( v27 == 40 )
    FullCreateOptions = SecurityContext->FullCreateOptions;
  else
    FullCreateOptions = v27;
  if ( FullCreateOptions )
  {
    v4 = (IRP *)a2;
    goto LABEL_129;
  }
  if ( v27 != 40 )
  {
    v29 = SecurityContext + 3;
    goto LABEL_75;
  }
  v29 = 0LL;
  if ( !SecurityContext->FullCreateOptions )
  {
    AccessState = (unsigned int)SecurityContext[2].AccessState;
    for ( i = 0; i < AccessState; ++i )
    {
      v32 = *((unsigned int *)&SecurityContext[5].SecurityQos + i);
      if ( (unsigned int)v32 < 0x80 )
        continue;
      DesiredAccess = SecurityContext->DesiredAccess;
      if ( (unsigned int)v32 >= (unsigned int)DesiredAccess )
        continue;
      v34 = (__int64)SecurityContext + v32;
      v35 = (unsigned int)v32;
      v36 = *(_DWORD *)((char *)&SecurityContext->SecurityQos + v32) - 64;
      if ( v36 )
      {
        v37 = v36 - 1;
        if ( v37 )
        {
          if ( v37 == 1 && v35 + 40 <= DesiredAccess )
          {
            v29 = (_IO_SECURITY_CONTEXT *)(v34 + 32);
            if ( !*(_DWORD *)(v34 + 12) )
              v29 = 0LL;
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
      if ( v38 <= DesiredAccess )
      {
        if ( *(_BYTE *)(v34 + 10) )
          v29 = (_IO_SECURITY_CONTEXT *)(v34 + 24);
        break;
      }
    }
  }
LABEL_75:
  if ( v27 == 40 && !SecurityContext->FullCreateOptions )
  {
    v39 = (unsigned int)SecurityContext[2].AccessState;
    for ( j = 0; j < v39; ++j )
    {
      v41 = *((unsigned int *)&SecurityContext[5].SecurityQos + j);
      if ( (unsigned int)v41 >= 0x80 )
      {
        v42 = SecurityContext->DesiredAccess;
        if ( (unsigned int)v41 < (unsigned int)v42 )
        {
          v43 = (unsigned int)v41;
          v44 = *(_DWORD *)((char *)&SecurityContext->SecurityQos + v41) - 64;
          if ( !v44 )
            goto LABEL_83;
          v45 = v44 - 1;
          if ( !v45 )
          {
            v46 = v43 + 56;
LABEL_84:
            if ( v46 <= v42 )
              break;
            continue;
          }
          if ( v45 == 1 )
          {
LABEL_83:
            v46 = v43 + 40;
            goto LABEL_84;
          }
        }
      }
    }
  }
  if ( !v29 || ((LOBYTE(v29->SecurityQos) - 10) & 0x5F) != 0 || (v47 = *(_DWORD *)(a1 + 580)) == 0 )
  {
    v4 = (IRP *)a2;
    goto LABEL_128;
  }
  if ( v27 == 40 )
    SecurityQos = (int)SecurityContext[1].SecurityQos;
  else
    SecurityQos = HIDWORD(SecurityContext->AccessState);
  v4 = (IRP *)a2;
  if ( (SecurityQos & 0x1000) == 0 )
    goto LABEL_128;
  v49 = RaidZoneWriteGroupListSearchRequest((int)a1 + 400, a2, 0, v47, 1);
  if ( v49 )
  {
    v50 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
    if ( *(_BYTE *)(v50 + 2) != 40 )
    {
      v51 = v50 + 72;
      goto LABEL_115;
    }
    v51 = 0LL;
    if ( !*(_DWORD *)(v50 + 20) )
    {
      v52 = *(_DWORD *)(v50 + 56);
      for ( k = 0; k < v52; ++k )
      {
        v54 = *(unsigned int *)(v50 + 4LL * k + 120);
        if ( (unsigned int)v54 < 0x80 )
          continue;
        v55 = *(unsigned int *)(v50 + 16);
        if ( (unsigned int)v54 >= (unsigned int)v55 )
          continue;
        v56 = (unsigned int)v54;
        v57 = *(_DWORD *)(v54 + v50) - 64;
        if ( v57 )
        {
          v58 = v57 - 1;
          if ( v58 )
          {
            if ( v58 == 1 && v56 + 40 <= v55 )
            {
              v51 = v56 + v50 + 32;
              if ( !*(_DWORD *)(v56 + v50 + 12) )
                v51 = 0LL;
              break;
            }
            continue;
          }
          v59 = v56 + 56;
        }
        else
        {
          v59 = v56 + 40;
        }
        if ( v59 <= v55 )
        {
          if ( *(_BYTE *)(v56 + v50 + 10) )
            v51 = v56 + v50 + 24;
          break;
        }
      }
    }
LABEL_115:
    v125 = 0LL;
    RaidGetIoStartingLbaAndLength(v51, &v125, 0LL);
    v61 = _InterlockedCompareExchange64((volatile signed __int64 *)(v49 + 40), 0LL, 0LL);
    if ( v125 > v61 && (*(_DWORD *)(a1 + 416) != v60 || *(_DWORD *)(a1 + 476) != v60) )
    {
      v3 = v136 | 0x20;
      v136 |= 0x20u;
      goto LABEL_129;
    }
LABEL_128:
    v3 = v136;
    goto LABEL_129;
  }
  RaUnitReleaseRemoveLock(a1);
  v62 = *(_BYTE *)(v7 + 2);
  if ( v62 != 40 )
  {
    *(_QWORD *)(v7 + 56) = *(_QWORD *)(v7 + 40);
    *(_QWORD *)(v7 + 40) = 0LL;
  }
  v63 = *(_BYTE *)(v7 + 3);
  if ( v62 == 40 )
  {
    v64 = ((v63 >> 7) & 0x80) + 48;
  }
  else
  {
    v65 = 48;
    if ( v63 < 0 )
      v65 = -80;
    v64 = v65;
  }
  *(_BYTE *)(v7 + 3) = v64;
  RaidCompleteRequestEx((PIRP)a2);
  return 1LL;
}
