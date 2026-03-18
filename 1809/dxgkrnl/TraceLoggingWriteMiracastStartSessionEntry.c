/*
 * XREFs of TraceLoggingWriteMiracastStartSessionEntry @ 0x1C004C15C
 * Callers:
 *     DxgkMiracastStartMiracastSession @ 0x1C0047BF4 (DxgkMiracastStartMiracastSession.c)
 * Callees:
 *     _TlgWrite @ 0x1C0001F48 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0005A7C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 */

void TraceLoggingWriteMiracastStartSessionEntry()
{
  const GUID *v0; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  const GUID *v2; // [rsp+50h] [rbp-28h]
  int v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+5Ch] [rbp-1Ch]

  if ( dword_1C008D838 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C008D838, 0x400000000000uLL) )
    {
      v4 = 0;
      v2 = v0;
      v3 = 16;
      TlgWrite((TraceLoggingHProvider)&dword_1C008D838, &unk_1C006BB90, v0, v0, 3u, &pData);
    }
  }
}
