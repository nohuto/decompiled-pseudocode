/*
 * XREFs of WmipDisableCollectOrEvent @ 0x1406EDDF8
 * Callers:
 *     WmipDeleteMethod @ 0x140669660 (WmipDeleteMethod.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x14006B9F0 (KeReleaseMutex.c)
 *     WmipSendDisableRequest @ 0x1406EDE68 (WmipSendDisableRequest.c)
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
