/*
 * XREFs of _anonymous_namespace_::FireFatFramesAlarm @ 0x180083E90
 * Callers:
 *     ?WasPreviousFrameGlitched@CTelemetryFrames@@SAX_N@Z @ 0x18008377C (-WasPreviousFrameGlitched@CTelemetryFrames@@SAX_N@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

char anonymous_namespace_::FireFatFramesAlarm()
{
  ULONGLONG TickCount64; // rax
  const struct _TlgProvider_t *v1; // rcx
  int v3; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  v3 = dword_180307F08;
  TickCount64 = GetTickCount64();
  if ( TickCount64 - qword_180307F60 < CCommonRegistryData::m_telemetryFatFramesAlarmTimeoutMilliseconds )
  {
    qword_180307F60 = TickCount64;
    if ( dword_180305E80 > 5u )
    {
      LOBYTE(TickCount64) = TlgKeywordOn((TraceLoggingHProvider)&dword_180305E80, 0x400000000000uLL);
      if ( (_BYTE)TickCount64 )
      {
        v7 = 0;
        v5 = &v3;
        v6 = 4;
        LOBYTE(TickCount64) = TlgWrite(v1, &unk_1802B20A6, 0LL, 0LL, 3u, &pData);
      }
    }
  }
  return TickCount64;
}
