/*
 * XREFs of wil_details_RecordUsageInPropertyCache @ 0x1400E8804
 * Callers:
 *     wil_details_FeaturePropertyCache_ReportUsageToServiceDirect @ 0x1400E8728 (wil_details_FeaturePropertyCache_ReportUsageToServiceDirect.c)
 * Callees:
 *     wil_details_ModifyFeatureData @ 0x1400E88D8 (wil_details_ModifyFeatureData.c)
 */

__int64 __fastcall wil_details_RecordUsageInPropertyCache(__int64 a1, unsigned int *a2, int a3)
{
  int v3; // eax
  int v4; // esi
  __int64 *v8; // r8
  __int64 (__fastcall *v9)(); // rdx
  unsigned int v11; // edx
  __int64 v12; // [rsp+20h] [rbp-40h] BYREF
  int v13; // [rsp+28h] [rbp-38h]
  int v14; // [rsp+2Ch] [rbp-34h]
  __int64 v15; // [rsp+30h] [rbp-30h] BYREF
  int v16; // [rsp+38h] [rbp-28h]
  int v17; // [rsp+3Ch] [rbp-24h]
  __int64 v18; // [rsp+40h] [rbp-20h] BYREF
  int v19; // [rsp+48h] [rbp-18h]
  int v20; // [rsp+4Ch] [rbp-14h]
  __int64 v21; // [rsp+50h] [rbp-10h]
  int v22; // [rsp+88h] [rbp+28h]

  v3 = 0;
  v4 = 0;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( a3 < 0 )
    goto LABEL_19;
  if ( a3 <= 1 )
  {
LABEL_16:
    v20 = 0;
    v9 = wil_details_SetPropertyCacheUsageCallback;
    v18 = a1;
    LOBYTE(v3) = (a3 & 0xFFFFFFFB) == 0;
    v19 = a3;
    v21 = 1LL;
    if ( !v3 )
      v9 = wil_details_SetPropertyCacheOpportunityCallback;
    v8 = &v18;
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
        v11 = *a2;
        if ( a3 - 320 == ((v11 >> 7) & 0x3F) )
        {
          if ( (v11 & 0x40) != 0 )
          {
            *(_DWORD *)(a1 + 16) = 1;
            return a1;
          }
          v16 = 64;
          v17 = 1;
          v15 = a1;
          wil_details_ModifyFeatureData(a2, wil_details_SetPropertyFlagCallback, &v15);
        }
      }
      *(_DWORD *)(a1 + 8) = a3;
      *(_DWORD *)(a1 + 4) = 1;
      *(_DWORD *)(a1 + 12) = 0;
      return a1;
    }
    goto LABEL_16;
  }
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
  v8 = &v12;
  v13 = v22;
  v9 = (__int64 (__fastcall *)())wil_details_SetPropertyFlagCallback;
  v14 = 0;
  v12 = a1;
LABEL_11:
  LOBYTE(v4) = (unsigned int)wil_details_ModifyFeatureData(a2, v9, v8) == 0;
  *(_DWORD *)(a1 + 16) = v4;
  return a1;
}
