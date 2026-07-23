/*
 * XREFs of ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x1400A4E28
 * Callers:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1400A4DAC (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 * Callees:
 *     ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x1400A4EF8 (-wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z.c)
 */

__int64 (__fastcall *__fastcall wil_details_RecordUsageInPropertyCache(
        __int64 (__fastcall *a1)(),
        __int64 a2,
        int a3))()
{
  int v3; // eax
  int v4; // esi
  __int64 (__fastcall *v6)(); // rdi
  __int64 (__fastcall **v7)(); // r8
  int (*v8)(union wil_details_FeaturePropertyCache *, void *); // rdx
  union wil_details_FeaturePropertyCache *v10; // rcx
  __int64 (__fastcall *v11)(); // [rsp+20h] [rbp-40h] BYREF
  int v12; // [rsp+28h] [rbp-38h]
  int v13; // [rsp+2Ch] [rbp-34h]
  __int64 (__fastcall *v14)(); // [rsp+30h] [rbp-30h] BYREF
  int v15; // [rsp+38h] [rbp-28h]
  int v16; // [rsp+3Ch] [rbp-24h]
  __int64 (__fastcall *v17)(); // [rsp+40h] [rbp-20h] BYREF
  int v18; // [rsp+48h] [rbp-18h]
  __int64 v19; // [rsp+50h] [rbp-10h]
  int v20; // [rsp+88h] [rbp+28h]

  v3 = 0;
  v4 = 0;
  *(_QWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 1) = 0LL;
  v6 = a1;
  *((_QWORD *)a1 + 2) = 0LL;
  if ( a3 < 0 )
    goto LABEL_19;
  if ( a3 <= 1 )
  {
LABEL_16:
    v17 = a1;
    v8 = (int (*)(union wil_details_FeaturePropertyCache *, void *))wil_details_SetPropertyCacheUsageCallback;
    v18 = a3;
    LOBYTE(v3) = (a3 & 0xFFFFFFFB) == 0;
    v19 = 1LL;
    a1 = wil_details_SetPropertyCacheOpportunityCallback;
    v7 = &v17;
    if ( !v3 )
      v8 = (int (*)(union wil_details_FeaturePropertyCache *, void *))wil_details_SetPropertyCacheOpportunityCallback;
    goto LABEL_11;
  }
  if ( a3 > 3 )
  {
    if ( a3 > 5 )
    {
      if ( a3 <= 7 )
        goto LABEL_6;
LABEL_19:
      if ( (unsigned int)(a3 - 320) <= 0x3F )
      {
        v10 = (union wil_details_FeaturePropertyCache *)(((unsigned int)dword_1404C79E0 >> 7) & 0x3F);
        if ( a3 - 320 == (_DWORD)v10 )
        {
          if ( (dword_1404C79E0 & 0x40) != 0 )
          {
            *((_DWORD *)v6 + 4) = 1;
            return v6;
          }
          v15 = 64;
          v16 = 1;
          v14 = v6;
          wil_details_ModifyFeatureData(
            v10,
            (int (*)(union wil_details_FeaturePropertyCache *, void *))wil_details_SetPropertyFlagCallback,
            &v14);
        }
      }
      *((_DWORD *)v6 + 2) = a3;
      *((_DWORD *)v6 + 1) = 1;
      *((_DWORD *)v6 + 3) = 0;
      return v6;
    }
    goto LABEL_16;
  }
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
  v7 = &v11;
  v12 = v20;
  v8 = (int (*)(union wil_details_FeaturePropertyCache *, void *))wil_details_SetPropertyFlagCallback;
  v13 = 0;
  v11 = a1;
LABEL_11:
  LOBYTE(v4) = (unsigned int)wil_details_ModifyFeatureData((union wil_details_FeaturePropertyCache *)a1, v8, v7) == 0;
  *((_DWORD *)v6 + 4) = v4;
  return v6;
}
