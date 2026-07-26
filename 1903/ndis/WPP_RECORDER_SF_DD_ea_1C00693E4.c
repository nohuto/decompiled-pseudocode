/*
 * XREFs of WPP_RECORDER_SF_DD @ 0x1C00693E4
 * Callers:
 *     ndisQuerySetMiniportEx2 @ 0x1C003400C (ndisQuerySetMiniportEx2.c)
 *     ndisValidateQosParameters @ 0x1C0071734 (ndisValidateQosParameters.c)
 *     ?ndisCpuHotAddHandler@@YAXPEAXPEAU_KE_PROCESSOR_CHANGE_NOTIFY_CONTEXT@@PEAJ@Z @ 0x1C007BCB0 (-ndisCpuHotAddHandler@@YAXPEAXPEAU_KE_PROCESSOR_CHANGE_NOTIFY_CONTEXT@@PEAJ@Z.c)
 *     NdisReleaseNicActive @ 0x1C00BE090 (NdisReleaseNicActive.c)
 *     ndisValidateMiniportDriverCharacteristicsHeader @ 0x1C010945C (ndisValidateMiniportDriverCharacteristicsHeader.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_DD(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        char a6,
        ...)
{
  unsigned __int64 v10; // rdi
  int v11; // eax
  int v13; // [rsp+20h] [rbp-48h]
  __int64 v14; // [rsp+50h] [rbp-18h]
  __int64 v15; // [rsp+58h] [rbp-10h]
  va_list va; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va, a6);
  v10 = (unsigned __int64)a3 >> 16;
  v11 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v10 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( _bittest(&v11, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)WPP_GLOBAL_Control + 80 * v10 + 41) >= a2 )
    ndisWppFastTraceMessage(a5, a4, &a6, 4LL, va, 4LL, 0LL);
  LOWORD(v13) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v13, &a6, 4LL, va, 4LL, 0LL, v14, v15);
}
