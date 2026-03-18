/*
 * XREFs of NtUserInitializeInputDeviceInjection @ 0x1C00F0000
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateSharedHandle @ 0x1C0013BD4 (HMValidateSharedHandle.c)
 *     Win32AllocPoolWithQuota @ 0x1C0019AB0 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A8AD4 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C011D4E0 (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDE_InitializeDeviceInjection @ 0x1C0120AE4 (RIMIDE_InitializeDeviceInjection.c)
 *     ?WaitForMITPnpUserModeCallbacksToComplete@InputExtensibilityCallout@@QEAAXXZ @ 0x1C01490D0 (-WaitForMITPnpUserModeCallbacksToComplete@InputExtensibilityCallout@@QEAAXXZ.c)
 */

__int64 __fastcall NtUserInitializeInputDeviceInjection(
        unsigned __int16 a1,
        __int64 a2,
        char *a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        _QWORD *a7)
{
  __int64 v7; // r12
  __int64 v9; // rdi
  __int64 v10; // r15
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // rbx
  unsigned int v14; // r14d
  __int64 v15; // rcx
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
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
    InputExtensibilityCallout::WaitForMITPnpUserModeCallbacksToComplete(*(InputExtensibilityCallout **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  v9 = 0LL;
  v21 = 0LL;
  v10 = 0LL;
  v22 = 0LL;
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(1LL) )
  {
    v11 = 5LL;
LABEL_5:
    v12 = 0;
    UserSetLastError(v11);
    goto LABEL_29;
  }
  v13 = 32 * v7;
  v14 = -1;
  if ( (unsigned __int64)(32 * v7) <= 0xFFFFFFFF )
    v14 = 32 * v7;
  v20 = v14;
  if ( (unsigned __int64)(32 * v7) > 0xFFFFFFFF || !(_DWORD)v7 || (unsigned int)(a6 - 1) > 2 )
  {
    v11 = 87LL;
    goto LABEL_5;
  }
  v15 = a5;
  if ( !a5 || (v10 = HMValidateSharedHandle(a5)) != 0 )
  {
    if ( v13 )
    {
      if ( ((PsGetCurrentProcessWow64Process(v15) == 0 ? 3 : 0) & (unsigned __int8)a3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a3[v13] > MmUserProbeAddress || &a3[v13] < a3 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    v16 = (void *)Win32AllocPoolWithQuota(v14, 0x74697355u);
    v9 = (__int64)v16;
    v21 = (__int64)v16;
    if ( !v16 )
      ExRaiseStatus(-1073741801);
    memmove(v16, a3, 32 * v7);
    v12 = RIMIDE_InitializeDeviceInjection(a1, v24, v9, (unsigned int)v7, v10, a6, &v22);
    HIDWORD(v19) = v12;
    if ( v12 )
    {
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
  UserSessionSwitchLeaveCrit();
  return v12;
}
