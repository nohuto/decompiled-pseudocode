/*
 * XREFs of ApplyPathsModality @ 0x1C003E2EC
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C004C710 (DrvSetDisplayConfig.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0029E50 (EngAcquireSemaphore.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C003EBF8 (DrvNotifyModeChangeStartStop.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C003F640 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ApplyPathModalityToCdsRegistryStore @ 0x1C0040944 (ApplyPathModalityToCdsRegistryStore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005E110 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005FBC0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00913D0 (GreIncrementDisplaySettingsUniqueness.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApplyPathsModality(
        __int64 a1,
        unsigned int a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5,
        _BYTE *a6,
        __int64 *a7,
        __int64 a8)
{
  int v12; // edi
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // edi
  unsigned int v22; // r9d
  __int64 v23; // rdx
  unsigned int v24; // ecx
  __int64 v25; // r8
  __int64 v27; // r8
  unsigned int v28; // ebx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // rcx
  _QWORD *v37; // rax

  v12 = 0;
  *a6 = 0;
  if ( (unsigned int)ApplyPathModalityToCdsRegistryStore() )
  {
    LOBYTE(v13) = 1;
    DrvNotifyModeChangeStartStop(v13);
    if ( *(_DWORD *)(a1 + 36) || *(_QWORD *)(a1 + 40) )
    {
      v31 = WdLogNewEntry5_WdAssertion(v15, v14, v16);
      WdLogEvent5_WdAssertion(v31);
    }
    v17 = a2;
    LODWORD(v17) = a2 | 0x20000;
    if ( (int)((__int64 (__fastcall *)(__int64, __int64, __int64))qword_1C01CD8B8)(v17, a1, a8) < 0 )
    {
      *a6 = 1;
      v21 = -1;
    }
    else
    {
      if ( !*(_DWORD *)(a1 + 36) || !*(_QWORD *)(a1 + 40) )
      {
        v32 = WdLogNewEntry5_WdAssertion(v19, v18, v20);
        WdLogEvent5_WdAssertion(v32);
      }
      if ( (a2 & 0x400000) != 0 )
      {
        v33 = *(unsigned int *)(a1 + 36);
        v12 = 1;
        v34 = 0LL;
        if ( (_DWORD)v33 )
        {
          while ( 1 )
          {
            v35 = (unsigned int)v34;
            v36 = 324LL * (unsigned int)v34;
            if ( *(_DWORD *)(v36 + *(_QWORD *)(a1 + 40) + 84) != *(_DWORD *)(v36 + *(_QWORD *)(a1 + 40) + 116) )
              break;
            v34 = (unsigned int)(v34 + 1);
            if ( (unsigned int)v34 >= (unsigned int)v33 )
              goto LABEL_8;
          }
          v37 = (_QWORD *)WdLogNewEntry5_WdEvent(v36, v34, v33);
          v37[3] = *(int *)(324 * v35 + *(_QWORD *)(a1 + 40) + 4);
          v37[4] = *(unsigned int *)(324 * v35 + *(_QWORD *)(a1 + 40));
          v37[5] = *(unsigned int *)(324 * v35 + *(_QWORD *)(a1 + 40) + 84);
          v37[6] = *(unsigned int *)(324 * v35 + *(_QWORD *)(a1 + 40) + 116);
          WdLogEvent5_WdEvent(v37);
          v12 = 0;
        }
      }
LABEL_8:
      v21 = DrvChangeDisplaySettingsInternal(0LL, 0LL, a1, a4, 0, 1, a5, a7, 0, 1, a3, 1, v12);
      if ( v21 < 0 )
        *a6 = 1;
      ((void (__fastcall *)(__int64))qword_1C01CD8C0)(a1);
      if ( v21 != 2 )
        goto LABEL_19;
      v22 = *(_DWORD *)(a1 + 36);
      if ( v22 )
      {
        v23 = *(_QWORD *)(a1 + 40);
        if ( v23 )
        {
          v24 = 0;
          while ( 1 )
          {
            v25 = 324LL * v24;
            if ( *(_DWORD *)(v25 + v23 + 84) || *(_DWORD *)(v25 + v23 + 88) || *(_DWORD *)(v25 + v23 + 120) )
              break;
            if ( ++v24 >= v22 )
              goto LABEL_18;
          }
          *a7 = a5;
          v21 = 0;
          GreIncrementDisplaySettingsUniqueness();
LABEL_19:
          if ( v21 >= 0 && (int)IsUpdateGammaRampOnDeviceSupported() >= 0 && a7 && *a7 )
          {
            EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
            EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
            EngAcquireSemaphore((HSEMAPHORE)ghsemGreLock);
            EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
            v27 = *a7;
            v28 = 0;
            if ( *(_DWORD *)(*a7 + 20) )
            {
              do
              {
                v29 = v27;
                v30 = *(_QWORD *)(v27 + 40LL * v28 + 32);
                if ( v30 && (*(_DWORD *)(v30 + 40) & 1) != 0 )
                {
                  UpdateGammaRampOnDevice(v30, 0LL);
                  v29 = *a7;
                }
                ++v28;
                v27 = v29;
              }
              while ( v28 < *(_DWORD *)(v29 + 20) );
            }
            EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
            if ( ghsemGreLock )
            {
              ExReleaseResourceAndLeaveCriticalRegion(ghsemGreLock);
              PsLeavePriorityRegion();
            }
            EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
            if ( ghsemDynamicModeChange )
            {
              ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
              PsLeavePriorityRegion();
            }
          }
        }
      }
    }
LABEL_18:
    DrvNotifyModeChangeStartStop(0LL);
    return (unsigned int)v21;
  }
  return 0xFFFFFFFFLL;
}
