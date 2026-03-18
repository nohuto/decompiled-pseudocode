/*
 * XREFs of NtUserInjectTouchInput @ 0x1C02309A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C001B498 (WPP_RECORDER_SF_D.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C001E610 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C001E63C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     WPP_RECORDER_SF_ @ 0x1C0026C14 (WPP_RECORDER_SF_.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     UserGetLastError @ 0x1C0138968 (UserGetLastError.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     ?TraceLoggingTouchInjection@@YAXHHHK@Z @ 0x1C01CF730 (-TraceLoggingTouchInjection@@YAXHHHK@Z.c)
 *     xxxInjectTouchInput @ 0x1C01DF914 (xxxInjectTouchInput.c)
 *     WPP_RECORDER_SF_dD @ 0x1C02398C4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0239AB0 (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall NtUserInjectTouchInput(unsigned int a1, void *Src, int a3, int a4)
{
  __int64 v5; // rdi
  __int64 v6; // rcx
  struct tagPOINTER_TOUCH_INFO *v7; // rbx
  __int64 v8; // rcx
  __int64 CurrentProcessWow64Process; // rax
  struct tagPOINTER_TOUCH_INFO *v10; // rax
  struct tagPOINTER_TOUCH_INFO *v11; // rbx
  __int64 v12; // r9
  int v13; // edx
  int v14; // ecx
  int v15; // r14d
  int v16; // edx
  int v17; // r8d
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  char LastError; // bl
  char v27; // al
  int v28; // edx
  int v29; // ecx
  int v30; // r8d
  int v31; // r9d
  int v33; // [rsp+20h] [rbp-78h]
  struct tagPOINTER_TOUCH_INFO *v34; // [rsp+50h] [rbp-48h]
  _QWORD v35[4]; // [rsp+60h] [rbp-38h] BYREF
  LPCWSTR *v36; // [rsp+B0h] [rbp+18h] BYREF

  v5 = a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dq(a1, (_DWORD)Src, a3, a4);
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v36, L"InjectTouchInput", 0LL);
  EnterCrit(0LL, 1LL);
  InputExtensibilityCalloutGuard();
  v7 = 0LL;
  memset(v35, 0, 24);
  if ( (unsigned int)(v5 - 1) > 0xFF )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_D(v6, 2u, 0x14u, 0x10u, (__int64)&WPP_65a49924c3ca3249f60c4eca543eb56c_Traceguids);
    TraceLoggingTouchInjection(1, 0, v5);
    v15 = 0;
    UserSetLastError(87LL, v22, v23, v24);
  }
  else
  {
    EtwTraceTouchInjectionStart();
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v8);
    ProbeForRead(Src, 144 * v5, CurrentProcessWow64Process != 0 ? 1 : 4);
    v10 = (struct tagPOINTER_TOUCH_INFO *)Win32AllocPoolWithQuota(144 * v5, 1953067861LL);
    v11 = v10;
    v34 = v10;
    if ( !v10 )
      ExRaiseStatus(-1073741801);
    memmove(v10, Src, 144 * v5);
    PushW32ThreadLock((__int64)v11, v35, (__int64)Win32FreePool, v12);
    v15 = xxxInjectTouchInput(v5, v11);
    if ( v15 )
    {
      v17 = v5;
      v16 = 1;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = 2;
        WPP_RECORDER_SF_(v14, v13, v15 + 20, 18, (__int64)&WPP_65a49924c3ca3249f60c4eca543eb56c_Traceguids);
      }
      v16 = 0;
      v17 = -2;
    }
    TraceLoggingTouchInjection(1, v16, v17);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18, v19, v20);
    *(_QWORD *)(ThreadWin32Thread + 16) = v35[0];
    v7 = v34;
  }
  if ( v7 )
    Win32FreePool(v7);
  EtwTraceTouchInjectionStop();
  if ( !v15 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LastError = UserGetLastError();
    v27 = UserGetLastError();
    WPP_RECORDER_SF_dD(v29, v28, v30, v31, v33, v27, LastError);
  }
  UserSessionSwitchLeaveCrit(v25);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v36);
  return v15;
}
