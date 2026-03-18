/*
 * XREFs of WbDecryptWarbirdEncryptionSegment @ 0x1405B4090
 * Callers:
 *     WbDecryptEncryptionSegment @ 0x1405B39C8 (WbDecryptEncryptionSegment.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x140004374 (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     WbDecryptWarbirdEncryptionSegmentBlockV0 @ 0x1405B41C0 (WbDecryptWarbirdEncryptionSegmentBlockV0.c)
 *     sub_1409210B8 @ 0x1409210B8 (sub_1409210B8.c)
 */

__int64 __fastcall WbDecryptWarbirdEncryptionSegment(
        __int64 a1,
        union wil_details_FeaturePropertyCache *a2,
        __int64 a3,
        unsigned int a4)
{
  __int64 v4; // rax
  unsigned int v5; // edi
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int v9; // r14d
  unsigned int v10; // esi
  unsigned int v11; // eax
  unsigned int v12; // ebp
  int v13; // eax
  int v15; // [rsp+70h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0;
  if ( v4 != -1 )
  {
    v7 = v4 + 1;
    *(_QWORD *)(a1 + 64) = v7;
    if ( v7 == 1 )
    {
      if ( *(_DWORD *)(a1 + 48) == 1 )
      {
        v8 = *(_QWORD *)(a1 + 56);
      }
      else
      {
        v15 = 3;
        if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
                             (union wil_details_FeaturePropertyCache *)a1,
                             a2,
                             wil_details_ServiceReportingKind_PotentialDeviceUsage,
                             a4)
          && g_wil_details_pfnFeatureLoggingHook )
        {
          g_wil_details_pfnFeatureLoggingHook(
            0xE67B5Au,
            (const struct FEATURE_LOGGED_TRAITS *)&unk_14037B9F0,
            0LL,
            0,
            (const enum wil_ReportingKind *)&v15,
            0LL,
            0,
            1uLL);
        }
        if ( *(_DWORD *)(a1 + 48) )
          return (unsigned int)-1073741811;
        v8 = *(_QWORD *)(a1 + 56);
      }
      v9 = *(_DWORD *)(v8 + 240);
      v10 = *(_DWORD *)(a1 + 72);
      if ( v10 < v9 )
      {
        v11 = *(_DWORD *)(a1 + 76);
        while ( 1 )
        {
          v12 = v10 >= v11;
          if ( *(_DWORD *)(a1 + 48) == 1 )
          {
            v13 = sub_1409210B8(a1, v10 >= v11, 16LL * v10 + *(_QWORD *)(a1 + 56) + 248LL);
          }
          else
          {
            v15 = 3;
            if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
                                 (union wil_details_FeaturePropertyCache *)a1,
                                 a2,
                                 wil_details_ServiceReportingKind_PotentialDeviceUsage,
                                 a4)
              && g_wil_details_pfnFeatureLoggingHook )
            {
              g_wil_details_pfnFeatureLoggingHook(
                0xE67B5Au,
                (const struct FEATURE_LOGGED_TRAITS *)&unk_14037B9F0,
                0LL,
                0,
                (const enum wil_ReportingKind *)&v15,
                0LL,
                0,
                1uLL);
            }
            if ( *(_DWORD *)(a1 + 48) )
              return (unsigned int)-1073741811;
            v13 = WbDecryptWarbirdEncryptionSegmentBlockV0(a1, v12, *(_QWORD *)(a1 + 56) + 4 * (3LL * v10 + 61));
          }
          v5 = v13;
          if ( v13 >= 0 )
          {
            *(_DWORD *)(a1 + 76) += v12;
            ++v10;
            ++*(_DWORD *)(a1 + 72);
            v11 = *(_DWORD *)(a1 + 76);
            if ( v10 < v9 )
              continue;
          }
          return v5;
        }
      }
    }
  }
  return v5;
}
