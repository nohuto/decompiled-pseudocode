/*
 * XREFs of WbReEncryptWarbirdEncryptionSegment @ 0x1405857A8
 * Callers:
 *     WbReEncryptEncryptionSegment @ 0x140584EC8 (WbReEncryptEncryptionSegment.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1400A4DAC (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     sub_14058585C @ 0x14058585C (sub_14058585C.c)
 *     sub_1408E6B44 @ 0x1408E6B44 (sub_1408E6B44.c)
 */

__int64 __fastcall WbReEncryptWarbirdEncryptionSegment(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  int v6; // edi
  int v7; // esi
  int v8; // eax
  int v10; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 64);
  if ( v4 )
  {
    v5 = v4 - 1;
    *(_QWORD *)(a1 + 64) = v5;
    if ( !v5 )
    {
      v6 = *(_DWORD *)(a1 + 72) - 1;
      if ( v6 >= 0 )
      {
        while ( 1 )
        {
          v7 = v6;
          if ( *(_DWORD *)(a1 + 48) == 1 )
          {
            v8 = sub_1408E6B44(a1, 16LL * v6 + *(_QWORD *)(a1 + 56) + 248LL);
          }
          else
          {
            v10 = 3;
            if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(v3, a2, 6u)
              && g_wil_details_pfnFeatureLoggingHook )
            {
              g_wil_details_pfnFeatureLoggingHook(
                0xE67B5Au,
                (const struct FEATURE_LOGGED_TRAITS *)&unk_14035C848,
                0LL,
                0,
                (const enum wil_ReportingKind *)&v10,
                0LL,
                0,
                1uLL);
            }
            if ( *(_DWORD *)(a1 + 48) )
            {
              LODWORD(v3) = -1073741811;
              return (unsigned int)v3;
            }
            v8 = sub_14058585C(a1, *(_QWORD *)(a1 + 56) + 4 * (3LL * v6 + 61));
          }
          v3 = (unsigned int)v8;
          if ( v8 >= 0 )
          {
            --*(_DWORD *)(a1 + 72);
            --v6;
            if ( v7 > 0 )
              continue;
          }
          return (unsigned int)v3;
        }
      }
    }
  }
  return (unsigned int)v3;
}
