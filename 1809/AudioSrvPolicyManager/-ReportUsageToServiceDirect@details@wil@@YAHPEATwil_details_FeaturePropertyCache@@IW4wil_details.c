/*
 * XREFs of ?ReportUsageToServiceDirect@details@wil@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1800220C8
 * Callers:
 *     ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x1800223D4 (-AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValu.c)
 * Callees:
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePropertyCache@@@Z @ 0x180021F2C (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePro.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ReportUsageToServiceDirect(volatile signed __int32 *a1, __int64 a2, int a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  signed __int32 v7; // r8d
  int v8; // eax
  int v9; // esi
  unsigned int v10; // r15d
  __int64 (__fastcall *v11)(union wil_details_FeaturePropertyCache *, __int64 **); // rsi
  signed __int32 v12; // r15d
  signed __int32 v13; // r8d
  int v14; // eax
  void (*v15)(unsigned int, unsigned int, unsigned int, const char *); // rax
  void (*v16)(struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **, void (*)(void *), void *); // rax
  void (*v17)(unsigned int, unsigned int, unsigned int, const char *); // rax
  __int64 v18; // rdx
  unsigned int v20; // [rsp+30h] [rbp-40h]
  volatile signed __int32 v21; // [rsp+30h] [rbp-40h]
  volatile signed __int32 v22; // [rsp+34h] [rbp-3Ch]
  signed __int32 v23; // [rsp+34h] [rbp-3Ch]
  volatile signed __int32 v24; // [rsp+38h] [rbp-38h] BYREF
  __int64 v25; // [rsp+40h] [rbp-30h] BYREF
  __int64 v26; // [rsp+48h] [rbp-28h]
  __int64 v27; // [rsp+50h] [rbp-20h]
  __int64 *v28; // [rsp+58h] [rbp-18h] BYREF
  int v29; // [rsp+60h] [rbp-10h]
  __int64 v30; // [rsp+68h] [rbp-8h]

  v3 = 0;
  v4 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  if ( a3 >= 0 )
  {
    if ( a3 <= 1 )
      goto LABEL_22;
    if ( a3 <= 3 )
      goto LABEL_6;
    if ( a3 <= 5 )
    {
LABEL_22:
      v29 = a3;
      v30 = 1LL;
      LOBYTE(v3) = (a3 & 0xFFFFFFFB) == 0;
      v28 = &v25;
      v11 = (__int64 (__fastcall *)(union wil_details_FeaturePropertyCache *, __int64 **))wil_details_SetPropertyCacheOpportunityCallback;
      if ( v3 )
        v11 = (__int64 (__fastcall *)(union wil_details_FeaturePropertyCache *, __int64 **))wil_details_SetPropertyCacheUsageCallback;
      while ( 1 )
      {
        v24 = *a1;
        v24 = *a1;
        v12 = v24;
        if ( !(unsigned int)v11((union wil_details_FeaturePropertyCache *)&v24, &v28) )
          goto LABEL_19;
        if ( v12 == _InterlockedCompareExchange(a1, v24, v12) )
        {
LABEL_18:
          v9 = 0;
          goto LABEL_20;
        }
      }
    }
    if ( a3 <= 7 )
    {
LABEL_6:
      switch ( a3 )
      {
        case 2:
          v20 = 0x10000;
          break;
        case 3:
          v20 = 0x40000;
          break;
        case 6:
          v20 = 0x20000;
          break;
        default:
          v20 = 0x80000;
          break;
      }
      a2 = v20;
      while ( 1 )
      {
        v22 = *a1;
        v7 = *a1;
        v8 = v20 & *a1;
        LODWORD(v25) = 0;
        if ( v8 == v20 )
          break;
        v23 = v20 | v22;
        if ( (v23 & 8) == 0 )
        {
          LODWORD(v25) = 1;
          v23 |= 8u;
        }
        if ( v7 == _InterlockedCompareExchange(a1, v23, v7) )
          goto LABEL_18;
      }
LABEL_19:
      v9 = 1;
LABEL_20:
      LODWORD(v27) = v9;
      goto LABEL_21;
    }
  }
  if ( (unsigned int)(a3 - 320) > 0x3F || a3 - 320 != (((unsigned __int32)*a1 >> 7) & 0x3F) )
  {
LABEL_34:
    v9 = v27;
    v10 = 1;
    v26 = (unsigned int)a3;
    HIDWORD(v25) = 1;
    goto LABEL_35;
  }
  if ( (*(_BYTE *)a1 & 0x40) == 0 )
  {
    v24 = 64;
    a2 = 64LL;
    do
    {
      v21 = *a1;
      v13 = *a1;
      v14 = *a1 & 0x40;
      LODWORD(v25) = 0;
    }
    while ( v14 != 64 && v13 != _InterlockedCompareExchange(a1, v21 | 0x40, v13) );
    goto LABEL_34;
  }
  v9 = 1;
  LODWORD(v27) = 1;
LABEL_21:
  v10 = HIDWORD(v25);
LABEL_35:
  if ( g_wil_details_RecordSRUMFeatureUsage && (!a3 || (unsigned int)(a3 - 100) <= 0x31) )
    ((void (__fastcall *)(__int64, _QWORD, __int64))g_wil_details_RecordSRUMFeatureUsage)(
      10164710LL,
      (unsigned int)a3,
      1LL);
  if ( (_DWORD)v25 )
    wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
      (char *)&wil::details::g_enabledStateManager,
      a2,
      (union wil_details_FeaturePropertyCache *)a1);
  if ( v10 )
  {
    v15 = g_wil_details_internalRecordFeatureUsage;
    if ( g_wil_details_internalRecordFeatureUsage || (v15 = g_wil_details_apiRecordFeatureUsage) != 0LL )
      ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))v15)(10164710LL, (unsigned int)v26, v10, 0LL);
  }
  if ( !v9 && wil::details::g_enabledStateManager )
  {
    AcquireSRWLockExclusive(&stru_18004FEC8);
    if ( !*((_QWORD *)&xmmword_18004FEE0 + 1) )
    {
      v16 = g_wil_details_internalSubscribeFeatureStateChangeNotification;
      *((_QWORD *)&xmmword_18004FEE0 + 1) = 0LL;
      if ( g_wil_details_internalSubscribeFeatureStateChangeNotification
        || (v16 = g_wil_details_apiSubscribeFeatureStateChangeNotification) != 0LL )
      {
        ((void (__fastcall *)(char *, void (*)(), __int64))v16)(
          (char *)&xmmword_18004FEE0 + 8,
          lambda_694cf3250e255c878c64dabf1ae2e40c_::_lambda_invoker_cdecl_,
          -1LL);
      }
    }
    ReleaseSRWLockExclusive(&stru_18004FEC8);
  }
  if ( (*a1 & 0x30) == 0x20 )
  {
    v17 = g_wil_details_internalRecordFeatureUsage;
    v18 = (unsigned int)a3;
    LODWORD(v18) = a3 | 0x80000000;
    if ( (*a1 & 4) == 0 )
      v18 = (unsigned int)a3;
    if ( g_wil_details_internalRecordFeatureUsage || (v17 = g_wil_details_apiRecordFeatureUsage) != 0LL )
      ((void (__fastcall *)(__int64, __int64, _QWORD, _QWORD))v17)(10164710LL, v18, 0LL, 0LL);
  }
  LOBYTE(v4) = v9 == 0;
  return v4;
}
