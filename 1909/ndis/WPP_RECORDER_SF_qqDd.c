/*
 * XREFs of WPP_RECORDER_SF_qqDd @ 0x1C0069EBC
 * Callers:
 *     ndisMCoOidRequestToRequest @ 0x1C006B1C0 (ndisMCoOidRequestToRequest.c)
 *     ndisMOidRequestToRequest @ 0x1C006B48C (ndisMOidRequestToRequest.c)
 *     ndisSetOpenEnableWakeUp @ 0x1C00771E0 (ndisSetOpenEnableWakeUp.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qqDd(
        __int64 a1,
        int a2,
        int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        char a6,
        char a7,
        char a8,
        ...)
{
  int v11; // [rsp+20h] [rbp-58h]
  va_list va; // [rsp+C0h] [rbp+48h] BYREF

  va_start(va, a8);
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x400) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
    ndisWppFastTraceMessage(a5, a4, &a6, 8LL, &a7, 8LL, &a8, 4LL, va, 4LL, 0LL);
  LOWORD(v11) = a4;
  return WppAutoLogTrace(a1, 4LL, 11LL, a5, v11, &a6, 8LL, &a7, 8LL, &a8, 4LL, va);
}
