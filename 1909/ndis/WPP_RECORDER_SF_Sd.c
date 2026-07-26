/*
 * XREFs of WPP_RECORDER_SF_Sd @ 0x1C002EFCC
 * Callers:
 *     ?ndisQueryDeviceFlags@@YAXPEB_WPEA_K@Z @ 0x1C002D104 (-ndisQueryDeviceFlags@@YAXPEB_WPEA_K@Z.c)
 *     _lambda_74aaa7089007ee3601df5827111bc2b5_::operator() @ 0x1C00F912C (_lambda_74aaa7089007ee3601df5827111bc2b5_--operator().c)
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x1C0101424 (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedSta.c)
 *     ?ndisReadRegistryKnobs@@YAJPEAU_DRIVER_OBJECT@@PEBUNDIS_REGISTRY_KNOB@@_K@Z @ 0x1C0107B90 (-ndisReadRegistryKnobs@@YAJPEAU_DRIVER_OBJECT@@PEBUNDIS_REGISTRY_KNOB@@_K@Z.c)
 *     ndisBindReadFilterDriverFromV3Registry @ 0x1C010A818 (ndisBindReadFilterDriverFromV3Registry.c)
 *     ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C0127318 (-ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_Sd(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        const wchar_t *a6,
        ...)
{
  __int64 v6; // rdi
  unsigned __int64 v10; // rsi
  __int64 v12; // rbp
  const wchar_t *v13; // rbx
  int v14; // eax
  bool v15; // zf
  __int64 v17; // rax
  __int64 v18; // r9
  const wchar_t *v19; // r8
  int v20; // [rsp+20h] [rbp-58h]
  __int64 v21; // [rsp+50h] [rbp-28h]
  __int64 v22; // [rsp+58h] [rbp-20h]
  va_list va; // [rsp+B0h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = -1LL;
  v10 = (unsigned __int64)a3 >> 16;
  v12 = 10LL;
  v13 = a6;
  v14 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v10 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( _bittest(&v14, (a3 - 1) & 0x1F) && *((_BYTE *)WPP_GLOBAL_Control + 80 * v10 + 41) >= a2 )
  {
    if ( a6 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( a6[v17] );
      v18 = 2 * v17 + 2;
    }
    else
    {
      v18 = 10LL;
    }
    v19 = a6;
    if ( !a6 )
      v19 = L"NULL";
    ndisWppFastTraceMessage(a5, a4, v19, v18, va, 4LL, 0LL);
  }
  v15 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v6;
    while ( a6[v6] );
    v12 = 2 * v6 + 2;
    v15 = a6 == 0LL;
  }
  if ( v15 )
    v13 = L"NULL";
  LOWORD(v20) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v20, v13, v12, va, 4LL, 0LL, v21, v22);
}
