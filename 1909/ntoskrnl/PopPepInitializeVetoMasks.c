/*
 * XREFs of PopPepInitializeVetoMasks @ 0x1402F9654
 * Callers:
 *     PopPepDeviceStarted @ 0x140195E80 (PopPepDeviceStarted.c)
 *     PopPepPlatformStateRegistered @ 0x1402F9D4C (PopPepPlatformStateRegistered.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140091710 (KxAcquireSpinLock.c)
 *     PoFxIdleDevice @ 0x140145E7C (PoFxIdleDevice.c)
 *     PopFxActivateDevice @ 0x140145FF4 (PopFxActivateDevice.c)
 *     PopPepUpdateIdleStateRefCount @ 0x14017BFA8 (PopPepUpdateIdleStateRefCount.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PpmGetDeepSleepPlatformStateIndex @ 0x1402EE360 (PpmGetDeepSleepPlatformStateIndex.c)
 *     PopFxBugCheck @ 0x1402F1DB0 (PopFxBugCheck.c)
 *     PopPluginRequestComponentIdleConstraints @ 0x1402F6020 (PopPluginRequestComponentIdleConstraints.c)
 *     PopPluginRequestDeviceIdleConstraints @ 0x1402F6144 (PopPluginRequestDeviceIdleConstraints.c)
 *     PopFxEnableEnhancedAccounting @ 0x1402F8A48 (PopFxEnableEnhancedAccounting.c)
 *     PopPepInitializeDebuggerMasks @ 0x1402F9550 (PopPepInitializeDebuggerMasks.c)
 *     PopPepResetDeviceAccountingLevel @ 0x1402FA704 (PopPepResetDeviceAccountingLevel.c)
 *     EmClientRuleEvaluate @ 0x140595590 (EmClientRuleEvaluate.c)
 */

