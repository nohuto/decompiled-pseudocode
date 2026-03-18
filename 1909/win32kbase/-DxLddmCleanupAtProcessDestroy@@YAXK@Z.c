/*
 * XREFs of ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C003FF58
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C007C408 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0029FFC (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreUnlockVisRgn @ 0x1C002A8A0 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x1C002BA20 (GreLockVisRgn.c)
 *     hdevEnumerate @ 0x1C0040070 (hdevEnumerate.c)
 *     ?bRenderLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C00401F0 (-bRenderLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     GreLockSprite @ 0x1C0040290 (GreLockSprite.c)
 *     GreLockDisplayDevice @ 0x1C0040320 (GreLockDisplayDevice.c)
 *     GreUnlockDisplayDevice @ 0x1C0040360 (GreUnlockDisplayDevice.c)
 *     ?DxLddmPrimaryLockProcessDestroy@@YAXPEAUHDEV__@@KPEAK@Z @ 0x1C00403A8 (-DxLddmPrimaryLockProcessDestroy@@YAXPEAUHDEV__@@KPEAK@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070850 (EtwTraceGreLockReleaseSemaphore.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     ?DxLddmLogProcessPrimaryLockCount@@YAXK@Z @ 0x1C012DAC0 (-DxLddmLogProcessPrimaryLockCount@@YAXK@Z.c)
 */

void __fastcall DxLddmCleanupAtProcessDestroy(unsigned int a1)
{
  HDEV v2; // rdi
  int v3; // eax
  int v4; // edx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  void (__fastcall *v9)(__int64, __int64); // rsi
  __int64 v10; // rbx
  __int64 CurrentProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rbx
  HDEV v15; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v16; // [rsp+50h] [rbp+18h] BYREF

  v16 = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v15);
  v2 = (HDEV)hdevEnumerate(0LL);
  if ( v2 )
  {
    do
    {
      v3 = *((_DWORD *)v2 + 10);
      v15 = v2;
      if ( (v3 & 0x20000) == 0 && (v3 & 1) != 0 && (unsigned int)PDEVOBJ::bRenderLddmDriver((PDEVOBJ *)&v15) )
      {
        GreLockVisRgn((__int64)v2, v4, v5);
        GreLockSprite(v2);
        GreLockDisplayDevice(v2);
        DxLddmPrimaryLockProcessDestroy(v2, a1, &v16);
        v9 = (void (__fastcall *)(__int64, __int64))*((_QWORD *)v2 + 332);
        if ( v9 )
        {
          v10 = *((_QWORD *)v2 + 225);
          CurrentProcess = PsGetCurrentProcess(v7, v6);
          v9(v10, CurrentProcess);
        }
        else
        {
          v14 = WdLogNewEntry5_WdError(v7, v6, v8);
          *(_QWORD *)(v14 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
          WdLogEvent5_WdError(v14);
        }
        GreUnlockDisplayDevice(v2);
        EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
        if ( ghsemSprite )
        {
          ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
          PsLeavePriorityRegion();
        }
        GreUnlockVisRgn((__int64)v2, v12, v13);
      }
      v2 = (HDEV)hdevEnumerate(v2);
    }
    while ( v2 );
    if ( v16 )
      DxLddmLogProcessPrimaryLockCount(v16);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion();
  }
}
