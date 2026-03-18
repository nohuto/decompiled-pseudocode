/*
 * XREFs of ?SendToUserMode@Mouse@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@W4INPUT_DESTINATION_ROUTING_MODE@@@Z @ 0x1C0193110
 * Callers:
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCMouseEvent@1@AEBUtagPOINT@@II_K@Z @ 0x1C0191344 (-ForwardInputToISM@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCMouseEvent@1@AEBUtagPOINT@@II_K@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C0112260 (_TlgCreateSz.c)
 *     ?RoutingModeToString@InputTraceLogging@@CAPEBDW4INPUT_DESTINATION_ROUTING_MODE@@@Z @ 0x1C0171B78 (-RoutingModeToString@InputTraceLogging@@CAPEBDW4INPUT_DESTINATION_ROUTING_MODE@@@Z.c)
 */

void InputTraceLogging::Mouse::SendToUserMode()
{
  __int64 v0; // r9
  int v1; // r10d
  const char *v2; // rax
  int v3; // [rsp+30h] [rbp-39h] BYREF
  __int64 v4; // [rsp+38h] [rbp-31h] BYREF
  __int64 v5; // [rsp+40h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  __int64 *v7; // [rsp+70h] [rbp+7h]
  __int64 v8; // [rsp+78h] [rbp+Fh]
  int *v9; // [rsp+80h] [rbp+17h]
  __int64 v10; // [rsp+88h] [rbp+1Fh]
  __int64 *v11; // [rsp+90h] [rbp+27h]
  __int64 v12; // [rsp+98h] [rbp+2Fh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp+37h] BYREF

  if ( dword_1C020FB50 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x40uLL) )
    {
      v4 = *(_QWORD *)(v0 + 40);
      v7 = &v4;
      v3 = *(_DWORD *)(v0 + 188);
      v9 = &v3;
      v5 = *(_QWORD *)(v0 + 88);
      v11 = &v5;
      v8 = 8LL;
      v10 = 4LL;
      v12 = 8LL;
      v2 = InputTraceLogging::RoutingModeToString(v1);
      TlgCreateSz(&pDesc, v2);
      TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E7F56, 0LL, 0LL, 6u, &pData);
    }
  }
}
