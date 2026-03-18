/*
 * XREFs of NtUserInitializeGenericHidInjection @ 0x1C01193B0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0013990 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     EnterCrit @ 0x1C0025E70 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     memmove @ 0x1C00C1540 (memmove.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C01487F4 (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDE_CreateGenericHidDevice @ 0x1C014C7A8 (RIMIDE_CreateGenericHidDevice.c)
 */

__int64 __fastcall NtUserInitializeGenericHidInjection(_OWORD *a1, _QWORD *a2)
{
  int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  PVOID CurrentProcess; // rax
  __int64 v8; // rcx
  BOOL v9; // edx
  __int64 v10; // rdx
  ULONG64 v11; // rdx
  ULONG64 v12; // rcx
  _OWORD *v13; // rcx
  unsigned __int16 epi16; // r14
  __int64 CurrentProcessWow64Process; // rax
  unsigned __int16 v16; // si
  __int64 v17; // rax
  const void *v18; // r15
  __int64 v19; // rdx
  const void *v20; // r15
  char v22; // [rsp+20h] [rbp-98h]
  char v23; // [rsp+21h] [rbp-97h]
  _OWORD v24[6]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v25; // [rsp+D0h] [rbp+18h] BYREF

  v4 = 1;
  EnterCrit(0, 1);
  v25 = 0LL;
  memset(v24, 0, 0x40uLL);
  v22 = 0;
  v23 = 0;
  CurrentProcess = (PVOID)PsGetCurrentProcess(v6, v5);
  v9 = 0;
  if ( CurrentProcess )
    v9 = CurrentProcess == g_pepDwm;
  if ( !v9 && !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(1LL) )
  {
    v4 = 0;
    UserSetLastError(5LL, v10);
    goto LABEL_40;
  }
  if ( ((PsGetCurrentProcessWow64Process(v8) == 0 ? 3 : 0) & (unsigned __int8)a1) != 0 )
    ExRaiseDatatypeMisalignment();
  v13 = a1 + 4;
  v11 = MmUserProbeAddress;
  if ( (unsigned __int64)(a1 + 4) > MmUserProbeAddress || v13 < a1 )
    *(_BYTE *)MmUserProbeAddress = 0;
  v24[0] = *a1;
  v24[1] = a1[1];
  v24[2] = a1[2];
  v24[3] = a1[3];
  epi16 = _mm_extract_epi16((__m128i)v24[3], 4);
  if ( epi16 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v13);
    if ( ((CurrentProcessWow64Process == 0 ? 3 : 0) & LOBYTE(v24[3])) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = *(_OWORD **)&v24[3];
    v11 = *(_QWORD *)&v24[3] + epi16;
    if ( v11 > MmUserProbeAddress || v11 < *(_QWORD *)&v24[3] )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  v16 = WORD4(v24[2]);
  if ( !WORD4(v24[2]) )
    goto LABEL_27;
  v17 = PsGetCurrentProcessWow64Process(v13);
  if ( ((v17 == 0 ? 3 : 0) & LOBYTE(v24[2])) != 0 )
    ExRaiseDatatypeMisalignment();
  v11 = *(_QWORD *)&v24[2] + v16;
  if ( v11 > MmUserProbeAddress || v11 < *(_QWORD *)&v24[2] )
    *(_BYTE *)MmUserProbeAddress = 0;
  if ( !v16 )
  {
LABEL_27:
    if ( epi16 )
    {
      v20 = *(const void **)&v24[3];
      *(_QWORD *)&v24[3] = Win32AllocPoolWithQuota(epi16, 0x74697355u);
      if ( !*(_QWORD *)&v24[3] )
        goto LABEL_25;
      v23 = 1;
      memmove(*(void **)&v24[3], v20, epi16);
    }
    if ( *(_QWORD *)&v24[2] && (unsigned int)RIMIDE_CreateGenericHidDevice(v24, &v25) )
    {
      v12 = MmUserProbeAddress;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_QWORD *)MmUserProbeAddress;
      *a2 = v25;
    }
    else
    {
      v4 = 0;
      UserSetLastError(87LL, v11);
    }
    goto LABEL_36;
  }
  v18 = *(const void **)&v24[2];
  *(_QWORD *)&v24[2] = Win32AllocPoolWithQuota(v16, 0x74697355u);
  if ( *(_QWORD *)&v24[2] )
  {
    v22 = 1;
    memmove(*(void **)&v24[2], v18, v16);
    goto LABEL_27;
  }
LABEL_25:
  v4 = 0;
  UserSetLastError(8LL, v19);
LABEL_36:
  if ( v22 )
    Win32FreePool(*(__int64 *)&v24[2]);
  if ( v23 )
    Win32FreePool(*(__int64 *)&v24[3]);
LABEL_40:
  UserSessionSwitchLeaveCrit(v12, v11);
  return v4;
}
