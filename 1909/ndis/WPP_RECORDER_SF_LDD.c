/*
 * XREFs of WPP_RECORDER_SF_LDD @ 0x1C007DD1C
 * Callers:
 *     NdisTryAcquireNicActive @ 0x1C0011BA0 (NdisTryAcquireNicActive.c)
 *     ?ndisAoAcTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C007BCB4 (-ndisAoAcTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_LDD(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        char a6,
        char a7,
        ...)
{
  unsigned __int64 v11; // rdi
  int v12; // eax
  int v14; // [rsp+20h] [rbp-58h]
  va_list va; // [rsp+B8h] [rbp+40h] BYREF

  va_start(va, a7);
  v11 = (unsigned __int64)a3 >> 16;
  v12 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v11 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( _bittest(&v12, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)WPP_GLOBAL_Control + 80 * v11 + 41) >= a2 )
    ndisWppFastTraceMessage(a5, a4, &a6, 4LL, &a7, 4LL, va, 4LL, 0LL);
  LOWORD(v14) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v14, &a6, 4LL, &a7, 4LL, va, 4LL, 0LL);
}
