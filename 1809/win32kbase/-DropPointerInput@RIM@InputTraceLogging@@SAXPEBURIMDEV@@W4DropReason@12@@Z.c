/*
 * XREFs of ?DropPointerInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1C0127BAC
 * Callers:
 *     RIMProcessAnyPointerDeviceInput @ 0x1C0128240 (RIMProcessAnyPointerDeviceInput.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C00EB690 (_TlgCreateSz.c)
 */

void InputTraceLogging::RIM::DropPointerInput()
{
  int v0; // r9d
  __int64 v1; // r10
  int v2; // r9d
  int v3; // r9d
  const CHAR *v4; // rdx
  __int64 v5; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v7; // [rsp+60h] [rbp-38h]
  int v8; // [rsp+68h] [rbp-30h]
  int v9; // [rsp+6Ch] [rbp-2Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-28h] BYREF

  if ( dword_1C01C7F10 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x100uLL) )
  {
    v9 = 0;
    v5 = v1;
    v7 = &v5;
    v8 = 8;
    if ( v0 )
    {
      v2 = v0 - 1;
      if ( v2 )
      {
        v3 = v2 - 1;
        if ( v3 )
        {
          if ( v3 == 1 )
            v4 = "InvalidInputConfig";
          else
            v4 = "UNKNOWN";
        }
        else
        {
          v4 = "TouchDisabled";
        }
      }
      else
      {
        v4 = "TouchpadDisabled";
      }
    }
    else
    {
      v4 = "NoMonitor";
    }
    TlgCreateSz(&pDesc, v4);
    TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C019FC00, 0LL, 0LL, 4u, &pData);
  }
}
