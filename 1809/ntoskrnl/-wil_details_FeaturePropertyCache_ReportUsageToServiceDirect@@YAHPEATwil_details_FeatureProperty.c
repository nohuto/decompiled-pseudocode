/*
 * XREFs of ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1400A4DAC
 * Callers:
 *     WbValidateEncryptionSegmentArguments @ 0x1405852C0 (WbValidateEncryptionSegmentArguments.c)
 *     WbDecryptWarbirdEncryptionSegment @ 0x1405854AC (WbDecryptWarbirdEncryptionSegment.c)
 *     WbReEncryptWarbirdEncryptionSegment @ 0x1405857A8 (WbReEncryptWarbirdEncryptionSegment.c)
 *     WbInitializeEncryptionSegment @ 0x140585B2C (WbInitializeEncryptionSegment.c)
 *     WbValidateHeapExecuteCallArguments @ 0x14062517C (WbValidateHeapExecuteCallArguments.c)
 *     sub_140691390 @ 0x140691390 (sub_140691390.c)
 * Callees:
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x1400A4E28 (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  _QWORD v7[2]; // [rsp+30h] [rbp-40h] BYREF
  int v8; // [rsp+40h] [rbp-30h]
  unsigned int v9; // [rsp+44h] [rbp-2Ch]
  __int128 v10; // [rsp+48h] [rbp-28h] BYREF
  __int64 v11; // [rsp+58h] [rbp-18h]

  v4 = wil_details_RecordUsageInPropertyCache(v7);
  v5 = 0;
  v10 = *(_OWORD *)v4;
  v11 = *(_QWORD *)(v4 + 16);
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(15104858LL, a3, 1LL, &dword_1404C79E0, &v10);
    if ( (dword_1404C79E0 & 0x30) == 0x20 )
    {
      v8 = 0;
      v9 = ((unsigned int)dword_1404C79E0 >> 2) & 1;
      v7[0] = 0LL;
      v7[1] = a3;
      ((void (__fastcall *)(__int64, _QWORD, __int64))g_wil_details_recordFeatureUsage)(15104858LL, a3, 1LL);
    }
  }
  LOBYTE(v5) = (_DWORD)v11 == 0;
  return v5;
}
