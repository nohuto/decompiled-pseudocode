/*
 * XREFs of DrvEnableMDEV @ 0x1C0069878
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C004EAA8 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     SafeEnableMDEV @ 0x1C00A6CB0 (SafeEnableMDEV.c)
 * Callees:
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0031E14 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     EngAcquireSemaphore @ 0x1C0033690 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005AB30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005B3A0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C006E590 (GreIncrementDisplaySettingsUniqueness.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00CED80 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     DrvDxgkDisplayOnOff @ 0x1C00D4740 (DrvDxgkDisplayOnOff.c)
 */

__int64 __fastcall DrvEnableMDEV(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r12d
  __int64 v4; // r15
  unsigned int v6; // r14d
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rsi
  HDEV v11; // rbp
  unsigned int v12; // r8d
  __int64 v13; // rax
  int v14; // r8d
  struct _ERESOURCE *v15; // rcx
  __int64 v16; // rcx
  int v17; // r8d
  __int64 v18; // rcx
  int v19; // r8d
  __int64 v20; // rcx
  int v21; // r8d
  struct _ERESOURCE *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  void (__fastcall *v26)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // r10
  unsigned int v27; // edx
  __int64 *v28; // rcx
  _QWORD *v29; // rdi
  void (__fastcall *v30)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // r10
  __int64 v31; // rax
  __int64 i; // [rsp+60h] [rbp+8h] BYREF
  __int64 v33; // [rsp+78h] [rbp+20h] BYREF

  v3 = a3;
  v4 = (int)a2;
  v6 = 1;
  v7 = WdLogNewEntry5_WdEvent(a1, a2, a3);
  *(_QWORD *)(v7 + 24) = a1;
  *(_QWORD *)(v7 + 32) = v4;
  WdLogEvent5_WdEvent(v7);
  v9 = *a1;
  v10 = 0LL;
  for ( i = *a1; (unsigned int)v10 < *((_DWORD *)a1 + 5); v10 = (unsigned int)(v10 + 1) )
  {
    v11 = (HDEV)a1[5 * v10 + 4];
    if ( (_DWORD)v4 )
    {
      LOBYTE(v8) = 1;
      DrvDxgkDisplayOnOff(a1[5 * v10 + 4], v8, v3);
      DrvEnableDisplay(v11);
    }
  }
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v9 + 56));
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"poParent.hsemPointer()", *(_QWORD *)(v9 + 56), 4);
  EngAcquireSemaphore((HSEMAPHORE)ghsemSprite);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemSprite", (int)ghsemSprite, 5);
  EngAcquireSemaphore(ghsemHT);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemHT", (int)ghsemHT, 6);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v9 + 48));
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"poParent.hsemDevLock()", *(_QWORD *)(v9 + 48), 11);
  if ( (_DWORD)v4 )
    PDEVOBJ::bDisabled((PDEVOBJ *)&i, 0);
  v13 = *(_QWORD *)(v9 + 1800);
  v33 = v13;
  if ( (*(_DWORD *)(v13 + 24) & 0x800) != 0 )
  {
    v26 = *(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v9 + 2856);
    if ( v26 )
      v26(*(_QWORD *)(v9 + 1792), &v33, 0LL, 0LL, *(_DWORD *)(v13 + 28));
    else
      v6 = 0;
  }
  else
  {
    v12 = *((_DWORD *)a1 + 5);
    if ( v12 > 1 )
    {
      v27 = 0;
      v28 = a1 + 4;
      while ( 1 )
      {
        v29 = (_QWORD *)*v28;
        if ( (*(_DWORD *)(*v28 + 2164) & 0x100) != 0 )
          break;
        ++v27;
        v28 += 5;
        if ( v27 >= v12 )
          goto LABEL_9;
      }
      v30 = (void (__fastcall *)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))v29[220];
      v31 = v29[225];
      i = v31;
      if ( v30 )
        v30(*(_QWORD *)(v29[3] + 1792LL), &i, 0LL, 0LL, *(_DWORD *)(v31 + 28));
      else
        v6 = 0;
      if ( (int)IsDrvRealizeHalftonePaletteSupported() >= 0 )
        DrvRealizeHalftonePaletteWrap(v29, 1LL);
    }
  }
LABEL_9:
  EtwTraceGreLockReleaseSemaphore((__int64)L"poParent.hsemDevLock()", *(_QWORD *)(v9 + 48), v12);
  v15 = *(struct _ERESOURCE **)(v9 + 48);
  if ( v15 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v15);
    PsLeavePriorityRegion(v16);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemHT", (int)ghsemHT, v14);
  if ( ghsemHT )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemHT);
    PsLeavePriorityRegion(v18);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemSprite", (int)ghsemSprite, v17);
  if ( ghsemSprite )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
    PsLeavePriorityRegion(v20);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"poParent.hsemPointer()", *(_QWORD *)(v9 + 56), v19);
  v22 = *(struct _ERESOURCE **)(v9 + 56);
  if ( v22 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v22);
    PsLeavePriorityRegion(v23);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v21);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v24);
  }
  if ( (_DWORD)v4 )
    GreIncrementDisplaySettingsUniqueness();
  return v6;
}
