/*
 * XREFs of ApplyPathsModality @ 0x1C0044F44
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C00504D0 (DrvSetDisplayConfig.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0014600 (EngAcquireSemaphore.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C0043C20 (DrvNotifyModeChangeStartStop.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C004537C (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ApplyPathModalityToCdsRegistryStore @ 0x1C004CD80 (ApplyPathModalityToCdsRegistryStore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0077760 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0078C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00A5750 (GreIncrementDisplaySettingsUniqueness.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
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
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // eax
  unsigned int v20; // esi
  int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // r8
  int v24; // ebx
  unsigned int v25; // r9d
  __int64 v26; // rdx
  unsigned int v27; // ecx
  __int64 v28; // r8
  __int64 v30; // rdx
  unsigned int i; // edi
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rbp
  _QWORD *v36; // rax

  *a6 = 0;
  if ( (unsigned int)ApplyPathModalityToCdsRegistryStore() )
  {
    DrvNotifyModeChangeStartStop(1);
    if ( *(_DWORD *)(a1 + 36) || *(_QWORD *)(a1 + 40) )
    {
      v33 = WdLogNewEntry5_WdAssertion(v13, v12, v14);
      WdLogEvent5_WdAssertion(v33);
    }
    v15 = a2;
    LODWORD(v15) = a2 | 0x20000;
    if ( (int)((__int64 (__fastcall *)(__int64, __int64, __int64))qword_1C02150B0)(v15, a1, a8) < 0 )
    {
      *a6 = 1;
      v24 = -1;
    }
    else
    {
      v19 = *(_DWORD *)(a1 + 36);
      if ( !v19 || !*(_QWORD *)(a1 + 40) )
      {
        v34 = WdLogNewEntry5_WdAssertion(v17, v16, v18);
        WdLogEvent5_WdAssertion(v34);
        v19 = *(_DWORD *)(a1 + 36);
      }
      v20 = 0;
      v21 = (a2 & 0x400000) != 0;
      if ( v19 )
      {
        v22 = *(_QWORD *)(a1 + 40);
        do
        {
          v23 = v22;
          if ( (v21 & 1) != 0 )
          {
            v35 = 332LL * v20;
            if ( *(_DWORD *)(v22 + v35 + 88) != *(_DWORD *)(v22 + v35 + 120) )
            {
              v36 = (_QWORD *)WdLogNewEntry5_WdEvent(v17, v22, v22);
              v36[3] = *(int *)(*(_QWORD *)(a1 + 40) + v35 + 4);
              v36[4] = *(unsigned int *)(*(_QWORD *)(a1 + 40) + 332LL * v20);
              v36[5] = *(unsigned int *)(*(_QWORD *)(a1 + 40) + v35 + 88);
              v36[6] = *(unsigned int *)(*(_QWORD *)(a1 + 40) + v35 + 120);
              WdLogEvent5_WdEvent(v36);
              v23 = *(_QWORD *)(a1 + 40);
              v21 &= ~1u;
            }
          }
          v22 = v23;
          v17 = 332LL * v20;
          if ( *(_BYTE *)(v17 + v23 + 76) )
            a3 = 1;
          ++v20;
        }
        while ( v20 < *(_DWORD *)(a1 + 36) );
      }
      v24 = DrvChangeDisplaySettingsInternal(0LL, 0LL, a1, a4, 0, 1, a5, a7, 0, 1, a3, 1, v21);
      if ( v24 < 0 )
        *a6 = 1;
      ((void (__fastcall *)(__int64))qword_1C02150B8)(a1);
      if ( v24 != 2 )
      {
LABEL_24:
        if ( v24 >= 0 && (int)IsUpdateGammaRampOnDeviceSupported() >= 0 && a7 && *a7 )
        {
          EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
          EngAcquireSemaphore(ghsemGreLock);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
          v30 = *a7;
          for ( i = 0; i < *(_DWORD *)(v30 + 20); ++i )
          {
            v32 = *(_QWORD *)(56LL * i + v30 + 40);
            if ( v32 && (*(_DWORD *)(v32 + 40) & 1) != 0 )
            {
              UpdateGammaRampOnDevice(v32, 0LL);
              v30 = *a7;
            }
          }
          EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
          if ( ghsemGreLock )
          {
            ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemGreLock);
            PsLeavePriorityRegion();
          }
          EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
          if ( ghsemDynamicModeChange )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
            PsLeavePriorityRegion();
          }
        }
        goto LABEL_23;
      }
      v25 = *(_DWORD *)(a1 + 36);
      if ( v25 )
      {
        v26 = *(_QWORD *)(a1 + 40);
        if ( v26 )
        {
          v27 = 0;
          while ( 1 )
          {
            v28 = 332LL * v27;
            if ( *(_DWORD *)(v28 + v26 + 88) || *(_DWORD *)(v28 + v26 + 92) || *(_DWORD *)(v28 + v26 + 124) )
              break;
            if ( ++v27 >= v25 )
              goto LABEL_23;
          }
          *a7 = a5;
          v24 = 0;
          GreIncrementDisplaySettingsUniqueness();
          goto LABEL_24;
        }
      }
    }
LABEL_23:
    DrvNotifyModeChangeStartStop(0);
    return (unsigned int)v24;
  }
  return 0xFFFFFFFFLL;
}
