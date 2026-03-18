/*
 * XREFs of RIMExtractCustomPTPSetting @ 0x1C01303F0
 * Callers:
 *     RIMExtractCustomPTPSettings @ 0x1C01306E8 (RIMExtractCustomPTPSettings.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C011C7F0 (rimHidP_GetSpecificButtonCaps.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C011C844 (rimHidP_GetSpecificValueCaps.c)
 *     rimHidP_GetUsageValue @ 0x1C011C898 (rimHidP_GetUsageValue.c)
 *     rimHidP_GetUsages @ 0x1C011C970 (rimHidP_GetUsages.c)
 *     RIMComputeSpecificHighMetricValue @ 0x1C012FB20 (RIMComputeSpecificHighMetricValue.c)
 */

__int64 __fastcall RIMExtractCustomPTPSetting(
        struct _HIDP_PREPARSED_DATA *a1,
        __int64 a2,
        char *a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        unsigned __int16 a6,
        int a7,
        unsigned int *a8)
{
  int v8; // ebx
  int UsageValue; // edi
  unsigned __int16 v12; // r15
  unsigned __int16 v13; // r12
  int SpecificValueCaps; // eax
  unsigned int v15; // eax
  unsigned int v18; // [rsp+54h] [rbp-ACh] BYREF
  unsigned __int16 v19[2]; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v20; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v21; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+68h] [rbp-98h]
  char *v23; // [rsp+70h] [rbp-90h]
  unsigned int *v24; // [rsp+78h] [rbp-88h]
  struct _HIDP_BUTTON_CAPS v25; // [rsp+80h] [rbp-80h] BYREF
  struct _HIDP_BUTTON_CAPS v26; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int16 v27[12]; // [rsp+120h] [rbp+20h] BYREF

  v8 = 0;
  v23 = a3;
  v22 = a2;
  v24 = a8;
  v18 = 0;
  UsageValue = -1073741823;
  memset(&v25, 0, sizeof(v25));
  v19[0] = 1;
  v20 = 10;
  if ( a7 < 0 )
    goto LABEL_31;
  if ( a7 <= 1 )
  {
    v12 = a6;
    v13 = a5;
    SpecificValueCaps = rimHidP_GetSpecificValueCaps(HidP_Feature, a4, a5, a6, (struct _HIDP_VALUE_CAPS *)&v25, v19, a1);
  }
  else
  {
    if ( a7 != 2 )
      goto LABEL_31;
    v12 = a6;
    v13 = a5;
    SpecificValueCaps = rimHidP_GetSpecificButtonCaps(HidP_Feature, a4, a5, a6, &v26, v19, a1);
  }
  UsageValue = SpecificValueCaps;
  if ( SpecificValueCaps < 0 )
    goto LABEL_31;
  if ( !a7 )
  {
    if ( !*(_QWORD *)&v25.Reserved[8]
      && (v25.Reserved[6] & 0x80000000) == 0
      && (int)v25.Reserved[7] >= (int)v25.Reserved[6] )
    {
      UsageValue = rimHidP_GetUsageValue(HidP_Feature, a4, v13, v12, &v21, a1, v23, *(unsigned __int16 *)(v22 + 8));
      if ( UsageValue < 0 )
        goto LABEL_31;
      v15 = v21;
      if ( v21 < v25.Reserved[6] || v21 > v25.Reserved[7] || v21 >= 0x7FFFFFFF )
      {
        UsageValue = -1073741762;
        goto LABEL_31;
      }
      goto LABEL_21;
    }
LABEL_30:
    UsageValue = -1072627706;
    goto LABEL_31;
  }
  if ( a7 == 1 )
  {
    if ( *(_QWORD *)&v25.Reserved[8] )
    {
      if ( gpfnHidP_GetScaledUsageValue )
        UsageValue = gpfnHidP_GetScaledUsageValue(
                       HidP_Feature,
                       a4,
                       v13,
                       v12,
                       (int *)&v18,
                       a1,
                       v23,
                       *(unsigned __int16 *)(v22 + 8));
      else
        UsageValue = -1073741637;
      if ( UsageValue < 0 )
        goto LABEL_31;
      v26 = v25;
      v15 = RIMComputeSpecificHighMetricValue(v18, (__int64)&v26);
LABEL_21:
      v18 = v15;
      goto LABEL_31;
    }
    goto LABEL_30;
  }
  UsageValue = rimHidP_GetUsages(HidP_Feature, a4, v13, v27, &v20, a1, v23, *(unsigned __int16 *)(v22 + 8));
  if ( UsageValue >= 0 && v20 )
  {
    while ( v27[v8] != v12 )
    {
      if ( ++v8 == v20 )
        goto LABEL_31;
    }
    v18 = 1;
  }
LABEL_31:
  *v24 = v18;
  return (unsigned int)UsageValue;
}
