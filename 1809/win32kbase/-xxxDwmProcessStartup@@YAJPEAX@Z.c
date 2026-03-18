/*
 * XREFs of ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C0097AB0
 * Callers:
 *     NtUserRegisterSessionPort @ 0x1C00979C0 (NtUserRegisterSessionPort.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     GreLockDwmState @ 0x1C002A9E0 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C002AA20 (GreUnlockDwmState.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     xxxDwmControl @ 0x1C0097E60 (xxxDwmControl.c)
 *     ?SetDwmApiPort@@YAXPEAX@Z @ 0x1C0097FBC (-SetDwmApiPort@@YAXPEAX@Z.c)
 *     CheckDwmProcessSecurityIdentifier @ 0x1C0098200 (CheckDwmProcessSecurityIdentifier.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C00A8398 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxDwmProcessStartup(HANDLE Handle)
{
  bool v2; // si
  PVOID v3; // r14
  PVOID v4; // rdi
  NTSTATUS v5; // ebx
  __int64 v6; // rcx
  void *CurrentProcess; // rax
  __int64 v8; // rcx
  __int64 i; // rcx
  __int64 v10; // rax
  LeaveEnterCrit *v12; // rcx
  LeaveEnterCrit *v13; // rcx
  PVOID Object; // [rsp+58h] [rbp-50h] BYREF

  v2 = 0;
  v3 = 0LL;
  v4 = 0LL;
  if ( g_pepDwm )
    v5 = -1073741768;
  else
    v5 = CheckDwmProcessSecurityIdentifier();
  if ( (int)IsUserEnableConsoleModeSupported() >= 0 )
  {
    UserSessionSwitchLeaveCrit();
    v5 = UserEnableConsoleMode(0LL);
    v2 = v5 >= 0;
    LeaveEnterCrit::~LeaveEnterCrit(v12);
  }
  if ( g_pepDwm )
    v5 = -1073741768;
  if ( v5 < 0 )
    goto LABEL_25;
  if ( Handle )
  {
    v5 = ObReferenceObjectByHandle(Handle, 1u, LpcPortObjectType, 1, &Object, 0LL);
    v3 = Object;
  }
  if ( v5 < 0 )
    goto LABEL_25;
  CurrentProcess = (void *)PsGetCurrentProcess(v6);
  v5 = ObReferenceObjectByPointer(CurrentProcess, 0x1FFFFFu, (POBJECT_TYPE)PsProcessType, 0);
  if ( v5 < 0 )
    goto LABEL_25;
  v4 = (PVOID)PsGetCurrentProcess(v8);
  GreLockDwmState();
  if ( g_pepDwm )
  {
    v5 = -1073741768;
  }
  else
  {
    g_pepDwm = v4;
    SetDwmApiPort(v3);
  }
  GreUnlockDwmState();
  if ( v5 < 0 || (v5 = ((__int64 (*)(void))qword_1C01CDAC0)(), v5 < 0) )
  {
LABEL_25:
    GreLockDwmState();
    if ( g_pepDwm == v4 )
    {
      SetDwmApiPort(0LL);
      g_pepDwm = 0LL;
    }
    GreUnlockDwmState();
    if ( v3 )
      ObfDereferenceObject(v3);
    if ( v4 )
      ObfDereferenceObject(v4);
    if ( !g_pepDwm && v2 )
    {
      UserSessionSwitchLeaveCrit();
      UserEnableConsoleMode(1LL);
      LeaveEnterCrit::~LeaveEnterCrit(v13);
    }
  }
  else
  {
    for ( i = *(_QWORD *)(PsGetProcessWin32Process(g_pepDwm) + 328); i; i = *(_QWORD *)(i + 664) )
    {
      *(_DWORD *)(i + 1208) |= 4u;
      v10 = *(_QWORD *)(i + 480);
      if ( v10 )
        *(_QWORD *)(v10 + 224) |= 1uLL;
    }
    xxxDwmControl(1037LL, 0LL);
  }
  return (unsigned int)v5;
}
