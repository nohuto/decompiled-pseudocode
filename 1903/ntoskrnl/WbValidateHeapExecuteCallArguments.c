/*
 * XREFs of WbValidateHeapExecuteCallArguments @ 0x1405C9F90
 * Callers:
 *     WbHeapExecuteCall @ 0x1405CA1C8 (WbHeapExecuteCall.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1400042E4 (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall WbValidateHeapExecuteCallArguments(
        __int64 a1,
        unsigned int a2,
        union wil_details_FeaturePropertyCache *a3)
{
  unsigned int v6; // esi
  unsigned __int64 v7; // rax
  _OWORD *v8; // rcx
  union wil_details_FeaturePropertyCache *v9; // rdx
  _OWORD *v10; // rcx
  union wil_details_FeaturePropertyCache v11; // eax
  union wil_details_FeaturePropertyCache *v12; // rcx
  int v13; // r8d
  union wil_details_FeaturePropertyCache v14; // r11d
  __int64 v15; // r10
  int var; // ecx
  union wil_details_FeaturePropertyCache v17; // eax
  int v18; // ebx
  union wil_details_FeaturePropertyCache v19; // ecx
  int v20; // r9d
  __int16 v22; // cx
  unsigned __int64 v23; // rax
  _OWORD *v24; // rax
  _OWORD *v25; // rax
  int v26; // [rsp+88h] [rbp+10h] BYREF

  v6 = 0;
  memset(a3, 0, 0x150uLL);
  if ( a2 < 0x18 || *(_DWORD *)a1 != 3 )
    return (unsigned int)-1073741811;
  v7 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[6];
  if ( v7 )
  {
    v22 = *(_WORD *)(v7 + 8);
    if ( v22 == 332 || v22 == 452 )
    {
      v23 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[6];
      if ( v23 )
      {
        if ( *(_WORD *)(v23 + 8) == 452 )
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
  v9 = a3 + 4;
  *(_OWORD *)&a3[4].cache = *v8;
  *(_OWORD *)&a3[8].cache = v8[1];
  *(_OWORD *)&a3[12].cache = v8[2];
  *(_OWORD *)&a3[16].cache = v8[3];
  *(_OWORD *)&a3[20].cache = v8[4];
  *(_OWORD *)&a3[24].cache = v8[5];
  *(_OWORD *)&a3[28].cache = v8[6];
  *(_OWORD *)&a3[32].cache = v8[7];
  v10 = v8 + 8;
  *(_OWORD *)&a3[36].cache = *v10;
  *(_OWORD *)&a3[40].cache = v10[1];
  *(_OWORD *)&a3[44].cache = v10[2];
  *(_OWORD *)&a3[48].cache = v10[3];
  *(_OWORD *)&a3[52].cache = v10[4];
  *(_OWORD *)&a3[56].cache = v10[5];
  *(_OWORD *)&a3[60].cache = v10[6];
  *(_QWORD *)&a3[82].cache = *(_QWORD *)(a1 + 8);
  v11.cache = a3[13].cache;
  v12 = (union wil_details_FeaturePropertyCache *)(*(_BYTE *)&v11.cache & 0xF);
  a3[2].cache = (wil_details_FeatureProperties)v12;
  a3[3].cache = (wil_details_FeatureProperties)(*(_BYTE *)&v11.cache >> 4);
  if ( (_DWORD)v12 == 1 )
  {
    v24 = *(_OWORD **)(a1 + 8);
    if ( (unsigned __int64)v24 + 248 > 0x7FFFFFFF0000LL || (_OWORD *)((char *)v24 + 248) < v24 )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
      v24 = *(_OWORD **)(a1 + 8);
    }
    *(_OWORD *)&v9->cache = *v24;
    *(_OWORD *)&a3[8].cache = v24[1];
    *(_OWORD *)&a3[12].cache = v24[2];
    *(_OWORD *)&a3[16].cache = v24[3];
    *(_OWORD *)&a3[20].cache = v24[4];
    *(_OWORD *)&a3[24].cache = v24[5];
    *(_OWORD *)&a3[28].cache = v24[6];
    *(_OWORD *)&a3[32].cache = v24[7];
    v25 = v24 + 8;
    *(_OWORD *)&a3[36].cache = *v25;
    *(_OWORD *)&a3[40].cache = v25[1];
    *(_OWORD *)&a3[44].cache = v25[2];
    *(_OWORD *)&a3[48].cache = v25[3];
    *(_OWORD *)&a3[52].cache = v25[4];
    *(_OWORD *)&a3[56].cache = v25[5];
    *(_OWORD *)&a3[60].cache = v25[6];
    *(_QWORD *)&a3[64].cache = *((_QWORD *)v25 + 14);
    v13 = *(_DWORD *)&a3[18].cache & 0xFFFFFFF;
    if ( v13 )
    {
      v14.cache = a3[2].cache;
      goto LABEL_12;
    }
    return (unsigned int)-1073741811;
  }
  v26 = 3;
  if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
                       v12,
                       v9,
                       wil_details_ServiceReportingKind_PotentialDeviceUsage,
                       0x80u)
    && g_wil_details_pfnFeatureLoggingHook )
  {
    g_wil_details_pfnFeatureLoggingHook(
      0xE67B5Au,
      &stru_14037B9B0,
      0LL,
      0,
      (const enum wil_ReportingKind *)&v26,
      0LL,
      0,
      1uLL);
  }
  if ( a3[2].cache )
    return (unsigned int)-1073741811;
  v13 = *(_DWORD *)&a3[18].cache & 0xFFFFFFF;
  if ( !v13 )
    return (unsigned int)-1073741811;
  v14.cache = 0;
LABEL_12:
  v15 = *(_QWORD *)&a3[82].cache - (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 40LL) & 0xFFFFFFF);
  *(_QWORD *)&a3->cache = v15;
  var = 4096;
  if ( *(_DWORD *)&a3[15].cache > 0x1000u )
    var = a3[15].var;
  a3[81].cache = (wil_details_FeatureProperties)var;
  v17.cache = a3[19].cache;
  v18 = *(_DWORD *)&v17.cache & 0xFFFFFFF;
  a3[72].cache = (wil_details_FeatureProperties)16;
  v19.cache = a3[17].cache;
  if ( (*(_DWORD *)&v17.cache & 0xFFFFFFF) != 0 )
  {
    v20 = *(_DWORD *)&a3[20].cache & 0xFFFFFFF;
    a3[71].cache = (wil_details_FeatureProperties)v20;
    a3[70].cache = (wil_details_FeatureProperties)v18;
    *(_QWORD *)&a3[68].cache = v15 + (*(_DWORD *)&v17.cache & 0xFFFFFFF);
    a3[78].cache = (wil_details_FeatureProperties)(v20 + 16);
    a3[77].cache = (wil_details_FeatureProperties)v13;
    a3[76].cache = (wil_details_FeatureProperties)(*(_DWORD *)&v19.cache & 0xFFFFFFF);
    *(_QWORD *)&a3[74].cache = v15 + (*(_DWORD *)&v19.cache & 0xFFFFFFF);
  }
  else
  {
    a3[71].cache = (wil_details_FeatureProperties)v13;
    a3[70].cache = (wil_details_FeatureProperties)(*(_DWORD *)&v19.cache & 0xFFFFFFF);
    *(_QWORD *)&a3[68].cache = v15 + (*(_DWORD *)&v19.cache & 0xFFFFFFF);
    v20 = v13;
  }
  if ( *(_DWORD *)&v14.cache == 1 )
  {
    if ( v18 )
    {
      a3[73].cache = a3[65].cache;
      a3[79].cache = a3[64].cache;
    }
    else
    {
      a3[73].cache = a3[64].cache;
    }
  }
  a3[80].cache = (wil_details_FeatureProperties)(v20 + *(_DWORD *)&a3[77].cache + 16);
  return v6;
}
