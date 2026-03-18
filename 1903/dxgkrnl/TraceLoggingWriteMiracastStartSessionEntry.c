/*
 * XREFs of TraceLoggingWriteMiracastStartSessionEntry @ 0x1C00533AC
 * Callers:
 *     DxgkMiracastStartMiracastSession @ 0x1C004E698 (DxgkMiracastStartMiracastSession.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00035A0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0019EC0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 */

void TraceLoggingWriteMiracastStartSessionEntry()
{
  const GUID *v0; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  const GUID *v2; // [rsp+50h] [rbp-28h]
  int v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+5Ch] [rbp-1Ch]

  if ( dword_1C00A1888 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C00A1888, 0x400000000000uLL) )
    {
      v4 = 0;
      v2 = v0;
      v3 = 16;
      TlgWrite((TraceLoggingHProvider)&dword_1C00A1888, &unk_1C0074619, v0, v0, 3u, &pData);
    }
  }
}
