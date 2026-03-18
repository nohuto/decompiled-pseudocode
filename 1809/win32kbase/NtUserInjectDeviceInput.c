/*
 * XREFs of NtUserInjectDeviceInput @ 0x1C00F03E0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0019AB0 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0030308 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C0030404 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A8AD4 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C011D4E0 (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDEInjectDeviceInput @ 0x1C011EA60 (RIMIDEInjectDeviceInput.c)
 *     ?WaitForMITPnpUserModeCallbacksToComplete@InputExtensibilityCallout@@QEAAXXZ @ 0x1C01490D0 (-WaitForMITPnpUserModeCallbacksToComplete@InputExtensibilityCallout@@QEAAXXZ.c)
 */

__int64 __fastcall NtUserInjectDeviceInput(__int64 a1, char *a2, unsigned int a3)
{
  __int64 v3; // r15
  int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rbx
  size_t v12; // r14
  void *v13; // rax
  __int64 v14; // rbx
  LPCWSTR *v16[8]; // [rsp+38h] [rbp-40h] BYREF
  char v17; // [rsp+90h] [rbp+18h] BYREF
  int v18; // [rsp+98h] [rbp+20h]

  v3 = a3;
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v16, L"InjectDeviceInput", 0LL);
  v6 = 0;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v17, v7, v8);
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
    InputExtensibilityCallout::WaitForMITPnpUserModeCallbacksToComplete(*(InputExtensibilityCallout **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  if ( !(_DWORD)v3 )
    goto LABEL_4;
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(0LL) )
  {
    v9 = 5LL;
    goto LABEL_5;
  }
  v11 = 12 * v3;
  v12 = 0xFFFFFFFFLL;
  if ( (unsigned __int64)(12 * v3) <= 0xFFFFFFFF )
    v12 = (unsigned int)v11;
  v18 = v12;
  if ( (unsigned __int64)(12 * v3) > 0xFFFFFFFF )
  {
LABEL_4:
    v9 = 87LL;
LABEL_5:
    UserSetLastError(v9);
    goto LABEL_23;
  }
  if ( v11 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v10) == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&a2[v11] > MmUserProbeAddress || &a2[v11] < a2 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  v13 = (void *)Win32AllocPoolWithQuota(v12, 0x74697355u);
  v14 = (__int64)v13;
  if ( !v13 )
    ExRaiseStatus(-1073741801);
  memmove(v13, a2, v12);
  if ( (int)RIMIDEInjectDeviceInput(a1, v14, (unsigned int)v3, 4LL) >= 0 )
    v6 = 1;
  if ( v14 )
    Win32FreePool(v14);
LABEL_23:
  UserSessionSwitchLeaveCrit();
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v16);
  return v6;
}
