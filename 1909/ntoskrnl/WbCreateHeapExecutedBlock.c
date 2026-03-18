/*
 * XREFs of WbCreateHeapExecutedBlock @ 0x1406AFEE0
 * Callers:
 *     WbGetHeapExecutedBlock @ 0x1405CA8C8 (WbGetHeapExecutedBlock.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x140004374 (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     ZwFlushInstructionCache @ 0x1401C28B0 (ZwFlushInstructionCache.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     sub_1405CAA28 @ 0x1405CAA28 (sub_1405CAA28.c)
 *     WbAlloc @ 0x1405CAA90 (WbAlloc.c)
 *     sub_1405CAD80 @ 0x1405CAD80 (sub_1405CAD80.c)
 *     WbVerifyVirtualAddressSignature @ 0x1406B0494 (WbVerifyVirtualAddressSignature.c)
 *     sub_1406B05A0 @ 0x1406B05A0 (sub_1406B05A0.c)
 *     sub_1406B0A34 @ 0x1406B0A34 (sub_1406B0A34.c)
 *     WbAllocateUserMemory @ 0x1406B0B28 (WbAllocateUserMemory.c)
 */

__int64 __fastcall WbCreateHeapExecutedBlock(__int64 a1, __int64 a2, void **a3)
{
  int v6; // ebx
  _DWORD *v7; // rbx
  union wil_details_FeaturePropertyCache *v8; // rdx
  union wil_details_FeaturePropertyCache *v9; // rcx
  unsigned int v10; // r9d
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  union wil_details_FeaturePropertyCache *v13; // rdx
  union wil_details_FeaturePropertyCache *v14; // rcx
  unsigned int v15; // r9d
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  const void *v18; // rax
  union wil_details_FeaturePropertyCache *v19; // rdx
  union wil_details_FeaturePropertyCache *v20; // rcx
  unsigned int v21; // r9d
  void *v22; // rsi
  _QWORD *v23; // rbx
  _QWORD *v24; // r10
  _QWORD *v25; // rdx
  PVOID *v26; // r9
  __int64 v27; // rax
  PVOID *v28; // rsi
  _QWORD *v29; // rbx
  __int64 v30; // r8
  unsigned __int64 v31; // rax
  __int16 v33; // ax
  void *Src; // [rsp+58h] [rbp-70h] BYREF
  void *v35; // [rsp+60h] [rbp-68h] BYREF
  int v36; // [rsp+68h] [rbp-60h] BYREF
  int v37; // [rsp+70h] [rbp-58h] BYREF
  int v38; // [rsp+78h] [rbp-50h] BYREF
  __int64 v39; // [rsp+80h] [rbp-48h] BYREF
  void *v40; // [rsp+88h] [rbp-40h] BYREF
  __int64 v41; // [rsp+90h] [rbp-38h]

  v35 = 0LL;
  v40 = 0LL;
  v39 = 0LL;
  Src = 0LL;
  v41 = (unsigned int)dword_14046B5C0;
  v6 = WbAlloc(0x58uLL, &v35);
  if ( v6 >= 0 )
  {
    v7 = v35;
    memset(v35, 0, 0x58uLL);
    v7[4] &= ~1u;
    *((_QWORD *)v7 + 10) = 1LL;
    if ( *(_DWORD *)(a2 + 8) != 1 )
    {
      v36 = 3;
      if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
                           v9,
                           v8,
                           wil_details_ServiceReportingKind_PotentialDeviceUsage,
                           v10)
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
      if ( *(_DWORD *)(a2 + 8) )
      {
        v6 = -1073741811;
        goto LABEL_51;
      }
    }
    v6 = sub_1406B05A0((void *)(a2 + 16));
    if ( v6 >= 0 )
    {
      v6 = WbVerifyVirtualAddressSignature(*(PVOID *)(a2 + 328));
      if ( v6 >= 0 )
      {
        v6 = WbAllocateUserMemory(a1, *(unsigned int *)(a2 + 320), &v40, &v39);
        if ( v6 >= 0 )
        {
          v6 = WbAlloc(*(unsigned int *)(a2 + 320), &Src);
          if ( v6 >= 0 )
          {
            v11 = *(unsigned int *)(a2 + 284);
            if ( (_DWORD)v11 )
            {
              v12 = *(_QWORD *)(a2 + 272);
              if ( v12 + v11 > 0x7FFFFFFF0000LL || v12 + v11 < v12 )
              {
                MEMORY[0x7FFFFFFF0000] = 0;
                LODWORD(v11) = *(_DWORD *)(a2 + 284);
              }
            }
            memmove((char *)Src + *(unsigned int *)(a2 + 288), *(const void **)(a2 + 272), (unsigned int)v11);
            if ( *(_DWORD *)(a2 + 8) == 1 )
            {
              if ( *(_DWORD *)(a2 + 284) < 4u )
              {
                v6 = -1073741811;
                goto LABEL_51;
              }
              *(_DWORD *)((char *)Src + *(unsigned int *)(a2 + 288)) = *(_DWORD *)(a2 + 292);
            }
            else
            {
              v37 = 3;
              if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
                                   v14,
                                   v13,
                                   wil_details_ServiceReportingKind_PotentialDeviceUsage,
                                   v15)
                && g_wil_details_pfnFeatureLoggingHook )
              {
                g_wil_details_pfnFeatureLoggingHook(
                  0xE67B5Au,
                  (const struct FEATURE_LOGGED_TRAITS *)&unk_14037B9F0,
                  0LL,
                  0,
                  (const enum wil_ReportingKind *)&v37,
                  0LL,
                  0,
                  1uLL);
              }
              if ( *(_DWORD *)(a2 + 8) )
              {
                v6 = -1073741811;
                goto LABEL_51;
              }
            }
            v6 = sub_1406B0A34(
                   0,
                   (int)Src + *(_DWORD *)(a2 + 288),
                   (int)Src + *(_DWORD *)(a2 + 288),
                   *(_DWORD *)(a2 + 284),
                   a2 + 88,
                   *(_DWORD *)(a2 + 280),
                   a2 + 96);
            if ( v6 >= 0 )
            {
              v6 = WbVerifyVirtualAddressSignature(*(PVOID *)(a2 + 272));
              if ( v6 >= 0 )
              {
                v16 = *(_QWORD *)(a2 + 296);
                if ( !v16 )
                  goto LABEL_43;
                v17 = *(unsigned int *)(a2 + 308);
                v18 = *(const void **)(a2 + 296);
                if ( (_DWORD)v17 && (v16 + v17 > 0x7FFFFFFF0000LL || v16 + v17 < v16) )
                {
                  MEMORY[0x7FFFFFFF0000] = 0;
                  LODWORD(v17) = *(_DWORD *)(a2 + 308);
                  v18 = *(const void **)(a2 + 296);
                }
                memmove((char *)Src + *(unsigned int *)(a2 + 312), v18, (unsigned int)v17);
                if ( *(_DWORD *)(a2 + 8) == 1 )
                {
                  if ( *(_DWORD *)(a2 + 308) < 4u )
                  {
                    v6 = -1073741811;
                    goto LABEL_51;
                  }
                  *(_DWORD *)((char *)Src + *(unsigned int *)(a2 + 312)) = *(_DWORD *)(a2 + 316);
                }
                else
                {
                  v38 = 3;
                  if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
                                       v20,
                                       v19,
                                       wil_details_ServiceReportingKind_PotentialDeviceUsage,
                                       v21)
                    && g_wil_details_pfnFeatureLoggingHook )
                  {
                    g_wil_details_pfnFeatureLoggingHook(
                      0xE67B5Au,
                      (const struct FEATURE_LOGGED_TRAITS *)&unk_14037B9F0,
                      0LL,
                      0,
                      (const enum wil_ReportingKind *)&v38,
                      0LL,
                      0,
                      1uLL);
                  }
                  if ( *(_DWORD *)(a2 + 8) )
                  {
                    v6 = -1073741811;
                    goto LABEL_51;
                  }
                }
                v6 = sub_1406B0A34(
                       0,
                       (int)Src + *(_DWORD *)(a2 + 312),
                       (int)Src + *(_DWORD *)(a2 + 312),
                       *(_DWORD *)(a2 + 308),
                       a2 + 88,
                       *(_DWORD *)(a2 + 304),
                       a2 + 96);
                if ( v6 >= 0 )
                {
                  v6 = WbVerifyVirtualAddressSignature(*(PVOID *)(a2 + 296));
                  if ( v6 >= 0 )
                  {
LABEL_43:
                    v22 = v40;
                    memmove(v40, Src, *(unsigned int *)(a2 + 320));
                    v23 = v35;
                    v24 = (char *)v35 + 64;
                    *((_QWORD *)v35 + 8) = *(_QWORD *)a2;
                    v25 = v23 + 5;
                    v23[5] = v22;
                    v26 = (PVOID *)(v23 + 3);
                    v23[3] = v39 + *(unsigned int *)(a2 + 288);
                    v27 = *(unsigned int *)(a2 + 312);
                    v28 = (PVOID *)(v23 + 4);
                    if ( (_DWORD)v27 )
                      v23[4] = v39 + v27;
                    else
                      v23[4] = 0LL;
                    v29 = v35;
                    *((_DWORD *)v35 + 18) = *(_DWORD *)(a2 + 320);
                    v29[6] = *(_QWORD *)(a2 + 272);
                    v30 = *(_QWORD *)(a2 + 272) - (_QWORD)*v26;
                    v29[7] = v30;
                    v31 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[6];
                    if ( v31 && ((v33 = *(_WORD *)(v31 + 8), v33 == 332) || v33 == 452) )
                      *(_QWORD *)*v25 = *v24;
                    else
                      *(_QWORD *)*v25 = v30;
                    *(_QWORD *)(*v25 + 8LL) = v41;
                    v6 = ZwFlushInstructionCache((HANDLE)0xFFFFFFFFFFFFFFFFLL, *v26, *(_DWORD *)(a2 + 284));
                    if ( v6 >= 0 )
                    {
                      if ( !*(_QWORD *)(a2 + 296)
                        || (v6 = ZwFlushInstructionCache((HANDLE)0xFFFFFFFFFFFFFFFFLL, *v28, *(_DWORD *)(a2 + 308)),
                            v6 >= 0) )
                      {
                        if ( a3 )
                        {
                          *a3 = v35;
                          v35 = 0LL;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_51:
  sub_1405CAA28(a1, (__int64)v35);
  sub_1405CAD80(Src);
  return (unsigned int)v6;
}
