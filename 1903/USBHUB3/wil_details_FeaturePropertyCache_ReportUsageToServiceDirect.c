/*
 * XREFs of wil_details_FeaturePropertyCache_ReportUsageToServiceDirect @ 0x1C0013238
 * Callers:
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C00134EC (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0041200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  int v4; // r15d
  unsigned int v5; // ebx
  int v7; // edx
  int v8; // eax
  unsigned int (__fastcall *v9)(signed __int32 *, __int128 **); // rsi
  signed __int32 v10; // r14d
  int v11; // edx
  int v13; // [rsp+30h] [rbp-61h]
  signed __int32 v14; // [rsp+30h] [rbp-61h]
  signed __int32 v15; // [rsp+34h] [rbp-5Dh] BYREF
  __int128 v16; // [rsp+38h] [rbp-59h] BYREF
  __int64 v17; // [rsp+48h] [rbp-49h]
  __int128 *v18; // [rsp+50h] [rbp-41h]
  int v19; // [rsp+58h] [rbp-39h]
  int v20; // [rsp+5Ch] [rbp-35h]
  __int128 *v21; // [rsp+60h] [rbp-31h]
  int v22; // [rsp+68h] [rbp-29h]
  int v23; // [rsp+6Ch] [rbp-25h]
  __int128 *v24; // [rsp+70h] [rbp-21h] BYREF
  int v25; // [rsp+78h] [rbp-19h]
  int v26; // [rsp+7Ch] [rbp-15h]
  __int64 v27; // [rsp+80h] [rbp-11h]
  __int64 v28; // [rsp+88h] [rbp-9h] BYREF
  int v29; // [rsp+90h] [rbp-1h]
  __int64 v30; // [rsp+94h] [rbp+3h]
  unsigned int v31; // [rsp+9Ch] [rbp+Bh]
  __int128 v32; // [rsp+A0h] [rbp+Fh] BYREF
  __int64 v33; // [rsp+B0h] [rbp+1Fh]

  v3 = 0;
  v16 = 0uLL;
  v4 = Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache & 0x30;
  v5 = 0;
  v17 = 0LL;
  if ( a3 < 0 )
    goto LABEL_27;
  if ( a3 <= 1 )
    goto LABEL_21;
  if ( a3 <= 3 )
    goto LABEL_6;
  if ( a3 <= 5 )
  {
LABEL_21:
    v26 = 0;
    v25 = a3;
    LOBYTE(v3) = (a3 & 0xFFFFFFFB) == 0;
    v24 = &v16;
    v27 = 1LL;
    v9 = (unsigned int (__fastcall *)(signed __int32 *, __int128 **))wil_details_SetPropertyCacheOpportunityCallback;
    v15 = 0;
    if ( v3 )
      v9 = (unsigned int (__fastcall *)(signed __int32 *, __int128 **))wil_details_SetPropertyCacheUsageCallback;
    while ( 1 )
    {
      v15 = Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache;
      v10 = Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache;
      if ( !v9(&v15, &v24) )
        goto LABEL_19;
      if ( v10 == _InterlockedCompareExchange(
                    &Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache,
                    v15,
                    v10) )
      {
LABEL_18:
        v8 = 0;
        goto LABEL_20;
      }
    }
  }
  if ( a3 > 7 )
  {
LABEL_27:
    if ( (unsigned int)(a3 - 320) <= 0x3F
      && a3 - 320 == (((unsigned int)Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache >> 7) & 0x3F) )
    {
      if ( (Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache & 0x40) != 0 )
      {
        LODWORD(v17) = 1;
        goto LABEL_34;
      }
      v15 = 64;
      v21 = &v16;
      v22 = 64;
      v23 = 1;
      do
      {
        v11 = Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache;
        LODWORD(v16) = 0;
      }
      while ( (v22 & Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache) != v22
           && v11 != _InterlockedCompareExchange(
                       &Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache,
                       v22 | Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache,
                       Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache) );
    }
    *((_QWORD *)&v16 + 1) = (unsigned int)a3;
    DWORD1(v16) = 1;
    goto LABEL_34;
  }
LABEL_6:
  switch ( a3 )
  {
    case 2:
      v13 = 0x10000;
      break;
    case 3:
      v13 = 0x40000;
      break;
    case 6:
      v13 = 0x20000;
      break;
    default:
      v13 = 0x80000;
      break;
  }
  v18 = &v16;
  v19 = v13;
  v20 = 0;
  while ( 1 )
  {
    v7 = Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache;
    LODWORD(v16) = 0;
    if ( (v19 & Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache) == v19 )
      break;
    v14 = v19 | Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache;
    if ( (((unsigned __int8)v19 | (unsigned __int8)Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache) & 8) == 0 )
    {
      LODWORD(v16) = 1;
      v14 = v19 | Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache | 8;
    }
    if ( v7 == _InterlockedCompareExchange(
                 &Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache,
                 v14,
                 Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache) )
      goto LABEL_18;
  }
LABEL_19:
  v8 = 1;
LABEL_20:
  LODWORD(v17) = v8;
LABEL_34:
  v33 = v17;
  v32 = v16;
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(
      15299626LL,
      (unsigned int)a3,
      1LL,
      &Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache,
      &v32);
    if ( v4 == 32 )
    {
      v31 = ((unsigned int)Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache >> 2) & 1;
      v28 = 0LL;
      v30 = 0LL;
      v29 = a3;
      g_wil_details_recordFeatureUsage(15299626LL, (unsigned int)a3, 1LL, 0LL, &v28);
    }
  }
  LOBYTE(v5) = (_DWORD)v33 == 0;
  return v5;
}
