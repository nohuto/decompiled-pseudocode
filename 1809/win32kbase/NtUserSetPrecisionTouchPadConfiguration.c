/*
 * XREFs of NtUserSetPrecisionTouchPadConfiguration @ 0x1C00F1DB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C002E66C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C002E6B8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     EtwTraceUIPISystemError @ 0x1C003B630 (EtwTraceUIPISystemError.c)
 *     CheckAccessForIntegrityLevelEx @ 0x1C0069D7C (CheckAccessForIntegrityLevelEx.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A8AD4 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1C00E52E4 (_SetPrecisionTouchPadConfiguration.c)
 *     ApiSetTelemPTPConfigUpdate @ 0x1C01651D0 (ApiSetTelemPTPConfigUpdate.c)
 *     UserSetLastStatus @ 0x1C0165E98 (UserSetLastStatus.c)
 */

__int64 __fastcall NtUserSetPrecisionTouchPadConfiguration(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  int v5; // ebx
  unsigned __int64 v6; // rcx
  _BYTE v8[4]; // [rsp+20h] [rbp-58h] BYREF
  int v9; // [rsp+24h] [rbp-54h]
  __int64 v10; // [rsp+30h] [rbp-48h]
  _BYTE v11[16]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v12; // [rsp+50h] [rbp-28h] BYREF
  __int64 v13; // [rsp+60h] [rbp-18h]

  v10 = 0xFFFFFFFF00002000uLL;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)v8, a2, a3);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v11);
  if ( CheckAccessForIntegrityLevelEx(*(_QWORD *)(*((_QWORD *)gptiCurrent + 53) + 880LL), v10, 0) )
  {
    if ( ((PsGetCurrentProcessWow64Process(v4) == 0 ? 3 : 0) & (unsigned __int8)a1) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = a1 + 4;
    if ( a1 + 4 > MmUserProbeAddress || v6 < a1 )
      *(_BYTE *)MmUserProbeAddress = 0;
    if ( *(_DWORD *)a1 )
    {
      v5 = 0;
      v9 = 0;
      UserSetLastStatus(-1073741822);
    }
    else
    {
      if ( ((PsGetCurrentProcessWow64Process(v6) == 0 ? 3 : 0) & (unsigned __int8)a1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a1 + 24 > MmUserProbeAddress || a1 + 24 < a1 )
        *(_BYTE *)MmUserProbeAddress = 0;
      v12 = *(_OWORD *)a1;
      v13 = *(_QWORD *)(a1 + 16);
      LODWORD(v12) = 0;
      v5 = SetPrecisionTouchPadConfiguration(&v12);
      v9 = v5;
      if ( v5 )
        ApiSetTelemPTPConfigUpdate();
    }
  }
  else
  {
    EtwTraceUIPISystemError(*((struct tagPROCESSINFO **)gptiCurrent + 53), 0LL);
    v5 = 0;
    UserSetLastError(5LL);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v11);
  UserSessionSwitchLeaveCrit();
  return v5;
}
