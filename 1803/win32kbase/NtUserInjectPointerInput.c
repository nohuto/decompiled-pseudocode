/*
 * XREFs of NtUserInjectPointerInput @ 0x1C00B84E0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C00192D0 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C0073B10 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C00F2A80 (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C00F4274 (RIMIDEInjectHIDReportFromPointerInfo.c)
 *     ?WaitForMITPnpUserModeCallbacksToComplete@InputExtensibilityCallout@@QEAAXXZ @ 0x1C01210F0 (-WaitForMITPnpUserModeCallbacksToComplete@InputExtensibilityCallout@@QEAAXXZ.c)
 */

__int64 __fastcall NtUserInjectPointerInput(__int64 a1, char *a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v6; // rcx
  int v7; // ecx
  __int64 v8; // rbx
  void *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF

  v3 = (unsigned int)a3;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v14, (__int64)a2, a3);
  if ( gpInputExtensibilityCallout )
    InputExtensibilityCallout::WaitForMITPnpUserModeCallbacksToComplete(gpInputExtensibilityCallout);
  if ( (unsigned int)(v3 - 1) > 0xFF )
  {
    v7 = 87;
    goto LABEL_19;
  }
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(0LL) )
  {
    v7 = 5;
LABEL_19:
    v12 = 0;
    UserSetLastError(v7);
    goto LABEL_20;
  }
  v8 = 152 * v3;
  if ( 152 * v3 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v6) == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&a2[v8] > MmUserProbeAddress || &a2[v8] < a2 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  v9 = (void *)Win32AllocPoolWithQuota(152 * v3, 0x74697355u);
  v10 = (__int64)v9;
  if ( !v9 )
    ExRaiseStatus(-1073741801);
  memmove(v9, a2, 152 * v3);
  v12 = RIMIDEInjectHIDReportFromPointerInfo(a1, v10, (unsigned int)v3);
  if ( !v12 )
    UserSetLastError(87);
  if ( v10 )
    Win32FreePool(v10);
LABEL_20:
  UserSessionSwitchLeaveCrit(v11);
  return v12;
}
