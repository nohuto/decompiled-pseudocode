/*
 * XREFs of NtUserInitializeInputDeviceInjection @ 0x1C00B7AA0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C00192D0 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     HMValidateSharedHandle @ 0x1C00597B4 (HMValidateSharedHandle.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C0073B10 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C00F2A80 (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDE_InitializeDeviceInjection @ 0x1C00F5EA4 (RIMIDE_InitializeDeviceInjection.c)
 *     ?WaitForMITPnpUserModeCallbacksToComplete@InputExtensibilityCallout@@QEAAXXZ @ 0x1C01210F0 (-WaitForMITPnpUserModeCallbacksToComplete@InputExtensibilityCallout@@QEAAXXZ.c)
 */

__int64 __fastcall NtUserInitializeInputDeviceInjection(
        unsigned __int16 a1,
        __int64 a2,
        char *a3,
        unsigned int a4,
        ULONG64 a5,
        int a6,
        _QWORD *a7)
{
  __int64 v7; // r12
  __int64 v9; // rdi
  __int64 v10; // r15
  int v11; // ecx
  int v12; // ebx
  ULONG64 v13; // rcx
  __int64 v14; // rbx
  unsigned int v15; // r14d
  void *v16; // rax
  _QWORD *v17; // rdx
  __int64 v19; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v20; // [rsp+50h] [rbp-48h]
  __int64 v21; // [rsp+58h] [rbp-40h]
  __int64 v22; // [rsp+60h] [rbp-38h] BYREF
  unsigned __int16 v24; // [rsp+A8h] [rbp+10h]

  v24 = a2;
  v7 = a4;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v19, a2, (__int64)a3);
  if ( gpInputExtensibilityCallout )
    InputExtensibilityCallout::WaitForMITPnpUserModeCallbacksToComplete(gpInputExtensibilityCallout);
  v9 = 0LL;
  v21 = 0LL;
  v10 = 0LL;
  v22 = 0LL;
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(1LL) )
  {
    v11 = 5;
LABEL_5:
    v12 = 0;
    UserSetLastError(v11);
    goto LABEL_29;
  }
  v14 = 32 * v7;
  v15 = -1;
  if ( (unsigned __int64)(32 * v7) <= 0xFFFFFFFF )
    v15 = 32 * v7;
  v20 = v15;
  if ( (unsigned __int64)(32 * v7) > 0xFFFFFFFF || !(_DWORD)v7 || (unsigned int)(a6 - 1) > 2 )
  {
    v11 = 87;
    goto LABEL_5;
  }
  v13 = a5;
  if ( !a5 || (v10 = HMValidateSharedHandle(a5)) != 0 )
  {
    if ( v14 )
    {
      if ( ((PsGetCurrentProcessWow64Process(v13) == 0 ? 3 : 0) & (unsigned __int8)a3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a3[v14] > MmUserProbeAddress || &a3[v14] < a3 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    v16 = (void *)Win32AllocPoolWithQuota(v15, 0x74697355u);
    v9 = (__int64)v16;
    v21 = (__int64)v16;
    if ( !v16 )
      ExRaiseStatus(-1073741801);
    memmove(v16, a3, 32 * v7);
    v12 = RIMIDE_InitializeDeviceInjection(a1, v24, v9, (unsigned int)v7, v10, a6, &v22);
    HIDWORD(v19) = v12;
    if ( v12 )
    {
      v13 = MmUserProbeAddress;
      v17 = a7;
      if ( (unsigned __int64)a7 >= MmUserProbeAddress )
        v17 = (_QWORD *)MmUserProbeAddress;
      *v17 = *v17;
      *a7 = v22;
      v12 = HIDWORD(v19);
      v9 = v21;
    }
  }
  else
  {
    v12 = 0;
  }
  if ( v9 )
    Win32FreePool(v9);
LABEL_29:
  UserSessionSwitchLeaveCrit(v13);
  return v12;
}
