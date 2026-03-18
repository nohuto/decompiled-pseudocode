/*
 * XREFs of GreSuspendDirectDraw @ 0x1C003E4F0
 * Callers:
 *     DrvDisableMDEV @ 0x1C0040ED0 (DrvDisableMDEV.c)
 *     ?DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z @ 0x1C0041B50 (-DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C004279C (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0029FFC (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreUnlockVisRgn @ 0x1C002A8A0 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x1C002BA20 (GreLockVisRgn.c)
 *     UserIsWddmConnectedSession @ 0x1C003CF30 (UserIsWddmConnectedSession.c)
 *     ?DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z @ 0x1C003E674 (-DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C003FE08 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     hdevEnumerate @ 0x1C0040070 (hdevEnumerate.c)
 *     GreLockDisplayDevice @ 0x1C0040320 (GreLockDisplayDevice.c)
 *     GreUnlockDisplayDevice @ 0x1C0040360 (GreUnlockDisplayDevice.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070850 (EtwTraceGreLockReleaseSemaphore.c)
 *     DrvDxgkDisplayOnOff @ 0x1C00A6EB0 (DrvDxgkDisplayOnOff.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall GreSuspendDirectDraw(HDEV a1, char a2)
{
  __int64 i; // rcx
  __int64 v5; // rax
  __int64 v6; // rdi
  int v7; // eax
  int v8; // edx
  __int64 v9; // r8
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  _BOOL8 v14; // rdx
  char v15; // [rsp+48h] [rbp+10h] BYREF
  char v16; // [rsp+50h] [rbp+18h] BYREF
  __int64 v17; // [rsp+58h] [rbp+20h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)gpGdiSharedMemory + 393252);
  DisplayScenarioJournalDisplayUniquenessIncremented();
  DxLddmPrimaryLockCleanUp(a1);
  if ( (a2 & 1) != 0 && (unsigned int)UserIsWddmConnectedSession() )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v16);
    for ( i = 0LL; ; i = v6 )
    {
      v5 = hdevEnumerate(i);
      v6 = v5;
      if ( !v5 )
        break;
      v17 = v5;
      v7 = *(_DWORD *)(v5 + 40);
      if ( (v7 & 1) != 0
        && (v7 & 0x400) == 0
        && (v7 & 0x20000) == 0
        && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v17) )
      {
        GreLockVisRgn(v6, v8, v9);
        GreLockDisplayDevice(v6);
        v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD, char *))qword_1C02121D0)(
                *(_QWORD *)(*(_QWORD *)(v6 + 2576) + 240LL),
                *(unsigned int *)(*(_QWORD *)(v6 + 2576) + 256LL),
                &v15);
        *(_DWORD *)(v6 + 2616) = 1;
        if ( ((a2 & 8) == 0 || v10) && *(_QWORD *)(v6 + 2728) )
        {
          if ( (a2 & 4) != 0 && v15 )
            v11 = 0LL;
          else
            LOBYTE(v11) = 1;
          DrvDxgkDisplayOnOff(v6, v11, 3LL);
          v14 = (a2 & 4) == 0 || !v15;
          (*(void (__fastcall **)(_QWORD, _BOOL8))(v6 + 2728))(*(_QWORD *)(v6 + 1800), v14);
        }
        *(_DWORD *)(v6 + 2616) = 0;
        GreUnlockDisplayDevice(v6);
        GreUnlockVisRgn(v6, v12, v13);
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
