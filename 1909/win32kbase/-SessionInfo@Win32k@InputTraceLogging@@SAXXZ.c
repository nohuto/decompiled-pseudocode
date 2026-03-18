/*
 * XREFs of ?SessionInfo@Win32k@InputTraceLogging@@SAXXZ @ 0x1C010A60C
 * Callers:
 *     ?InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C010A590 (-InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C010F8F0 (_TlgCreateSz.c)
 */

void InputTraceLogging::Win32k::SessionInfo(void)
{
  const CHAR *v0; // rdx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-38h] BYREF
  union _LARGE_INTEGER *v3; // [rsp+60h] [rbp-28h]
  int v4; // [rsp+68h] [rbp-20h]
  int v5; // [rsp+6Ch] [rbp-1Ch]

  if ( dword_1C020CB50 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 2uLL) )
  {
    if ( gProtocolType )
    {
      if ( gProtocolType == 1 )
      {
        v0 = "ICA";
      }
      else if ( gProtocolType == 2 )
      {
        v0 = "RDP";
      }
      else if ( (unsigned __int16)gProtocolType == 0xFFFF )
      {
        v0 = "Disconnected";
      }
      else
      {
        v0 = "UNKNOWN";
      }
    }
    else
    {
      v0 = "Console";
    }
    TlgCreateSz(&pDesc, v0);
    v5 = 0;
    v3 = &gliQpcFreq;
    v4 = 8;
    TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E18E6, 0LL, 0LL, 4u, &pData);
  }
}
