/*
 * XREFs of WPP_RECORDER_SF_qDqqd @ 0x1C0009A30
 * Callers:
 *     NdisFOidRequestComplete @ 0x1C0008850 (NdisFOidRequestComplete.c)
 *     NdisMOidRequestComplete @ 0x1C0068F50 (NdisMOidRequestComplete.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qDqqd(
        __int64 a1,
        int a2,
        int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        char a6,
        char a7,
        char a8,
        char a9,
        ...)
{
  int v12; // [rsp+20h] [rbp-68h]
  va_list va; // [rsp+D8h] [rbp+50h] BYREF

  va_start(va, a9);
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x400) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
    ndisWppFastTraceMessage(a5, a4, &a6, 8LL, &a7, 4LL, &a8, 8LL, &a9, 8LL, va, 4LL, 0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, 4LL, 11LL, a5, v12, &a6, 8LL, &a7, 4LL, &a8, 8LL, &a9, 8LL, va);
}
