/*
 * XREFs of PpmParkSteerInterrupts @ 0x14009DA20
 * Callers:
 *     <none>
 * Callees:
 *     EtwWriteEx @ 0x1400366F0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140091710 (KxAcquireSpinLock.c)
 *     KeCopyAffinityEx @ 0x14009A190 (KeCopyAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x14009E060 (KeAddProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x14009E0E0 (KeEnumerateNextProcessor.c)
 *     KeIsEmptyAffinityEx @ 0x14009E170 (KeIsEmptyAffinityEx.c)
 *     KeAndAffinityEx @ 0x14009E1A0 (KeAndAffinityEx.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x14009E2A0 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     KeComplementAffinityEx @ 0x14009E350 (KeComplementAffinityEx.c)
 *     KeIntSteerSnapPerf @ 0x14009E3C0 (KeIntSteerSnapPerf.c)
 *     KiIntSteerDistributeInterrupts @ 0x14009E8A0 (KiIntSteerDistributeInterrupts.c)
 *     KiIntSteerCalculateDistribution @ 0x14009E9F0 (KiIntSteerCalculateDistribution.c)
 *     KeSubtractAffinityEx @ 0x14009EC70 (KeSubtractAffinityEx.c)
 *     KiIntSteerLogState @ 0x14017D0C0 (KiIntSteerLogState.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     KeFindFirstSetRightAffinityEx @ 0x1402A4B50 (KeFindFirstSetRightAffinityEx.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

char PpmParkSteerInterrupts()
{
  unsigned int v0; // r14d
  unsigned int v1; // edi
  unsigned int v2; // ebx
  unsigned __int64 v3; // r9
  __int64 v4; // r11
  unsigned __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // r10
  __int64 v8; // r8
  unsigned int v9; // eax
  char v10; // r8
  __int64 v11; // rax
  unsigned int v12; // edi
  unsigned __int64 *v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rdx
  bool v16; // cf
  unsigned __int8 CurrentIrql; // di
  REGHANDLE v18; // rbx
  SIZE_T v20; // rbx
  PVOID PoolWithTag; // rax
  unsigned int FirstSetRightAffinity; // eax
  ULONG_PTR *i; // rbx
  ULONG_PTR *j; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v26; // [rsp+50h] [rbp-B0h] BYREF
  int *v27; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+60h] [rbp-A0h]
  __int64 v29; // [rsp+68h] [rbp-98h]
  int v30; // [rsp+70h] [rbp-90h] BYREF
  int v31; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v32; // [rsp+78h] [rbp-88h] BYREF
  int v33; // [rsp+80h] [rbp-80h]
  _QWORD v34[2]; // [rsp+88h] [rbp-78h] BYREF
  __int16 v35; // [rsp+98h] [rbp-68h]
  int v36; // [rsp+9Ah] [rbp-66h]
  __int16 v37; // [rsp+9Eh] [rbp-62h]
  _QWORD v38[22]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v39[22]; // [rsp+150h] [rbp+50h] BYREF
  _QWORD v40[22]; // [rsp+200h] [rbp+100h] BYREF
  _DWORD v41[44]; // [rsp+2B0h] [rbp+1B0h] BYREF
  _QWORD v42[22]; // [rsp+360h] [rbp+260h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+410h] [rbp+310h] BYREF
  __int64 v44; // [rsp+420h] [rbp+320h]
  __int64 v45; // [rsp+428h] [rbp+328h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+430h] [rbp+330h] BYREF
  int *v47; // [rsp+440h] [rbp+340h]
  __int64 v48; // [rsp+448h] [rbp+348h]
  int *v49; // [rsp+450h] [rbp+350h]
  __int64 v50; // [rsp+458h] [rbp+358h]
  int *v51; // [rsp+460h] [rbp+360h]
  __int64 v52; // [rsp+468h] [rbp+368h]
  __int64 *v53; // [rsp+470h] [rbp+370h]
  int v54; // [rsp+478h] [rbp+378h]
  int v55; // [rsp+47Ch] [rbp+37Ch]

  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  memset(v38, 0, 0xA8uLL);
  memset(&v39[1], 0, 0xA0uLL);
  memset(v40, 0, 0xA8uLL);
  memset(v41, 0, 0xA8uLL);
  memset(v42, 0, 0xA8uLL);
  if ( PpmIntSteerDisabled || !KiIntTrackRootEnabled )
    return 1;
  if ( !PpmIntSteerTrigger )
  {
    v20 = 8 * (unsigned int)HalQueryMaximumProcessorCount();
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v20, 0x6B725449u);
    PpmIntSteerTrigger = (__int64)PoolWithTag;
    if ( !PoolWithTag )
      return 1;
    memset(PoolWithTag, 0, (unsigned int)v20);
  }
  KeIntSteerSnapPerf(&v31, &v32);
  KeComplementAffinityEx(v40, &PpmPerfCoreParkingMask);
  KeQuerySystemAllowedCpuSetAffinity(PpmCachedSystemAllowedCpuSet, &PpmCachedSystemAllowedCpuSetVersion);
  KeAndAffinityEx(v40, PpmCachedSystemAllowedCpuSet, v40);
  LODWORD(v39[0]) = 1310721;
  v0 = 0;
  v1 = 0;
  v2 = 0;
  memset((char *)v39 + 4, 0, 0xA4uLL);
  v3 = qword_140572748[0];
  v4 = v32;
  v28 = qword_140572748[0];
  v27 = KeActiveProcessors;
  while ( v3 )
  {
LABEL_6:
    ++v0;
    _BitScanForward64(&v5, v3);
    v3 &= ~(1LL << v5);
    v33 = v5;
    v28 = v3;
    v6 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * (unsigned __int16)v29 + (unsigned __int8)v5];
    v26 = v6;
    v7 = 4 * v6 + 5730528;
    v8 = 8 * v6;
    if ( ((v40[((unsigned __int64)*(unsigned int *)(v7 + 0x140000000LL) >> 6) + 1] >> (*(_DWORD *)(v7 + 0x140000000LL) & 0x3F)) & 1) != 0 )
    {
      ++v2;
      if ( !*(_QWORD *)(v8 + PpmIntSteerTrigger) )
        *(_QWORD *)(v8 + PpmIntSteerTrigger) = v4;
      if ( v4 - *(_QWORD *)(v8 + PpmIntSteerTrigger) >= (unsigned __int64)(10000 * PpmIntSteerTriggerMax) )
      {
        v9 = *(_DWORD *)(v7 + 0x140000000LL);
        v10 = v9 & 0x3F;
        v11 = v9 >> 6;
        if ( LOWORD(v39[0]) <= (unsigned int)v11 )
          LOWORD(v39[0]) = v11 + 1;
        v39[v11 + 1] |= 1LL << v10;
        ++v1;
      }
    }
    else
    {
      *(_QWORD *)(v8 + PpmIntSteerTrigger) = 0LL;
    }
  }
  while ( 1 )
  {
    LOWORD(v29) = v29 + 1;
    if ( (unsigned __int16)v29 >= (unsigned int)LOWORD(KeActiveProcessors[0]) )
      break;
    v28 = *(_QWORD *)&KeActiveProcessors[2 * (unsigned __int16)v29 + 2];
    v3 = v28;
    if ( v28 )
    {
      v4 = v32;
      goto LABEL_6;
    }
  }
  if ( !v1 )
  {
    if ( v2 )
    {
      KeCopyAffinityEx((__int64)v39, (unsigned __int16 *)v40);
      v1 = v2;
    }
    else
    {
      FirstSetRightAffinity = KeFindFirstSetRightAffinityEx(PpmCachedSystemAllowedCpuSet);
      if ( FirstSetRightAffinity == -1 )
        FirstSetRightAffinity = 0;
      v26 = FirstSetRightAffinity;
      KeAddProcessorAffinityEx(v39, FirstSetRightAffinity);
      v1 = 1;
    }
  }
  if ( PpmIntSteerMode < 1 )
    goto LABEL_16;
  switch ( PpmIntSteerMode )
  {
    case 1:
      KeCopyAffinityEx((__int64)v38, (unsigned __int16 *)KeActiveProcessors);
      v2 = v0;
      break;
    case 2:
      KeCopyAffinityEx((__int64)v38, (unsigned __int16 *)v39);
      v2 = v1;
      break;
    case 3:
      KeCopyAffinityEx((__int64)v38, (unsigned __int16 *)v40);
      break;
    default:
      if ( (unsigned int)(PpmIntSteerMode - 5) > 1 )
      {
LABEL_16:
        v2 = (PpmIntSteerLoadMax + v31) / (unsigned int)PpmIntSteerLoadMax;
        if ( v2 >= v1 )
        {
          v2 = v1;
          KeCopyAffinityEx((__int64)v38, (unsigned __int16 *)v39);
        }
        else
        {
          LODWORD(v38[0]) = 1310721;
          memset((char *)v38 + 4, 0, 0xA4uLL);
          v41[0] = 1310721;
          memset(&v41[1], 0, 0xA4uLL);
          if ( PpmParkPreferenceHandler )
            PpmParkPreferenceHandler(1LL, PpmCheckTime, v2, v39, 0LL, 0LL, v41, v38);
          v12 = 0;
          if ( LOWORD(v38[0]) )
          {
            v13 = &v38[1];
            v14 = LOWORD(v38[0]);
            do
            {
              v15 = *v13++;
              v12 += (unsigned int)((0x101010101010101LL
                                   * ((((v15 - ((v15 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                     + (((v15 - ((v15 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                     + ((((v15 - ((v15 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                       + (((v15 - ((v15 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
              --v14;
            }
            while ( v14 );
          }
          v16 = v12 < v2;
          if ( v12 > v2 )
          {
            LODWORD(v38[0]) = 1310721;
            memset((char *)v38 + 4, 0, 0xA4uLL);
            v16 = v2 != 0;
            v12 = 0;
          }
          if ( v16 )
          {
            KeSubtractAffinityEx(v39, v41, v42);
            v28 = v42[1];
            v27 = (int *)v42;
            LOWORD(v29) = 0;
            while ( !(unsigned int)KeEnumerateNextProcessor(&v26, &v27) )
            {
              if ( ((v38[((unsigned int)KiProcessorIndexToNumberMappingTable[v26] >> 6) + 1] >> (KiProcessorIndexToNumberMappingTable[v26] & 0x3F)) & 1) == 0 )
              {
                KeAddProcessorAffinityEx(v38, v26);
                if ( ++v12 >= v2 )
                  goto LABEL_29;
              }
            }
            if ( v12 < v2 )
            {
              v28 = v39[1];
              v27 = (int *)v39;
              LOWORD(v29) = 0;
              while ( !(unsigned int)KeEnumerateNextProcessor(&v26, &v27) )
              {
                if ( ((v38[((unsigned int)KiProcessorIndexToNumberMappingTable[v26] >> 6) + 1] >> (KiProcessorIndexToNumberMappingTable[v26] & 0x3F)) & 1) == 0 )
                {
                  KeAddProcessorAffinityEx(v38, v26);
                  if ( ++v12 >= v2 )
                    break;
                }
              }
            }
          }
        }
        break;
      }
      LODWORD(v38[0]) = 1310721;
      memset((char *)v38 + 4, 0, 0xA4uLL);
      KeAddProcessorAffinityEx(v38, (unsigned int)(PpmIntSteerMode - 5));
      v2 = 1;
      break;
  }
LABEL_29:
  if ( (unsigned int)KeIsEmptyAffinityEx(v38) )
    KeAddProcessorAffinityEx(v38, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  KxAcquireSpinLock(&KiIntTrackSpinlock);
  KiIntSteerCalculateDistribution(v38, v2);
  KiIntSteerMask = v38[0];
  dword_140446B64 = 0;
  if ( LOWORD(v38[0]) )
    memmove(&qword_140446B68, &v38[1], 8LL * LOWORD(v38[0]));
  KiIntSteerMaskCount = v2;
  v18 = KiIntSteerEtwHandle;
  if ( KiIntSteerEtwHandle && EtwEventEnabled(KiIntSteerEtwHandle, &PPM_ETW_INTERRUPT_STEERING_MASK_CHANGE) )
  {
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&KiIntSteerLoadPercent;
    v48 = 4LL;
    v47 = &KiIntTrackRootCount;
    v50 = 4LL;
    v49 = &KiIntSteerMaskCount;
    v52 = 2LL;
    v51 = &KiIntSteerMask;
    v53 = &qword_140446B68;
    v55 = 0;
    v54 = 160 * (unsigned __int16)KiIntSteerMask;
    EtwWriteEx(v18, &PPM_ETW_INTERRUPT_STEERING_MASK_CHANGE, 0LL, 0, 0LL, 0LL, 5u, &UserData);
  }
  v36 = 0;
  v37 = 0;
  if ( KiIntSteerEtwHandle )
  {
    if ( EtwEventEnabled(KiIntSteerEtwHandle, &PPM_ETW_INTERRUPT_STEERING_PROC_CHANGE) )
    {
      v34[1] = qword_140572748[0];
      v34[0] = KeActiveProcessors;
      v35 = 0;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v30, v34) )
      {
        v43.Ptr = (ULONGLONG)&v30;
        *(_QWORD *)&v43.Size = 4LL;
        v45 = 4LL;
        v44 = KiProcessorBlock[v30] + 11672;
        EtwWriteEx(KiIntSteerEtwHandle, &PPM_ETW_INTERRUPT_STEERING_PROC_CHANGE, 0LL, 0, 0LL, 0LL, 2u, &v43);
      }
    }
    if ( KiIntSteerEtwHandle )
    {
      if ( EtwEventEnabled(KiIntSteerEtwHandle, &PPM_ETW_INTERRUPT_STEERING_STATE_RETARGET) )
      {
        for ( i = (ULONG_PTR *)KiIntTrackRootList; i != &KiIntTrackRootList; i = (ULONG_PTR *)*i )
        {
          if ( i[22] != i[20] )
          {
            for ( j = (ULONG_PTR *)i[2]; j != i + 2; j = (ULONG_PTR *)*j )
              KiIntSteerLogState(j, &PPM_ETW_INTERRUPT_STEERING_STATE_RETARGET);
          }
        }
      }
    }
  }
  KiIntSteerDistributeInterrupts();
  KxReleaseSpinLock(&KiIntTrackSpinlock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(CurrentIrql);
  return 1;
}
