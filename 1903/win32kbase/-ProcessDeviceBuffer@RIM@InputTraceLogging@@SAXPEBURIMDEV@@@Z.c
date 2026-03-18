/*
 * XREFs of ?ProcessDeviceBuffer@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C01525F8
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C01535B4 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C0112260 (_TlgCreateSz.c)
 *     ?RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C01346BC (-RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
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

  if ( dword_1C020FB50 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x100uLL) )
    {
      v2 = *(unsigned __int8 *)(v1 + 48);
      v8 = 0;
      v6 = &v4;
      v4 = v1;
      v7 = 8;
      v3 = InputTraceLogging::RimDevTypeToString(v2);
      TlgCreateSz(&pDesc, v3);
      TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E5641, 0LL, 0LL, 4u, &pData);
    }
  }
}
