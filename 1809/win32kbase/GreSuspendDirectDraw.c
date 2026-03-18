/*
 * XREFs of GreSuspendDirectDraw @ 0x1C003EDC0
 * Callers:
 *     ?DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z @ 0x1C003E5A0 (-DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C0047230 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     DrvDisableMDEV @ 0x1C00A26D0 (DrvDisableMDEV.c)
 * Callees:
 *     GreUnlockVisRgn @ 0x1C0029B20 (GreUnlockVisRgn.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0029C48 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreLockVisRgn @ 0x1C0029D60 (GreLockVisRgn.c)
 *     ?DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z @ 0x1C003EF4C (-DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C003F130 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     hdevEnumerate @ 0x1C003F2B0 (hdevEnumerate.c)
 *     GreLockDisplayDevice @ 0x1C003F4E0 (GreLockDisplayDevice.c)
 *     GreUnlockDisplayDevice @ 0x1C003F520 (GreUnlockDisplayDevice.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005E110 (EtwTraceGreLockReleaseSemaphore.c)
 *     DrvDxgkDisplayOnOff @ 0x1C0093EF0 (DrvDxgkDisplayOnOff.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
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
  __int64 v14; // rdx
  char v15; // [rsp+48h] [rbp+10h] BYREF
  char v16; // [rsp+50h] [rbp+18h] BYREF
  __int64 v17; // [rsp+58h] [rbp+20h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)gpGdiSharedMemory + 393252);
  DisplayScenarioJournalDisplayUniquenessIncremented();
  DxLddmPrimaryLockCleanUp(a1);
  if ( (a2 & 1) != 0 && !gProtocolType )
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
        v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD, char *))qword_1C01CDA78)(
                *(_QWORD *)(*(_QWORD *)(v6 + 2576) + 240LL),
                *(unsigned int *)(*(_QWORD *)(v6 + 2576) + 256LL),
                &v15);
        *(_DWORD *)(v6 + 2616) = 1;
        if ( ((a2 & 8) == 0 || v10) && *(_QWORD *)(v6 + 2728) )
        {
          if ( (a2 & 4) == 0 || (LOBYTE(v11) = 0, !v15) )
            LOBYTE(v11) = 1;
          DrvDxgkDisplayOnOff(v6, v11, 3LL);
          if ( (a2 & 4) == 0 || (v14 = 0LL, !v15) )
            v14 = 1LL;
          (*(void (__fastcall **)(_QWORD, __int64))(v6 + 2728))(*(_QWORD *)(v6 + 1800), v14);
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
