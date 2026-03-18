/*
 * XREFs of _RegisterUserApiHook @ 0x1C000F248
 * Callers:
 *     NtUserRegisterUserApiHook @ 0x1C000F1C0 (NtUserRegisterUserApiHook.c)
 * Callees:
 *     IsPrivileged @ 0x1C0012AE0 (IsPrivileged.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0026E70 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     AddHmodDependency @ 0x1C0053630 (AddHmodDependency.c)
 *     GetHmodTableIndex @ 0x1C0053674 (GetHmodTableIndex.c)
 *     RemoveHmodDependency @ 0x1C0053B88 (RemoveHmodDependency.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4960 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall RegisterUserApiHook(__int64 a1, unsigned int *a2, __int64 a3, unsigned int *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  const unsigned __int16 *v13; // rbx
  ULONG64 v14; // rdx
  _BYTE **v15; // rax
  __int64 v16; // rcx
  const unsigned __int16 *v17; // rbx
  ULONG64 v18; // rdx
  _BYTE **v19; // rax
  unsigned int HmodTableIndex; // eax
  __int64 v21; // rcx
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v26; // [rsp+20h] [rbp-38h]

  if ( gihmodUserApiHook >= 0
    || (unsigned __int8)IsRestricted(KeGetCurrentThread())
    || (v11 = *(unsigned int *)(PsGetCurrentProcessWin32Process(v9, v8) + 772), (_DWORD)v11 != luidSystem[0])
    || *(_DWORD *)(PsGetCurrentProcessWin32Process(v11, v10) + 776) != luidSystem[1]
    || !(unsigned int)IsPrivileged(psTcb) )
  {
    v21 = 5LL;
    goto LABEL_34;
  }
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (unsigned int *)MmUserProbeAddress;
  v12 = *a2;
  v26 = *a2;
  v13 = (const unsigned __int16 *)*((_QWORD *)a2 + 1);
  if ( ((unsigned __int8)v13 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v14 = (ULONG64)v13 + (unsigned __int16)v12 + 2;
  v15 = (_BYTE **)MmUserProbeAddress;
  if ( v14 < MmUserProbeAddress && (unsigned __int16)v12 <= HIWORD(v26) )
  {
    if ( (v12 & 1) != 0 )
    {
LABEL_15:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12);
      v15 = (_BYTE **)MmUserProbeAddress;
      goto LABEL_16;
    }
    if ( v14 > (unsigned __int64)v13 )
      goto LABEL_17;
  }
  if ( (v12 & 1) != 0 )
    goto LABEL_15;
LABEL_16:
  **v15 = 0;
LABEL_17:
  RtlStringCchCopyW(&gszFunctionUserApiHook, 0x104uLL, v13);
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    a4 = (unsigned int *)MmUserProbeAddress;
  v16 = *a4;
  v17 = (const unsigned __int16 *)*((_QWORD *)a4 + 1);
  if ( ((unsigned __int8)v17 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v18 = (ULONG64)v17 + (unsigned __int16)v16 + 2;
  v19 = (_BYTE **)MmUserProbeAddress;
  if ( v18 < MmUserProbeAddress && (unsigned __int16)v16 <= (unsigned __int16)HIWORD(*a4) )
  {
    if ( (v16 & 1) != 0 )
    {
LABEL_26:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16);
      v19 = (_BYTE **)MmUserProbeAddress;
      goto LABEL_27;
    }
    if ( v18 > (unsigned __int64)v17 )
      goto LABEL_28;
  }
  if ( (v16 & 1) != 0 )
    goto LABEL_26;
LABEL_27:
  **v19 = 0;
LABEL_28:
  RtlStringCchCopyW(gszFunctionUserApiHookWOW, 0x104uLL, v17);
  HmodTableIndex = GetHmodTableIndex(a1);
  gihmodUserApiHook = HmodTableIndex;
  if ( HmodTableIndex == -1 )
  {
    v21 = 126LL;
LABEL_34:
    UserSetLastError(v21);
    return 0LL;
  }
  AddHmodDependency(HmodTableIndex);
  v22 = GetHmodTableIndex(a3);
  gihmodUserApiHookWOW = v22;
  if ( v22 != -1 )
  {
    AddHmodDependency(v22);
    gppiUserApiHook = PsGetCurrentProcessWin32Process(v24, v23);
    _InterlockedOr(gpsi, 0x10u);
    return 1LL;
  }
  UserSetLastError(126LL);
  RemoveHmodDependency((unsigned int)gihmodUserApiHook);
  gihmodUserApiHook = -1;
  return 0LL;
}
