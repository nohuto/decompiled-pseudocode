/*
 * XREFs of PopPepInitializeVetoMasks @ 0x1402DD5E0
 * Callers:
 *     PopPepDeviceStarted @ 0x14018BF70 (PopPepDeviceStarted.c)
 *     PopPepPlatformStateRegistered @ 0x1402DDBAC (PopPepPlatformStateRegistered.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     PoFxIdleDevice @ 0x14015A028 (PoFxIdleDevice.c)
 *     PopFxActivateDevice @ 0x14015A1A8 (PopFxActivateDevice.c)
 *     PopPepUpdateIdleStateRefCount @ 0x1401725A8 (PopPepUpdateIdleStateRefCount.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PpmGetDeepSleepPlatformStateIndex @ 0x1402D410C (PpmGetDeepSleepPlatformStateIndex.c)
 *     PopFxBugCheck @ 0x1402D76B0 (PopFxBugCheck.c)
 *     PopPluginRequestComponentIdleConstraints @ 0x1402DAC28 (PopPluginRequestComponentIdleConstraints.c)
 *     PopFxEnableEnhancedAccounting @ 0x1402DC9C4 (PopFxEnableEnhancedAccounting.c)
 *     PopPepInitializeDebuggerMasks @ 0x1402DD4E0 (PopPepInitializeDebuggerMasks.c)
 *     PopPepResetDeviceAccountingLevel @ 0x1402DDF98 (PopPepResetDeviceAccountingLevel.c)
 *     PopDiagTraceFxDeviceIdleConstraints @ 0x1402E1010 (PopDiagTraceFxDeviceIdleConstraints.c)
 *     EmClientRuleEvaluate @ 0x1405664A0 (EmClientRuleEvaluate.c)
 */

