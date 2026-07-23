/*
 * XREFs of McTemplateK0z @ 0x140191DA4
 * Callers:
 *     PnpLogActionQueueEvent @ 0x14015F86C (PnpLogActionQueueEvent.c)
 *     PnpInsertEventInQueue @ 0x140590ED8 (PnpInsertEventInQueue.c)
 *     PipProcessDevNodeTree @ 0x1406E77FC (PipProcessDevNodeTree.c)
 *     PnpProcessTargetDeviceEvent @ 0x1406EC360 (PnpProcessTargetDeviceEvent.c)
 *     PiUEventSendDeviceInstallNotification @ 0x1407618C8 (PiUEventSendDeviceInstallNotification.c)
 *     PiCMQueryRemove @ 0x140839894 (PiCMQueryRemove.c)
 * Callees:
 *     McGenEventWrite @ 0x14015D7C0 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0z(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, const wchar_t *a4)
{
  __int64 v4; // rax
  int v5; // ecx
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-38h] BYREF
  const wchar_t *v8; // [rsp+40h] [rbp-28h]
  int v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+4Ch] [rbp-1Ch]

  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
    v5 = 2 * v4 + 2;
  }
  else
  {
    v5 = 10;
  }
  v9 = v5;
  v10 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v8 = a4;
  return McGenEventWrite((PMCGEN_TRACE_CONTEXT)&MS_KernelPnP_Provider_Context, a2, 0LL, 2u, &EventData);
}
