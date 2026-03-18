/*
 * XREFs of ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C01C2098
 * Callers:
 *     ?QueuePTPMouseEvent@@YAXPEAXUtagPOINT@@K_K2@Z @ 0x1C01C2148 (-QueuePTPMouseEvent@@YAXPEAXUtagPOINT@@K_K2@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C0117C48 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
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

  if ( (unsigned int)dword_1C030D340 > 4 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C030D340, 0x40uLL) )
    {
      v5 = 0;
      v3 = &v1;
      v1 = v0;
      v4 = 8;
      TlgCreateSz(&pDesc, "PTPQueueFull");
      TlgWrite((TraceLoggingHProvider)&dword_1C030D340, &unk_1C02D4891, 0LL, 0LL, 4u, &pData);
    }
  }
}
