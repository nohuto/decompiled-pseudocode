/*
 * XREFs of NtUserInjectDeviceInput @ 0x1C00B7E40
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
 *     RIMIDEInjectDeviceInput @ 0x1C00F3FE0 (RIMIDEInjectDeviceInput.c)
 *     ?WaitForMITPnpUserModeCallbacksToComplete@InputExtensibilityCallout@@QEAAXXZ @ 0x1C01210F0 (-WaitForMITPnpUserModeCallbacksToComplete@InputExtensibilityCallout@@QEAAXXZ.c)
 */

__int64 __fastcall NtUserInjectDeviceInput(__int64 a1, char *a2, __int64 a3)
{
  __int64 v3; // r15
  int v6; // edi
  int v7; // ecx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rbx
  size_t v11; // r14
  void *v12; // rax
  __int64 v13; // rbx
  __int64 v15; // [rsp+80h] [rbp+18h] BYREF
  int v16; // [rsp+88h] [rbp+20h]

  v3 = (unsigned int)a3;
  v6 = 0;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v15, (__int64)a2, a3);
  if ( gpInputExtensibilityCallout )
    InputExtensibilityCallout::WaitForMITPnpUserModeCallbacksToComplete(gpInputExtensibilityCallout);
  if ( !(_DWORD)v3 )
    goto LABEL_4;
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(0LL) )
  {
    v7 = 5;
    goto LABEL_5;
  }
  v10 = 12 * v3;
  v11 = 0xFFFFFFFFLL;
  if ( (unsigned __int64)(12 * v3) <= 0xFFFFFFFF )
    v11 = (unsigned int)v10;
  v16 = v11;
  if ( (unsigned __int64)(12 * v3) > 0xFFFFFFFF )
  {
LABEL_4:
    v7 = 87;
LABEL_5:
    UserSetLastError(v7);
    goto LABEL_23;
  }
  if ( v10 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v9) == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&a2[v10] > MmUserProbeAddress || &a2[v10] < a2 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  v12 = (void *)Win32AllocPoolWithQuota(v11, 0x74697355u);
  v13 = (__int64)v12;
  if ( !v12 )
    ExRaiseStatus(-1073741801);
  memmove(v12, a2, v11);
  if ( (int)RIMIDEInjectDeviceInput(a1, v13, (unsigned int)v3) >= 0 )
    v6 = 1;
  if ( v13 )
    Win32FreePool(v13);
LABEL_23:
  UserSessionSwitchLeaveCrit(v8);
  return v6;
}
