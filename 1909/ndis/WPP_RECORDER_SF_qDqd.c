/*
 * XREFs of WPP_RECORDER_SF_qDqd @ 0x1C00084B0
 * Callers:
 *     ndisQuerySetMiniportEx @ 0x1C0006A60 (ndisQuerySetMiniportEx.c)
 *     ndisFDoOidRequestInternal @ 0x1C00072E0 (ndisFDoOidRequestInternal.c)
 *     ndisOidRequestComplete @ 0x1C00076F0 (ndisOidRequestComplete.c)
 *     NdisFOidRequestComplete @ 0x1C0008850 (NdisFOidRequestComplete.c)
 *     ndisInvokeOidRequestComplete @ 0x1C0016930 (ndisInvokeOidRequestComplete.c)
 *     NdisMOidRequestComplete @ 0x1C0069120 (NdisMOidRequestComplete.c)
 *     ndisFInvokeSynchronousOidRequestComplete @ 0x1C008EFE0 (ndisFInvokeSynchronousOidRequestComplete.c)
 *     ndisInvokeDirectOidRequestComplete @ 0x1C00939CC (ndisInvokeDirectOidRequestComplete.c)
 *     ndisMInvokeOidRequest @ 0x1C00FB8A0 (ndisMInvokeOidRequest.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qDqd(
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
    ndisWppFastTraceMessage(a5, a4, &a6, 8LL, &a7, 4LL, &a8, 8LL, va, 4LL, 0LL);
  LOWORD(v11) = a4;
  return WppAutoLogTrace(a1, 4LL, 11LL, a5, v11, &a6, 8LL, &a7, 4LL, &a8, 8LL, va, 4LL, 0LL);
}
