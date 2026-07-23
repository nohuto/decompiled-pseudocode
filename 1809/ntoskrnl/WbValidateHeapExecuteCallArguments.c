/*
 * XREFs of WbValidateHeapExecuteCallArguments @ 0x14062517C
 * Callers:
 *     WbHeapExecuteCall @ 0x140625ADC (WbHeapExecuteCall.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1400A4DAC (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall WbValidateHeapExecuteCallArguments(__int64 a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v6; // esi
  unsigned __int64 v7; // rax
  _OWORD *v8; // rcx
  _OWORD *v9; // rdx
  _OWORD *v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // r8d
  __int64 v14; // rbx
  int v15; // ecx
  int v16; // ecx
  int v17; // r10d
  int v18; // r9d
  __int64 v19; // rcx
  int v20; // r11d
  _OWORD *v22; // rax
  _OWORD *v23; // rax
  __int16 v24; // cx
  unsigned __int64 v25; // rax
  int v26; // ecx
  int v27; // [rsp+88h] [rbp+10h] BYREF

  v6 = 0;
  memset(a3, 0, 0x150uLL);
  if ( a2 < 0x18 || *(_DWORD *)a1 != 3 )
    return (unsigned int)-1073741811;
  v7 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
  if ( v7 )
  {
    v24 = *(_WORD *)(v7 + 8);
    if ( v24 == 332 || v24 == 452 )
    {
      v25 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
      if ( v25 )
      {
        if ( *(_WORD *)(v25 + 8) == 452 )
          *(_QWORD *)(a1 + 8) &= ~1uLL;
      }
    }
  }
  v8 = *(_OWORD **)(a1 + 8);
  if ( (unsigned __int64)(v8 + 15) > 0x7FFFFFFF0000LL || v8 + 15 < v8 )
  {
    MEMORY[0x7FFFFFFF0000] = 0;
    v8 = *(_OWORD **)(a1 + 8);
  }
  v9 = a3 + 2;
  *((_OWORD *)a3 + 1) = *v8;
  *((_OWORD *)a3 + 2) = v8[1];
  *((_OWORD *)a3 + 3) = v8[2];
  *((_OWORD *)a3 + 4) = v8[3];
  *((_OWORD *)a3 + 5) = v8[4];
  *((_OWORD *)a3 + 6) = v8[5];
  *((_OWORD *)a3 + 7) = v8[6];
  *((_OWORD *)a3 + 8) = v8[7];
  v10 = v8 + 8;
  *((_OWORD *)a3 + 9) = *v10;
  *((_OWORD *)a3 + 10) = v10[1];
  *((_OWORD *)a3 + 11) = v10[2];
  *((_OWORD *)a3 + 12) = v10[3];
  *((_OWORD *)a3 + 13) = v10[4];
  *((_OWORD *)a3 + 14) = v10[5];
  *((_OWORD *)a3 + 15) = v10[6];
  a3[41] = *(_QWORD *)(a1 + 8);
  v11 = *((_DWORD *)a3 + 13);
  v12 = v11 & 0xF;
  *((_DWORD *)a3 + 2) = v12;
  *((_DWORD *)a3 + 3) = (unsigned __int8)v11 >> 4;
  if ( (_DWORD)v12 == 1 )
  {
    v22 = *(_OWORD **)(a1 + 8);
    if ( (unsigned __int64)v22 + 248 > 0x7FFFFFFF0000LL || (_OWORD *)((char *)v22 + 248) < v22 )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
      v22 = *(_OWORD **)(a1 + 8);
    }
    *v9 = *v22;
    *((_OWORD *)a3 + 2) = v22[1];
    *((_OWORD *)a3 + 3) = v22[2];
    *((_OWORD *)a3 + 4) = v22[3];
    *((_OWORD *)a3 + 5) = v22[4];
    *((_OWORD *)a3 + 6) = v22[5];
    *((_OWORD *)a3 + 7) = v22[6];
    *((_OWORD *)a3 + 8) = v22[7];
    v23 = v22 + 8;
    *((_OWORD *)a3 + 9) = *v23;
    *((_OWORD *)a3 + 10) = v23[1];
    *((_OWORD *)a3 + 11) = v23[2];
    *((_OWORD *)a3 + 12) = v23[3];
    *((_OWORD *)a3 + 13) = v23[4];
    *((_OWORD *)a3 + 14) = v23[5];
    *((_OWORD *)a3 + 15) = v23[6];
    a3[32] = *((_QWORD *)v23 + 14);
  }
  else
  {
    v27 = 3;
    if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(v12, (__int64)v9, 6u)
      && g_wil_details_pfnFeatureLoggingHook )
    {
      g_wil_details_pfnFeatureLoggingHook(
        0xE67B5Au,
        (const struct FEATURE_LOGGED_TRAITS *)&unk_14035C848,
        0LL,
        0,
        (const enum wil_ReportingKind *)&v27,
        0LL,
        0,
        1uLL);
    }
    if ( *((_DWORD *)a3 + 2) )
      return (unsigned int)-1073741811;
  }
  v13 = a3[9] & 0xFFFFFFF;
  if ( !v13 )
    return (unsigned int)-1073741811;
  v14 = a3[41] - (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 40LL) & 0xFFFFFFF);
  *a3 = v14;
  v15 = 4096;
  if ( *((_DWORD *)a3 + 15) > 0x1000u )
    v15 = *((_DWORD *)a3 + 15);
  *((_DWORD *)a3 + 81) = v15;
  v16 = *((_DWORD *)a3 + 19);
  v17 = v16 & 0xFFFFFFF;
  v18 = *((_DWORD *)a3 + 17);
  if ( (v16 & 0xFFFFFFF) != 0 )
  {
    v20 = a3[10] & 0xFFFFFFF;
    *((_DWORD *)a3 + 78) = v20 + 16;
    *((_DWORD *)a3 + 77) = v13;
    *((_DWORD *)a3 + 76) = v18 & 0xFFFFFFF;
    a3[37] = v14 + (v18 & 0xFFFFFFF);
    v19 = v16 & 0xFFFFFFF;
  }
  else
  {
    v19 = v18 & 0xFFFFFFF;
    v17 = v18 & 0xFFFFFFF;
    v20 = v13;
  }
  *((_DWORD *)a3 + 72) = 16;
  *((_DWORD *)a3 + 71) = v20;
  *((_DWORD *)a3 + 70) = v17;
  a3[34] = v14 + v19;
  if ( *((_DWORD *)a3 + 2) == 1 )
  {
    v26 = *((_DWORD *)a3 + 64);
    if ( (*((_DWORD *)a3 + 19) & 0xFFFFFFF) != 0 )
    {
      *((_DWORD *)a3 + 73) = *((_DWORD *)a3 + 65);
      *((_DWORD *)a3 + 79) = v26;
    }
    else
    {
      *((_DWORD *)a3 + 73) = v26;
    }
  }
  *((_DWORD *)a3 + 80) = v20 + *((_DWORD *)a3 + 77) + 16;
  return v6;
}
