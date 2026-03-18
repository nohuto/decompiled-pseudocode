/*
 * XREFs of NtUserInjectDeviceInput @ 0x1C0119AF0
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
 *     WPP_RECORDER_SF_qqd @ 0x1C0067E40 (WPP_RECORDER_SF_qqd.c)
 *     memmove @ 0x1C00C1540 (memmove.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C011EE78 (WPP_RECORDER_SF_Dd.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C01487F4 (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDEInjectDeviceInput @ 0x1C014A04C (RIMIDEInjectDeviceInput.c)
 *     UserGetLastError @ 0x1C01A1E3C (UserGetLastError.c)
 */

__int64 __fastcall NtUserInjectDeviceInput(char *a1, char *a2, unsigned int a3)
{
  char *v3; // r13
  int v4; // edi
  __int64 v5; // rdx
  PVOID v6; // r15
  __int64 v7; // r12
  int v8; // r9d
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  size_t v15; // r12
  void *v16; // rax
  int v17; // eax
  NTSTATUS v18; // r13d
  char LastError; // bl
  char v20; // al
  int v21; // edx
  char v23; // [rsp+30h] [rbp-88h]
  PVOID Object; // [rsp+50h] [rbp-68h] BYREF
  void *v25; // [rsp+58h] [rbp-60h]
  size_t Size; // [rsp+60h] [rbp-58h]
  LPCWSTR *v27[10]; // [rsp+68h] [rbp-50h] BYREF

  v3 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v23 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqd(
      (_DWORD)gBaseLog,
      (_DWORD)a2,
      21,
      55,
      (__int64)&WPP_82f020aa5a8e3e941fb8073f58c0e6dc_Traceguids,
      (char)a1,
      v23,
      a3);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v27, L"InjectDeviceInput", 0LL);
  v4 = 1;
  EnterCrit(0, 1);
  v6 = 0LL;
  Object = 0LL;
  v7 = 0LL;
  v25 = 0LL;
  if ( !a3 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_41:
      v9 = 87LL;
LABEL_42:
      v4 = 0;
LABEL_43:
      UserSetLastError(v9, v5);
      goto LABEL_44;
    }
    v8 = 56;
LABEL_6:
    LOBYTE(v5) = 2;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v5, 21, v8, (__int64)&WPP_82f020aa5a8e3e941fb8073f58c0e6dc_Traceguids);
    goto LABEL_41;
  }
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(0LL) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v5, 21, 57, (__int64)&WPP_82f020aa5a8e3e941fb8073f58c0e6dc_Traceguids);
    }
    v9 = 5LL;
    goto LABEL_42;
  }
  v5 = a3;
  Size = 12LL * a3;
  if ( Size > 0xFFFFFFFF )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_D((_DWORD)gBaseLog, v5, 21, 58, (__int64)&WPP_82f020aa5a8e3e941fb8073f58c0e6dc_Traceguids, a3);
    }
    goto LABEL_41;
  }
  v10 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v10 >= 0 )
  {
    v6 = Object;
    v5 = 0x2000LL;
    if ( (*((_DWORD *)Object + 68) & 0x2000) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_41;
      v8 = 60;
      goto LABEL_6;
    }
    if ( *((_BYTE *)Object + 136) != 2 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_41;
      v8 = 61;
      goto LABEL_6;
    }
    if ( (*((_DWORD *)Object + 72) & 0x80u) != 0 )
    {
      v12 = *(unsigned int *)(*((_QWORD *)Object + 71) + 312LL);
      if ( (v12 & 8) != 0 && (v12 & 0x2000) == 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_41;
        v8 = 62;
        goto LABEL_6;
      }
    }
    v15 = Size;
    if ( Size )
    {
      if ( ((PsGetCurrentProcessWow64Process(v12) == 0 ? 3 : 0) & (unsigned __int8)v3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&v3[v15] > MmUserProbeAddress || &v3[v15] < v3 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    Size = (unsigned int)v15;
    v16 = (void *)Win32AllocPoolWithQuota((unsigned int)v15, 0x74697355u);
    v7 = (__int64)v16;
    v25 = v16;
    if ( !v16 )
      ExRaiseStatus(-1073741801);
    memmove(v16, v3, Size);
    v17 = RIMIDEInjectDeviceInput(v6, v7, a3, 4LL);
    v18 = v17;
    if ( v17 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = 2;
        WPP_RECORDER_SF_D((_DWORD)gBaseLog, v13, 21, 64, (__int64)&WPP_82f020aa5a8e3e941fb8073f58c0e6dc_Traceguids, v17);
      }
      v4 = 0;
      v9 = RtlNtStatusToDosError(v18);
      goto LABEL_43;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_D((_DWORD)gBaseLog, v11, 21, 59, (__int64)&WPP_82f020aa5a8e3e941fb8073f58c0e6dc_Traceguids, v10);
    }
    v4 = 0;
    UserSetLastError(6LL, v11);
    v6 = Object;
  }
LABEL_44:
  if ( v7 )
    Win32FreePool(v7);
  if ( v6 )
    ObfDereferenceObject(v6);
  if ( !v4 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LastError = UserGetLastError();
    v20 = UserGetLastError();
    LOBYTE(v21) = 2;
    WPP_RECORDER_SF_Dd(
      (_DWORD)gBaseLog,
      v21,
      21,
      65,
      (__int64)&WPP_82f020aa5a8e3e941fb8073f58c0e6dc_Traceguids,
      v20,
      LastError);
  }
  UserSessionSwitchLeaveCrit(v14, v13);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v27);
  return v4;
}
