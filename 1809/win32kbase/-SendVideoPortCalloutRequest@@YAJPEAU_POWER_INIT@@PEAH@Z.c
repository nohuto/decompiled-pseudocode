/*
 * XREFs of ?SendVideoPortCalloutRequest@@YAJPEAU_POWER_INIT@@PEAH@Z @ 0x1C00E19C4
 * Callers:
 *     VideoPortCallout @ 0x1C00E2830 (VideoPortCallout.c)
 * Callees:
 *     InitCreateSystemThreadsMsg @ 0x1C0093B00 (InitCreateSystemThreadsMsg.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

__int64 __fastcall SendVideoPortCalloutRequest(struct _POWER_INIT *a1, int *a2)
{
  int SystemThreadsMsg; // eax
  _BYTE v5[4]; // [rsp+20h] [rbp-1C8h] BYREF
  __int16 v6; // [rsp+24h] [rbp-1C4h]

  SystemThreadsMsg = InitCreateSystemThreadsMsg((__int64)v5, 4u, (__int64)a1);
  *a2 = SystemThreadsMsg;
  if ( !SystemThreadsMsg )
    return 3221225495LL;
  v6 |= 3u;
  return LpcRequestPort(CsrApiPort, v5);
}
