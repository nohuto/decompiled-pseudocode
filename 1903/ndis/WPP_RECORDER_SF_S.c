/*
 * XREFs of WPP_RECORDER_SF_S @ 0x1C0032B90
 * Callers:
 *     ndisDoesSystemSupportSriov @ 0x1C00328FC (ndisDoesSystemSupportSriov.c)
 *     ?ndisCheckIfDeviceNeedsPseudoMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C01072CC (-ndisCheckIfDeviceNeedsPseudoMigration@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$defaul.c)
 *     ?ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C0108C3C (-ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_.c)
 *     ndisBindReadFilterDriverFromV3Registry @ 0x1C010A818 (ndisBindReadFilterDriverFromV3Registry.c)
 *     NdisQueryDiagnosticSetting @ 0x1C0119850 (NdisQueryDiagnosticSetting.c)
 *     ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C0127318 (-ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 *     ?ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@Z @ 0x1C0127458 (-ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_S(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        const wchar_t *a6)
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
  int v20; // [rsp+20h] [rbp-48h]
  __int64 v21; // [rsp+40h] [rbp-28h]
  __int64 v22; // [rsp+48h] [rbp-20h]
  __int64 v23; // [rsp+50h] [rbp-18h]
  __int64 v24; // [rsp+58h] [rbp-10h]

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
    ndisWppFastTraceMessage(a5, a4, v19, v18, 0LL);
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
  return WppAutoLogTrace(a1, a2, a3, a5, v20, v13, v12, 0LL, v21, v22, v23, v24);
}