void __fastcall PopPepInitializeVetoMasks(__int64 a1, unsigned int a2)
{
  ULONG_PTR v2; // r14
  __int64 v3; // rsi
  int v5; // eax
  __int128 v6; // xmm0
  int *v7; // r8
  unsigned int v8; // edi
  int v9; // ecx
  _DWORD *v10; // r8
  int DeepSleepPlatformStateIndex; // r12d
  signed __int32 v12; // r15d
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  unsigned int v17; // edx
  unsigned int v18; // edx
  unsigned int *v19; // r11
  int v20; // r15d
  __int64 v21; // r10
  _DWORD *v22; // r9
  unsigned int v23; // r8d
  unsigned int v24; // edi
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rax
  char v28; // al
  __int64 v29; // r12
  __int64 v30; // r13
  __int64 v31; // r13
  unsigned int *v32; // rdi
  int v33; // r11d
  unsigned int v34; // edx
  __int64 v35; // r8
  _DWORD *v36; // r9
  __int64 v37; // r10
  unsigned int v38; // eax
  _DWORD *v39; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  KIRQL v41; // [rsp+20h] [rbp-E0h]
  bool v42; // [rsp+21h] [rbp-DFh]
  signed __int32 v43; // [rsp+24h] [rbp-DCh] BYREF
  int v44; // [rsp+28h] [rbp-D8h] BYREF
  int v45; // [rsp+2Ch] [rbp-D4h]
  __int64 v46; // [rsp+30h] [rbp-D0h]
  unsigned int **v47; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v48; // [rsp+40h] [rbp-C0h]
  unsigned int *v49; // [rsp+48h] [rbp-B8h] BYREF
  int v50; // [rsp+50h] [rbp-B0h]
  _QWORD v51[2]; // [rsp+58h] [rbp-A8h] BYREF
  int v52; // [rsp+68h] [rbp-98h]
  unsigned int v53; // [rsp+70h] [rbp-90h] BYREF
  __int128 v54; // [rsp+78h] [rbp-88h]
  int v55; // [rsp+88h] [rbp-78h] BYREF
  char v56; // [rsp+8Ch] [rbp-74h] BYREF
  _BYTE v57[16]; // [rsp+100h] [rbp+0h] BYREF
  _DWORD v58[32]; // [rsp+110h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  v3 = a2;
  if ( !*(_QWORD *)(v2 + 48) )
  {
    if ( (*(_DWORD *)(v2 + 808) & 2) != 0 )
      PopPepInitializeDebuggerMasks(a1, a2);
    return;
  }
  v5 = v55;
  *(_BYTE *)(a1 + 384) = 0;
  v6 = *(_OWORD *)(v2 + 208);
  v7 = &v55;
  if ( (((unsigned __int8)v57 - 120) & 4) != 0 )
    v5 = 1;
  v55 = v5;
  if ( (((unsigned __int8)v57 - 120) & 4) != 0 )
    v7 = (int *)&v56;
  v54 = v6;
  memset64(v7, 0x100000001uLL, 16LL - ((((unsigned __int8)v57 - 120) & 4) != 0LL));
  if ( (((unsigned __int8)v57 - 120) & 4) != 0 )
    *(int *)((char *)v7 + (-(__int64)((((unsigned __int8)v57 - 120) & 4) != 0LL) & 0xFFFFFFFFFFFFFFFCuLL) + 124) = 1;
  v8 = 0;
  if ( a2 )
  {
    do
    {
      v53 = v8;
      v49 = &v53;
      v50 = 8;
      v47 = &v49;
      EmClientRuleEvaluate(&GUID_EM_PEP_UPADTE_DEVICE_CONTRAINT, &v47, 1LL, &v44);
      if ( v44 == 2 )
        *(_BYTE *)(a1 + 384) = 1;
      ++v8;
    }
    while ( v8 < (unsigned int)v3 );
  }
  v48 = *(_QWORD *)(*(_QWORD *)(v2 + 48) + 32LL);
  PopFxActivateDevice(v48, 0, 0);
  v9 = v58[0];
  v10 = v58;
  if ( (((unsigned __int8)v57 + 16) & 4) != 0 )
    v9 = 1;
  v58[0] = v9;
  if ( (((unsigned __int8)v57 + 16) & 4) != 0 )
    v10 = &v58[1];
  memset64(v10, 0x100000001uLL, 16LL - ((((unsigned __int8)v57 + 16) & 4) != 0LL));
  if ( (((unsigned __int8)v57 + 16) & 4) != 0 )
    *(_DWORD *)((char *)v10 + (-(__int64)((((unsigned __int8)v57 + 16) & 4) != 0LL) & 0xFFFFFFFFFFFFFFFCuLL) + 124) = 1;
  v41 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64));
  DeepSleepPlatformStateIndex = PpmGetDeepSleepPlatformStateIndex();
  v45 = DeepSleepPlatformStateIndex;
  v42 = 0;
  v43 = _InterlockedCompareExchange(&PopFxDeviceAccountingLevel, 0, 0);
  v12 = v43;
  KxAcquireSpinLock((PKSPIN_LOCK)(v2 + 584));
  *(_DWORD *)(v2 + 600) = v43;
  memset((void *)(v2 + 616), 0, 0xC0uLL);
  *(_BYTE *)(v2 + 592) = 0;
  v13 = *(_QWORD *)(a1 + 32);
  v14 = *(_QWORD *)(v13 + 64);
  if ( v14 == PopFxProcessorPlugin )
  {
    if ( v14 )
    {
      v51[0] = *(_QWORD *)(v13 + 72);
      v51[1] = v58;
      v52 = v3;
      if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD *))(v14 + 96))(26LL, v51) )
      {
        PopDiagTraceFxDeviceIdleConstraints(v13, v58, (unsigned int)v3);
        goto LABEL_25;
      }
    }
  }
  if ( *(_BYTE *)(a1 + 384) )
  {
LABEL_25:
    v42 = PopFxEnableEnhancedAccounting(&v43);
    if ( *(_BYTE *)(a1 + 384) && (_DWORD)v3 )
    {
      v15 = 0LL;
      v16 = v3;
      do
      {
        v17 = *(int *)((char *)&v55 + v15 * 4);
        if ( v58[v15] < v17 )
          v58[v15] = v17;
        ++v15;
        --v16;
      }
      while ( v16 );
    }
    v18 = 0;
    v19 = v58;
    v20 = 1;
    if ( (_DWORD)v3 )
    {
      v21 = 0LL;
      v22 = v58;
      do
      {
        if ( !*(_BYTE *)(v21 + PopPepPlatformState + 57) && *v22 != 1 )
          PopFxBugCheck(0x620uLL, v2, v18, 0LL);
        v23 = *v19;
        v24 = 1;
        do
        {
          if ( v24 >= v23 )
            break;
          v25 = v24++ - 1;
          *(_DWORD *)(a1 + 4 * v25 + 144) |= v20;
        }
        while ( v24 <= 3 );
        if ( DeepSleepPlatformStateIndex != -1 && v18 == DeepSleepPlatformStateIndex && v23 > 1 )
        {
          *(_DWORD *)(v2 + 596) = v23;
          *(_QWORD *)(v2 + 608) = MEMORY[0xFFFFF78000000008];
          *(_BYTE *)(v2 + 592) = 1;
          _InterlockedOr((volatile signed __int32 *)(v2 + 808), 0x10u);
        }
        ++v19;
        v20 *= 2;
        ++v18;
        v21 += 384LL;
        ++v22;
      }
      while ( v18 < (unsigned int)v3 );
    }
    v26 = *(_DWORD *)(a1 + 152);
    v12 = v43;
    *(_QWORD *)(a1 + 156) = *(_QWORD *)(a1 + 144);
    *(_DWORD *)(a1 + 164) = v26;
  }
  *(_DWORD *)(v2 + 600) = v12;
  KxReleaseSpinLock((PKSPIN_LOCK)(v2 + 584));
  v27 = *(int *)(a1 + 168);
  if ( (_DWORD)v27 != 4 )
    PopPepUpdateIdleStateRefCount(0LL, *(_DWORD *)(a1 + 4 * v27 + 140), 1LL);
  v28 = *(_BYTE *)(a1 + 124);
  if ( v28 )
  {
    v29 = 0LL;
    if ( *(_DWORD *)(a1 + 180) )
    {
      do
      {
        v46 = a1 + 200LL * (unsigned int)v29;
        v30 = *(_QWORD *)(*(_QWORD *)(v2 + 816) + 8 * v29);
        memset(v58, 0, sizeof(v58));
        v31 = v30 + 200;
        KxAcquireSpinLock((PKSPIN_LOCK)v31);
        *(_DWORD *)(v31 + 16) = v12;
        memset((void *)(v31 + 32), 0, 0xC0uLL);
        *(_BYTE *)(v31 + 8) = 0;
        if ( PopPluginRequestComponentIdleConstraints(*(_QWORD *)(a1 + 32), v29, (__int64)v58, v3) )
        {
          v42 = PopFxEnableEnhancedAccounting(&v43);
          v32 = v58;
          v33 = 1;
          v34 = 0;
          if ( (_DWORD)v3 )
          {
            v35 = v46;
            v36 = v58;
            v37 = 0LL;
            do
            {
              if ( !*(_BYTE *)(v37 + PopPepPlatformState + 57) && *v36 )
                PopFxBugCheck(0x621uLL, v2, (unsigned int)v29, v34);
              v38 = 0;
              if ( *(_DWORD *)(v35 + 372) )
              {
                v39 = (_DWORD *)(*(_QWORD *)(v35 + 376) + 16LL);
                do
                {
                  if ( v38 >= *v32 )
                    break;
                  *v39 |= v33;
                  ++v38;
                  v39 += 6;
                }
                while ( v38 < *(_DWORD *)(v35 + 372) );
              }
              if ( v45 != -1 && v34 == v45 && *v32 )
              {
                *(_DWORD *)(v31 + 12) = *v32;
                *(_QWORD *)(v31 + 24) = MEMORY[0xFFFFF78000000008];
                *(_BYTE *)(v31 + 8) = 1;
                _InterlockedOr((volatile signed __int32 *)(v2 + 808), 0x10u);
              }
              ++v32;
              v33 *= 2;
              ++v34;
              v37 += 384LL;
              ++v36;
            }
            while ( v34 < (unsigned int)v3 );
          }
          v12 = v43;
        }
        *(_DWORD *)(v31 + 16) = v12;
        KxReleaseSpinLock((PKSPIN_LOCK)v31);
        PopPepUpdateIdleStateRefCount(
          0LL,
          *(_DWORD *)(*(_QWORD *)(v46 + 376) + 24LL * *(unsigned int *)(v46 + 360) + 16),
          1LL);
        v29 = (unsigned int)(v29 + 1);
      }
      while ( (unsigned int)v29 < *(_DWORD *)(a1 + 180) );
      v28 = *(_BYTE *)(a1 + 124);
    }
    if ( v28 )
      goto LABEL_67;
  }
  if ( *(_BYTE *)(a1 + 384) )
LABEL_67:
    *(_DWORD *)(a1 + 172) = 2;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v41 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v41);
  PoFxIdleDevice(v48);
  if ( v42 )
    PopPepResetDeviceAccountingLevel();
}
