/*
 * XREFs of DrvEnableMDEV @ 0x1C00449AC
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C004537C (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     SafeEnableMDEV @ 0x1C00BAC60 (SafeEnableMDEV.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0014600 (EngAcquireSemaphore.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C00571F4 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     UserNotifyDisplayChange @ 0x1C0063C40 (UserNotifyDisplayChange.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0077760 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0078C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00A5750 (GreIncrementDisplaySettingsUniqueness.c)
 *     DrvDxgkDisplayOnOff @ 0x1C00A7D30 (DrvDxgkDisplayOnOff.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00B9F2C (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvEnableMDEV(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  unsigned int v4; // r14d
  unsigned int v5; // r12d
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  unsigned int v10; // esi
  __int64 v11; // rcx
  HDEV v12; // rbp
  __int64 v13; // rax
  unsigned int v14; // r8d
  struct _ERESOURCE *v15; // rcx
  struct _ERESOURCE *v16; // rcx
  void (__fastcall *v18)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // r10
  unsigned int v19; // edx
  __int64 *v20; // rcx
  _QWORD *v21; // rdi
  void (__fastcall *v22)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // r10
  __int64 v23; // rax
  __int64 i; // [rsp+70h] [rbp+8h] BYREF
  __int64 v25; // [rsp+88h] [rbp+20h] BYREF

  v3 = (int)a2;
  v4 = 1;
  v5 = a3;
  v7 = WdLogNewEntry5_WdEvent(a1, a2, a3);
  *(_QWORD *)(v7 + 24) = a1;
  *(_QWORD *)(v7 + 32) = v3;
  WdLogEvent5_WdEvent(v7);
  v9 = *a1;
  v10 = 0;
  for ( i = *a1; v10 < *((_DWORD *)a1 + 5); ++v10 )
  {
    v11 = 7LL * v10;
    v12 = (HDEV)a1[v11 + 5];
    if ( (_DWORD)v3 )
    {
      LOBYTE(v8) = 1;
      DrvDxgkDisplayOnOff(a1[v11 + 5], v8, v5);
      DrvEnableDisplay(v12);
    }
  }
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v9 + 64));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"poParent.hsemPointer()", *(_QWORD *)(v9 + 64), 4LL);
  EngAcquireSemaphore((HSEMAPHORE)ghsemSprite);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
  EngAcquireSemaphore(ghsemHT);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemHT", ghsemHT, 6LL);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v9 + 48));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"poParent.hsemDevLock()", *(_QWORD *)(v9 + 48), 11LL);
  if ( (_DWORD)v3 )
    PDEVOBJ::bDisabled((PDEVOBJ *)&i, 0);
  v13 = *(_QWORD *)(v9 + 1808);
  v25 = v13;
  if ( (*(_DWORD *)(v13 + 24) & 0x800) != 0 )
  {
    v18 = *(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v9 + 2864);
    if ( v18 )
      v18(*(_QWORD *)(v9 + 1800), &v25, 0LL, 0LL, *(_DWORD *)(v13 + 28));
    else
      v4 = 0;
  }
  else
  {
    v14 = *((_DWORD *)a1 + 5);
    if ( v14 > 1 )
    {
      v19 = 0;
      v20 = a1 + 5;
      while ( 1 )
      {
        v21 = (_QWORD *)*v20;
        if ( (*(_DWORD *)(*v20 + 2172) & 0x100) != 0 )
          break;
        ++v19;
        v20 += 7;
        if ( v19 >= v14 )
          goto LABEL_9;
      }
      v22 = (void (__fastcall *)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))v21[221];
      v23 = v21[226];
      i = v23;
      if ( v22 )
        v22(*(_QWORD *)(v21[3] + 1800LL), &i, 0LL, 0LL, *(_DWORD *)(v23 + 28));
      else
        v4 = 0;
      if ( (int)IsDrvRealizeHalftonePaletteSupported() >= 0 )
        DrvRealizeHalftonePaletteWrap(v21, 1LL);
    }
  }
LABEL_9:
  EtwTraceGreLockReleaseSemaphore(L"poParent.hsemDevLock()", *(_QWORD *)(v9 + 48));
  v15 = *(struct _ERESOURCE **)(v9 + 48);
  if ( v15 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v15);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemHT", ghsemHT);
  if ( ghsemHT )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemHT);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
  if ( ghsemSprite )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore(L"poParent.hsemPointer()", *(_QWORD *)(v9 + 64));
  v16 = *(struct _ERESOURCE **)(v9 + 64);
  if ( v16 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v16);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion();
  }
  if ( (_DWORD)v3 )
    GreIncrementDisplaySettingsUniqueness();
  if ( !gProtocolType )
    UserNotifyDisplayChange();
  return v4;
}
