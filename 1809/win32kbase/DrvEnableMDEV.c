/*
 * XREFs of DrvEnableMDEV @ 0x1C00476A0
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C003F640 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     SafeEnableMDEV @ 0x1C00A6220 (SafeEnableMDEV.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0029E50 (EngAcquireSemaphore.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C003E228 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     UserNotifyDisplayChange @ 0x1C0047970 (UserNotifyDisplayChange.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005E110 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005FBC0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00913D0 (GreIncrementDisplaySettingsUniqueness.c)
 *     DrvDxgkDisplayOnOff @ 0x1C0093EF0 (DrvDxgkDisplayOnOff.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00A596C (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
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
  HDEV v11; // rbp
  __int64 v12; // rax
  unsigned int v13; // r8d
  struct _ERESOURCE *v14; // rcx
  struct _ERESOURCE *v15; // rcx
  void (__fastcall *v17)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // r10
  unsigned int v18; // edx
  __int64 *v19; // rcx
  _QWORD *v20; // rdi
  void (__fastcall *v21)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // r10
  __int64 v22; // rax
  __int64 i; // [rsp+70h] [rbp+8h] BYREF
  __int64 v24; // [rsp+88h] [rbp+20h] BYREF

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
    v11 = (HDEV)a1[5 * v10 + 4];
    if ( (_DWORD)v3 )
    {
      LOBYTE(v8) = 1;
      DrvDxgkDisplayOnOff(a1[5 * v10 + 4], v8, v5);
      DrvEnableDisplay(v11);
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
  v12 = *(_QWORD *)(v9 + 1808);
  v24 = v12;
  if ( (*(_DWORD *)(v12 + 24) & 0x800) != 0 )
  {
    v17 = *(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v9 + 2864);
    if ( v17 )
      v17(*(_QWORD *)(v9 + 1800), &v24, 0LL, 0LL, *(_DWORD *)(v12 + 28));
    else
      v4 = 0;
  }
  else
  {
    v13 = *((_DWORD *)a1 + 5);
    if ( v13 > 1 )
    {
      v18 = 0;
      v19 = a1 + 4;
      while ( 1 )
      {
        v20 = (_QWORD *)*v19;
        if ( (*(_DWORD *)(*v19 + 2172) & 0x100) != 0 )
          break;
        ++v18;
        v19 += 5;
        if ( v18 >= v13 )
          goto LABEL_9;
      }
      v21 = (void (__fastcall *)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))v20[221];
      v22 = v20[226];
      i = v22;
      if ( v21 )
        v21(*(_QWORD *)(v20[3] + 1800LL), &i, 0LL, 0LL, *(_DWORD *)(v22 + 28));
      else
        v4 = 0;
      if ( (int)IsDrvRealizeHalftonePaletteSupported() >= 0 )
        DrvRealizeHalftonePaletteWrap(v20, 1LL);
    }
  }
LABEL_9:
  EtwTraceGreLockReleaseSemaphore(L"poParent.hsemDevLock()", *(_QWORD *)(v9 + 48));
  v14 = *(struct _ERESOURCE **)(v9 + 48);
  if ( v14 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v14);
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
  v15 = *(struct _ERESOURCE **)(v9 + 64);
  if ( v15 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v15);
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
