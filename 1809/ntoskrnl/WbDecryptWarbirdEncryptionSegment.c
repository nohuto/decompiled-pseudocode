/*
 * XREFs of WbDecryptWarbirdEncryptionSegment @ 0x1405854AC
 * Callers:
 *     WbDecryptEncryptionSegment @ 0x140584E04 (WbDecryptEncryptionSegment.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1400A4DAC (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     WbDecryptWarbirdEncryptionSegmentBlockV0 @ 0x1405855DC (WbDecryptWarbirdEncryptionSegmentBlockV0.c)
 *     sub_1408E6958 @ 0x1408E6958 (sub_1408E6958.c)
 */

__int64 __fastcall WbDecryptWarbirdEncryptionSegment(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // edi
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int v7; // r14d
  unsigned int v8; // esi
  unsigned int v9; // eax
  unsigned int v10; // ebp
  int v11; // eax
  int v13; // [rsp+70h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0;
  if ( v2 != -1 )
  {
    v5 = v2 + 1;
    *(_QWORD *)(a1 + 64) = v5;
    if ( v5 == 1 )
    {
      if ( *(_DWORD *)(a1 + 48) == 1 )
      {
        v6 = *(_QWORD *)(a1 + 56);
      }
      else
      {
        v13 = 3;
        if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(a1, a2, 6u)
          && g_wil_details_pfnFeatureLoggingHook )
        {
          g_wil_details_pfnFeatureLoggingHook(
            0xE67B5Au,
            (const struct FEATURE_LOGGED_TRAITS *)&unk_14035C848,
            0LL,
            0,
            (const enum wil_ReportingKind *)&v13,
            0LL,
            0,
            1uLL);
        }
        if ( *(_DWORD *)(a1 + 48) )
          return (unsigned int)-1073741811;
        v6 = *(_QWORD *)(a1 + 56);
      }
      v7 = *(_DWORD *)(v6 + 240);
      v8 = *(_DWORD *)(a1 + 72);
      if ( v8 < v7 )
      {
        v9 = *(_DWORD *)(a1 + 76);
        while ( 1 )
        {
          v10 = v8 >= v9;
          if ( *(_DWORD *)(a1 + 48) == 1 )
          {
            v11 = sub_1408E6958(a1, v8 >= v9, 16LL * v8 + *(_QWORD *)(a1 + 56) + 248LL);
          }
          else
          {
            v13 = 3;
            if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(a1, a2, 6u)
              && g_wil_details_pfnFeatureLoggingHook )
            {
              g_wil_details_pfnFeatureLoggingHook(
                0xE67B5Au,
                (const struct FEATURE_LOGGED_TRAITS *)&unk_14035C848,
                0LL,
                0,
                (const enum wil_ReportingKind *)&v13,
                0LL,
                0,
                1uLL);
            }
            if ( *(_DWORD *)(a1 + 48) )
              return (unsigned int)-1073741811;
            v11 = WbDecryptWarbirdEncryptionSegmentBlockV0(a1, v10, *(_QWORD *)(a1 + 56) + 4 * (3LL * v8 + 61));
          }
          v3 = v11;
          if ( v11 >= 0 )
          {
            *(_DWORD *)(a1 + 76) += v10;
            ++v8;
            ++*(_DWORD *)(a1 + 72);
            v9 = *(_DWORD *)(a1 + 76);
            if ( v8 < v7 )
              continue;
          }
          return v3;
        }
      }
    }
  }
  return v3;
}
