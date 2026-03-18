/*
 * XREFs of ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C0202918
 * Callers:
 *     ?QueuePTPMouseEvent@@YAXPEAXUtagPOINT@@K_K2@Z @ 0x1C02029C8 (-QueuePTPMouseEvent@@YAXPEAXUtagPOINT@@K_K2@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00B7EA8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C010F258 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

void InputTraceLogging::Mouse::DropInput()
{
  __int64 v0; // r9
  __int64 v1; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v3; // [rsp+60h] [rbp-38h]
  int v4; // [rsp+68h] [rbp-30h]
  int v5; // [rsp+6Ch] [rbp-2Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-28h] BYREF

  if ( dword_1C03222C0 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C03222C0, 0x40uLL) )
    {
      v5 = 0;
      v3 = &v1;
      v1 = v0;
      v4 = 8;
      TlgCreateSz(&pDesc, "PTPQueueFull");
      TlgWrite((TraceLoggingHProvider)&dword_1C03222C0, &unk_1C02E8289, 0LL, 0LL, 4u, &pData);
    }
  }
}
