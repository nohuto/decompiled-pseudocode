/*
 * XREFs of ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C0041CE8
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C007FEC8 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00151C0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreUnlockVisRgn @ 0x1C0017990 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x1C0017A40 (GreLockVisRgn.c)
 *     hdevEnumerate @ 0x1C0041E00 (hdevEnumerate.c)
 *     ?bRenderLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C0041F80 (-bRenderLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     GreLockSprite @ 0x1C0042020 (GreLockSprite.c)
 *     GreLockDisplayDevice @ 0x1C00420B0 (GreLockDisplayDevice.c)
 *     GreUnlockDisplayDevice @ 0x1C00420F0 (GreUnlockDisplayDevice.c)
 *     ?DxLddmPrimaryLockProcessDestroy@@YAXPEAUHDEV__@@KPEAK@Z @ 0x1C0042138 (-DxLddmPrimaryLockProcessDestroy@@YAXPEAUHDEV__@@KPEAK@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0077760 (EtwTraceGreLockReleaseSemaphore.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     ?DxLddmLogProcessPrimaryLockCount@@YAXK@Z @ 0x1C0130270 (-DxLddmLogProcessPrimaryLockCount@@YAXK@Z.c)
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
