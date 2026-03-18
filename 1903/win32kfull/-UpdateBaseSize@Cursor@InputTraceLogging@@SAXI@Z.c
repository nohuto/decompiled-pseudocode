/*
 * XREFs of ?UpdateBaseSize@Cursor@InputTraceLogging@@SAXI@Z @ 0x1C01CC2F8
 * Callers:
 *     ?RefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1C00E3040 (-RefreshSizes@CCursorSizes@@QEAAXXZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00B7EA8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Cursor::UpdateBaseSize(int a1)
{
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  int *v2; // [rsp+50h] [rbp-28h]
  int v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+5Ch] [rbp-1Ch]
  int v5; // [rsp+80h] [rbp+8h] BYREF

  v5 = a1;
  if ( dword_1C03222C0 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C03222C0, 8uLL) )
    {
      v4 = 0;
      v2 = &v5;
      v3 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1C03222C0, &unk_1C02E531D, 0LL, 0LL, 3u, &pData);
    }
  }
}
