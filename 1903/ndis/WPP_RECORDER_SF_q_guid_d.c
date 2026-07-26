/*
 * XREFs of WPP_RECORDER_SF_q_guid_d @ 0x1C007F344
 * Callers:
 *     ndisWdfOpenConfigurationKey @ 0x1C0116278 (ndisWdfOpenConfigurationKey.c)
 *     ?ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0117D04 (-ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_q_guid_d(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        char a6,
        __int64 a7,
        ...)
{
  unsigned __int64 v11; // rdi
  __int64 v12; // rbx
  int v13; // eax
  int v15; // [rsp+20h] [rbp-58h]
  va_list va; // [rsp+B8h] [rbp+40h] BYREF

  va_start(va, a7);
  v11 = (unsigned __int64)a3 >> 16;
  v12 = a7;
  v13 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v11 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( _bittest(&v13, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)WPP_GLOBAL_Control + 80 * v11 + 41) >= a2 )
    ndisWppFastTraceMessage(a5, a4, &a6, 8LL, a7, 16LL, va, 4LL, 0LL);
  LOWORD(v15) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v15, &a6, 8LL, v12, 16LL, va, 4LL, 0LL);
}
