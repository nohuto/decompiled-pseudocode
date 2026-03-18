/*
 * XREFs of NtUserInjectPointerInput @ 0x1C00F0AD0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0019AB0 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0030308 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C0030404 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00510B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A8AD4 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C011D4E0 (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C011ED14 (RIMIDEInjectHIDReportFromPointerInfo.c)
 *     ?WaitForMITPnpUserModeCallbacksToComplete@InputExtensibilityCallout@@QEAAXXZ @ 0x1C01490D0 (-WaitForMITPnpUserModeCallbacksToComplete@InputExtensibilityCallout@@QEAAXXZ.c)
 */

__int64 __fastcall NtUserInjectPointerInput(char *a1, char *a2, unsigned int a3)
{
  __int64 v3; // rbx
  _DWORD *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // rcx
  _QWORD *v12; // rsi
  int v13; // r12d
  __int64 v14; // r14
  _DWORD *v15; // rax
  PVOID Object; // [rsp+30h] [rbp-48h] BYREF
  _DWORD *v18; // [rsp+38h] [rbp-40h]
  LPCWSTR *v19[2]; // [rsp+40h] [rbp-38h] BYREF
  char v20; // [rsp+98h] [rbp+20h] BYREF

  v3 = a3;
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v19, L"InjectPointerInput", 0LL);
  v6 = 0LL;
  v18 = 0LL;
  Object = 0LL;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v20, v7, v8);
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
    InputExtensibilityCallout::WaitForMITPnpUserModeCallbacksToComplete(*(InputExtensibilityCallout **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(0LL) )
  {
    v9 = 5LL;
LABEL_5:
    v10 = 0;
    UserSetLastError(v9);
    goto LABEL_30;
  }
  if ( !(_DWORD)v3 )
  {
    v9 = 87LL;
    goto LABEL_5;
  }
  if ( (int)RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object) < 0 )
  {
    v9 = 6LL;
    goto LABEL_5;
  }
  v12 = Object;
  if ( (*((_DWORD *)Object + 72) & 0x80u) == 0 )
    goto LABEL_11;
  v13 = *(_DWORD *)(*((_QWORD *)Object + 71) + 24LL);
  v14 = 152 * v3;
  if ( 152 * v3 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v11) == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&a2[v14] > MmUserProbeAddress || &a2[v14] < a2 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  v15 = (_DWORD *)Win32AllocPoolWithQuota(152 * v3, 0x74697355u);
  v6 = v15;
  v18 = v15;
  if ( !v15 )
    ExRaiseStatus(-1073741801);
  memmove(v15, a2, 152 * v3);
  if ( *v6 == 3 )
  {
    if ( v13 != 5 || (_DWORD)v3 != 1 )
      goto LABEL_11;
  }
  else if ( *v6 != 2 || v13 != 3 || (unsigned int)v3 > *(_DWORD *)(v12[71] + 712LL) )
  {
    goto LABEL_11;
  }
  v10 = RIMIDEInjectHIDReportFromPointerInfo(a1, v6, (unsigned int)v3);
  if ( !v10 )
  {
LABEL_11:
    v10 = 0;
    UserSetLastError(87LL);
  }
  ObfDereferenceObject(v12);
  if ( v6 )
    Win32FreePool((__int64)v6);
LABEL_30:
  UserSessionSwitchLeaveCrit();
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v19);
  return v10;
}
