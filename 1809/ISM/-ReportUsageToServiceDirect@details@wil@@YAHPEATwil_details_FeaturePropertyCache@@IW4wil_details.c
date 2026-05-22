/*
 * XREFs of ?ReportUsageToServiceDirect@details@wil@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x18002F468
 * Callers:
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18002F774 (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 * Callees:
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePropertyCache@@@Z @ 0x18002EE98 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePro.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ReportUsageToServiceDirect(volatile signed __int32 *a1, unsigned int a2, int a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  signed __int32 v8; // r8d
  int v9; // eax
  int v10; // esi
  unsigned int v11; // r15d
  __int64 (__fastcall *v12)(union wil_details_FeaturePropertyCache *, __int64 **); // rsi
  signed __int32 v13; // r15d
  signed __int32 v14; // r8d
  int v15; // eax
  void (*v16)(unsigned int, unsigned int, unsigned int, const char *); // rax
  void (*v17)(struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **, void (*)(void *), void *); // rax
  void (*v18)(unsigned int, unsigned int, unsigned int, const char *); // rax
  __int64 v19; // rdx
  int v21; // [rsp+30h] [rbp-40h]
  volatile signed __int32 v22; // [rsp+30h] [rbp-40h]
  volatile signed __int32 v23; // [rsp+34h] [rbp-3Ch]
  signed __int32 v24; // [rsp+34h] [rbp-3Ch]
  volatile signed __int32 v25; // [rsp+38h] [rbp-38h] BYREF
  __int64 v26; // [rsp+40h] [rbp-30h] BYREF
  __int64 v27; // [rsp+48h] [rbp-28h]
  __int64 v28; // [rsp+50h] [rbp-20h]
  __int64 *v29; // [rsp+58h] [rbp-18h] BYREF
  int v30; // [rsp+60h] [rbp-10h]
  __int64 v31; // [rsp+68h] [rbp-8h]

  v3 = 0;
  v4 = 0;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
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
          v21 = 0x10000;
          break;
        case 3:
          v21 = 0x40000;
          break;
        case 6:
          v21 = 0x20000;
          break;
        default:
          v21 = 0x80000;
          break;
      }
      while ( 1 )
      {
        v23 = *a1;
        v8 = *a1;
        v9 = v21 & *a1;
        LODWORD(v26) = 0;
        if ( v9 == v21 )
          break;
        v24 = v21 | v23;
        if ( (v24 & 8) == 0 )
        {
          LODWORD(v26) = 1;
          v24 |= 8u;
        }
        if ( v8 == _InterlockedCompareExchange(a1, v24, v8) )
          goto LABEL_17;
      }
LABEL_18:
      v10 = 1;
LABEL_19:
      LODWORD(v28) = v10;
      goto LABEL_20;
    }
    if ( a3 <= 5 )
    {
LABEL_21:
      v30 = a3;
      v31 = 1LL;
      LOBYTE(v3) = (a3 & 0xFFFFFFFB) == 0;
      v29 = &v26;
      v12 = (__int64 (__fastcall *)(union wil_details_FeaturePropertyCache *, __int64 **))wil_details_SetPropertyCacheOpportunityCallback;
      if ( v3 )
        v12 = (__int64 (__fastcall *)(union wil_details_FeaturePropertyCache *, __int64 **))wil_details_SetPropertyCacheUsageCallback;
      while ( 1 )
      {
        v25 = *a1;
        v25 = *a1;
        v13 = v25;
        if ( !(unsigned int)v12((union wil_details_FeaturePropertyCache *)&v25, &v29) )
          goto LABEL_18;
        if ( v13 == _InterlockedCompareExchange(a1, v25, v13) )
        {
LABEL_17:
          v10 = 0;
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
    v10 = v28;
    v11 = 1;
    v27 = (unsigned int)a3;
    HIDWORD(v26) = 1;
    goto LABEL_34;
  }
  if ( (*(_BYTE *)a1 & 0x40) == 0 )
  {
    v25 = 64;
    do
    {
      v22 = *a1;
      v14 = *a1;
      v15 = *a1 & 0x40;
      LODWORD(v26) = 0;
    }
    while ( v15 != 64 && v14 != _InterlockedCompareExchange(a1, v22 | 0x40, v14) );
    goto LABEL_33;
  }
  v10 = 1;
  LODWORD(v28) = 1;
LABEL_20:
  v11 = HIDWORD(v26);
LABEL_34:
  if ( g_wil_details_RecordSRUMFeatureUsage && (!a3 || (unsigned int)(a3 - 100) <= 0x31) )
    ((void (__fastcall *)(_QWORD, _QWORD, __int64))g_wil_details_RecordSRUMFeatureUsage)(a2, (unsigned int)a3, 1LL);
  if ( (_DWORD)v26 )
    wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
      (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
      a2,
      (union wil_details_FeaturePropertyCache *)a1);
  if ( v11 )
  {
    v16 = g_wil_details_internalRecordFeatureUsage;
    if ( g_wil_details_internalRecordFeatureUsage || (v16 = g_wil_details_apiRecordFeatureUsage) != 0LL )
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v16)(a2, (unsigned int)v27, v11, 0LL);
  }
  if ( !v10 && wil::details::g_enabledStateManager )
  {
    AcquireSRWLockExclusive(&stru_180193C28);
    if ( !*((_QWORD *)&xmmword_180193C40 + 1) )
    {
      v17 = g_wil_details_internalSubscribeFeatureStateChangeNotification;
      *((_QWORD *)&xmmword_180193C40 + 1) = 0LL;
      if ( g_wil_details_internalSubscribeFeatureStateChangeNotification
        || (v17 = g_wil_details_apiSubscribeFeatureStateChangeNotification) != 0LL )
      {
        ((void (__fastcall *)(char *, void (*)(), __int64))v17)(
          (char *)&xmmword_180193C40 + 8,
          lambda_694cf3250e255c878c64dabf1ae2e40c_::_lambda_invoker_cdecl_,
          -1LL);
      }
    }
    ReleaseSRWLockExclusive(&stru_180193C28);
  }
  if ( (*a1 & 0x30) == 0x20 )
  {
    v18 = g_wil_details_internalRecordFeatureUsage;
    v19 = (unsigned int)a3;
    LODWORD(v19) = a3 | 0x80000000;
    if ( (*a1 & 4) == 0 )
      v19 = (unsigned int)a3;
    if ( g_wil_details_internalRecordFeatureUsage || (v18 = g_wil_details_apiRecordFeatureUsage) != 0LL )
      ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))v18)(a2, v19, 0LL, 0LL);
  }
  LOBYTE(v4) = v10 == 0;
  return v4;
}
