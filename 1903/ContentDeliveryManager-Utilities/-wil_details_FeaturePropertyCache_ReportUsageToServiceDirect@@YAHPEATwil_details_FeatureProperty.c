/*
 * XREFs of ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x180005A98
 * Callers:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180005D24 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?wil_details_FeaturePropertyCache_ReportVariantUsageToService@@YAXPEAUwil_details_FeatureVariantPropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HEW4wil_VariantReportingKind@@_K@Z @ 0x180005E6C (-wil_details_FeaturePropertyCache_ReportVariantUsageToService@@YAXPEAUwil_details_FeatureVariant.c)
 * Callees:
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
        volatile signed __int32 *a1,
        unsigned int a2,
        int a3,
        unsigned int a4)
{
  int v4; // eax
  int v5; // r12d
  unsigned int v6; // ebx
  signed __int32 v10; // r8d
  int v11; // eax
  int v12; // eax
  __int64 (__fastcall *v13)(union wil_details_FeaturePropertyCache *, __int128 **); // r14
  signed __int32 v14; // r15d
  signed __int32 v15; // r8d
  int v16; // eax
  int v17; // eax
  int v19; // [rsp+30h] [rbp-61h]
  volatile signed __int32 v20; // [rsp+30h] [rbp-61h]
  volatile signed __int32 v21; // [rsp+34h] [rbp-5Dh]
  signed __int32 v22; // [rsp+34h] [rbp-5Dh]
  volatile signed __int32 v23; // [rsp+38h] [rbp-59h] BYREF
  __int128 v24; // [rsp+40h] [rbp-51h] BYREF
  __int64 v25; // [rsp+50h] [rbp-41h]
  __int128 *v26; // [rsp+58h] [rbp-39h] BYREF
  int v27; // [rsp+60h] [rbp-31h]
  __int64 v28; // [rsp+68h] [rbp-29h]
  __int64 v29; // [rsp+70h] [rbp-21h] BYREF
  int v30; // [rsp+78h] [rbp-19h]
  __int64 v31; // [rsp+7Ch] [rbp-15h]
  int v32; // [rsp+84h] [rbp-Dh]
  __int128 v33; // [rsp+88h] [rbp-9h] BYREF
  __int64 v34; // [rsp+98h] [rbp+7h]

  v4 = 0;
  v5 = *a1 & 0x30;
  v24 = 0uLL;
  v6 = 0;
  v25 = 0LL;
  if ( a3 < 0 )
    goto LABEL_26;
  if ( a3 <= 1 )
  {
LABEL_20:
    v28 = 1LL;
    v27 = a3;
    LOBYTE(v4) = (a3 & 0xFFFFFFFB) == 0;
    v26 = &v24;
    v13 = (__int64 (__fastcall *)(union wil_details_FeaturePropertyCache *, __int128 **))wil_details_SetPropertyCacheOpportunityCallback;
    if ( v4 )
      v13 = (__int64 (__fastcall *)(union wil_details_FeaturePropertyCache *, __int128 **))wil_details_SetPropertyCacheUsageCallback;
    while ( 1 )
    {
      v23 = *a1;
      v23 = *a1;
      v14 = v23;
      if ( !(unsigned int)v13((union wil_details_FeaturePropertyCache *)&v23, &v26) )
        goto LABEL_18;
      if ( v14 == _InterlockedCompareExchange(a1, v23, v14) )
      {
        v12 = 0;
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
LABEL_26:
      if ( (unsigned int)(a3 - 320) <= 0x3F && a3 - 320 == (((unsigned __int32)*a1 >> 7) & 0x3F) )
      {
        if ( (*(_BYTE *)a1 & 0x40) != 0 )
        {
          LODWORD(v25) = 1;
          goto LABEL_34;
        }
        v23 = 64;
        do
        {
          v20 = *a1;
          v15 = *a1;
          v16 = *a1 & 0x40;
          LODWORD(v24) = 0;
        }
        while ( v16 != 64 && v15 != _InterlockedCompareExchange(a1, v20 | 0x40, v15) );
      }
      *((_QWORD *)&v24 + 1) = __PAIR64__(a4, a3);
      DWORD1(v24) = 1;
      goto LABEL_34;
    }
    goto LABEL_20;
  }
LABEL_6:
  switch ( a3 )
  {
    case 2:
      v19 = 0x10000;
      break;
    case 3:
      v19 = 0x40000;
      break;
    case 6:
      v19 = 0x20000;
      break;
    default:
      v19 = 0x80000;
      break;
  }
  while ( 1 )
  {
    v21 = *a1;
    v10 = *a1;
    v11 = v19 & *a1;
    LODWORD(v24) = 0;
    if ( v11 == v19 )
      break;
    v22 = v19 | v21;
    if ( (v22 & 8) == 0 )
    {
      LODWORD(v24) = 1;
      v22 |= 8u;
    }
    if ( v10 == _InterlockedCompareExchange(a1, v22, v10) )
    {
      v12 = 0;
      goto LABEL_19;
    }
  }
LABEL_18:
  v12 = 1;
LABEL_19:
  LODWORD(v25) = v12;
LABEL_34:
  v34 = v25;
  v33 = v24;
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(a2, (unsigned int)a3, 1LL, a1, &v33);
    if ( v5 == 32 )
    {
      v17 = ((unsigned __int32)*a1 >> 2) & 1;
      v29 = 0LL;
      v32 = v17;
      v31 = 0LL;
      v30 = a3;
      g_wil_details_recordFeatureUsage(a2, (unsigned int)a3, 1LL, 0LL, &v29);
    }
  }
  LOBYTE(v6) = (_DWORD)v34 == 0;
  return v6;
}
