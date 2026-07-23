/*
 * XREFs of WbInitializeEncryptionSegment @ 0x140585B2C
 * Callers:
 *     WbGetInitializedEncryptionSegment @ 0x140584F8C (WbGetInitializedEncryptionSegment.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1400A4DAC (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     RtlCompareMemory @ 0x1401C5D30 (RtlCompareMemory.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     WbAlloc @ 0x140625D34 (WbAlloc.c)
 *     WbVerifyVirtualAddressSignature @ 0x140691B44 (WbVerifyVirtualAddressSignature.c)
 *     sub_14069226C @ 0x14069226C (sub_14069226C.c)
 */

__int64 __fastcall WbInitializeEncryptionSegment(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rcx
  unsigned int v6; // edx
  signed int v7; // ebx
  unsigned int v8; // eax
  unsigned int v9; // r14d
  int v10; // eax
  void **v11; // r13
  __int64 v12; // rbx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // ecx
  int v20; // eax
  unsigned int v21; // eax
  _DWORD *v22; // rdx
  const void *v23; // r15
  SIZE_T v24; // rax
  unsigned int v25; // r14d
  unsigned __int64 v26; // rcx
  unsigned __int64 v28; // rax
  unsigned int v29; // edx
  unsigned int v30; // eax
  int v31; // [rsp+60h] [rbp-78h] BYREF
  _DWORD v32[4]; // [rsp+68h] [rbp-70h] BYREF
  SIZE_T Length; // [rsp+78h] [rbp-60h]
  unsigned int v34; // [rsp+80h] [rbp-58h]
  const void *v35; // [rsp+90h] [rbp-48h]
  int v36; // [rsp+E0h] [rbp+8h] BYREF
  __int64 v37; // [rsp+E8h] [rbp+10h]
  __int64 v38; // [rsp+F0h] [rbp+18h]
  unsigned int v39; // [rsp+F8h] [rbp+20h]

  v38 = a3;
  v37 = a2;
  if ( *(_DWORD *)a1 == 1 )
  {
    v28 = 16LL * *(unsigned int *)(*(_QWORD *)(a1 + 8) + 240LL);
    v29 = -1;
    if ( v28 <= 0xFFFFFFFF )
      v29 = 16 * *(_DWORD *)(*(_QWORD *)(a1 + 8) + 240LL);
    v39 = v29;
    v7 = v28 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v28 > 0xFFFFFFFF )
      goto LABEL_46;
    v30 = v29 + 248;
    v9 = -1;
    if ( v29 + 248 >= v29 )
      v9 = v29 + 248;
    v7 = v30 < v29 ? 0xC0000095 : 0;
    if ( v30 < v29 )
      goto LABEL_46;
    v10 = 1;
    Length = 248LL;
  }
  else
  {
    v36 = 3;
    if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(a1, a2, 6u)
      && g_wil_details_pfnFeatureLoggingHook )
    {
      g_wil_details_pfnFeatureLoggingHook(
        0xE67B5Au,
        (const struct FEATURE_LOGGED_TRAITS *)&unk_14035C848,
        0LL,
        0,
        (const enum wil_ReportingKind *)&v36,
        0LL,
        0,
        1uLL);
    }
    if ( *(_DWORD *)a1 )
    {
      v7 = -1073741811;
      goto LABEL_46;
    }
    v5 = 12LL * *(unsigned int *)(*(_QWORD *)(a1 + 8) + 240LL);
    v6 = -1;
    if ( v5 <= 0xFFFFFFFF )
      v6 = 12 * *(_DWORD *)(*(_QWORD *)(a1 + 8) + 240LL);
    v39 = v6;
    v7 = v5 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v5 > 0xFFFFFFFF )
      goto LABEL_46;
    v8 = v6 + 244;
    v9 = -1;
    if ( v6 + 244 >= v6 )
      v9 = v6 + 244;
    v7 = v8 < v6 ? 0xC0000095 : 0;
    if ( v8 < v6 )
      goto LABEL_46;
    v10 = 0;
    Length = 244LL;
  }
  *(_DWORD *)(a3 + 48) = v10;
  *(_DWORD *)(a3 + 52) = *(_DWORD *)(a1 + 4);
  v11 = (void **)(a3 + 56);
  v7 = WbAlloc(v9);
  if ( v7 >= 0 )
  {
    v12 = v37;
    if ( v9 )
    {
      v13 = *(_QWORD *)(v37 + 8);
      v14 = v13 + v9;
      if ( v14 > 0x7FFFFFFF0000LL || v14 < v13 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(*v11, *(const void **)(v37 + 8), v9);
    v7 = WbVerifyVirtualAddressSignature(*(PVOID *)(v12 + 8));
    if ( v7 >= 0 )
    {
      v7 = sub_14069226C(*v11);
      if ( v7 >= 0 )
      {
        if ( RtlCompareMemory(*(const void **)(a1 + 8), *v11, Length) != Length )
        {
          v7 = -1073741811;
          goto LABEL_46;
        }
        if ( *(_DWORD *)(a3 + 48) == 1 )
        {
          v22 = *v11;
          *(_QWORD *)(a3 + 32) = *(_QWORD *)(v37 + 8) - (*((_DWORD *)*v11 + 10) & 0xFFFFFFF);
          v19 = v22[12];
          v20 = v22[11];
        }
        else
        {
          v31 = 3;
          if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(v16, v15, 6u)
            && g_wil_details_pfnFeatureLoggingHook )
          {
            g_wil_details_pfnFeatureLoggingHook(
              0xE67B5Au,
              (const struct FEATURE_LOGGED_TRAITS *)&unk_14035C848,
              0LL,
              0,
              (const enum wil_ReportingKind *)&v31,
              0LL,
              0,
              1uLL);
          }
          if ( *(_DWORD *)(a3 + 48) )
          {
            v7 = -1073741811;
            goto LABEL_46;
          }
          v18 = *((_DWORD *)*v11 + 10) & 0xFFFFFFF;
          *(_QWORD *)(a3 + 32) = *(_QWORD *)(v37 + 8) - v18;
          v32[0] = 3;
          if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(v18, v17, 6u)
            && g_wil_details_pfnFeatureLoggingHook )
          {
            g_wil_details_pfnFeatureLoggingHook(
              0xE67B5Au,
              (const struct FEATURE_LOGGED_TRAITS *)&unk_14035C848,
              0LL,
              0,
              (const enum wil_ReportingKind *)v32,
              0LL,
              0,
              1uLL);
          }
          if ( *(_DWORD *)(a3 + 48) )
          {
            v7 = -1073741811;
            goto LABEL_46;
          }
          v19 = *((_DWORD *)*v11 + 12);
          v20 = *((_DWORD *)*v11 + 11);
        }
        v32[2] = v19;
        v21 = v20 & 0xFFFFFFF;
        if ( !v19 )
          goto LABEL_25;
        v23 = (const void *)(*(_QWORD *)(a3 + 32) + v21);
        v35 = v23;
        v24 = 4LL * v19;
        Length = v24;
        v25 = -1;
        if ( v24 <= 0xFFFFFFFF )
          v25 = 4 * v19;
        v34 = v25;
        v7 = v24 > 0xFFFFFFFF ? 0xC0000095 : 0;
        if ( v24 <= 0xFFFFFFFF )
        {
          if ( v25 )
          {
            v26 = (unsigned __int64)v23 + v25;
            if ( v26 > 0x7FFFFFFF0000LL || v26 < (unsigned __int64)v23 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          v7 = WbAlloc(v25);
          if ( v7 >= 0 )
          {
            memmove(*(void **)(a3 + 40), v23, v25);
LABEL_25:
            *(_DWORD *)(a3 + 16) = 1;
          }
        }
      }
    }
  }
LABEL_46:
  *(_DWORD *)(a3 + 20) = v7;
  return (unsigned int)v7;
}
