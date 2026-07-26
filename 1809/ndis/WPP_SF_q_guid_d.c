/*
 * XREFs of WPP_SF_q_guid_d @ 0x1C00516B4
 * Callers:
 *     ndisWdfOpenConfigurationKey @ 0x1C00EAAB0 (ndisWdfOpenConfigurationKey.c)
 *     ndisLWMCreateMiniport @ 0x1C00F2A18 (ndisLWMCreateMiniport.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_q_guid_d(unsigned __int16 a1, const struct _GUID *a2, __int64 a3, __int64 a4, ...)
{
  __int64 v4; // [rsp+70h] [rbp+18h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  v4 = a3;
  ndisWppFastTraceMessage(a2, a1, &v4, 8LL, a4, 16LL, va, 4LL, 0LL);
}
