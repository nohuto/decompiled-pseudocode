/*
 * XREFs of ?TraceLoggingMouseWheelRoutingModeChange@@YAXK@Z @ 0x1C0198DF8
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00675F4 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00BFD40 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingMouseWheelRoutingModeChange()
{
  const GUID *v0; // r8
  const GUID *v1; // r9
  int v2; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v4; // [rsp+58h] [rbp-20h]
  int v5; // [rsp+60h] [rbp-18h]
  int v6; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)hProvider > 5 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
    {
      v6 = 0;
      v4 = &v2;
      v2 = (int)v1;
      v5 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E21BF, v0, v1, 3u, &pData);
    }
  }
}
