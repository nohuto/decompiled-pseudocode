/*
 * XREFs of WmipDisableCollectOrEvent @ 0x140690238
 * Callers:
 *     WmipDeleteMethod @ 0x140690140 (WmipDeleteMethod.c)
 * Callees:
 *     KeReleaseMutex @ 0x140006340 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     WmipSendDisableRequest @ 0x1406902A8 (WmipSendDisableRequest.c)
 */

__int64 __fastcall WmipDisableCollectOrEvent(__int64 a1, int a2)
{
  int v3; // edx
  char v4; // bl
  __int64 v5; // rdx
  unsigned int v6; // ebx

  v3 = a2 - 2244924;
  if ( !v3 )
  {
    v4 = 0;
LABEL_3:
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    LOBYTE(v5) = v4;
    v6 = WmipSendDisableRequest(a1, v5);
    KeReleaseMutex(&WmipSMMutex, 0);
    return v6;
  }
  if ( v3 == 4 )
  {
    v4 = 1;
    goto LABEL_3;
  }
  return 3221225647LL;
}
