/*
 * XREFs of CrmStateMonitorTimeSinceBootCallback @ 0x180031F30
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorStateSet @ 0x180032410 (CrmStateMonitorStateSet.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall CrmStateMonitorTimeSinceBootCallback(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v10; // [rsp+20h] [rbp-48h] BYREF
  _QWORD SystemInformation[6]; // [rsp+28h] [rbp-40h] BYREF

  NtQuerySystemInformation(SystemTimeOfDayInformation, SystemInformation, 0x30u, 0LL);
  CrmStateMonitorStateSet(a2, a2 + 64, 8LL);
  v5 = SystemInformation[0];
  v6 = SystemInformation[1];
  v7 = 20000000LL * *(_QWORD *)(a2 + 64);
  *(_QWORD *)(a2 + 64) *= 2LL;
  if ( v6 >= v7 + v5 )
    v8 = -1LL;
  else
    v8 = v6 - v7 - v5;
  v10 = v8;
  return TpSetTimer(a3, &v10, 0LL, 0LL);
}
