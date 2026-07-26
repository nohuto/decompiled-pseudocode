/*
 * XREFs of WPP_SF_qqDd @ 0x1C0049DE4
 * Callers:
 *     ndisSetOpenEnableWakeUp @ 0x1C00E8C04 (ndisSetOpenEnableWakeUp.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqDd(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+80h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_293c7713174a39067998d2cc62157da6_Traceguids, 0x11u, va);
}
