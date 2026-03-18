/*
 * XREFs of NtUserInjectPointerInput @ 0x1C011AF50
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
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C014A3BC (RIMIDEInjectHIDReportFromPointerInfo.c)
 *     UserGetLastError @ 0x1C01A1E3C (UserGetLastError.c)
 */

__int64 __fastcall NtUserInjectPointerInput(char *a1, char *a2, unsigned int a3)
{
  __int64 v3; // r15
  int v5; // edi
  _QWORD *v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // r9d
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r12
  int *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r12
  int v20; // ecx
  int v21; // r9d
  __int64 v22; // rcx
  unsigned int v23; // ecx
  int v24; // eax
  NTSTATUS v25; // r15d
  char LastError; // bl
  char v27; // al
  int v28; // edx
  char v30; // [rsp+28h] [rbp-70h]
  char v31; // [rsp+30h] [rbp-68h]
  int *v32; // [rsp+50h] [rbp-48h]
  PVOID Object; // [rsp+58h] [rbp-40h] BYREF
  LPCWSTR *v34[2]; // [rsp+60h] [rbp-38h] BYREF
  char *Src; // [rsp+A8h] [rbp+10h]
  int v36; // [rsp+B8h] [rbp+20h]

  Src = a2;
  v3 = a3;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v31 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqd(
      (_DWORD)gBaseLog,
      (_DWORD)a2,
      21,
      40,
      (__int64)&WPP_82f020aa5a8e3e941fb8073f58c0e6dc_Traceguids,
      (char)a1,
      v31,
      a3);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v34, L"InjectPointerInput", 0LL);
  v5 = 1;
  EnterCrit(0, 1);
  v6 = 0LL;
  Object = 0LL;
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(0LL) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v7, 21, 41, (__int64)&WPP_82f020aa5a8e3e941fb8073f58c0e6dc_Traceguids);
    }
    v8 = 5LL;
    goto LABEL_58;
  }
  if ( !(_DWORD)v3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = 42;
LABEL_56:
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v7, 21, v9, (__int64)&WPP_82f020aa5a8e3e941fb8073f58c0e6dc_Traceguids);
      goto LABEL_57;
    }
    goto LABEL_57;
  }
  v10 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v10 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_D((_DWORD)gBaseLog, v11, 21, 43, (__int64)&WPP_82f020aa5a8e3e941fb8073f58c0e6dc_Traceguids, v10);
    }
    v5 = 0;
    UserSetLastError(6LL, v11);
    v6 = Object;
    goto LABEL_59;
  }
  v6 = Object;
  v7 = 0x2000LL;
  if ( (*((_DWORD *)Object + 68) & 0x2000) != 0 )
  {
    if ( (*((_DWORD *)Object + 72) & 0x80u) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v9 = 45;
        goto LABEL_56;
      }
      goto LABEL_57;
    }
    v14 = *((_QWORD *)Object + 71);
    v15 = *(unsigned int *)(v14 + 312);
    if ( (v15 & 8) == 0 || (v15 & 0x2000) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v9 = 46;
        goto LABEL_56;
      }
      goto LABEL_57;
    }
    v36 = *(_DWORD *)(v14 + 24);
    v16 = 152 * v3;
    if ( 152 * v3 )
    {
      if ( ((PsGetCurrentProcessWow64Process(v15) == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&Src[v16] > MmUserProbeAddress || &Src[v16] < Src )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    v17 = (int *)Win32AllocPoolWithQuota(152 * v3, 0x74697355u);
    v32 = v17;
    if ( !v17 )
      ExRaiseStatus(-1073741801);
    memmove(v17, Src, 152 * v3);
    v19 = (__int64)v32;
    v20 = *v32;
    if ( *v32 == 3 )
    {
      LOBYTE(v20) = v36;
      if ( v36 != 5 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_36:
          v5 = 0;
          v22 = 87LL;
          goto LABEL_37;
        }
        v21 = 48;
        goto LABEL_34;
      }
      if ( (_DWORD)v3 != 1 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_36;
        v21 = 49;
        v30 = v3;
        goto LABEL_35;
      }
LABEL_46:
      v24 = RIMIDEInjectHIDReportFromPointerInfo(v6, v32, (unsigned int)v3);
      v25 = v24;
      if ( v24 >= 0 )
        goto LABEL_60;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = 2;
        WPP_RECORDER_SF_D((_DWORD)gBaseLog, v12, 21, 53, (__int64)&WPP_82f020aa5a8e3e941fb8073f58c0e6dc_Traceguids, v24);
      }
      v5 = 0;
      v22 = RtlNtStatusToDosError(v25);
LABEL_37:
      UserSetLastError(v22, v18);
      goto LABEL_60;
    }
    if ( v20 == 2 )
    {
      LOBYTE(v20) = v36;
      if ( v36 == 3 )
      {
        v23 = *(_DWORD *)(v6[71] + 720LL);
        if ( (unsigned int)v3 > v23 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v18) = 2;
            WPP_RECORDER_SF_Dd(
              (_DWORD)gBaseLog,
              v18,
              21,
              51,
              (__int64)&WPP_82f020aa5a8e3e941fb8073f58c0e6dc_Traceguids,
              v3,
              v23);
          }
          goto LABEL_36;
        }
        goto LABEL_46;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_36;
      v21 = 50;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_36;
      v21 = 52;
    }
LABEL_34:
    v30 = v20;
LABEL_35:
    LOBYTE(v18) = 2;
    WPP_RECORDER_SF_D((_DWORD)gBaseLog, v18, 21, v21, (__int64)&WPP_82f020aa5a8e3e941fb8073f58c0e6dc_Traceguids, v30);
    goto LABEL_36;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = 44;
    goto LABEL_56;
  }
LABEL_57:
  v8 = 87LL;
LABEL_58:
  v5 = 0;
  UserSetLastError(v8, v7);
LABEL_59:
  v19 = 0LL;
LABEL_60:
  if ( v6 )
    ObfDereferenceObject(v6);
  if ( v19 )
    Win32FreePool(v19);
  if ( !v5 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LastError = UserGetLastError();
    v27 = UserGetLastError();
    LOBYTE(v28) = 2;
    WPP_RECORDER_SF_Dd(
      (_DWORD)gBaseLog,
      v28,
      21,
      54,
      (__int64)&WPP_82f020aa5a8e3e941fb8073f58c0e6dc_Traceguids,
      v27,
      LastError);
  }
  UserSessionSwitchLeaveCrit(v13, v12);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v34);
  return v5;
}
