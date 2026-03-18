/*
 * XREFs of wil_details_RecordUsageInPropertyCache @ 0x1C015C2F0
 * Callers:
 *     wil_details_FeaturePropertyCache_ReportUsageToServiceDirect @ 0x1C015C10C (wil_details_FeaturePropertyCache_ReportUsageToServiceDirect.c)
 * Callees:
 *     wil_details_ModifyFeatureData @ 0x1C015C27C (wil_details_ModifyFeatureData.c)
 */

__int64 __fastcall wil_details_RecordUsageInPropertyCache(__int64 a1, volatile signed __int32 *a2, int a3)
{
  int v3; // eax
  int v4; // esi
  __int64 *v8; // r8
  unsigned int (__fastcall *v9)(volatile signed __int32 *, __int64); // rdx
  volatile unsigned __int32 v10; // edx
  __int64 v12; // [rsp+20h] [rbp-40h] BYREF
  int v13; // [rsp+28h] [rbp-38h]
  int v14; // [rsp+2Ch] [rbp-34h]
  __int64 v15; // [rsp+30h] [rbp-30h] BYREF
  int v16; // [rsp+38h] [rbp-28h]
  int v17; // [rsp+3Ch] [rbp-24h]
  __int64 v18; // [rsp+40h] [rbp-20h] BYREF
  int v19; // [rsp+48h] [rbp-18h]
  __int64 v20; // [rsp+50h] [rbp-10h]
  int v21; // [rsp+88h] [rbp+28h]

  v3 = 0;
  v4 = 0;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( a3 < 0 )
    goto LABEL_18;
  if ( a3 <= 1 )
  {
LABEL_15:
    v18 = a1;
    v9 = (unsigned int (__fastcall *)(volatile signed __int32 *, __int64))wil_details_SetPropertyCacheUsageCallback;
    v19 = a3;
    LOBYTE(v3) = (a3 & 0xFFFFFFFB) == 0;
    v20 = 1LL;
    v8 = &v18;
    if ( !v3 )
      v9 = (unsigned int (__fastcall *)(volatile signed __int32 *, __int64))wil_details_SetPropertyCacheOpportunityCallback;
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
        v10 = *a2;
        if ( a3 - 320 == ((v10 >> 7) & 0x3F) )
        {
          if ( (v10 & 0x40) != 0 )
          {
            *(_DWORD *)(a1 + 16) = 1;
            return a1;
          }
          v16 = 64;
          v17 = 1;
          v15 = a1;
          wil_details_ModifyFeatureData(
            a2,
            (unsigned int (__fastcall *)(volatile signed __int32 *, __int64))wil_details_SetPropertyFlagCallback,
            (__int64)&v15);
        }
      }
      *(_DWORD *)(a1 + 8) = a3;
      *(_DWORD *)(a1 + 4) = 1;
      *(_DWORD *)(a1 + 12) = 0;
      return a1;
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
  v8 = &v12;
  v13 = v21;
  v9 = (unsigned int (__fastcall *)(volatile signed __int32 *, __int64))wil_details_SetPropertyFlagCallback;
  v14 = 0;
  v12 = a1;
LABEL_14:
  LOBYTE(v4) = (unsigned int)wil_details_ModifyFeatureData(a2, v9, (__int64)v8) == 0;
  *(_DWORD *)(a1 + 16) = v4;
  return a1;
}
