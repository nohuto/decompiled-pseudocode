/*
 * XREFs of WPP_RECORDER_SF_qDqL @ 0x1C00673E0
 * Callers:
 *     ndisMIndicateQosParametersChange @ 0x1C009A8E4 (ndisMIndicateQosParametersChange.c)
 *     ?ndisNsiPostGetInterfaceRodInformation@@YAXPEAU_NDIS_IF_BLOCK@@IKPEAX@Z @ 0x1C0114804 (-ndisNsiPostGetInterfaceRodInformation@@YAXPEAU_NDIS_IF_BLOCK@@IKPEAX@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qDqL(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        char a6,
        char a7,
        char a8,
        ...)
{
  unsigned __int64 v12; // rdi
  int v13; // eax
  int v15; // [rsp+20h] [rbp-68h]
  va_list va; // [rsp+D0h] [rbp+48h] BYREF

  va_start(va, a8);
  v12 = (unsigned __int64)a3 >> 16;
  v13 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v12 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( _bittest(&v13, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)WPP_GLOBAL_Control + 80 * v12 + 41) >= a2 )
    ndisWppFastTraceMessage(a5, a4, &a6, 8LL, &a7, 4LL, &a8, 8LL, va, 4LL, 0LL);
  LOWORD(v15) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v15, &a6, 8LL, &a7, 4LL, &a8, 8LL, va);
}
