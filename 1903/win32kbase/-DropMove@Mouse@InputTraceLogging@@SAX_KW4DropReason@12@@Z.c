/*
 * XREFs of ?DropMove@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C009E56C
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C00312BC (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@UtagPOINT@@@Z @ 0x1C00949BC (-CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@UtagPOINT@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C0112260 (_TlgCreateSz.c)
 *     ?DropReasonToString@InputTraceLogging@@CAPEBDW4DropReason@Mouse@1@@Z @ 0x1C0190998 (-DropReasonToString@InputTraceLogging@@CAPEBDW4DropReason@Mouse@1@@Z.c)
 */

void InputTraceLogging::Mouse::DropMove()
{
  __int64 v0; // r9
  unsigned int v1; // r10d
  const CHAR *v2; // rax
  __int64 v3; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v5; // [rsp+60h] [rbp-38h]
  int v6; // [rsp+68h] [rbp-30h]
  int v7; // [rsp+6Ch] [rbp-2Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-28h] BYREF

  if ( dword_1C020FB50 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x40uLL) )
    {
      v7 = 0;
      v5 = &v3;
      v3 = v0;
      v6 = 8;
      v2 = (const CHAR *)InputTraceLogging::DropReasonToString(v1);
      TlgCreateSz(&pDesc, v2);
      TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E84C0, 0LL, 0LL, 4u, &pData);
    }
  }
}
