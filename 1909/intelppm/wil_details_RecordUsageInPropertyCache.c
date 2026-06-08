/*
 * XREFs of wil_details_RecordUsageInPropertyCache @ 0x1C0007628
 * Callers:
 *     wil_details_FeaturePropertyCache_ReportUsageToServiceDirect @ 0x1C0007434 (wil_details_FeaturePropertyCache_ReportUsageToServiceDirect.c)
 * Callees:
 *     wil_details_ModifyFeatureData @ 0x1C00075B8 (wil_details_ModifyFeatureData.c)
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
  unsigned int (__fastcall *v8)(signed __int32 *, __int64); // rdx
  __int64 v9; // rcx
  __int64 (__fastcall *v11)(); // [rsp+20h] [rbp-40h] BYREF
  int v12; // [rsp+28h] [rbp-38h]
  int v13; // [rsp+2Ch] [rbp-34h]
  __int64 (__fastcall *v14)(); // [rsp+30h] [rbp-30h] BYREF
  int v15; // [rsp+38h] [rbp-28h]
  int v16; // [rsp+3Ch] [rbp-24h]
  __int64 (__fastcall *v17)(); // [rsp+40h] [rbp-20h] BYREF
  int v18; // [rsp+48h] [rbp-18h]
  int v19; // [rsp+4Ch] [rbp-14h]
  __int64 v20; // [rsp+50h] [rbp-10h]
  int v21; // [rsp+88h] [rbp+28h]

  v3 = 0;
  v4 = 0;
  *(_QWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 1) = 0LL;
  v6 = a1;
  *((_QWORD *)a1 + 2) = 0LL;
  if ( a3 < 0 )
    goto LABEL_18;
  if ( a3 <= 1 )
  {
LABEL_15:
    v19 = 0;
    v8 = (unsigned int (__fastcall *)(signed __int32 *, __int64))wil_details_SetPropertyCacheUsageCallback;
    v17 = a1;
    LOBYTE(v3) = (a3 & 0xFFFFFFFB) == 0;
    v18 = a3;
    v20 = 1LL;
    a1 = wil_details_SetPropertyCacheOpportunityCallback;
    if ( !v3 )
      v8 = (unsigned int (__fastcall *)(signed __int32 *, __int64))wil_details_SetPropertyCacheOpportunityCallback;
    v7 = &v17;
    goto LABEL_14;
  }
  if ( a3 > 3 )
  {
    if ( a3 > 5 )
    {
      if ( a3 <= 7 )
        goto LABEL_6;
LABEL_18:
      if ( (unsigned int)(a3 - 320) <= 0x3F )
      {
        v9 = ((unsigned int)Feature_HwpAllowQosIdleOptimizations__private_propertyCache >> 7) & 0x3F;
        if ( a3 - 320 == (_DWORD)v9 )
        {
          if ( (Feature_HwpAllowQosIdleOptimizations__private_propertyCache & 0x40) != 0 )
          {
            *((_DWORD *)v6 + 4) = 1;
            return v6;
          }
          v15 = 64;
          v16 = 1;
          v14 = v6;
          wil_details_ModifyFeatureData(
            v9,
            (unsigned int (__fastcall *)(signed __int32 *, __int64))wil_details_SetPropertyFlagCallback,
            (__int64)&v14);
        }
      }
      *((_DWORD *)v6 + 2) = a3;
      *((_DWORD *)v6 + 1) = 1;
      *((_DWORD *)v6 + 3) = 0;
      return v6;
    }
    goto LABEL_15;
  }
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
  v7 = &v11;
  v12 = v21;
  v8 = (unsigned int (__fastcall *)(signed __int32 *, __int64))wil_details_SetPropertyFlagCallback;
  v13 = 0;
  v11 = a1;
LABEL_14:
  LOBYTE(v4) = (unsigned int)wil_details_ModifyFeatureData((__int64)a1, v8, (__int64)v7) == 0;
  *((_DWORD *)v6 + 4) = v4;
  return v6;
}
