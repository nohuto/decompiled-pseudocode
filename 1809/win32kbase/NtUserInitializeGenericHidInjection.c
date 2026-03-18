/*
 * XREFs of NtUserInitializeGenericHidInjection @ 0x1C00EFC90
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0019AB0 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A8AD4 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C011D4E0 (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDE_CreateGenericHidDevice @ 0x1C01209A8 (RIMIDE_CreateGenericHidDevice.c)
 *     ?WaitForMITPnpUserModeCallbacksToComplete@InputExtensibilityCallout@@QEAAXXZ @ 0x1C01490D0 (-WaitForMITPnpUserModeCallbacksToComplete@InputExtensibilityCallout@@QEAAXXZ.c)
 */

__int64 __fastcall NtUserInitializeGenericHidInjection(_OWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // r12
  __int64 v5; // rcx
  PVOID CurrentProcess; // rax
  __int64 v7; // rcx
  BOOL v8; // edx
  int v9; // edi
  _OWORD *v10; // rcx
  unsigned __int16 epi16; // r14
  __int64 CurrentProcessWow64Process; // rax
  ULONG64 v13; // rdx
  unsigned __int16 v14; // si
  __int64 v15; // rax
  ULONG64 v16; // rdx
  const void *v17; // r15
  const void *v18; // r15
  char v20; // [rsp+20h] [rbp-A8h]
  char v21; // [rsp+21h] [rbp-A7h]
  _OWORD v22[8]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v23; // [rsp+E0h] [rbp+18h] BYREF
  __int64 v24; // [rsp+E8h] [rbp+20h] BYREF

  v3 = (_QWORD *)a2;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v23, a2, a3);
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
    InputExtensibilityCallout::WaitForMITPnpUserModeCallbacksToComplete(*(InputExtensibilityCallout **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  v24 = 0LL;
  memset(v22, 0, 0x40uLL);
  v20 = 0;
  v21 = 0;
  CurrentProcess = (PVOID)PsGetCurrentProcess(v5);
  v8 = 0;
  v9 = 1;
  if ( CurrentProcess )
    v8 = CurrentProcess == g_pepDwm;
  if ( !v8 && !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(1LL) )
  {
    v9 = 0;
    UserSetLastError(5LL);
    goto LABEL_42;
  }
  if ( ((PsGetCurrentProcessWow64Process(v7) == 0 ? 3 : 0) & (unsigned __int8)a1) != 0 )
    ExRaiseDatatypeMisalignment();
  v10 = a1 + 4;
  if ( (unsigned __int64)(a1 + 4) > MmUserProbeAddress || v10 < a1 )
    *(_BYTE *)MmUserProbeAddress = 0;
  v22[0] = *a1;
  v22[1] = a1[1];
  v22[2] = a1[2];
  v22[3] = a1[3];
  epi16 = _mm_extract_epi16((__m128i)v22[3], 4);
  if ( epi16 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v10);
    if ( ((CurrentProcessWow64Process == 0 ? 3 : 0) & LOBYTE(v22[3])) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = *(_OWORD **)&v22[3];
    v13 = *(_QWORD *)&v22[3] + epi16;
    if ( v13 > MmUserProbeAddress || v13 < *(_QWORD *)&v22[3] )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  v14 = WORD4(v22[2]);
  if ( !WORD4(v22[2]) )
    goto LABEL_29;
  v15 = PsGetCurrentProcessWow64Process(v10);
  if ( ((v15 == 0 ? 3 : 0) & LOBYTE(v22[2])) != 0 )
    ExRaiseDatatypeMisalignment();
  v16 = *(_QWORD *)&v22[2] + v14;
  if ( v16 > MmUserProbeAddress || v16 < *(_QWORD *)&v22[2] )
    *(_BYTE *)MmUserProbeAddress = 0;
  if ( !v14 )
  {
LABEL_29:
    if ( epi16 )
    {
      v18 = *(const void **)&v22[3];
      *(_QWORD *)&v22[3] = Win32AllocPoolWithQuota(epi16, 0x74697355u);
      if ( !*(_QWORD *)&v22[3] )
        goto LABEL_27;
      v21 = 1;
      memmove(*(void **)&v22[3], v18, epi16);
    }
    if ( *(_QWORD *)&v22[2] && (unsigned int)RIMIDE_CreateGenericHidDevice(v22, &v24) )
    {
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (_QWORD *)MmUserProbeAddress;
      *v3 = v24;
    }
    else
    {
      v9 = 0;
      UserSetLastError(87LL);
    }
    goto LABEL_38;
  }
  v17 = *(const void **)&v22[2];
  *(_QWORD *)&v22[2] = Win32AllocPoolWithQuota(v14, 0x74697355u);
  if ( *(_QWORD *)&v22[2] )
  {
    v20 = 1;
    memmove(*(void **)&v22[2], v17, v14);
    goto LABEL_29;
  }
LABEL_27:
  v9 = 0;
  UserSetLastError(8LL);
LABEL_38:
  if ( v20 )
    Win32FreePool(*(__int64 *)&v22[2]);
  if ( v21 )
    Win32FreePool(*(__int64 *)&v22[3]);
LABEL_42:
  UserSessionSwitchLeaveCrit();
  return v9;
}
