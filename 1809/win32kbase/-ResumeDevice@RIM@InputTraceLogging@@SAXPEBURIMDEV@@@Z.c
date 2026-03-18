/*
 * XREFs of ?ResumeDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C010A7A8
 * Callers:
 *     RIMIDEAdoptOrphanedRimDevs @ 0x1C008D4EC (RIMIDEAdoptOrphanedRimDevs.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0126BEC (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::RIM::ResumeDevice(const struct RIMDEV *a1)
{
  __int64 v1; // r9
  __int64 v2; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v4; // [rsp+58h] [rbp-20h]
  int v5; // [rsp+60h] [rbp-18h]
  int v6; // [rsp+64h] [rbp-14h]

  if ( dword_1C01C7F10 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x100uLL) )
    {
      v6 = 0;
      v4 = &v2;
      v2 = v1;
      v5 = 8;
      TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C019E1A2, 0LL, 0LL, 3u, &pData);
    }
  }
}
