/*
 * XREFs of NtUserSetPrecisionTouchPadConfiguration @ 0x1C011C810
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C0025E70 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 *     CheckAccessEx @ 0x1C002C1F4 (CheckAccessEx.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C002EACC (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C002EB20 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     EtwTraceUIPISystemError @ 0x1C00722D0 (EtwTraceUIPISystemError.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1C0109F70 (_SetPrecisionTouchPadConfiguration.c)
 *     ApiSetTelemPTPConfigUpdate @ 0x1C01A1098 (ApiSetTelemPTPConfigUpdate.c)
 *     UserSetLastStatus @ 0x1C01A1E84 (UserSetLastStatus.c)
 */

__int64 __fastcall NtUserSetPrecisionTouchPadConfiguration(unsigned __int64 a1)
{
  __int64 v2; // rcx
  int v3; // ebx
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v10[4]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v11[16]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v12; // [rsp+50h] [rbp-28h] BYREF
  __int64 v13; // [rsp+60h] [rbp-18h]

  v12 = 0uLL;
  v13 = 0LL;
  v10[0] = 0x2000;
  v10[1] = -1;
  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v11);
  if ( CheckAccessEx((int *)(*((_QWORD *)gptiCurrent + 52) + 872LL), v10, 0) )
  {
    if ( ((PsGetCurrentProcessWow64Process(v2) == 0 ? 3 : 0) & (unsigned __int8)a1) != 0 )
      ExRaiseDatatypeMisalignment();
    v5 = a1 + 4;
    if ( a1 + 4 > MmUserProbeAddress || v5 < a1 )
      *(_BYTE *)MmUserProbeAddress = 0;
    if ( *(_DWORD *)a1 )
    {
      v3 = 0;
      UserSetLastStatus(-1073741822);
    }
    else
    {
      if ( ((PsGetCurrentProcessWow64Process(v5) == 0 ? 3 : 0) & (unsigned __int8)a1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a1 + 24 > MmUserProbeAddress || a1 + 24 < a1 )
        *(_BYTE *)MmUserProbeAddress = 0;
      v12 = *(_OWORD *)a1;
      v13 = *(_QWORD *)(a1 + 16);
      LODWORD(v12) = 0;
      v3 = SetPrecisionTouchPadConfiguration(&v12);
      if ( v3 )
        ApiSetTelemPTPConfigUpdate(v6);
    }
  }
  else
  {
    EtwTraceUIPISystemError(*((struct tagPROCESSINFO **)gptiCurrent + 52), 0LL);
    v3 = 0;
    UserSetLastError(5LL, v4);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v11);
  UserSessionSwitchLeaveCrit(v8, v7);
  return v3;
}
