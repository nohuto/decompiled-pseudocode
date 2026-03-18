/*
 * XREFs of ?CursorSuppressionState@Cursor@InputTraceLogging@@SAXW4CURSOR_SUPPRESSION_STATE@@@Z @ 0x1C01D6AE4
 * Callers:
 *     ?InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C01D6B70 (-InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C0117C48 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?CursorSuppressionToString@InputTraceLogging@@CAPEBDW4CURSOR_SUPPRESSION_STATE@@@Z @ 0x1C01C7CF4 (-CursorSuppressionToString@InputTraceLogging@@CAPEBDW4CURSOR_SUPPRESSION_STATE@@@Z.c)
 */

void InputTraceLogging::Cursor::CursorSuppressionState()
{
  const char *v0; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-28h] BYREF

  if ( (unsigned int)dword_1C030D340 > 4 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C030D340, 8uLL) )
    {
      v0 = InputTraceLogging::CursorSuppressionToString(gCursorSuppressionState);
      TlgCreateSz(&pDesc, v0);
      TlgWrite((TraceLoggingHProvider)&dword_1C030D340, &unk_1C02D5575, 0LL, 0LL, 3u, &pData);
    }
  }
}
