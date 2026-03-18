/*
 * XREFs of NtUserInitializePointerDeviceInjectionEx @ 0x1C00F0260
 * Callers:
 *     NtUserInitializePointerDeviceInjection @ 0x1C00F0230 (NtUserInitializePointerDeviceInjection.c)
 * Callees:
 *     HMValidateSharedHandle @ 0x1C0013BD4 (HMValidateSharedHandle.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A8AD4 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     NtUserRemoveInjectionDevice @ 0x1C00F1030 (NtUserRemoveInjectionDevice.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C011D4E0 (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDE_InitializePointerDeviceInjection @ 0x1C0120C20 (RIMIDE_InitializePointerDeviceInjection.c)
 *     ?WaitForMITPnpUserModeCallbacksToComplete@InputExtensibilityCallout@@QEAAXXZ @ 0x1C01490D0 (-WaitForMITPnpUserModeCallbacksToComplete@InputExtensibilityCallout@@QEAAXXZ.c)
 */

__int64 __fastcall NtUserInitializePointerDeviceInjectionEx(int a1, __int64 a2, __int64 a3, int a4, int a5, _QWORD *a6)
{
  int v8; // esi
  int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rax
  _QWORD *v13; // rcx
  __int64 v15; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v16[3]; // [rsp+58h] [rbp-20h] BYREF

  v8 = a2;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v15, a2, a3);
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
    InputExtensibilityCallout::WaitForMITPnpUserModeCallbacksToComplete(*(InputExtensibilityCallout **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  v10 = 0;
  v16[0] = 0LL;
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(1LL) )
  {
    v11 = 5LL;
LABEL_19:
    UserSetLastError(v11);
    goto LABEL_20;
  }
  if ( a1 == 3 )
  {
    if ( v8 != 1 )
      goto LABEL_18;
  }
  else if ( a1 != 2 || (unsigned int)(v8 - 1) > 0xFF )
  {
    goto LABEL_18;
  }
  if ( (unsigned int)(a4 - 1) > 2 )
  {
LABEL_18:
    v11 = 87LL;
    goto LABEL_19;
  }
  if ( !a3 || (v12 = HMValidateSharedHandle(a3), v10 = v12, v12) )
  {
    v10 = RIMIDE_InitializePointerDeviceInjection(a1, v8, v10, a4, 0, a5, (__int64)v16);
    if ( v10 )
    {
      v13 = a6;
      if ( (unsigned __int64)a6 >= MmUserProbeAddress )
        v13 = (_QWORD *)MmUserProbeAddress;
      *v13 = *v13;
      *a6 = v16[0];
    }
  }
LABEL_20:
  UserSessionSwitchLeaveCrit();
  return v10;
}
