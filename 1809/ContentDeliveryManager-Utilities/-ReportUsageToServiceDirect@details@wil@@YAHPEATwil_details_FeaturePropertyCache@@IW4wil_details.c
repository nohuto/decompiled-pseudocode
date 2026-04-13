/*
 * XREFs of ?ReportUsageToServiceDirect@details@wil@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x180009D78
 * Callers:
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000A088 (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     ?ReportVariantUsageToService@?$Feature@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@wil@@CAX_NW4Variant_YourPhoneTaskbarIcon@@W4VariantReportingKind@2@_K@Z @ 0x18001434C (-ReportVariantUsageToService@-$Feature@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@wil@@C.c)
 * Callees:
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePropertyCache@@@Z @ 0x1800095C4 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePro.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ReportUsageToServiceDirect(
        volatile signed __int32 *a1,
        unsigned int a2,
        int a3,
        unsigned int a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  signed __int32 v9; // r8d
  int v10; // eax
  int v11; // esi
  unsigned int v12; // r15d
  __int64 (__fastcall *v13)(union wil_details_FeaturePropertyCache *, __int64 **); // rsi
  signed __int32 v14; // r15d
  signed __int32 v15; // r8d
  int v16; // eax
  void (*v17)(unsigned int, unsigned int, unsigned int, const char *); // rax
  void (*v18)(struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **, void (*)(void *), void *); // rax
  void (*v19)(unsigned int, unsigned int, unsigned int, const char *); // rax
  __int64 v20; // rdx
  int v22; // [rsp+30h] [rbp-40h]
  volatile signed __int32 v23; // [rsp+30h] [rbp-40h]
  volatile signed __int32 v24; // [rsp+34h] [rbp-3Ch]
  signed __int32 v25; // [rsp+34h] [rbp-3Ch]
  volatile signed __int32 v26; // [rsp+38h] [rbp-38h] BYREF
  __int64 v27; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v28; // [rsp+48h] [rbp-28h]
  __int64 v29; // [rsp+50h] [rbp-20h]
  __int64 *v30; // [rsp+58h] [rbp-18h] BYREF
  int v31; // [rsp+60h] [rbp-10h]
  __int64 v32; // [rsp+68h] [rbp-8h]

  v4 = 0;
  v5 = 0;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  if ( a3 >= 0 )
  {
    if ( a3 <= 1 )
      goto LABEL_21;
    if ( a3 <= 3 )
    {
LABEL_6:
      switch ( a3 )
      {
        case 2:
          v22 = 0x10000;
          break;
        case 3:
          v22 = 0x40000;
          break;
        case 6:
          v22 = 0x20000;
          break;
        default:
          v22 = 0x80000;
          break;
      }
      while ( 1 )
      {
        v24 = *a1;
        v9 = *a1;
        v10 = v22 & *a1;
        LODWORD(v27) = 0;
        if ( v10 == v22 )
          break;
        v25 = v22 | v24;
        if ( (v25 & 8) == 0 )
        {
          LODWORD(v27) = 1;
          v25 |= 8u;
        }
        if ( v9 == _InterlockedCompareExchange(a1, v25, v9) )
          goto LABEL_17;
      }
LABEL_18:
      v11 = 1;
LABEL_19:
      LODWORD(v29) = v11;
      goto LABEL_20;
    }
    if ( a3 <= 5 )
    {
LABEL_21:
      v31 = a3;
      v32 = 1LL;
      LOBYTE(v4) = (a3 & 0xFFFFFFFB) == 0;
      v30 = &v27;
      v13 = (__int64 (__fastcall *)(union wil_details_FeaturePropertyCache *, __int64 **))wil_details_SetPropertyCacheOpportunityCallback;
      if ( v4 )
        v13 = (__int64 (__fastcall *)(union wil_details_FeaturePropertyCache *, __int64 **))wil_details_SetPropertyCacheUsageCallback;
      while ( 1 )
      {
        v26 = *a1;
        v26 = *a1;
        v14 = v26;
        if ( !(unsigned int)v13((union wil_details_FeaturePropertyCache *)&v26, &v30) )
          goto LABEL_18;
        if ( v14 == _InterlockedCompareExchange(a1, v26, v14) )
        {
LABEL_17:
          v11 = 0;
          goto LABEL_19;
        }
      }
    }
    if ( a3 <= 7 )
      goto LABEL_6;
  }
  if ( (unsigned int)(a3 - 320) > 0x3F || a3 - 320 != (((unsigned __int32)*a1 >> 7) & 0x3F) )
  {
LABEL_33:
    v11 = v29;
    v12 = 1;
    v28 = __PAIR64__(a4, a3);
    HIDWORD(v27) = 1;
    goto LABEL_34;
  }
  if ( (*(_BYTE *)a1 & 0x40) == 0 )
  {
    v26 = 64;
    do
    {
      v23 = *a1;
      v15 = *a1;
      v16 = *a1 & 0x40;
      LODWORD(v27) = 0;
    }
    while ( v16 != 64 && v15 != _InterlockedCompareExchange(a1, v23 | 0x40, v15) );
    goto LABEL_33;
  }
  v11 = 1;
  LODWORD(v29) = 1;
LABEL_20:
  v12 = HIDWORD(v27);
LABEL_34:
  if ( g_wil_details_RecordSRUMFeatureUsage && (!a3 || (unsigned int)(a3 - 100) <= 0x31) )
    ((void (__fastcall *)(_QWORD, _QWORD, __int64))g_wil_details_RecordSRUMFeatureUsage)(a2, (unsigned int)a3, 1LL);
  if ( (_DWORD)v27 )
    wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
      (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
      a2,
      (union wil_details_FeaturePropertyCache *)a1);
  if ( v12 )
  {
    v17 = g_wil_details_internalRecordFeatureUsage;
    if ( g_wil_details_internalRecordFeatureUsage || (v17 = g_wil_details_apiRecordFeatureUsage) != 0LL )
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v17)(a2, (unsigned int)v28, v12, 0LL);
  }
  if ( !v11 && wil::details::g_enabledStateManager )
  {
    AcquireSRWLockExclusive(&stru_180185228);
    if ( !*((_QWORD *)&xmmword_180185240 + 1) )
    {
      v18 = g_wil_details_internalSubscribeFeatureStateChangeNotification;
      *((_QWORD *)&xmmword_180185240 + 1) = 0LL;
      if ( g_wil_details_internalSubscribeFeatureStateChangeNotification
        || (v18 = g_wil_details_apiSubscribeFeatureStateChangeNotification) != 0LL )
      {
        ((void (__fastcall *)(char *, void (*)(), __int64))v18)(
          (char *)&xmmword_180185240 + 8,
          lambda_694cf3250e255c878c64dabf1ae2e40c_::_lambda_invoker_cdecl_,
          -1LL);
      }
    }
    ReleaseSRWLockExclusive(&stru_180185228);
  }
  if ( (*a1 & 0x30) == 0x20 )
  {
    v19 = g_wil_details_internalRecordFeatureUsage;
    v20 = (unsigned int)a3;
    LODWORD(v20) = a3 | 0x80000000;
    if ( (*a1 & 4) == 0 )
      v20 = (unsigned int)a3;
    if ( g_wil_details_internalRecordFeatureUsage || (v19 = g_wil_details_apiRecordFeatureUsage) != 0LL )
      ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))v19)(a2, v20, 0LL, 0LL);
  }
  LOBYTE(v5) = v11 == 0;
  return v5;
}
