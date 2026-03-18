/*
 * XREFs of SendPositionChanged @ 0x1C0037DB0
 * Callers:
 *     _lambda_0106af77700bc4a134663e8cc2385985_::_lambda_invoker_cdecl_ @ 0x1C0095B40 (_lambda_0106af77700bc4a134663e8cc2385985_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C0036514 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

__int64 __fastcall SendPositionChanged(_QWORD *a1)
{
  __int64 v2; // rcx
  _QWORD v4[4]; // [rsp+20h] [rbp-28h] BYREF

  memset(v4, 0, sizeof(v4));
  v4[1] = *a1;
  LODWORD(v4[0]) = 1;
  v4[2] = KeQueryPerformanceCounter(0LL).QuadPart;
  return InputExtensibilityCallout::CoreMsgSendMessage(v2, 1);
}
