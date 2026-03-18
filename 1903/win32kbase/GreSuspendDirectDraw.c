/*
 * XREFs of GreSuspendDirectDraw @ 0x1C0043EF0
 * Callers:
 *     DrvDisableMDEV @ 0x1C0044C70 (DrvDisableMDEV.c)
 *     ?DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z @ 0x1C0045290 (-DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C0045EDC (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00151C0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreUnlockVisRgn @ 0x1C0017990 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x1C0017A40 (GreLockVisRgn.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C003DF84 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     hdevEnumerate @ 0x1C0041E00 (hdevEnumerate.c)
 *     GreLockDisplayDevice @ 0x1C00420B0 (GreLockDisplayDevice.c)
 *     GreUnlockDisplayDevice @ 0x1C00420F0 (GreUnlockDisplayDevice.c)
 *     ?DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z @ 0x1C0044074 (-DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z.c)
 *     UserIsWddmConnectedSession @ 0x1C004FD20 (UserIsWddmConnectedSession.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0077760 (EtwTraceGreLockReleaseSemaphore.c)
 *     DrvDxgkDisplayOnOff @ 0x1C00A7D30 (DrvDxgkDisplayOnOff.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall GreSuspendDirectDraw(HDEV a1, char a2)
{
  int v4; // edx
  __int64 v5; // r8
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *i; // rcx
  struct PDEV *v7; // rax
  __int64 v8; // rdi
  int v9; // eax
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  _BOOL8 v14; // rdx
  char v15; // [rsp+48h] [rbp+10h] BYREF
  char v16; // [rsp+50h] [rbp+18h] BYREF
  struct PDEV *v17; // [rsp+58h] [rbp+20h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)gpGdiSharedMemory + 393252);
  DisplayScenarioJournalDisplayUniquenessIncremented();
  DxLddmPrimaryLockCleanUp(a1);
  if ( (a2 & 1) != 0 && (unsigned int)UserIsWddmConnectedSession() )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v16);
    for ( i = 0LL; ; i = (NSInstrumentation::CReferenceTracker::CReferenceCountedType *)v8 )
    {
      v7 = hdevEnumerate(i, v4, v5);
      v8 = (__int64)v7;
      if ( !v7 )
        break;
      v17 = v7;
      v9 = *((_DWORD *)v7 + 10);
      if ( (v9 & 1) != 0
        && (v9 & 0x400) == 0
        && (v9 & 0x20000) == 0
        && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v17) )
      {
        GreLockVisRgn(v8, v4, v5);
        GreLockDisplayDevice(v8);
        v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD, char *))qword_1C02151D0)(
                *(_QWORD *)(*(_QWORD *)(v8 + 2576) + 240LL),
                *(unsigned int *)(*(_QWORD *)(v8 + 2576) + 256LL),
                &v15);
        *(_DWORD *)(v8 + 2616) = 1;
        if ( ((a2 & 8) == 0 || v10) && *(_QWORD *)(v8 + 2728) )
        {
          if ( (a2 & 4) != 0 && v15 )
            v11 = 0LL;
          else
            LOBYTE(v11) = 1;
          DrvDxgkDisplayOnOff(v8, v11, 3LL);
          v14 = (a2 & 4) == 0 || !v15;
          (*(void (__fastcall **)(_QWORD, _BOOL8))(v8 + 2728))(*(_QWORD *)(v8 + 1800), v14);
        }
        *(_DWORD *)(v8 + 2616) = 0;
        GreUnlockDisplayDevice(v8);
        GreUnlockVisRgn(v8, v12, v13);
      }
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    if ( ghsemDynamicModeChange )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
      PsLeavePriorityRegion();
    }
  }
}
