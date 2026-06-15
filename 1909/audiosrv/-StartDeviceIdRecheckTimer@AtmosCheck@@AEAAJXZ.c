/*
 * XREFs of ?StartDeviceIdRecheckTimer@AtmosCheck@@AEAAJXZ @ 0x18013FE80
 * Callers:
 *     _lambda_7d6fb6ca628c3c64296120b05a8db9c8_::operator() @ 0x18006B4A8 (_lambda_7d6fb6ca628c3c64296120b05a8db9c8_--operator().c)
 *     ?UpdateLicenseMapForAllEndpoints@AtmosCheck@@AEAAJXZ @ 0x180140368 (-UpdateLicenseMapForAllEndpoints@AtmosCheck@@AEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800BC238 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall AtmosCheck::StartDeviceIdRecheckTimer(char *pv)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  struct _TP_TIMER *ThreadpoolTimer; // rax
  const char *v4; // r9
  unsigned int LastError; // ebx
  const GUID *v6; // r8
  const GUID *v7; // r9
  BOOL v9; // [rsp+30h] [rbp-58h] BYREF
  struct _FILETIME pftDueTime; // [rsp+38h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-48h] BYREF
  BOOL *v12; // [rsp+60h] [rbp-28h]
  int v13; // [rsp+68h] [rbp-20h]
  int v14; // [rsp+6Ch] [rbp-1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v1 = (struct _RTL_CRITICAL_SECTION *)(pv + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)(pv + 56));
  ThreadpoolTimer = (struct _TP_TIMER *)*((_QWORD *)pv + 26);
  if ( ThreadpoolTimer
    || (ThreadpoolTimer = CreateThreadpoolTimer(AtmosCheck::StaticDeviceIdRetryTimerCallback, pv, 0LL),
        (*((_QWORD *)pv + 26) = ThreadpoolTimer) != 0LL) )
  {
    pftDueTime.dwHighDateTime = -1;
    pftDueTime.dwLowDateTime = -500000;
    v9 = SetThreadpoolTimerEx(ThreadpoolTimer, &pftDueTime, 0, 0);
    if ( (unsigned int)dword_1801B54F0 > 5 )
    {
      v14 = 0;
      v12 = &v9;
      v13 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1801B54F0, &unk_18017C168, v6, v7, 3u, &pData);
    }
    LastError = 0;
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x90E,
                  (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
                  v4);
  }
  if ( v1 )
    LeaveCriticalSection(v1);
  return LastError;
}
