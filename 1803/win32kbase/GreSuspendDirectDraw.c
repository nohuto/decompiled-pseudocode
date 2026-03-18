/*
 * XREFs of GreSuspendDirectDraw @ 0x1C004E0C0
 * Callers:
 *     ?DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z @ 0x1C0051760 (-DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C006934C (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     DrvDisableMDEV @ 0x1C0069690 (DrvDisableMDEV.c)
 * Callees:
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C0031CD0 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     GreLockVisRgn @ 0x1C00333D0 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C0033460 (GreUnlockVisRgn.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0033588 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z @ 0x1C004E10C (-DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z.c)
 *     hdevEnumerate @ 0x1C004E820 (hdevEnumerate.c)
 *     GreLockDisplayDevice @ 0x1C004E9C0 (GreLockDisplayDevice.c)
 *     GreUnlockDisplayDevice @ 0x1C004EA00 (GreUnlockDisplayDevice.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005AB30 (EtwTraceGreLockReleaseSemaphore.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     DrvDxgkDisplayOnOff @ 0x1C00D4740 (DrvDxgkDisplayOnOff.c)
 */

void __fastcall GreSuspendDirectDraw(HDEV a1, unsigned int a2)
{
  __int64 i; // rcx
  int v5; // eax
  int v6; // edx
  int v7; // r8d
  char v8; // al
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  int v12; // r8d
  __int64 v13; // rax
  __int64 v14; // rdi
  char v15; // [rsp+48h] [rbp+10h] BYREF
  char v16; // [rsp+50h] [rbp+18h] BYREF
  __int64 v17; // [rsp+58h] [rbp+20h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)gpGdiSharedMemory + 393252);
  DisplayScenarioJournalDisplayUniquenessIncremented();
  DxLddmPrimaryLockCleanUp(a1);
  if ( (a2 & 1) != 0 && !gProtocolType )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v16);
    for ( i = 0LL; ; i = v14 )
    {
      v13 = hdevEnumerate(i);
      v14 = v13;
      if ( !v13 )
        break;
      v5 = *(_DWORD *)(v13 + 40);
      v17 = v14;
      if ( (v5 & 1) != 0
        && (v5 & 0x400) == 0
        && (v5 & 0x20000) == 0
        && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v17) )
      {
        GreLockVisRgn(v14, v6, v7);
        GreLockDisplayDevice(v14);
        v8 = ((__int64 (__fastcall *)(_QWORD, _QWORD, char *))qword_1C01A1BD8)(
               *(_QWORD *)(*(_QWORD *)(v14 + 2568) + 240LL),
               *(unsigned int *)(*(_QWORD *)(v14 + 2568) + 256LL),
               &v15);
        *(_DWORD *)(v14 + 2608) = 1;
        if ( ((a2 & 8) == 0 || v8) && *(_QWORD *)(v14 + 2720) )
        {
          if ( ((a2 >> 2) & 1) == 0 || (LOBYTE(v9) = 0, !v15) )
            LOBYTE(v9) = 1;
          DrvDxgkDisplayOnOff(v14, v9, 3LL);
          if ( ((a2 >> 2) & 1) == 0 || (v10 = 0LL, !v15) )
            v10 = 1LL;
          (*(void (__fastcall **)(_QWORD, __int64))(v14 + 2720))(*(_QWORD *)(v14 + 1792), v10);
        }
        *(_DWORD *)(v14 + 2608) = 0;
        GreUnlockDisplayDevice(v14);
        GreUnlockVisRgn(v14, v11, v12);
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
