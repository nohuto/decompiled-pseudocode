/*
 * XREFs of NtUserInitializePointerDeviceInjectionEx @ 0x1C00B7CF0
 * Callers:
 *     NtUserInitializePointerDeviceInjection @ 0x1C00B7CC0 (NtUserInitializePointerDeviceInjection.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     HMValidateSharedHandle @ 0x1C00597B4 (HMValidateSharedHandle.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C0073B10 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C00F2A80 (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDE_InitializePointerDeviceInjection @ 0x1C00F5FE0 (RIMIDE_InitializePointerDeviceInjection.c)
 *     ?WaitForMITPnpUserModeCallbacksToComplete@InputExtensibilityCallout@@QEAAXXZ @ 0x1C01210F0 (-WaitForMITPnpUserModeCallbacksToComplete@InputExtensibilityCallout@@QEAAXXZ.c)
 */

__int64 __fastcall NtUserInitializePointerDeviceInjectionEx(int a1, __int64 a2, __int64 a3, int a4, int a5, _QWORD *a6)
{
  int v8; // r14d
  int v10; // ebx
  int v11; // ecx
  __int64 v12; // rax
  _QWORD *v13; // rcx
  __int64 v15; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v16[3]; // [rsp+58h] [rbp-20h] BYREF

  v8 = a2;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v15, a2, a3);
  if ( gpInputExtensibilityCallout )
    InputExtensibilityCallout::WaitForMITPnpUserModeCallbacksToComplete(gpInputExtensibilityCallout);
  v10 = 0;
  v16[0] = 0LL;
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(1LL) )
  {
    v11 = 5;
LABEL_15:
    UserSetLastError(v11);
    goto LABEL_16;
  }
  if ( (unsigned int)(v8 - 1) > 0xFF || (unsigned int)(a4 - 1) > 2 )
  {
    v11 = 87;
    goto LABEL_15;
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
LABEL_16:
  UserSessionSwitchLeaveCrit((__int64)v13);
  return v10;
}
