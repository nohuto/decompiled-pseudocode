/*
 * XREFs of WbInitializeEncryptionSegment @ 0x1405B4710
 * Callers:
 *     sub_1405B3B68 @ 0x1405B3B68 (sub_1405B3B68.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x140004374 (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     RtlCompareMemory @ 0x1401CCD70 (RtlCompareMemory.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     WbAlloc @ 0x1405CAA90 (WbAlloc.c)
 *     WbVerifyVirtualAddressSignature @ 0x1406B0494 (WbVerifyVirtualAddressSignature.c)
 *     sub_1406B05A0 @ 0x1406B05A0 (sub_1406B05A0.c)
 */

__int64 __fastcall WbInitializeEncryptionSegment(
        __int64 a1,
        union wil_details_FeaturePropertyCache *a2,
        __int64 a3,
        unsigned int a4)
{
  union wil_details_FeaturePropertyCache v6; // ebx
  unsigned __int64 v7; // rax
  unsigned int v8; // ecx
  signed int v9; // ebx
  unsigned int v10; // eax
  unsigned int v11; // r14d
  int v12; // eax
  SIZE_T v13; // r13
  void **v14; // r15
  union wil_details_FeaturePropertyCache *v15; // rbx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  union wil_details_FeaturePropertyCache *v18; // rdx
  union wil_details_FeaturePropertyCache *v19; // rcx
  unsigned int v20; // r9d
  union wil_details_FeaturePropertyCache *v21; // rdx
  unsigned int v22; // r9d
  union wil_details_FeaturePropertyCache *v23; // rcx
  enum wil_ReportingKind v24; // ecx
  int v25; // eax
  unsigned int v26; // eax
  void *v27; // rdx
  const void *v28; // r15
  void *v29; // rax
  unsigned int v30; // r14d
  unsigned __int64 v31; // rcx
  unsigned __int64 v33; // r9
  unsigned int v34; // ecx
  unsigned int v35; // eax
  int v36; // [rsp+60h] [rbp-78h] BYREF
  enum wil_ReportingKind v37[4]; // [rsp+68h] [rbp-70h] BYREF
  void *Source1; // [rsp+78h] [rbp-60h]
  unsigned int v39; // [rsp+80h] [rbp-58h]
  const void *v40; // [rsp+90h] [rbp-48h]
  int v41; // [rsp+E0h] [rbp+8h] BYREF
  union wil_details_FeaturePropertyCache *v42; // [rsp+E8h] [rbp+10h]
  __int64 v43; // [rsp+F0h] [rbp+18h]
  unsigned int v44; // [rsp+F8h] [rbp+20h]

  v43 = a3;
  v42 = a2;
  v6.cache = *(wil_details_FeatureProperties *)a1;
  if ( *(_DWORD *)a1 == 1 )
  {
    Source1 = *(void **)(a1 + 8);
    v33 = 16LL * *((unsigned int *)Source1 + 60);
    v34 = -1;
    if ( v33 <= 0xFFFFFFFF )
      v34 = 16 * *((_DWORD *)Source1 + 60);
    v44 = v34;
    v9 = v33 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v33 > 0xFFFFFFFF )
      goto LABEL_46;
    v35 = v34 + 248;
    v11 = -1;
    if ( v34 + 248 >= v34 )
      v11 = v34 + 248;
    v9 = v35 < v34 ? 0xC0000095 : 0;
    if ( v35 < v34 )
      goto LABEL_46;
    v12 = 1;
    v13 = 248LL;
  }
  else
  {
    v41 = 3;
    if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
                         (union wil_details_FeaturePropertyCache *)a1,
                         a2,
                         wil_details_ServiceReportingKind_PotentialDeviceUsage,
                         a4)
      && g_wil_details_pfnFeatureLoggingHook )
    {
      g_wil_details_pfnFeatureLoggingHook(
        0xE67B5Au,
        (const struct FEATURE_LOGGED_TRAITS *)&unk_14037B9F0,
        0LL,
        0,
        (const enum wil_ReportingKind *)&v41,
        0LL,
        0,
        1uLL);
    }
    if ( v6.cache )
    {
      v9 = -1073741811;
      goto LABEL_46;
    }
    Source1 = *(void **)(a1 + 8);
    v7 = 12LL * *((unsigned int *)Source1 + 60);
    v8 = -1;
    if ( v7 <= 0xFFFFFFFF )
      v8 = 12 * *((_DWORD *)Source1 + 60);
    v44 = v8;
    v9 = v7 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v7 > 0xFFFFFFFF )
      goto LABEL_46;
    v10 = v8 + 244;
    v11 = -1;
    if ( v8 + 244 >= v8 )
      v11 = v8 + 244;
    v9 = v10 < v8 ? 0xC0000095 : 0;
    if ( v10 < v8 )
      goto LABEL_46;
    v12 = 0;
    v13 = 244LL;
  }
  *(_DWORD *)(a3 + 48) = v12;
  *(_DWORD *)(a3 + 52) = *(_DWORD *)(a1 + 4);
  v14 = (void **)(a3 + 56);
  v9 = WbAlloc(v11);
  if ( v9 >= 0 )
  {
    v15 = v42;
    if ( v11 )
    {
      v16 = *(_QWORD *)&v42[2].cache;
      v17 = v16 + v11;
      if ( v17 > 0x7FFFFFFF0000LL || v17 < v16 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(*v14, *(const void **)&v42[2].cache, v11);
    v9 = WbVerifyVirtualAddressSignature(*(PVOID *)&v15[2].cache);
    if ( v9 >= 0 )
    {
      v9 = sub_1406B05A0(*v14);
      if ( v9 >= 0 )
      {
        if ( RtlCompareMemory(Source1, *v14, v13) != v13 )
        {
          v9 = -1073741811;
          goto LABEL_46;
        }
        if ( *(_DWORD *)(a3 + 48) == 1 )
        {
          v27 = *v14;
          *(_QWORD *)(a3 + 32) = *(_QWORD *)&v42[2].cache - (*((_DWORD *)*v14 + 10) & 0xFFFFFFF);
          v24 = *((_DWORD *)v27 + 12);
          v25 = *((_DWORD *)v27 + 11);
        }
        else
        {
          v36 = 3;
          if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
                               v19,
                               v18,
                               wil_details_ServiceReportingKind_PotentialDeviceUsage,
                               v20)
            && g_wil_details_pfnFeatureLoggingHook )
          {
            g_wil_details_pfnFeatureLoggingHook(
              0xE67B5Au,
              (const struct FEATURE_LOGGED_TRAITS *)&unk_14037B9F0,
              0LL,
              0,
              (const enum wil_ReportingKind *)&v36,
              0LL,
              0,
              1uLL);
          }
          if ( *(_DWORD *)(a3 + 48) )
          {
            v9 = -1073741811;
            goto LABEL_46;
          }
          v23 = (union wil_details_FeaturePropertyCache *)(*((_DWORD *)*v14 + 10) & 0xFFFFFFF);
          *(_QWORD *)(a3 + 32) = *(_QWORD *)&v42[2].cache - (_QWORD)v23;
          v37[0] = wil_ReportingKind_DeviceUsage;
          if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
                               v23,
                               v21,
                               wil_details_ServiceReportingKind_PotentialDeviceUsage,
                               v22)
            && g_wil_details_pfnFeatureLoggingHook )
          {
            g_wil_details_pfnFeatureLoggingHook(
              0xE67B5Au,
              (const struct FEATURE_LOGGED_TRAITS *)&unk_14037B9F0,
              0LL,
              0,
              v37,
              0LL,
              0,
              1uLL);
          }
          if ( *(_DWORD *)(a3 + 48) )
          {
            v9 = -1073741811;
            goto LABEL_46;
          }
          v24 = *((_DWORD *)*v14 + 12);
          v25 = *((_DWORD *)*v14 + 11);
        }
        v37[2] = v24;
        v26 = v25 & 0xFFFFFFF;
        if ( v24 == wil_ReportingKind_None )
          goto LABEL_25;
        v28 = (const void *)(*(_QWORD *)(a3 + 32) + v26);
        v40 = v28;
        v29 = (void *)(4LL * (unsigned int)v24);
        Source1 = v29;
        v30 = -1;
        if ( (unsigned __int64)v29 <= 0xFFFFFFFF )
          v30 = 4 * v24;
        v39 = v30;
        v9 = (unsigned __int64)v29 > 0xFFFFFFFF ? 0xC0000095 : 0;
        if ( (unsigned __int64)v29 <= 0xFFFFFFFF )
        {
          if ( v30 )
          {
            v31 = (unsigned __int64)v28 + v30;
            if ( v31 > 0x7FFFFFFF0000LL || v31 < (unsigned __int64)v28 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          v9 = WbAlloc(v30);
          if ( v9 >= 0 )
          {
            memmove(*(void **)(a3 + 40), v28, v30);
LABEL_25:
            *(_DWORD *)(a3 + 16) = 1;
          }
        }
      }
    }
  }
LABEL_46:
  *(_DWORD *)(a3 + 20) = v9;
  return (unsigned int)v9;
}
