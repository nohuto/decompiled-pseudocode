/*
 * XREFs of _RegisterUserApiHook @ 0x1C0130888
 * Callers:
 *     NtUserRegisterUserApiHook @ 0x1C0130800 (NtUserRegisterUserApiHook.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1C006B110 (RtlStringCchCopyW.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     RemoveHmodDependency @ 0x1C00B5CCC (RemoveHmodDependency.c)
 *     AddHmodDependency @ 0x1C00B5D58 (AddHmodDependency.c)
 *     GetHmodTableIndex @ 0x1C00B5D9C (GetHmodTableIndex.c)
 *     IsPrivileged @ 0x1C00CCBB0 (IsPrivileged.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02C1D60 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall RegisterUserApiHook(unsigned int *a1, __int64 a2, unsigned int *a3, __int64 a4)
{
  unsigned int *v4; // rdi
  unsigned int *v6; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // rcx
  const wchar_t *v12; // rbx
  ULONG64 v13; // rdx
  _BYTE **v14; // rax
  __int64 v15; // rcx
  const wchar_t *v16; // rbx
  ULONG64 v17; // rdx
  _BYTE **v18; // rax
  int HmodTableIndex; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  int v27; // [rsp+20h] [rbp-38h]

  v4 = (unsigned int *)a4;
  v6 = (unsigned int *)a2;
  if ( gihmodUserApiHook >= 0
    || (unsigned __int8)IsRestricted(KeGetCurrentThread())
    || (v9 = *(unsigned int *)(PsGetCurrentProcessWin32Process(v8) + 780), (_DWORD)v9 != luidSystem[0])
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9),
        a2 = (unsigned int)luidSystem[1],
        *(_DWORD *)(CurrentProcessWin32Process + 784) != (_DWORD)a2)
    || !(unsigned int)IsPrivileged(psTcb) )
  {
    v20 = 5LL;
    goto LABEL_34;
  }
  if ( (unsigned __int64)v6 >= MmUserProbeAddress )
    v6 = (unsigned int *)MmUserProbeAddress;
  v11 = *v6;
  v27 = *v6;
  v12 = (const wchar_t *)*((_QWORD *)v6 + 1);
  if ( ((unsigned __int8)v12 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v13 = (ULONG64)v12 + (unsigned __int16)v11 + 2;
  v14 = (_BYTE **)MmUserProbeAddress;
  if ( v13 < MmUserProbeAddress && (unsigned __int16)v11 <= HIWORD(v27) )
  {
    if ( (v11 & 1) != 0 )
    {
LABEL_15:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11);
      v14 = (_BYTE **)MmUserProbeAddress;
      goto LABEL_16;
    }
    if ( v13 > (unsigned __int64)v12 )
      goto LABEL_17;
  }
  if ( (v11 & 1) != 0 )
    goto LABEL_15;
LABEL_16:
  **v14 = 0;
LABEL_17:
  RtlStringCchCopyW(gszFunctionUserApiHook, 0x104uLL, v12);
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (unsigned int *)MmUserProbeAddress;
  v15 = *v4;
  v16 = (const wchar_t *)*((_QWORD *)v4 + 1);
  if ( ((unsigned __int8)v16 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v17 = (ULONG64)v16 + (unsigned __int16)v15 + 2;
  v18 = (_BYTE **)MmUserProbeAddress;
  if ( v17 < MmUserProbeAddress && (unsigned __int16)v15 <= (unsigned __int16)HIWORD(*v4) )
  {
    if ( (v15 & 1) != 0 )
    {
LABEL_26:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v15);
      v18 = (_BYTE **)MmUserProbeAddress;
      goto LABEL_27;
    }
    if ( v17 > (unsigned __int64)v16 )
      goto LABEL_28;
  }
  if ( (v15 & 1) != 0 )
    goto LABEL_26;
LABEL_27:
  **v18 = 0;
LABEL_28:
  RtlStringCchCopyW(&gszFunctionUserApiHookWOW, 0x104uLL, v16);
  HmodTableIndex = GetHmodTableIndex(a1);
  gihmodUserApiHook = HmodTableIndex;
  if ( HmodTableIndex == -1 )
  {
    v20 = 126LL;
LABEL_34:
    UserSetLastError(v20, a2, (__int64)a3, a4);
    return 0LL;
  }
  AddHmodDependency(HmodTableIndex);
  v21 = GetHmodTableIndex(a3);
  gihmodUserApiHookWOW = v21;
  if ( v21 != -1 )
  {
    AddHmodDependency(v21);
    gppiUserApiHook = PsGetCurrentProcessWin32Process(v25);
    *gpsi |= 0x10u;
    return 1LL;
  }
  UserSetLastError(126LL, v22, v23, v24);
  RemoveHmodDependency(gihmodUserApiHook);
  gihmodUserApiHook = -1;
  return 0LL;
}
