/*
 * XREFs of NtUserInjectKeyboardInput @ 0x1C00B8190
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
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C00F39F8 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C00F4600 (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 *     ?WaitForMITPnpUserModeCallbacksToComplete@InputExtensibilityCallout@@QEAAXXZ @ 0x1C01210F0 (-WaitForMITPnpUserModeCallbacksToComplete@InputExtensibilityCallout@@QEAAXXZ.c)
 */

__int64 __fastcall NtUserInjectKeyboardInput(char *Src, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  InputExtensibilityCallout *v5; // rcx
  __int64 CurrentProcessWin32Process; // r14
  __int64 v7; // rcx
  int v8; // ecx
  __int64 v9; // rbx
  void *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // ecx
  int v15; // ebx
  __int64 v16; // rcx
  __int64 v18; // [rsp+68h] [rbp+10h] BYREF

  v3 = (unsigned int)a2;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v18, a2, a3);
  v5 = gpInputExtensibilityCallout;
  if ( gpInputExtensibilityCallout )
    InputExtensibilityCallout::WaitForMITPnpUserModeCallbacksToComplete(gpInputExtensibilityCallout);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
  if ( (unsigned int)(v3 - 1) > 9 )
  {
    v8 = 87;
    goto LABEL_23;
  }
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(0LL) )
  {
    v8 = 5;
LABEL_23:
    v15 = 0;
    UserSetLastError(v8);
    goto LABEL_24;
  }
  v9 = 24 * v3;
  if ( 24 * v3 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v7) == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&Src[v9] > MmUserProbeAddress || &Src[v9] < Src )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  v10 = (void *)Win32AllocPoolWithQuota(24 * v3, 0x6B697355u);
  v11 = (__int64)v10;
  if ( !v10 )
    ExRaiseStatus(-1073741801);
  memmove(v10, Src, 24 * v3);
  if ( *(_QWORD *)(CurrentProcessWin32Process + 904) == -1LL )
  {
    v13 = PsGetCurrentProcessWin32Process(v12);
    if ( (int)RIMIDECreatePseudoMouseOrKeyboardDevice(1LL, v13 + 904) < 0 )
    {
      v14 = 1359;
LABEL_17:
      v15 = 0;
      UserSetLastError(v14);
      goto LABEL_20;
    }
  }
  v15 = RIMIDEInjectKeyboardFromKeybdInputStruct(*(_QWORD *)(CurrentProcessWin32Process + 904), v11, (unsigned int)v3);
  if ( !v15 )
  {
    v14 = 87;
    goto LABEL_17;
  }
LABEL_20:
  if ( v11 )
    Win32FreePool(v11);
LABEL_24:
  UserSessionSwitchLeaveCrit(v16);
  return v15;
}
