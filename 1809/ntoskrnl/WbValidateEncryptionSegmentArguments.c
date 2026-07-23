/*
 * XREFs of WbValidateEncryptionSegmentArguments @ 0x1405852C0
 * Callers:
 *     WbGetInitializedEncryptionSegment @ 0x140584F8C (WbGetInitializedEncryptionSegment.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1400A4DAC (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     WbAlloc @ 0x140625D34 (WbAlloc.c)
 */

__int64 __fastcall WbValidateEncryptionSegmentArguments(__int64 a1, unsigned int a2, _OWORD *a3, __int64 a4)
{
  __int64 v7; // rdx
  int v8; // ebx
  _OWORD *v9; // rax
  _OWORD *v10; // rax
  int v11; // esi
  _OWORD *v13; // rax
  _OWORD *v14; // rax
  unsigned __int64 P; // [rsp+68h] [rbp-40h]
  int v16; // [rsp+B8h] [rbp+10h] BYREF

  if ( a2 < 0x10 )
    return (unsigned int)-1073741811;
  v8 = WbAlloc(0xF4uLL);
  if ( v8 < 0 )
    return (unsigned int)v8;
  v9 = *(_OWORD **)(a1 + 8);
  if ( (unsigned __int64)v9 + 244 > 0x7FFFFFFF0000LL || (_OWORD *)((char *)v9 + 244) < v9 )
  {
    MEMORY[0x7FFFFFFF0000] = 0;
    v9 = *(_OWORD **)(a1 + 8);
  }
  MEMORY[0] = *v9;
  MEMORY[0x10] = v9[1];
  MEMORY[0x20] = v9[2];
  MEMORY[0x30] = v9[3];
  MEMORY[0x40] = v9[4];
  MEMORY[0x50] = v9[5];
  MEMORY[0x60] = v9[6];
  MEMORY[0x70] = v9[7];
  v10 = v9 + 8;
  MEMORY[0x80] = *v10;
  MEMORY[0x90] = v10[1];
  MEMORY[0xA0] = v10[2];
  MEMORY[0xB0] = v10[3];
  MEMORY[0xC0] = v10[4];
  MEMORY[0xD0] = v10[5];
  MEMORY[0xE0] = v10[6];
  MEMORY[0xF0] = *((_DWORD *)v10 + 28);
  v11 = MEMORY[0x24] & 0xF;
  LODWORD(P) = v11;
  HIDWORD(P) = MEMORY[0x24] >> 4;
  if ( v11 == 1 )
  {
    ExFreePoolWithTag(0LL, 0x42524157u);
    v8 = WbAlloc(0xF8uLL);
    if ( v8 < 0 )
      return (unsigned int)v8;
    v13 = *(_OWORD **)(a1 + 8);
    if ( (unsigned __int64)v13 + 248 > 0x7FFFFFFF0000LL || (_OWORD *)((char *)v13 + 248) < v13 )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
      v13 = *(_OWORD **)(a1 + 8);
    }
    MEMORY[0] = *v13;
    MEMORY[0x10] = v13[1];
    MEMORY[0x20] = v13[2];
    MEMORY[0x30] = v13[3];
    MEMORY[0x40] = v13[4];
    MEMORY[0x50] = v13[5];
    MEMORY[0x60] = v13[6];
    MEMORY[0x70] = v13[7];
    v14 = v13 + 8;
    MEMORY[0x80] = *v14;
    MEMORY[0x90] = v14[1];
    MEMORY[0xA0] = v14[2];
    MEMORY[0xB0] = v14[3];
    MEMORY[0xC0] = v14[4];
    MEMORY[0xD0] = v14[5];
    MEMORY[0xE0] = v14[6];
    MEMORY[0xF0] = *((_QWORD *)v14 + 14);
    goto LABEL_9;
  }
  v16 = 3;
  if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(0LL, v7, 6u)
    && g_wil_details_pfnFeatureLoggingHook )
  {
    g_wil_details_pfnFeatureLoggingHook(
      0xE67B5Au,
      (const struct FEATURE_LOGGED_TRAITS *)&unk_14035C848,
      0LL,
      0,
      (const enum wil_ReportingKind *)&v16,
      0LL,
      0,
      1uLL);
  }
  if ( v11 )
    return (unsigned int)-1073741811;
LABEL_9:
  *(_DWORD *)(a4 + 8) = MEMORY[0x40];
  *(_QWORD *)a4 = *(_QWORD *)(a1 + 8) - (MEMORY[0x28] & 0xFFFFFFF);
  if ( a3 )
    *a3 = P;
  return (unsigned int)v8;
}
