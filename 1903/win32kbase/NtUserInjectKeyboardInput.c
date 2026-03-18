/*
 * XREFs of NtUserInjectKeyboardInput @ 0x1C011A6C0
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
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C014A94C (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 *     UserGetLastError @ 0x1C01A1E3C (UserGetLastError.c)
 */

__int64 __fastcall NtUserInjectKeyboardInput(char *Src, unsigned int a2)
{
  int v3; // edi
  __int64 v4; // r13
  PVOID v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r13
  __int64 v11; // r12
  int v12; // eax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // r9d
  int v17; // eax
  NTSTATUS v18; // r12d
  char LastError; // bl
  char v20; // al
  int v21; // edx
  char v23; // [rsp+30h] [rbp-78h]
  void *v24; // [rsp+50h] [rbp-58h]
  LPCWSTR *v25[10]; // [rsp+58h] [rbp-50h] BYREF
  unsigned int v26; // [rsp+B8h] [rbp+10h]
  PVOID Object; // [rsp+C0h] [rbp+18h] BYREF
  __int64 CurrentProcessWin32Process; // [rsp+C8h] [rbp+20h]

  v26 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v23 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qd(
      (_DWORD)gBaseLog,
      a2,
      21,
      30,
      (__int64)&WPP_82f020aa5a8e3e941fb8073f58c0e6dc_Traceguids,
      (char)Src,
      v23);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v25, L"InjectKeyboardInput", 0LL);
  v3 = 1;
  EnterCrit(0, 1);
  v4 = 0LL;
  v5 = 0LL;
  Object = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
  if ( v26 - 1 > 0xF )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_D((_DWORD)gBaseLog, v7, 21, 31, (__int64)&WPP_82f020aa5a8e3e941fb8073f58c0e6dc_Traceguids, v26);
    }
    goto LABEL_38;
  }
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(0LL) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v7, 21, 32, (__int64)&WPP_82f020aa5a8e3e941fb8073f58c0e6dc_Traceguids);
    }
    v9 = 5LL;
    goto LABEL_39;
  }
  v10 = 24LL * v26;
  if ( v10 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v8) == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&Src[v10] > MmUserProbeAddress || &Src[v10] < Src )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  v24 = (void *)Win32AllocPoolWithQuota(v10, 0x6B697355u);
  if ( !v24 )
    ExRaiseStatus(-1073741801);
  v4 = (__int64)v24;
  memmove(v24, Src, 24LL * v26);
  v11 = CurrentProcessWin32Process;
  if ( *(_QWORD *)(CurrentProcessWin32Process + 904) == -1LL )
  {
    v12 = RIMIDECreatePseudoMouseOrKeyboardDevice(1LL, CurrentProcessWin32Process + 904);
    if ( v12 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 2;
        WPP_RECORDER_SF_D((_DWORD)gBaseLog, v7, 21, 34, (__int64)&WPP_82f020aa5a8e3e941fb8073f58c0e6dc_Traceguids, v12);
      }
      v9 = 1359LL;
      goto LABEL_39;
    }
  }
  v13 = RawInputManagerDeviceObjectResolveHandle(*(char **)(v11 + 904), 3u, 1, &Object);
  if ( v13 >= 0 )
  {
    v5 = Object;
    if ( (*((_DWORD *)Object + 68) & 0x2000) != 0 )
    {
      if ( *((_BYTE *)Object + 136) == 1 )
      {
        v17 = RIMIDEInjectKeyboardFromKeybdInputStruct(Object, v24, v26);
        v18 = v17;
        if ( v17 >= 0 )
          goto LABEL_41;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v14) = 2;
          WPP_RECORDER_SF_D(
            (_DWORD)gBaseLog,
            v14,
            21,
            38,
            (__int64)&WPP_82f020aa5a8e3e941fb8073f58c0e6dc_Traceguids,
            v17);
        }
        v3 = 0;
        v9 = RtlNtStatusToDosError(v18);
        goto LABEL_40;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_38;
      v16 = 37;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_38:
        v9 = 87LL;
LABEL_39:
        v3 = 0;
LABEL_40:
        UserSetLastError(v9, v7);
        goto LABEL_41;
      }
      v16 = 36;
    }
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v7, 21, v16, (__int64)&WPP_82f020aa5a8e3e941fb8073f58c0e6dc_Traceguids);
    goto LABEL_38;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_D((_DWORD)gBaseLog, v7, 21, 35, (__int64)&WPP_82f020aa5a8e3e941fb8073f58c0e6dc_Traceguids, v13);
  }
  v3 = 0;
  UserSetLastError(6LL, v7);
  v5 = Object;
LABEL_41:
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( v4 )
    Win32FreePool(v4);
  if ( !v3 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LastError = UserGetLastError();
    v20 = UserGetLastError();
    LOBYTE(v21) = 2;
    WPP_RECORDER_SF_Dd(
      (_DWORD)gBaseLog,
      v21,
      21,
      39,
      (__int64)&WPP_82f020aa5a8e3e941fb8073f58c0e6dc_Traceguids,
      v20,
      LastError);
  }
  UserSessionSwitchLeaveCrit(v15, v14);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v25);
  return v3;
}
