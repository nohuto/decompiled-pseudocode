/*
 * XREFs of ?SendVideoPortCalloutRequest@@YAJPEAU_POWER_INIT@@PEAH@Z @ 0x1C01074F0
 * Callers:
 *     VideoPortCallout @ 0x1C0108C70 (VideoPortCallout.c)
 * Callees:
 *     InitCreateSystemThreadsMsg @ 0x1C00A7200 (InitCreateSystemThreadsMsg.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

__int64 __fastcall SendVideoPortCalloutRequest(struct _POWER_INIT *a1, int *a2)
{
  int SystemThreadsMsg; // eax
  _DWORD v6[108]; // [rsp+20h] [rbp-1C8h] BYREF

  memset(v6, 0, sizeof(v6));
  SystemThreadsMsg = InitCreateSystemThreadsMsg(v6, 4u, (__int64)a1);
  *a2 = SystemThreadsMsg;
  if ( !SystemThreadsMsg )
    return 3221225495LL;
  LOWORD(v6[1]) |= 3u;
  return LpcRequestPort(CsrApiPort, v6);
}
