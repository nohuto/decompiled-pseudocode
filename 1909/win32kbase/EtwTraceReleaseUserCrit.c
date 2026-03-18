/*
 * XREFs of EtwTraceReleaseUserCrit @ 0x1C002AB70
 * Callers:
 *     UserDeleteW32Thread @ 0x1C0010550 (UserDeleteW32Thread.c)
 *     ?UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C0023000 (-UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 *     W32CalloutDispatch @ 0x1C0023A70 (W32CalloutDispatch.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     NtUserGetDC @ 0x1C002A0F0 (NtUserGetDC.c)
 *     LeaveCrit @ 0x1C002A980 (LeaveCrit.c)
 *     NtUserReleaseDC @ 0x1C002A9F0 (NtUserReleaseDC.c)
 *     NtUserEnumDisplaySettings @ 0x1C003A710 (NtUserEnumDisplaySettings.c)
 *     NtUserEnumDisplayDevices @ 0x1C003B880 (NtUserEnumDisplayDevices.c)
 *     UserSessionSwitchEnterCrit @ 0x1C0086C70 (UserSessionSwitchEnterCrit.c)
 *     ChangeAcquireResourceType @ 0x1C0091170 (ChangeAcquireResourceType.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z @ 0x1C00A3D70 (-LockExclusive@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z.c)
 *     ?LockShared@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z @ 0x1C0177370 (-LockShared@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     McTemplateK0xqx @ 0x1C010F614 (McTemplateK0xqx.c)
 */

char EtwTraceReleaseUserCrit()
{
  unsigned __int64 CurrentThreadWin32Thread; // rax
  unsigned __int64 v1; // rbx
  LARGE_INTEGER v2; // rdi
  __int64 *v3; // rdx
  __int64 v4; // rcx
  int v5; // r8d
  __int64 v7; // [rsp+38h] [rbp-39h] BYREF
  __int64 v8; // [rsp+40h] [rbp-31h]
  __int64 v9; // [rsp+48h] [rbp-29h]
  __int64 v10; // [rsp+50h] [rbp-21h]
  __int64 v11; // [rsp+58h] [rbp-19h]
  __int64 v12; // [rsp+60h] [rbp-11h]
  __int64 v13; // [rsp+68h] [rbp-9h]
  __int64 v14; // [rsp+70h] [rbp-1h]
  __int64 v15; // [rsp+78h] [rbp+7h]
  __int64 v16; // [rsp+80h] [rbp+Fh]
  __int64 v17; // [rsp+88h] [rbp+17h]
  __int64 v18; // [rsp+90h] [rbp+1Fh]
  __int64 v19; // [rsp+98h] [rbp+27h]
  __int64 v20; // [rsp+A0h] [rbp+2Fh]
  __int64 v21; // [rsp+A8h] [rbp+37h]

  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
  v1 = CurrentThreadWin32Thread;
  if ( CurrentThreadWin32Thread )
  {
    v2 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(CurrentThreadWin32Thread + 8));
    if ( (dword_1C021251C & 1) == 0 )
    {
      dword_1C021251C |= 1u;
      memset(qword_1C0212520, 0, 0x198uLL);
      qword_1C02126B8 = 0LL;
      qword_1C02126C0 = 0LL;
    }
    v21 = -1LL;
    v7 = 10LL;
    CurrentThreadWin32Thread = (unsigned __int64)(1000000 * v2.QuadPart) / gliQpcFreq.QuadPart;
    v8 = 25LL;
    v3 = &v7;
    v9 = 50LL;
    v10 = 100LL;
    v4 = 0LL;
    v11 = 250LL;
    v12 = 500LL;
    v13 = 1000LL;
    v14 = 2500LL;
    v15 = 5000LL;
    v16 = 10000LL;
    v17 = 25000LL;
    v18 = 50000LL;
    v19 = 100000LL;
    v20 = 200000LL;
    while ( CurrentThreadWin32Thread > *v3 )
    {
      v4 = (unsigned int)(v4 + 1);
      ++v3;
      if ( (unsigned int)v4 >= 0xF )
        goto LABEL_9;
    }
    _InterlockedIncrement64(&qword_1C0212520[v4 + 30]);
LABEL_9:
    v5 = _InterlockedExchangeAdd64(&qword_1C0212698, CurrentThreadWin32Thread);
    _InterlockedIncrement64(&qword_1C02126B0);
    if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0 )
    {
      LOBYTE(CurrentThreadWin32Thread) = byte_1C020C438 - 1;
      if ( (unsigned __int8)(byte_1C020C438 - 1) > 2u && (qword_1C020C420 & 0x200000010000000LL) != 0 )
      {
        LOBYTE(CurrentThreadWin32Thread) = 0;
        if ( (qword_1C020C428 & 0x200000010000000LL) == qword_1C020C428 )
        {
          LOBYTE(CurrentThreadWin32Thread) = BYTE2(Microsoft_Windows_Win32kEnableBits);
          if ( SBYTE2(Microsoft_Windows_Win32kEnableBits) < 0 )
            LOBYTE(CurrentThreadWin32Thread) = McTemplateK0xqx(
                                                 v4,
                                                 (unsigned int)&ReleaseUserCritEvent,
                                                 v5,
                                                 v2.LowPart,
                                                 0,
                                                 *(_QWORD *)(v1 + 16),
                                                 v7,
                                                 v8,
                                                 v9,
                                                 v10,
                                                 v11,
                                                 v12,
                                                 v13,
                                                 v14,
                                                 v15,
                                                 v16,
                                                 v17,
                                                 v18,
                                                 v19,
                                                 v20,
                                                 v21);
        }
      }
    }
  }
  return CurrentThreadWin32Thread;
}
