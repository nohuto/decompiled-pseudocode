/*
 * XREFs of GetHMonitorFromPointerInfo @ 0x1C01510D0
 * Callers:
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C013978C (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C013991C (-GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0031BAC (HMValidateHandleNoSecure.c)
 *     RIMGetHMonitor @ 0x1C0112F04 (RIMGetHMonitor.c)
 */

__int64 __fastcall GetHMonitorFromPointerInfo(__int64 a1)
{
  __int64 v1; // rax

  v1 = HMValidateHandleNoSecure(*(_QWORD *)(a1 + 16), 19);
  return RIMGetHMonitor(v1);
}
