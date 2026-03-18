/*
 * XREFs of ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C003F198
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C0061E50 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     GreUnlockVisRgn @ 0x1C0029B20 (GreUnlockVisRgn.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0029C48 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreLockVisRgn @ 0x1C0029D60 (GreLockVisRgn.c)
 *     GreLockSprite @ 0x1C002D2F0 (GreLockSprite.c)
 *     hdevEnumerate @ 0x1C003F2B0 (hdevEnumerate.c)
 *     ?bRenderLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C003F494 (-bRenderLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     GreLockDisplayDevice @ 0x1C003F4E0 (GreLockDisplayDevice.c)
 *     GreUnlockDisplayDevice @ 0x1C003F520 (GreUnlockDisplayDevice.c)
 *     ?DxLddmPrimaryLockProcessDestroy@@YAXPEAUHDEV__@@KPEAK@Z @ 0x1C003F568 (-DxLddmPrimaryLockProcessDestroy@@YAXPEAUHDEV__@@KPEAK@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005E110 (EtwTraceGreLockReleaseSemaphore.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     ?DxLddmLogProcessPrimaryLockCount@@YAXK@Z @ 0x1C00FCA0C (-DxLddmLogProcessPrimaryLockCount@@YAXK@Z.c)
 */

void __fastcall DxLddmCleanupAtProcessDestroy(unsigned int a1)
{
  HDEV v2; // rdi
  int v3; // eax
  int v4; // edx
  __int64 v5; // r8
  __int64 v6; // rcx
  void (__fastcall *v7)(__int64, __int64); // rsi
  __int64 v8; // rbx
  __int64 CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rbx
  HDEV v13; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v14; // [rsp+50h] [rbp+18h] BYREF

  v14 = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v13);
  v2 = (HDEV)hdevEnumerate(0LL);
  if ( v2 )
  {
    do
    {
      v3 = *((_DWORD *)v2 + 10);
      v13 = v2;
      if ( (v3 & 0x20000) == 0 && (v3 & 1) != 0 && (unsigned int)PDEVOBJ::bRenderLddmDriver((PDEVOBJ *)&v13) )
      {
        GreLockVisRgn((__int64)v2, v4, v5);
        GreLockSprite();
        GreLockDisplayDevice(v2);
        DxLddmPrimaryLockProcessDestroy(v2, a1, &v14);
        v7 = (void (__fastcall *)(__int64, __int64))*((_QWORD *)v2 + 332);
        if ( v7 )
        {
          v8 = *((_QWORD *)v2 + 225);
          CurrentProcess = PsGetCurrentProcess(v6);
          v7(v8, CurrentProcess);
        }
        else
        {
          v12 = WdLogNewEntry5_WdError();
          *(_QWORD *)(v12 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
          WdLogEvent5_WdError(v12);
        }
        GreUnlockDisplayDevice(v2);
        EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
        if ( ghsemSprite )
        {
          ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
          PsLeavePriorityRegion();
        }
        GreUnlockVisRgn((__int64)v2, v10, v11);
      }
      v2 = (HDEV)hdevEnumerate(v2);
    }
    while ( v2 );
    if ( v14 )
      DxLddmLogProcessPrimaryLockCount(v14);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion();
  }
}
