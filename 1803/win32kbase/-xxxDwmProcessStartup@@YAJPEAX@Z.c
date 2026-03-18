/*
 * XREFs of ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C00DC084
 * Callers:
 *     NtUserRegisterSessionPort @ 0x1C00B8AD0 (NtUserRegisterSessionPort.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     GreLockDwmState @ 0x1C004D1D0 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C004D210 (GreUnlockDwmState.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C0075C20 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     CheckDwmProcessSecurityIdentifier @ 0x1C00DC3F0 (CheckDwmProcessSecurityIdentifier.c)
 *     xxxDwmControl @ 0x1C00DC460 (xxxDwmControl.c)
 *     ?SetDwmApiPort@@YAXPEAX@Z @ 0x1C00DC4D4 (-SetDwmApiPort@@YAXPEAX@Z.c)
 */

__int64 __fastcall xxxDwmProcessStartup(HANDLE Handle)
{
  bool v2; // si
  PVOID v3; // r14
  PVOID v4; // rdi
  NTSTATUS v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rdx
  LeaveEnterCrit *v8; // rcx
  __int64 v9; // r8
  void *CurrentProcess; // rax
  __int64 v11; // rcx
  __int64 i; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  LeaveEnterCrit *v16; // rcx
  __int64 v17; // r8
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
    UserSessionSwitchLeaveCrit(v6);
    v5 = UserEnableConsoleMode(0LL);
    v2 = v5 >= 0;
    LeaveEnterCrit::~LeaveEnterCrit(v8, v7, v9);
  }
  if ( g_pepDwm )
    v5 = -1073741768;
  if ( v5 < 0 )
    goto LABEL_24;
  if ( Handle )
  {
    v5 = ObReferenceObjectByHandle(Handle, 1u, LpcPortObjectType, 1, &Object, 0LL);
    v3 = Object;
  }
  if ( v5 < 0 )
    goto LABEL_24;
  CurrentProcess = (void *)PsGetCurrentProcess(v6);
  v5 = ObReferenceObjectByPointer(CurrentProcess, 0x1FFFFFu, (POBJECT_TYPE)PsProcessType, 0);
  if ( v5 < 0 )
    goto LABEL_24;
  v4 = (PVOID)PsGetCurrentProcess(v11);
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
  if ( v5 < 0 || (v5 = _guard_dispatch_icall_fptr(), v5 < 0) )
  {
LABEL_24:
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
      UserSessionSwitchLeaveCrit(v14);
      UserEnableConsoleMode(1LL);
      LeaveEnterCrit::~LeaveEnterCrit(v16, v15, v17);
    }
  }
  else
  {
    for ( i = *(_QWORD *)(PsGetProcessWin32Process(g_pepDwm) + 320); i; i = *(_QWORD *)(i + 656) )
    {
      *(_DWORD *)(i + 1200) |= 4u;
      v13 = *(_QWORD *)(i + 472);
      if ( v13 )
        *(_QWORD *)(v13 + 224) |= 1uLL;
    }
    xxxDwmControl(1037LL, 0LL);
  }
  return (unsigned int)v5;
}
