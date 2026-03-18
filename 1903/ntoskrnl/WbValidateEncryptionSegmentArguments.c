/*
 * XREFs of WbValidateEncryptionSegmentArguments @ 0x1405B3AD0
 * Callers:
 *     sub_1405B378C @ 0x1405B378C (sub_1405B378C.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1400042E4 (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     WbAlloc @ 0x1405CA590 (WbAlloc.c)
 *     sub_1405CA880 @ 0x1405CA880 (sub_1405CA880.c)
 */

__int64 __fastcall WbValidateEncryptionSegmentArguments(__int64 a1, unsigned int a2, _OWORD *a3, __int64 a4)
{
  __int64 v7; // rbx
  int v8; // edi
  unsigned int v9; // r9d
  _OWORD *v10; // rax
  _OWORD *v11; // rax
  int v12; // r14d
  _OWORD *v14; // rax
  _OWORD *v15; // rax
  __int128 v16; // [rsp+68h] [rbp-30h]
  int v17; // [rsp+A8h] [rbp+10h] BYREF

  v7 = 0LL;
  v16 = 0uLL;
  if ( a2 < 0x10 )
  {
LABEL_14:
    v8 = -1073741811;
    goto LABEL_11;
  }
  v8 = WbAlloc(0xF4uLL);
  if ( v8 < 0 )
  {
LABEL_20:
    v7 = *((_QWORD *)&v16 + 1);
    goto LABEL_11;
  }
  v10 = *(_OWORD **)(a1 + 8);
  if ( (unsigned __int64)v10 + 244 > 0x7FFFFFFF0000LL || (_OWORD *)((char *)v10 + 244) < v10 )
  {
    MEMORY[0x7FFFFFFF0000] = 0;
    v10 = *(_OWORD **)(a1 + 8);
  }
  v7 = 0LL;
  MEMORY[0] = *v10;
  MEMORY[0x10] = v10[1];
  MEMORY[0x20] = v10[2];
  MEMORY[0x30] = v10[3];
  MEMORY[0x40] = v10[4];
  MEMORY[0x50] = v10[5];
  MEMORY[0x60] = v10[6];
  MEMORY[0x70] = v10[7];
  v11 = v10 + 8;
  MEMORY[0x80] = *v11;
  MEMORY[0x90] = v11[1];
  MEMORY[0xA0] = v11[2];
  MEMORY[0xB0] = v11[3];
  MEMORY[0xC0] = v11[4];
  MEMORY[0xD0] = v11[5];
  MEMORY[0xE0] = v11[6];
  MEMORY[0xF0] = *((_DWORD *)v11 + 28);
  v12 = MEMORY[0x24] & 0xF;
  LODWORD(v16) = v12;
  DWORD1(v16) = MEMORY[0x24] >> 4;
  if ( v12 == 1 )
  {
    sub_1405CA880(0LL);
    *((_QWORD *)&v16 + 1) = 0LL;
    v8 = WbAlloc(0xF8uLL);
    if ( v8 >= 0 )
    {
      v14 = *(_OWORD **)(a1 + 8);
      if ( (unsigned __int64)v14 + 248 > 0x7FFFFFFF0000LL || (_OWORD *)((char *)v14 + 248) < v14 )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
        v14 = *(_OWORD **)(a1 + 8);
      }
      v7 = 0LL;
      MEMORY[0] = *v14;
      MEMORY[0x10] = v14[1];
      MEMORY[0x20] = v14[2];
      MEMORY[0x30] = v14[3];
      MEMORY[0x40] = v14[4];
      MEMORY[0x50] = v14[5];
      MEMORY[0x60] = v14[6];
      MEMORY[0x70] = v14[7];
      v15 = v14 + 8;
      MEMORY[0x80] = *v15;
      MEMORY[0x90] = v15[1];
      MEMORY[0xA0] = v15[2];
      MEMORY[0xB0] = v15[3];
      MEMORY[0xC0] = v15[4];
      MEMORY[0xD0] = v15[5];
      MEMORY[0xE0] = v15[6];
      MEMORY[0xF0] = *((_QWORD *)v15 + 14);
      goto LABEL_9;
    }
    goto LABEL_20;
  }
  v17 = 3;
  if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
                       (union wil_details_FeaturePropertyCache *)0x80,
                       (union wil_details_FeaturePropertyCache *)0x80,
                       wil_details_ServiceReportingKind_PotentialDeviceUsage,
                       v9)
    && g_wil_details_pfnFeatureLoggingHook )
  {
    g_wil_details_pfnFeatureLoggingHook(
      0xE67B5Au,
      &stru_14037B9B0,
      0LL,
      0,
      (const enum wil_ReportingKind *)&v17,
      0LL,
      0,
      1uLL);
  }
  if ( v12 )
    goto LABEL_14;
LABEL_9:
  *(_DWORD *)(a4 + 8) = MEMORY[0x40];
  *(_QWORD *)a4 = *(_QWORD *)(a1 + 8) - (MEMORY[0x28] & 0xFFFFFFF);
  if ( a3 )
  {
    *a3 = v16;
    v7 = 0LL;
  }
LABEL_11:
  sub_1405CA880(v7);
  return (unsigned int)v8;
}
