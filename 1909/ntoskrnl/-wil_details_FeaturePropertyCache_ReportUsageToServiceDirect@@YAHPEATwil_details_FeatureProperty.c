/*
 * XREFs of ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x140004374
 * Callers:
 *     WbValidateEncryptionSegmentArguments @ 0x1405B3EAC (WbValidateEncryptionSegmentArguments.c)
 *     WbDecryptWarbirdEncryptionSegment @ 0x1405B4090 (WbDecryptWarbirdEncryptionSegment.c)
 *     WbReEncryptWarbirdEncryptionSegment @ 0x1405B438C (WbReEncryptWarbirdEncryptionSegment.c)
 *     WbInitializeEncryptionSegment @ 0x1405B4710 (WbInitializeEncryptionSegment.c)
 *     WbValidateHeapExecuteCallArguments @ 0x1405CA490 (WbValidateHeapExecuteCallArguments.c)
 *     WbCreateHeapExecutedBlock @ 0x1406AFEE0 (WbCreateHeapExecutedBlock.c)
 * Callees:
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x140004460 (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 __fastcall wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
        union wil_details_FeaturePropertyCache *a1,
        union wil_details_FeaturePropertyCache *a2,
        enum wil_details_ServiceReportingKind a3,
        unsigned int a4)
{
  int v4; // esi
  unsigned int v6; // ebx
  unsigned int v8; // [rsp+20h] [rbp-58h]
  struct wil_details_RecordUsageResult v9; // [rsp+30h] [rbp-48h] BYREF
  struct wil_details_RecordUsageResult v10; // [rsp+48h] [rbp-30h] BYREF

  v4 = dword_1404F2B94 & 0x30;
  v6 = 0;
  v10 = *wil_details_RecordUsageInPropertyCache(&v9, a2, a3, a4, v8);
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(
      0xE67B5Au,
      a3,
      1u,
      (union wil_details_FeaturePropertyCache *)&dword_1404F2B94,
      &v10);
    if ( v4 == 32 )
    {
      v9.isVariantConfiguration = ((unsigned int)dword_1404F2B94 >> 2) & 1;
      *(_QWORD *)&v9.queueBackground = 0LL;
      *(_QWORD *)&v9.payloadId = 0LL;
      v9.kindImmediate = a3;
      ((void (__fastcall *)(__int64, _QWORD, __int64, _QWORD, struct wil_details_RecordUsageResult *))g_wil_details_recordFeatureUsage)(
        15104858LL,
        (unsigned int)a3,
        1LL,
        0LL,
        &v9);
    }
  }
  LOBYTE(v6) = v10.ignoredUse == 0;
  return v6;
}
