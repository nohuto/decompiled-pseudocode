/*
 * XREFs of ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C01288FC
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C0041C3C (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     GreReleaseHmgrSemaphore @ 0x1C002A070 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C002BAC0 (GreAcquireHmgrSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C002BB10 (EngAcquireSemaphore.c)
 *     ?vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1C006388C (-vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070850 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0072010 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     ?DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0128D80 (-DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 */

__int64 __fastcall DrvUpdateDisplayModeInMdev(struct _MDEV *a1, struct D3DKMT_GETPATHSMODALITY *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  unsigned int (__fastcall *v14)(_QWORD); // rax
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int updated; // esi
  __int64 v21; // r8
  struct _DEVCAPS *v22; // rdx
  _DWORD *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // r8
  struct _ERESOURCE *v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rcx
  struct _ERESOURCE *v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // [rsp+40h] [rbp+18h] BYREF

  if ( !(unsigned int)IsDwmActive(a1) || *((_DWORD *)a1 + 5) != 1 )
  {
    v7 = WdLogNewEntry5_WdEvent(v5, v4, v6);
    *(_QWORD *)(v7 + 24) = 5LL;
LABEL_3:
    WdLogEvent5_WdEvent(v7);
    return 0LL;
  }
  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdEvent(v5, v4, v6);
    *(_QWORD *)(v7 + 24) = 27768LL;
    goto LABEL_3;
  }
  if ( *((_WORD *)a2 + 10) != 1 )
  {
    v7 = WdLogNewEntry5_WdEvent(v5, v4, v6);
    *(_QWORD *)(v7 + 24) = 27773LL;
    goto LABEL_3;
  }
  v9 = *(_QWORD *)a1;
  if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C02121C8)(
                          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 2576LL) + 240LL),
                          *(unsigned int *)(*(_QWORD *)(*(_QWORD *)a1 + 2576LL) + 256LL)) )
  {
    v14 = *(unsigned int (__fastcall **)(_QWORD))(v9 + 2672);
    if ( v14 && v14(*(_QWORD *)(v9 + 1800)) )
    {
      EngAcquireSemaphore(*(HSEMAPHORE *)(v9 + 64));
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"poParent.hsemPointer()", *(_QWORD *)(v9 + 64), 4);
      EngAcquireSemaphore((HSEMAPHORE)ghsemSprite);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemSprite", (int)ghsemSprite, 5);
      EngAcquireSemaphore(ghsemHT);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemHT", (int)ghsemHT, 6);
      EngAcquireSemaphore(*(HSEMAPHORE *)(v9 + 48));
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"poParent.hsemDevLock()", *(_QWORD *)(v9 + 48), 11);
      EngAcquireSemaphore(ghsemDwmState);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDwmState", (int)ghsemDwmState, 7);
      EngAcquireSemaphore(ghsemPalette);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemPalette", (int)ghsemPalette, 14);
      EngAcquireSemaphore(ghsemPublicPFT);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemPublicPFT", (int)ghsemPublicPFT, 15);
      EngAcquireSemaphore(ghsemRFONTList);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemRFONTList", (int)ghsemRFONTList, 16);
      GreAcquireHmgrSemaphore(v16, v15, v17);
      updated = DrvUpdateDisplayModeInPdev(*((HDEV *)a1 + 5), a2);
      if ( updated )
      {
        v22 = gpGdiDevCaps;
        v23 = *(_DWORD **)(*((_QWORD *)a1 + 5) + 2592LL);
        *((_DWORD *)a1 + 14) = v23[19];
        *((_DWORD *)a1 + 15) = v23[20];
        *((_DWORD *)a1 + 16) = v23[19] + v23[43];
        *((_DWORD *)a1 + 17) = v23[20] + v23[44];
        v46 = *(_QWORD *)a1;
        vGetDeviceCaps((struct PDEVOBJ *)&v46, v22);
      }
      else
      {
        v27 = WdLogNewEntry5_WdEvent(v19, v18, v21);
        *(_QWORD *)(v27 + 24) = 6LL;
        WdLogEvent5_WdEvent(v27);
      }
      GreReleaseHmgrSemaphore(v25, v24, v26);
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemRFONTList", (__int64)ghsemRFONTList, v28);
      if ( ghsemRFONTList )
      {
        ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemRFONTList);
        PsLeavePriorityRegion(v30);
      }
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemPublicPFT", (__int64)ghsemPublicPFT, v29);
      if ( ghsemPublicPFT )
      {
        ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemPublicPFT);
        PsLeavePriorityRegion(v32);
      }
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemPalette", (__int64)ghsemPalette, v31);
      if ( ghsemPalette )
      {
        ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemPalette);
        PsLeavePriorityRegion(v34);
      }
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDwmState", (__int64)ghsemDwmState, v33);
      if ( ghsemDwmState )
      {
        ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDwmState);
        PsLeavePriorityRegion(v36);
      }
      EtwTraceGreLockReleaseSemaphore((__int64)L"poParent.hsemDevLock()", *(_QWORD *)(v9 + 48), v35);
      v38 = *(struct _ERESOURCE **)(v9 + 48);
      if ( v38 )
      {
        ExReleaseResourceAndLeaveCriticalRegion(v38);
        PsLeavePriorityRegion(v39);
      }
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemHT", (__int64)ghsemHT, v37);
      if ( ghsemHT )
      {
        ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemHT);
        PsLeavePriorityRegion(v41);
      }
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemSprite", (__int64)ghsemSprite, v40);
      if ( ghsemSprite )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
        PsLeavePriorityRegion(v43);
      }
      EtwTraceGreLockReleaseSemaphore((__int64)L"poParent.hsemPointer()", *(_QWORD *)(v9 + 64), v42);
      v44 = *(struct _ERESOURCE **)(v9 + 64);
      if ( v44 )
      {
        ExReleaseResourceAndLeaveCriticalRegion(v44);
        PsLeavePriorityRegion(v45);
      }
      return updated;
    }
    v13 = WdLogNewEntry5_WdEvent(v11, v10, v12);
    *(_QWORD *)(v13 + 24) = 0LL;
  }
  else
  {
    v13 = WdLogNewEntry5_WdEvent(v11, v10, v12);
    *(_QWORD *)(v13 + 24) = 7LL;
  }
  WdLogEvent5_WdEvent(v13);
  return 0;
}
