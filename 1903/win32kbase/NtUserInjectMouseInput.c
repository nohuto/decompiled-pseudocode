/*
 * XREFs of NtUserInjectMouseInput @ 0x1C011AB10
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0013990 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     EnterCrit @ 0x1C0025E70 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00327D0 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C0032B10 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0051D60 (RawInputManagerDeviceObjectResolveHandle.c)
 *     memmove @ 0x1C00C1540 (memmove.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C011EE78 (WPP_RECORDER_SF_Dd.c)
 *     WPP_RECORDER_SF_qd @ 0x1C011EFA0 (WPP_RECORDER_SF_qd.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C01487F4 (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C0149910 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x1C014AD44 (RIMIDEInjectMouseFromMouseInputStruct.c)
 *     UserGetLastError @ 0x1C01A1E3C (UserGetLastError.c)
 */

__int64 __fastcall NtUserInjectMouseInput(char *Src, unsigned int a2)
{
  __int64 v2; // r14
  int v4; // edi
  PVOID v5; // r15
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r14
  void *v11; // rax
  __int64 v12; // r14
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // r9d
  __int64 v18; // r13
  int v19; // eax
  NTSTATUS v20; // r14d
  ULONG v21; // eax
  __int64 v22; // rdx
  char LastError; // bl
  char v24; // al
  int v25; // edx
  char v27; // [rsp+30h] [rbp-78h]
  __int64 v28; // [rsp+50h] [rbp-58h]
  LPCWSTR *v29[10]; // [rsp+58h] [rbp-50h] BYREF
  unsigned int v30; // [rsp+B8h] [rbp+10h]
  PVOID Object; // [rsp+C0h] [rbp+18h] BYREF
  __int64 CurrentProcessWin32Process; // [rsp+C8h] [rbp+20h]

  v30 = a2;
  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v27 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qd(
      (_DWORD)gBaseLog,
      a2,
      21,
      20,
      (__int64)&WPP_82f020aa5a8e3e941fb8073f58c0e6dc_Traceguids,
      (char)Src,
      v27);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v29, L"InjectMouseInput", 0LL);
  v4 = 1;
  EnterCrit(0, 1);
  v28 = 0LL;
  v5 = 0LL;
  Object = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
  if ( (unsigned int)(v2 - 1) > 0xF )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_D((_DWORD)gBaseLog, v7, 21, 21, (__int64)&WPP_82f020aa5a8e3e941fb8073f58c0e6dc_Traceguids, v2);
    }
    goto LABEL_38;
  }
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(0LL) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v7, 21, 22, (__int64)&WPP_82f020aa5a8e3e941fb8073f58c0e6dc_Traceguids);
    }
    v9 = 5LL;
    goto LABEL_39;
  }
  v10 = 32 * v2;
  if ( v10 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v8) == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&Src[v10] > MmUserProbeAddress || &Src[v10] < Src )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  v11 = (void *)Win32AllocPoolWithQuota(v10, 0x6D697355u);
  v28 = (__int64)v11;
  if ( !v11 )
    ExRaiseStatus(-1073741801);
  memmove(v11, Src, v10);
  v12 = CurrentProcessWin32Process;
  if ( *(_QWORD *)(CurrentProcessWin32Process + 896) == -1LL )
  {
    v13 = RIMIDECreatePseudoMouseOrKeyboardDevice(0LL, CurrentProcessWin32Process + 896);
    if ( v13 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 2;
        WPP_RECORDER_SF_D((_DWORD)gBaseLog, v7, 21, 24, (__int64)&WPP_82f020aa5a8e3e941fb8073f58c0e6dc_Traceguids, v13);
      }
      v9 = 1359LL;
      goto LABEL_39;
    }
  }
  v14 = RawInputManagerDeviceObjectResolveHandle(*(char **)(v12 + 896), 3u, 1, &Object);
  if ( v14 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_D((_DWORD)gBaseLog, v7, 21, 25, (__int64)&WPP_82f020aa5a8e3e941fb8073f58c0e6dc_Traceguids, v14);
    }
    v4 = 0;
    UserSetLastError(6LL, v7);
    v5 = Object;
    goto LABEL_40;
  }
  v5 = Object;
  if ( (*((_DWORD *)Object + 68) & 0x2000) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_38:
      v9 = 87LL;
LABEL_39:
      v4 = 0;
      UserSetLastError(v9, v7);
LABEL_40:
      v18 = v28;
      goto LABEL_41;
    }
    v17 = 26;
LABEL_28:
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v7, 21, v17, (__int64)&WPP_82f020aa5a8e3e941fb8073f58c0e6dc_Traceguids);
    goto LABEL_38;
  }
  if ( *((_BYTE *)Object + 136) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_38;
    v17 = 27;
    goto LABEL_28;
  }
  v18 = v28;
  v19 = RIMIDEInjectMouseFromMouseInputStruct(Object, v28, v30);
  v20 = v19;
  if ( v19 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 2;
      WPP_RECORDER_SF_D((_DWORD)gBaseLog, v15, 21, 28, (__int64)&WPP_82f020aa5a8e3e941fb8073f58c0e6dc_Traceguids, v19);
    }
    v4 = 0;
    v21 = RtlNtStatusToDosError(v20);
    UserSetLastError(v21, v22);
  }
LABEL_41:
  if ( v18 )
    Win32FreePool(v18);
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( !v4 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LastError = UserGetLastError();
    v24 = UserGetLastError();
    LOBYTE(v25) = 2;
    WPP_RECORDER_SF_Dd(
      (_DWORD)gBaseLog,
      v25,
      21,
      29,
      (__int64)&WPP_82f020aa5a8e3e941fb8073f58c0e6dc_Traceguids,
      v24,
      LastError);
  }
  UserSessionSwitchLeaveCrit(v16, v15);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v29);
  return v4;
}
