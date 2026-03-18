/*
 * XREFs of ?DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C012B530
 * Callers:
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C012B0AC (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0014600 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0077760 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0078C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C0124ADC (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?DevmodeAutoRotateCompatible@@YA_NPEBU_devicemodeW@@0@Z @ 0x1C0129988 (-DevmodeAutoRotateCompatible@@YA_NPEBU_devicemodeW@@0@Z.c)
 *     ?DrvCheckGraphicsDeviceForSmoothRotation@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0129F10 (-DrvCheckGraphicsDeviceForSmoothRotation@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 */

__int64 __fastcall DrvUpdateDisplayModeInPdev(HSEMAPHORE *a1, struct D3DKMT_GETPATHSMODALITY *a2)
{
  HSEMAPHORE *v2; // rbx
  unsigned int updated; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  _DWORD *v10; // r8
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  struct _devicemodeW *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // r8
  struct _ERESOURCE *v25; // rcx
  __int64 v26; // rcx
  struct _ERESOURCE *v27; // rcx
  __int64 v28; // rcx
  HSEMAPHORE *v30; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  v30 = a1;
  updated = 0;
  EngAcquireSemaphore(a1[8]);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemPointer()", (int)v2[8], 4);
  EngAcquireSemaphore(v2[6]);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemDevLock()", (int)v2[6], 11);
  if ( !v2[324] )
  {
    v11 = WdLogNewEntry5_WdEvent(v6, v5, v7);
    *(_QWORD *)(v11 + 24) = 1LL;
    goto LABEL_21;
  }
  if ( !(unsigned int)DrvCheckGraphicsDeviceForSmoothRotation((struct tagGRAPHICS_DEVICE *)v2[322])
    || (v10 = v2[322], v12 = v10[40], (v12 & 0x4000000) != 0)
    || (v12 & 0x2000000) != 0
    || (v12 & 8) != 0 )
  {
    v11 = WdLogNewEntry5_WdEvent(v9, v8, v10);
    *(_QWORD *)(v11 + 24) = 2LL;
LABEL_21:
    WdLogEvent5_WdEvent(v11);
    goto LABEL_22;
  }
  v13 = 0LL;
  if ( !*((_WORD *)a2 + 10) )
    goto LABEL_13;
  while ( 1 )
  {
    v8 = 272LL * (unsigned int)v13;
    if ( v10[64] == *(_DWORD *)((char *)a2 + v8 + 72)
      && v10[62] == *(_DWORD *)((char *)a2 + v8 + 64)
      && v10[63] == *(_DWORD *)((char *)a2 + v8 + 68) )
    {
      v14 = *(_QWORD *)((char *)a2 + v8 + 48);
      v8 = 0x1000000000LL;
      if ( (v14 & 0x1000000000LL) == 0 )
        break;
    }
    v13 = (unsigned int)(v13 + 1);
    if ( (unsigned int)v13 >= *((unsigned __int16 *)a2 + 10) )
      goto LABEL_13;
  }
  v13 = 272 * (v13 + 1);
  v15 = *(struct _devicemodeW **)((char *)a2 + v13);
  if ( !v15 )
  {
LABEL_13:
    v11 = WdLogNewEntry5_WdEvent(v13, v8, v10);
    *(_QWORD *)(v11 + 24) = 27687LL;
    goto LABEL_21;
  }
  if ( !DevmodeAutoRotateCompatible(v15, (const struct _devicemodeW *)v2[324]) )
  {
    v11 = WdLogNewEntry5_WdEvent(v17, v16, v18);
    goto LABEL_21;
  }
  updated = PDEVOBJ::UpdateDisplayMode((PDEVOBJ *)&v30, v15, v18);
  if ( updated )
  {
    _InterlockedIncrement((volatile signed __int32 *)gpGdiSharedMemory + 393252);
    DisplayScenarioJournalDisplayUniquenessIncremented();
    v23 = WdLogNewEntry5_WdEvent(v21, v20, v22);
    *(_QWORD *)(v23 + 24) = 4LL;
    WdLogEvent5_WdEvent(v23);
  }
  v2 = v30;
LABEL_22:
  EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemDevLock()", (__int64)v2[6], v19);
  v25 = (struct _ERESOURCE *)v2[6];
  if ( v25 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v25);
    PsLeavePriorityRegion(v26);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemPointer()", (__int64)v2[8], v24);
  v27 = (struct _ERESOURCE *)v2[8];
  if ( v27 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v27);
    PsLeavePriorityRegion(v28);
  }
  return updated;
}