void __fastcall PopPepInitializeVetoMasks(__int64 a1, unsigned int a2)
{
  __int64 v2; // r15
  ULONG_PTR v4; // rsi
  int v5; // eax
  char v6; // sp
  __int64 v7; // rdx
  __int128 v8; // xmm0
  char *v9; // r8
  unsigned int i; // edi
  int v11; // ecx
  unsigned __int64 v12; // rdx
  _DWORD *v13; // r8
  int DeepSleepPlatformStateIndex; // r12d
  bool v15; // di
  signed __int32 v16; // r14d
  __int64 v17; // rcx
  __int64 v18; // rdi
  unsigned int v19; // edx
  unsigned int v20; // edx
  unsigned int *v21; // r11
  int v22; // r14d
  __int64 v23; // r10
  _DWORD *v24; // r9
  unsigned int v25; // r8d
  unsigned int v26; // edi
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rax
  char v30; // al
  __int64 v31; // r12
  __int64 v32; // r13
  __int64 v33; // r13
  unsigned int *v34; // rdi
  int v35; // r11d
  unsigned int v36; // edx
  __int64 v37; // r10
  _DWORD *v38; // r8
  __int64 v39; // r9
  unsigned int v40; // eax
  _DWORD *v41; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  bool v43; // [rsp+20h] [rbp-E0h]
  KIRQL v44; // [rsp+21h] [rbp-DFh]
  char v45; // [rsp+22h] [rbp-DEh]
  signed __int32 v46; // [rsp+24h] [rbp-DCh] BYREF
  int v47; // [rsp+28h] [rbp-D8h] BYREF
  int v48; // [rsp+2Ch] [rbp-D4h]
  __int64 v49; // [rsp+30h] [rbp-D0h]
  _QWORD *v50; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v51; // [rsp+40h] [rbp-C0h]
  _QWORD *v52; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v53; // [rsp+50h] [rbp-B0h]
  _QWORD v54[20]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v55[32]; // [rsp+100h] [rbp+0h] BYREF

  v2 = a2;
  v50 = 0LL;
  v51 = 0LL;
  memset(v54, 0, 0x98uLL);
  v4 = *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(v4 + 48) )
  {
    v5 = v54[3];
    v7 = (v6 + 120) & 4;
    *(_BYTE *)(a1 + 384) = 0;
    v8 = *(_OWORD *)(v4 + 216);
    v9 = (char *)&v54[3];
    if ( ((v6 + 120) & 4) != 0 )
      v5 = 1;
    LODWORD(v54[3]) = v5;
    if ( ((v6 + 120) & 4) != 0 )
      v9 = (char *)&v54[3] + 4;
    *(_OWORD *)&v54[1] = v8;
    memset64(v9, 0x100000001uLL, 16LL - ((unsigned int)v7 != 0LL));
    if ( ((v6 + 120) & 4) != 0 )
      *(_DWORD *)&v9[(-(__int64)(v7 != 0) & 0xFFFFFFFFFFFFFFFCuLL) + 124] = 1;
    for ( i = 0; i < (unsigned int)v2; ++i )
    {
      LODWORD(v54[0]) = i;
      v50 = v54;
      LODWORD(v51) = 8;
      v52 = &v50;
      EmClientRuleEvaluate(&GUID_EM_PEP_UPADTE_DEVICE_CONTRAINT, &v52, 1LL, &v47);
      if ( v47 == 2 )
        *(_BYTE *)(a1 + 384) = 1;
    }
    v53 = *(_QWORD *)(*(_QWORD *)(v4 + 48) + 32LL);
    PopFxActivateDevice(v53, 0, 0);
    v11 = v55[0];
    v12 = (unsigned __int64)v55 & 4;
    v13 = v55;
    if ( ((unsigned __int8)v55 & 4) != 0 )
      v11 = 1;
    v55[0] = v11;
    if ( ((unsigned __int8)v55 & 4) != 0 )
      v13 = &v55[1];
    memset64(v13, 0x100000001uLL, 16LL - ((unsigned int)v12 != 0LL));
    if ( ((unsigned __int8)v55 & 4) != 0 )
      *(_DWORD *)((char *)v13 + (-(__int64)(v12 != 0) & 0xFFFFFFFFFFFFFFFCuLL) + 124) = 1;
    v44 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64));
    DeepSleepPlatformStateIndex = PpmGetDeepSleepPlatformStateIndex();
    v48 = DeepSleepPlatformStateIndex;
    v43 = 0;
    v15 = 0;
    v46 = _InterlockedCompareExchange(&PopFxDeviceAccountingLevel, 0, 0);
    v16 = v46;
    KxAcquireSpinLock((PKSPIN_LOCK)(v4 + 592));
    *(_DWORD *)(v4 + 608) = v46;
    memset((void *)(v4 + 624), 0, 0xC0uLL);
    *(_BYTE *)(v4 + 600) = 0;
    if ( PopPluginRequestDeviceIdleConstraints(*(_QWORD *)(a1 + 32), (__int64)v55, v2) || *(_BYTE *)(a1 + 384) )
    {
      v43 = PopFxEnableEnhancedAccounting(&v46);
      if ( *(_BYTE *)(a1 + 384) && (_DWORD)v2 )
      {
        v17 = 0LL;
        v18 = v2;
        do
        {
          v19 = *(_DWORD *)((char *)&v54[3] + v17 * 4);
          if ( v55[v17] < v19 )
            v55[v17] = v19;
          ++v17;
          --v18;
        }
        while ( v18 );
      }
      v20 = 0;
      v21 = v55;
      v22 = 1;
      if ( (_DWORD)v2 )
      {
        v23 = 0LL;
        v24 = v55;
        do
        {
          if ( !*(_BYTE *)(v23 + PopPepPlatformState + 57) && *v24 != 1 )
            PopFxBugCheck(0x620uLL, v4, v20, 0LL);
          v25 = *v21;
          v26 = 1;
          do
          {
            if ( v26 >= v25 )
              break;
            v27 = v26++ - 1;
            *(_DWORD *)(a1 + 4 * v27 + 144) |= v22;
          }
          while ( v26 <= 3 );
          if ( DeepSleepPlatformStateIndex != -1 && v20 == DeepSleepPlatformStateIndex && v25 > 1 )
          {
            *(_DWORD *)(v4 + 604) = v25;
            *(_QWORD *)(v4 + 616) = MEMORY[0xFFFFF78000000008];
            *(_BYTE *)(v4 + 600) = 1;
            _InterlockedOr((volatile signed __int32 *)(v4 + 816), 0x10u);
          }
          ++v21;
          v22 *= 2;
          ++v20;
          v23 += 384LL;
          ++v24;
        }
        while ( v20 < (unsigned int)v2 );
      }
      v28 = *(_DWORD *)(a1 + 152);
      v16 = v46;
      v15 = v43;
      *(_QWORD *)(a1 + 156) = *(_QWORD *)(a1 + 144);
      *(_DWORD *)(a1 + 164) = v28;
    }
    *(_DWORD *)(v4 + 608) = v16;
    KxReleaseSpinLock((PKSPIN_LOCK)(v4 + 592));
    v29 = *(int *)(a1 + 168);
    if ( (_DWORD)v29 != 4 )
      PopPepUpdateIdleStateRefCount(0LL, *(_DWORD *)(a1 + 4 * v29 + 140), 1);
    v30 = *(_BYTE *)(a1 + 124);
    if ( v30 )
    {
      v31 = 0LL;
      v45 = 0;
      if ( *(_DWORD *)(a1 + 180) )
      {
        while ( 1 )
        {
          v49 = a1 + 200LL * (unsigned int)v31;
          v32 = *(_QWORD *)(*(_QWORD *)(v4 + 824) + 8 * v31);
          memset(v55, 0, sizeof(v55));
          v33 = v32 + 200;
          KxAcquireSpinLock((PKSPIN_LOCK)v33);
          *(_DWORD *)(v33 + 16) = v16;
          memset((void *)(v33 + 32), 0, 0xC0uLL);
          *(_BYTE *)(v33 + 8) = 0;
          if ( PopPluginRequestComponentIdleConstraints(*(_QWORD *)(a1 + 32), v31, (__int64)v55, v2) )
          {
            v43 = PopFxEnableEnhancedAccounting(&v46);
            v34 = v55;
            v35 = 1;
            v36 = 0;
            if ( (_DWORD)v2 )
            {
              v37 = v49;
              v38 = v55;
              v39 = 0LL;
              do
              {
                if ( !*(_BYTE *)(v39 + PopPepPlatformState + 57) && *v38 )
                  PopFxBugCheck(0x621uLL, v4, (unsigned int)v31, v36);
                v40 = 0;
                if ( *(_DWORD *)(v37 + 372) )
                {
                  v41 = (_DWORD *)(*(_QWORD *)(v37 + 376) + 16LL);
                  do
                  {
                    if ( v40 >= *v34 )
                      break;
                    *v41 |= v35;
                    ++v40;
                    v41 += 6;
                  }
                  while ( v40 < *(_DWORD *)(v37 + 372) );
                }
                if ( v48 != -1 && v36 == v48 && *v34 )
                {
                  *(_DWORD *)(v33 + 12) = *v34;
                  *(_QWORD *)(v33 + 24) = MEMORY[0xFFFFF78000000008];
                  *(_BYTE *)(v33 + 8) = 1;
                  v45 = 1;
                  _InterlockedOr((volatile signed __int32 *)(v4 + 816), 0x10u);
                }
                ++v34;
                v35 *= 2;
                ++v36;
                v39 += 384LL;
                ++v38;
              }
              while ( v36 < (unsigned int)v2 );
            }
            v16 = v46;
          }
          *(_DWORD *)(v33 + 16) = v16;
          KxReleaseSpinLock((PKSPIN_LOCK)v33);
          PopPepUpdateIdleStateRefCount(
            0LL,
            *(_DWORD *)(*(_QWORD *)(v49 + 376) + 24LL * *(unsigned int *)(v49 + 360) + 16),
            1);
          if ( v45 )
            _InterlockedOr((volatile signed __int32 *)(v4 + 816), 0x100u);
          else
            _InterlockedAnd((volatile signed __int32 *)(v4 + 816), 0xFFFFFEFF);
          v31 = (unsigned int)(v31 + 1);
          if ( (unsigned int)v31 >= *(_DWORD *)(a1 + 180) )
            break;
          v16 = v46;
        }
        v30 = *(_BYTE *)(a1 + 124);
        v15 = v43;
      }
      if ( v30 )
        goto LABEL_70;
    }
    if ( *(_BYTE *)(a1 + 384) )
LABEL_70:
      *(_DWORD *)(a1 + 172) = 2;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v44 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v44);
    PoFxIdleDevice(v53);
    if ( v15 )
      PopPepResetDeviceAccountingLevel();
  }
  else if ( (*(_DWORD *)(v4 + 816) & 2) != 0 )
  {
    PopPepInitializeDebuggerMasks(a1, v2);
  }
}
