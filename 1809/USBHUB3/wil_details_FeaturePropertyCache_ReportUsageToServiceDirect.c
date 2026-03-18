/*
 * XREFs of wil_details_FeaturePropertyCache_ReportUsageToServiceDirect @ 0x1C0012088
 * Callers:
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C0012318 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003C520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  unsigned int v4; // edi
  int v6; // r8d
  int v7; // eax
  unsigned int (__fastcall *v8)(signed __int32 *, __int128 **); // rsi
  signed __int32 v9; // r14d
  int v10; // r8d
  signed __int32 v12; // [rsp+38h] [rbp-41h]
  int v13; // [rsp+3Ch] [rbp-3Dh]
  signed __int32 v14; // [rsp+40h] [rbp-39h] BYREF
  __int128 v15; // [rsp+48h] [rbp-31h] BYREF
  __int64 v16; // [rsp+58h] [rbp-21h]
  int v17; // [rsp+60h] [rbp-19h]
  __int128 *v18; // [rsp+68h] [rbp-11h] BYREF
  int v19; // [rsp+70h] [rbp-9h]
  __int64 v20; // [rsp+78h] [rbp-1h]
  _QWORD v21[2]; // [rsp+80h] [rbp+7h] BYREF
  int v22; // [rsp+90h] [rbp+17h]
  unsigned int v23; // [rsp+94h] [rbp+1Bh]
  __int128 v24; // [rsp+98h] [rbp+1Fh] BYREF
  __int64 v25; // [rsp+A8h] [rbp+2Fh]

  v3 = 0;
  v4 = 0;
  v15 = 0uLL;
  v16 = 0LL;
  if ( a3 < 0 )
    goto LABEL_25;
  if ( a3 <= 1 )
  {
LABEL_20:
    v19 = a3;
    v20 = 1LL;
    LOBYTE(v3) = (a3 & 0xFFFFFFFB) == 0;
    v18 = &v15;
    v8 = (unsigned int (__fastcall *)(signed __int32 *, __int128 **))wil_details_SetPropertyCacheOpportunityCallback;
    if ( v3 )
      v8 = (unsigned int (__fastcall *)(signed __int32 *, __int128 **))wil_details_SetPropertyCacheUsageCallback;
    while ( 1 )
    {
      v14 = Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache;
      v9 = Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache;
      if ( !v8(&v14, &v18) )
        goto LABEL_18;
      if ( v9 == _InterlockedCompareExchange(&Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache, v14, v9) )
      {
LABEL_17:
        v7 = 0;
        goto LABEL_19;
      }
    }
  }
  if ( a3 > 3 )
  {
    if ( a3 > 5 )
    {
      if ( a3 <= 7 )
        goto LABEL_6;
LABEL_25:
      if ( (unsigned int)(a3 - 320) <= 0x3F
        && a3 - 320 == (((unsigned int)Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache >> 7) & 0x3F) )
      {
        if ( (Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache & 0x40) != 0 )
        {
          LODWORD(v16) = 1;
          goto LABEL_33;
        }
        v17 = 64;
        do
        {
          v10 = Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache;
          LODWORD(v15) = 0;
        }
        while ( (Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache & 0x40) != 0x40
             && v10 != _InterlockedCompareExchange(
                         &Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache,
                         Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache | 0x40,
                         Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache) );
      }
      *((_QWORD *)&v15 + 1) = (unsigned int)a3;
      DWORD1(v15) = 1;
      goto LABEL_33;
    }
    goto LABEL_20;
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
  while ( 1 )
  {
    v6 = Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache;
    LODWORD(v15) = 0;
    if ( (v13 & Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache) == v13 )
      break;
    v12 = v13 | Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache;
    if ( (((unsigned __int8)v13 | (unsigned __int8)Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache) & 8) == 0 )
    {
      LODWORD(v15) = 1;
      v12 = v13 | Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache | 8;
    }
    if ( v6 == _InterlockedCompareExchange(
                 &Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache,
                 v12,
                 Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache) )
      goto LABEL_17;
  }
LABEL_18:
  v7 = 1;
LABEL_19:
  LODWORD(v16) = v7;
LABEL_33:
  v25 = v16;
  v24 = v15;
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(
      15299626LL,
      (unsigned int)a3,
      1LL,
      &Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache,
      &v24);
    if ( (Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache & 0x30) == 0x20 )
    {
      v22 = 0;
      v23 = ((unsigned int)Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache >> 2) & 1;
      v21[0] = 0LL;
      v21[1] = (unsigned int)a3;
      g_wil_details_recordFeatureUsage(15299626LL, (unsigned int)a3, 1LL, 0LL, v21);
    }
  }
  LOBYTE(v4) = (_DWORD)v25 == 0;
  return v4;
}
