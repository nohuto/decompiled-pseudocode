/*
 * XREFs of SendPositionChanged @ 0x1C004A5F0
 * Callers:
 *     _lambda_0106af77700bc4a134663e8cc2385985_::_lambda_invoker_cdecl_ @ 0x1C00A8C50 (_lambda_0106af77700bc4a134663e8cc2385985_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C004B0F0 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 */

__int64 __fastcall SendPositionChanged(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  _DWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h]
  LARGE_INTEGER PerformanceCounter; // [rsp+30h] [rbp-18h]
  __int64 v7; // [rsp+38h] [rbp-10h]

  v1 = *a1;
  v4[1] = 0;
  v7 = 0LL;
  v5 = v1;
  v4[0] = 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  return ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, __int64))InputExtensibilityCallout::CoreMsgSendMessage)(
           v2,
           1LL,
           v4,
           32LL);
}
