/*
 * XREFs of NtUserInitializeGenericHidInjection @ 0x1C00B7760
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C00192D0 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C0073B10 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C00F2A80 (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDE_CreateGenericHidDevice @ 0x1C00F5D84 (RIMIDE_CreateGenericHidDevice.c)
 *     ?WaitForMITPnpUserModeCallbacksToComplete@InputExtensibilityCallout@@QEAAXXZ @ 0x1C01210F0 (-WaitForMITPnpUserModeCallbacksToComplete@InputExtensibilityCallout@@QEAAXXZ.c)
 */

__int64 __fastcall NtUserInitializeGenericHidInjection(_OWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // r12
  __int64 v5; // rcx
  PVOID CurrentProcess; // rax
  __int64 v7; // rcx
  BOOL v8; // edx
  int v9; // edi
  ULONG64 v10; // rcx
  _OWORD *v11; // rcx
  unsigned __int16 epi16; // r14
  __int64 CurrentProcessWow64Process; // rax
  ULONG64 v14; // rdx
  unsigned __int16 v15; // si
  __int64 v16; // rax
  ULONG64 v17; // rdx
  const void *v18; // r15
  const void *v19; // r15
  char v21; // [rsp+20h] [rbp-A8h]
  char v22; // [rsp+21h] [rbp-A7h]
  _OWORD v23[8]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v24; // [rsp+E0h] [rbp+18h] BYREF
  __int64 v25; // [rsp+E8h] [rbp+20h] BYREF

  v3 = (_QWORD *)a2;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v24, a2, a3);
  if ( gpInputExtensibilityCallout )
    InputExtensibilityCallout::WaitForMITPnpUserModeCallbacksToComplete(gpInputExtensibilityCallout);
  v25 = 0LL;
  memset(v23, 0, 0x40uLL);
  v21 = 0;
  v22 = 0;
  CurrentProcess = (PVOID)PsGetCurrentProcess(v5);
  v8 = 0;
  v9 = 1;
  if ( CurrentProcess )
    v8 = CurrentProcess == g_pepDwm;
  if ( !v8 && !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(1LL) )
  {
    v9 = 0;
    UserSetLastError(5);
    goto LABEL_42;
  }
  if ( ((PsGetCurrentProcessWow64Process(v7) == 0 ? 3 : 0) & (unsigned __int8)a1) != 0 )
    ExRaiseDatatypeMisalignment();
  v11 = a1 + 4;
  if ( (unsigned __int64)(a1 + 4) > MmUserProbeAddress || v11 < a1 )
    *(_BYTE *)MmUserProbeAddress = 0;
  v23[0] = *a1;
  v23[1] = a1[1];
  v23[2] = a1[2];
  v23[3] = a1[3];
  epi16 = _mm_extract_epi16((__m128i)v23[3], 4);
  if ( epi16 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v11);
    if ( ((CurrentProcessWow64Process == 0 ? 3 : 0) & LOBYTE(v23[3])) != 0 )
      ExRaiseDatatypeMisalignment();
    v11 = *(_OWORD **)&v23[3];
    v14 = *(_QWORD *)&v23[3] + epi16;
    if ( v14 > MmUserProbeAddress || v14 < *(_QWORD *)&v23[3] )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  v15 = WORD4(v23[2]);
  if ( !WORD4(v23[2]) )
    goto LABEL_29;
  v16 = PsGetCurrentProcessWow64Process(v11);
  if ( ((v16 == 0 ? 3 : 0) & LOBYTE(v23[2])) != 0 )
    ExRaiseDatatypeMisalignment();
  v17 = *(_QWORD *)&v23[2] + v15;
  if ( v17 > MmUserProbeAddress || v17 < *(_QWORD *)&v23[2] )
    *(_BYTE *)MmUserProbeAddress = 0;
  if ( !v15 )
  {
LABEL_29:
    if ( epi16 )
    {
      v19 = *(const void **)&v23[3];
      *(_QWORD *)&v23[3] = Win32AllocPoolWithQuota(epi16, 0x74697355u);
      if ( !*(_QWORD *)&v23[3] )
        goto LABEL_27;
      v22 = 1;
      memmove(*(void **)&v23[3], v19, epi16);
    }
    if ( *(_QWORD *)&v23[2] && (unsigned int)RIMIDE_CreateGenericHidDevice(v23, &v25) )
    {
      v10 = MmUserProbeAddress;
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (_QWORD *)MmUserProbeAddress;
      *v3 = v25;
    }
    else
    {
      v9 = 0;
      UserSetLastError(87);
    }
    goto LABEL_38;
  }
  v18 = *(const void **)&v23[2];
  *(_QWORD *)&v23[2] = Win32AllocPoolWithQuota(v15, 0x74697355u);
  if ( *(_QWORD *)&v23[2] )
  {
    v21 = 1;
    memmove(*(void **)&v23[2], v18, v15);
    goto LABEL_29;
  }
LABEL_27:
  v9 = 0;
  UserSetLastError(8);
LABEL_38:
  if ( v21 )
    Win32FreePool(*(__int64 *)&v23[2]);
  if ( v22 )
    Win32FreePool(*(__int64 *)&v23[3]);
LABEL_42:
  UserSessionSwitchLeaveCrit(v10);
  return v9;
}
