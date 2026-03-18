/*
 * XREFs of NtUserInjectTouchInput @ 0x1C0230380
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C001BBC0 (WPP_RECORDER_SF_D.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C001E4A0 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C001E4CC (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D084 (WPP_RECORDER_SF_.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     UserGetLastError @ 0x1C0112968 (UserGetLastError.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     ?TraceLoggingTouchInjection@@YAXHHHK@Z @ 0x1C01CF5A0 (-TraceLoggingTouchInjection@@YAXHHHK@Z.c)
 *     xxxInjectTouchInput @ 0x1C01DF794 (xxxInjectTouchInput.c)
 *     WPP_RECORDER_SF_dD @ 0x1C02392A4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0239490 (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall NtUserInjectTouchInput(unsigned int a1, void *Src, int a3, int a4)
{
  __int64 v5; // rdi
  int v6; // edx
  int v7; // ecx
  struct tagPOINTER_TOUCH_INFO *v8; // rbx
  __int64 v9; // rcx
  __int64 CurrentProcessWow64Process; // rax
  struct tagPOINTER_TOUCH_INFO *v11; // rax
  struct tagPOINTER_TOUCH_INFO *v12; // rbx
  int v13; // edx
  int v14; // ecx
  int v15; // r14d
  int v16; // edx
  int v17; // r8d
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  char LastError; // bl
  char v26; // al
  int v27; // edx
  int v28; // ecx
  int v29; // r8d
  int v30; // r9d
  int v32; // [rsp+20h] [rbp-78h]
  struct tagPOINTER_TOUCH_INFO *v33; // [rsp+50h] [rbp-48h]
  _QWORD v34[4]; // [rsp+60h] [rbp-38h] BYREF
  LPCWSTR *v35; // [rsp+B0h] [rbp+18h] BYREF

  v5 = a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dq(a1, (_DWORD)Src, a3, a4);
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v35, L"InjectTouchInput", 0LL);
  EnterCrit(0LL, 1LL);
  InputExtensibilityCalloutGuard();
  v8 = 0LL;
  memset(v34, 0, 24);
  if ( (unsigned int)(v5 - 1) > 0xFF )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_D(v7, v6, 20, 16, (__int64)&WPP_0005b7b05e953d15cfa73aaf0a7b9adf_Traceguids, v5);
    }
    TraceLoggingTouchInjection(1, 0, v5);
    v15 = 0;
    UserSetLastError(87LL, v21, v22, v23);
  }
  else
  {
    EtwTraceTouchInjectionStart();
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v9);
    ProbeForRead(Src, 144 * v5, CurrentProcessWow64Process != 0 ? 1 : 4);
    v11 = (struct tagPOINTER_TOUCH_INFO *)Win32AllocPoolWithQuota(144 * v5, 1953067861LL);
    v12 = v11;
    v33 = v11;
    if ( !v11 )
      ExRaiseStatus(-1073741801);
    memmove(v11, Src, 144 * v5);
    PushW32ThreadLock((__int64)v12, v34, (__int64)Win32FreePool);
    v15 = xxxInjectTouchInput(v5, v12);
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
        WPP_RECORDER_SF_(v14, v13, v15 + 20, 18, (__int64)&WPP_0005b7b05e953d15cfa73aaf0a7b9adf_Traceguids);
      }
      v16 = 0;
      v17 = -2;
    }
    TraceLoggingTouchInjection(1, v16, v17);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18, v19);
    *(_QWORD *)(ThreadWin32Thread + 16) = v34[0];
    v8 = v33;
  }
  if ( v8 )
    Win32FreePool(v8);
  EtwTraceTouchInjectionStop();
  if ( !v15 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LastError = UserGetLastError();
    v26 = UserGetLastError();
    WPP_RECORDER_SF_dD(v28, v27, v29, v30, v32, v26, LastError);
  }
  UserSessionSwitchLeaveCrit(v24);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v35);
  return v15;
}
