/*
 * XREFs of NtMITBindInputTypeToMonitors @ 0x1C00B38F0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C00192D0 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C0039F4C (-IsInputThread@CInputThread@@QEBA_NXZ.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C0073B10 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     UserProcessInputIsolationPolicy @ 0x1C0132670 (UserProcessInputIsolationPolicy.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtMITBindInputTypeToMonitors(unsigned int a1, __int64 a2, char *a3)
{
  __int64 v4; // rsi
  CInputThread *v6; // rcx
  __int64 v7; // rcx
  int v8; // ecx
  void *v9; // rdi
  __int64 v10; // r14
  void *v11; // rax
  int v12; // ebx
  __int64 v13; // rcx
  char v15; // [rsp+78h] [rbp+20h] BYREF

  v4 = (unsigned int)a2;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v15, a2, (__int64)a3);
  if ( !CInputThread::IsInputThread(v6) )
  {
    v8 = 5023;
LABEL_22:
    v12 = 0;
    UserSetLastError(v8);
    goto LABEL_23;
  }
  v9 = 0LL;
  if ( !a1 || (a1 & 0xFFFFFFC0) != 0 )
    goto LABEL_21;
  if ( (a1 & 9) == 0 )
  {
    v8 = 50;
    goto LABEL_22;
  }
  if ( !(_DWORD)v4 )
  {
    if ( !a3 )
      goto LABEL_20;
LABEL_21:
    v8 = 87;
    goto LABEL_22;
  }
  if ( !a3 )
    goto LABEL_21;
  v10 = 8 * v4;
  if ( 8 * v4 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v7) == 0 ? 3 : 0) & (unsigned __int8)a3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&a3[v10] > MmUserProbeAddress || &a3[v10] < a3 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  v11 = (void *)Win32AllocPoolWithQuota(8 * v4, 0x69696255u);
  v9 = v11;
  if ( v11 )
  {
    memmove(v11, a3, 8 * v4);
LABEL_20:
    UserProcessInputIsolationPolicy(a1, (unsigned int)v4, v9);
    v13 = 0LL;
    v12 = 1;
    goto LABEL_23;
  }
  v12 = 0;
  UserSetLastError(8);
LABEL_23:
  UserSessionSwitchLeaveCrit(v13);
  return v12;
}
