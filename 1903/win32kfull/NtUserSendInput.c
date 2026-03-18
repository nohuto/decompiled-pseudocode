/*
 * XREFs of NtUserSendInput @ 0x1C001DEB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C001B498 (WPP_RECORDER_SF_D.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C001E610 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C001E63C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     xxxSendInput @ 0x1C001E7BC (xxxSendInput.c)
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     WPP_RECORDER_SF_dqd @ 0x1C001F194 (WPP_RECORDER_SF_dqd.c)
 *     WPP_RECORDER_SF_ @ 0x1C0026C14 (WPP_RECORDER_SF_.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     UserGetLastError @ 0x1C0138968 (UserGetLastError.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     WPP_RECORDER_SF_dd @ 0x1C01DC95C (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_dddD @ 0x1C023999C (WPP_RECORDER_SF_dddD.c)
 */

__int64 __fastcall NtUserSendInput(unsigned int a1, volatile void *a2, int a3, int a4)
{
  __int64 v6; // rdi
  int v7; // edx
  __int64 v8; // rcx
  int v9; // r8d
  __int64 CurrentProcessWow64Process; // rax
  void *v11; // rax
  void *v12; // r15
  unsigned int v13; // esi
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rcx
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  void *v21; // [rsp+60h] [rbp-48h]
  _QWORD v22[4]; // [rsp+70h] [rbp-38h] BYREF
  char v23; // [rsp+C8h] [rbp+20h] BYREF

  v6 = a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dqd(a1, (_DWORD)a2, a3, a4);
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)&v23,
    L"SendInput",
    0LL);
  EnterCrit(0LL, 1LL);
  memset(v22, 0, 24);
  if ( a3 != 40 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dd(v8, v7, v9, 11, (__int64)&WPP_65a49924c3ca3249f60c4eca543eb56c_Traceguids, a3, 40);
    goto LABEL_11;
  }
  if ( !(_DWORD)v6 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_(v8, v7, 20, 12, (__int64)&WPP_65a49924c3ca3249f60c4eca543eb56c_Traceguids);
    }
LABEL_11:
    v13 = 0;
    UserSetLastError(87LL);
    goto LABEL_8;
  }
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v8);
  ProbeForRead(a2, 40 * v6, CurrentProcessWow64Process != 0 ? 1 : 4);
  v11 = (void *)Win32AllocPoolWithQuota(40 * v6, 1769173845LL);
  v12 = v11;
  v21 = v11;
  if ( !v11 )
    ExRaiseStatus(-1073741801);
  memmove(v11, (const void *)a2, 40 * v6);
  PushW32ThreadLock(v12, v22, Win32FreePool);
  v13 = xxxSendInput((unsigned int)v6, v12);
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  *(_QWORD *)(ThreadWin32Thread + 16) = v22[0];
  Win32FreePool(v21);
  if ( v13 != (_DWORD)v6 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserGetLastError();
    UserGetLastError();
    WPP_RECORDER_SF_dddD(v18, v17, v19, v20);
  }
LABEL_8:
  UserSessionSwitchLeaveCrit(v15);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v23);
  return v13;
}
