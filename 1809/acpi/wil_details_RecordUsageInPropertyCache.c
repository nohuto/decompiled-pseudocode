/*
 * XREFs of wil_details_RecordUsageInPropertyCache @ 0x1C000FD58
 * Callers:
 *     wil_details_FeaturePropertyCache_ReportUsageToServiceDirect @ 0x1C000FCDC (wil_details_FeaturePropertyCache_ReportUsageToServiceDirect.c)
 * Callees:
 *     wil_details_ModifyFeatureData @ 0x1C000FDF8 (wil_details_ModifyFeatureData.c)
 */

__int64 __fastcall wil_details_RecordUsageInPropertyCache(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  int v4; // esi
  __int64 *v7; // r8
  __int64 (__fastcall *v8)(); // rdx
  __int64 v10; // [rsp+20h] [rbp-40h] BYREF
  int v11; // [rsp+28h] [rbp-38h]
  int v12; // [rsp+2Ch] [rbp-34h]
  __int64 v13; // [rsp+30h] [rbp-30h] BYREF
  int v14; // [rsp+38h] [rbp-28h]
  int v15; // [rsp+3Ch] [rbp-24h]
  __int64 v16; // [rsp+40h] [rbp-20h] BYREF
  int v17; // [rsp+48h] [rbp-18h]
  __int64 v18; // [rsp+50h] [rbp-10h]
  int v19; // [rsp+98h] [rbp+38h]

  v3 = 0;
  v4 = 0;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( a3 < 0 )
    goto LABEL_11;
  if ( a3 <= 1 )
  {
LABEL_20:
    v16 = a1;
    v8 = wil_details_SetPropertyCacheUsageCallback;
    v17 = a3;
    LOBYTE(v3) = (a3 & 0xFFFFFFFB) == 0;
    v18 = 1LL;
    v7 = &v16;
    if ( !v3 )
      v8 = wil_details_SetPropertyCacheOpportunityCallback;
    goto LABEL_7;
  }
  if ( a3 > 3 )
  {
    if ( a3 > 5 )
    {
      if ( a3 <= 7 )
        goto LABEL_4;
LABEL_11:
      if ( (unsigned int)(a3 - 320) <= 0x3F
        && a3 - 320 == (((unsigned int)Feature_Pldr_Ignore_Vetoes__private_propertyCache >> 7) & 0x3F) )
      {
        if ( (Feature_Pldr_Ignore_Vetoes__private_propertyCache & 0x40) != 0 )
        {
          *(_DWORD *)(a1 + 16) = 1;
          return a1;
        }
        v14 = 64;
        v15 = 1;
        v13 = a1;
        wil_details_ModifyFeatureData(
          &Feature_Pldr_Ignore_Vetoes__private_propertyCache,
          wil_details_SetPropertyFlagCallback,
          &v13);
      }
      *(_DWORD *)(a1 + 8) = a3;
      *(_DWORD *)(a1 + 4) = 1;
      *(_DWORD *)(a1 + 12) = 0;
      return a1;
    }
    goto LABEL_20;
  }
LABEL_4:
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
  v7 = &v10;
  v11 = v19;
  v8 = wil_details_SetPropertyFlagCallback;
  v12 = 0;
  v10 = a1;
LABEL_7:
  LOBYTE(v4) = (unsigned int)wil_details_ModifyFeatureData(&Feature_Pldr_Ignore_Vetoes__private_propertyCache, v8, v7) == 0;
  *(_DWORD *)(a1 + 16) = v4;
  return a1;
}
