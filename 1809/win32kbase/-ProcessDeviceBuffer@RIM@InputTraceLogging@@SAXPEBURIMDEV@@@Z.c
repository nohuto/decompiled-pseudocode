/*
 * XREFs of ?ProcessDeviceBuffer@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C0125F28
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0126BEC (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C00EB690 (_TlgCreateSz.c)
 *     ?RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C010A83C (-RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 */

void __fastcall InputTraceLogging::RIM::ProcessDeviceBuffer(const struct RIMDEV *a1)
{
  __int64 v1; // r9
  int v2; // ecx
  const char *v3; // rax
  __int64 v4; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v6; // [rsp+60h] [rbp-38h]
  int v7; // [rsp+68h] [rbp-30h]
  int v8; // [rsp+6Ch] [rbp-2Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-28h] BYREF

  if ( dword_1C01C7F10 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x100uLL) )
    {
      v2 = *(unsigned __int8 *)(v1 + 48);
      v8 = 0;
      v6 = &v4;
      v4 = v1;
      v7 = 8;
      v3 = InputTraceLogging::RimDevTypeToString(v2);
      TlgCreateSz(&pDesc, v3);
      TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C019F6D3, 0LL, 0LL, 4u, &pData);
    }
  }
}
