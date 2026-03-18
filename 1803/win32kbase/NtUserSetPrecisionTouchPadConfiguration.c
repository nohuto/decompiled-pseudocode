/*
 * XREFs of NtUserSetPrecisionTouchPadConfiguration @ 0x1C00B9B20
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceUIPISystemError @ 0x1C0013C10 (EtwTraceUIPISystemError.c)
 *     CheckAccessForIntegrityLevelEx @ 0x1C001E8B0 (CheckAccessForIntegrityLevelEx.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C003574C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0035790 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C0073B10 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1C00AABAC (_SetPrecisionTouchPadConfiguration.c)
 *     ApiSetTelemPTPConfigUpdate @ 0x1C0141AE0 (ApiSetTelemPTPConfigUpdate.c)
 *     UserSetLastStatus @ 0x1C0142AC0 (UserSetLastStatus.c)
 */

__int64 __fastcall NtUserSetPrecisionTouchPadConfiguration(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  int v5; // ebx
  unsigned __int64 v6; // rcx
  __int64 v7; // rcx
  _BYTE v9[4]; // [rsp+20h] [rbp-58h] BYREF
  int v10; // [rsp+24h] [rbp-54h]
  __int64 v11; // [rsp+30h] [rbp-48h]
  _BYTE v12[16]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v13; // [rsp+50h] [rbp-28h] BYREF
  __int64 v14; // [rsp+60h] [rbp-18h]

  v11 = 0xFFFFFFFF00002000uLL;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)v9, a2, a3);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v12);
  if ( CheckAccessForIntegrityLevelEx(*(_QWORD *)(*((_QWORD *)gptiCurrent + 52) + 872LL), v11, 0) )
  {
    if ( ((PsGetCurrentProcessWow64Process(v4) == 0 ? 3 : 0) & (unsigned __int8)a1) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = a1 + 4;
    if ( a1 + 4 > MmUserProbeAddress || v6 < a1 )
      *(_BYTE *)MmUserProbeAddress = 0;
    if ( *(_DWORD *)a1 )
    {
      v5 = 0;
      v10 = 0;
      UserSetLastStatus(-1073741822);
    }
    else
    {
      if ( ((PsGetCurrentProcessWow64Process(v6) == 0 ? 3 : 0) & (unsigned __int8)a1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a1 + 24 > MmUserProbeAddress || a1 + 24 < a1 )
        *(_BYTE *)MmUserProbeAddress = 0;
      v13 = *(_OWORD *)a1;
      v14 = *(_QWORD *)(a1 + 16);
      LODWORD(v13) = 0;
      v5 = SetPrecisionTouchPadConfiguration(&v13);
      v10 = v5;
      if ( v5 )
        ApiSetTelemPTPConfigUpdate();
    }
  }
  else
  {
    EtwTraceUIPISystemError(*((struct tagPROCESSINFO **)gptiCurrent + 52), 0LL, 13);
    v5 = 0;
    UserSetLastError(5);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v12);
  UserSessionSwitchLeaveCrit(v7);
  return v5;
}
