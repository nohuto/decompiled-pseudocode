/*
 * XREFs of WbReEncryptWarbirdEncryptionSegment @ 0x1405B3FB0
 * Callers:
 *     WbReEncryptEncryptionSegment @ 0x1405B36BC (WbReEncryptEncryptionSegment.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1400042E4 (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     sub_1405B4064 @ 0x1405B4064 (sub_1405B4064.c)
 *     sub_140921844 @ 0x140921844 (sub_140921844.c)
 */

__int64 __fastcall WbReEncryptWarbirdEncryptionSegment(
        __int64 a1,
        union wil_details_FeaturePropertyCache *a2,
        __int64 a3,
        unsigned int a4)
{
  union wil_details_FeaturePropertyCache *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // edi
  int v9; // esi
  int v10; // eax
  int v12; // [rsp+60h] [rbp+8h] BYREF

  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 64);
  if ( v6 )
  {
    v7 = v6 - 1;
    *(_QWORD *)(a1 + 64) = v7;
    if ( !v7 )
    {
      v8 = *(_DWORD *)(a1 + 72) - 1;
      if ( v8 >= 0 )
      {
        while ( 1 )
        {
          v9 = v8;
          if ( *(_DWORD *)(a1 + 48) == 1 )
          {
            v10 = sub_140921844(a1, 16LL * v8 + *(_QWORD *)(a1 + 56) + 248LL);
          }
          else
          {
            v12 = 3;
            if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
                                 v5,
                                 a2,
                                 wil_details_ServiceReportingKind_PotentialDeviceUsage,
                                 a4)
              && g_wil_details_pfnFeatureLoggingHook )
            {
              g_wil_details_pfnFeatureLoggingHook(
                0xE67B5Au,
                &stru_14037B9B0,
                0LL,
                0,
                (const enum wil_ReportingKind *)&v12,
                0LL,
                0,
                1uLL);
            }
            if ( *(_DWORD *)(a1 + 48) )
            {
              LODWORD(v5) = -1073741811;
              return (unsigned int)v5;
            }
            v10 = sub_1405B4064(a1, *(_QWORD *)(a1 + 56) + 4 * (3LL * v8 + 61));
          }
          v5 = (union wil_details_FeaturePropertyCache *)(unsigned int)v10;
          if ( v10 >= 0 )
          {
            --*(_DWORD *)(a1 + 72);
            --v8;
            if ( v9 > 0 )
              continue;
          }
          return (unsigned int)v5;
        }
      }
    }
  }
  return (unsigned int)v5;
}
