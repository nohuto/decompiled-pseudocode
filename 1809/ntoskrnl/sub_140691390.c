/*
 * XREFs of sub_140691390 @ 0x140691390
 * Callers:
 *     WbGetHeapExecutedBlock @ 0x14062592C (WbGetHeapExecutedBlock.c)
 * Callees:
 *     MmUnlockPages @ 0x140033580 (MmUnlockPages.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1400A4DAC (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     IoAllocateMdl @ 0x1400DFD50 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x1400E0BE0 (IoFreeMdl.c)
 *     MmProbeAndLockPagesPrivate @ 0x14010CE14 (MmProbeAndLockPagesPrivate.c)
 *     ZwFlushInstructionCache @ 0x1401B9F30 (ZwFlushInstructionCache.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     sub_140625A74 @ 0x140625A74 (sub_140625A74.c)
 *     WbAlloc @ 0x140625D34 (WbAlloc.c)
 *     WbVerifyVirtualAddressSignature @ 0x140691B44 (WbVerifyVirtualAddressSignature.c)
 *     sub_140691C44 @ 0x140691C44 (sub_140691C44.c)
 *     WbAllocateUserMemory @ 0x140691D38 (WbAllocateUserMemory.c)
 *     sub_14069226C @ 0x14069226C (sub_14069226C.c)
 *     ExSystemExceptionFilter @ 0x1406E3A10 (ExSystemExceptionFilter.c)
 */

__int64 __fastcall sub_140691390(__int64 a1, __int64 a2, void **a3)
{
  int v5; // ebx
  _DWORD *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  const void *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  void *v18; // r14
  _QWORD *v19; // rbx
  _QWORD *v20; // r10
  _QWORD *v21; // rdx
  PVOID *v22; // r9
  __int64 v23; // rax
  PVOID *v24; // r14
  _QWORD *v25; // rbx
  __int64 v26; // r8
  unsigned __int64 v27; // rax
  __int16 v28; // ax
  void *Src; // [rsp+58h] [rbp-90h] BYREF
  void *v31; // [rsp+60h] [rbp-88h] BYREF
  int v32; // [rsp+68h] [rbp-80h]
  PMDL MemoryDescriptorList; // [rsp+70h] [rbp-78h]
  int v34; // [rsp+78h] [rbp-70h]
  int v35; // [rsp+7Ch] [rbp-6Ch]
  PMDL Mdl; // [rsp+80h] [rbp-68h]
  PMDL v37; // [rsp+88h] [rbp-60h]
  int v38; // [rsp+90h] [rbp-58h] BYREF
  int v39; // [rsp+98h] [rbp-50h] BYREF
  int v40; // [rsp+A0h] [rbp-48h] BYREF
  __int64 v41; // [rsp+A8h] [rbp-40h] BYREF
  void *v42; // [rsp+B0h] [rbp-38h] BYREF
  __int64 v43; // [rsp+B8h] [rbp-30h]

  v31 = 0LL;
  v42 = 0LL;
  v41 = 0LL;
  Src = 0LL;
  MemoryDescriptorList = 0LL;
  Mdl = 0LL;
  v37 = 0LL;
  v32 = 0;
  v34 = 0;
  v35 = 0;
  v43 = (unsigned int)dword_140440B00;
  v5 = WbAlloc(0x58uLL, &v31);
  if ( v5 >= 0 )
  {
    v6 = v31;
    memset(v31, 0, 0x58uLL);
    v6[4] &= ~1u;
    *((_QWORD *)v6 + 10) = 1LL;
    if ( *(_DWORD *)(a2 + 8) == 1 )
    {
      v5 = sub_14069226C((void *)(a2 + 16));
      if ( v5 < 0 )
        goto LABEL_66;
      MemoryDescriptorList = IoAllocateMdl(*(PVOID *)(a2 + 328), 0xF8u, 0, 0, 0LL);
      if ( !MemoryDescriptorList )
      {
        v5 = -1073741801;
        goto LABEL_66;
      }
    }
    else
    {
      v38 = 3;
      if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(v8, v7, 6u)
        && g_wil_details_pfnFeatureLoggingHook )
      {
        g_wil_details_pfnFeatureLoggingHook(
          0xE67B5Au,
          (const struct FEATURE_LOGGED_TRAITS *)&unk_14035C848,
          0LL,
          0,
          (const enum wil_ReportingKind *)&v38,
          0LL,
          0,
          1uLL);
      }
      if ( *(_DWORD *)(a2 + 8) )
      {
        v5 = -1073741811;
        goto LABEL_66;
      }
      v5 = sub_14069226C((void *)(a2 + 16));
      if ( v5 < 0 )
        goto LABEL_66;
      MemoryDescriptorList = IoAllocateMdl(*(PVOID *)(a2 + 328), 0xF0u, 0, 0, 0LL);
      if ( !MemoryDescriptorList )
      {
        v5 = -1073741801;
        goto LABEL_66;
      }
    }
    MmProbeAndLockPagesPrivate((__int64)MemoryDescriptorList);
    v32 = 1;
    v5 = WbVerifyVirtualAddressSignature(*(PVOID *)(a2 + 328));
    if ( v5 >= 0 )
    {
      v5 = WbAllocateUserMemory(a1, *(unsigned int *)(a2 + 320), &v42, &v41);
      if ( v5 >= 0 )
      {
        v5 = WbAlloc(*(unsigned int *)(a2 + 320), &Src);
        if ( v5 >= 0 )
        {
          v9 = *(unsigned int *)(a2 + 284);
          if ( (_DWORD)v9 )
          {
            v10 = *(_QWORD *)(a2 + 272);
            if ( v10 + v9 > 0x7FFFFFFF0000LL || v10 + v9 < v10 )
            {
              MEMORY[0x7FFFFFFF0000] = 0;
              LODWORD(v9) = *(_DWORD *)(a2 + 284);
            }
          }
          memmove((char *)Src + *(unsigned int *)(a2 + 288), *(const void **)(a2 + 272), (unsigned int)v9);
          if ( *(_DWORD *)(a2 + 8) == 1 )
          {
            if ( *(_DWORD *)(a2 + 284) < 4u )
            {
              v5 = -1073741811;
              goto LABEL_66;
            }
            *(_DWORD *)((char *)Src + *(unsigned int *)(a2 + 288)) = *(_DWORD *)(a2 + 292);
          }
          else
          {
            v39 = 3;
            if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(v12, v11, 6u)
              && g_wil_details_pfnFeatureLoggingHook )
            {
              g_wil_details_pfnFeatureLoggingHook(
                0xE67B5Au,
                (const struct FEATURE_LOGGED_TRAITS *)&unk_14035C848,
                0LL,
                0,
                (const enum wil_ReportingKind *)&v39,
                0LL,
                0,
                1uLL);
            }
            if ( *(_DWORD *)(a2 + 8) )
            {
              v5 = -1073741811;
              goto LABEL_66;
            }
          }
          Mdl = IoAllocateMdl(*(PVOID *)(a2 + 272), *(_DWORD *)(a2 + 284), 0, 0, 0LL);
          if ( !Mdl )
          {
            v5 = -1073741801;
            goto LABEL_66;
          }
          MmProbeAndLockPagesPrivate((__int64)Mdl);
          v34 = 1;
          v5 = sub_140691C44(
                 0,
                 (int)Src + *(_DWORD *)(a2 + 288),
                 (int)Src + *(_DWORD *)(a2 + 288),
                 *(_DWORD *)(a2 + 284),
                 a2 + 88,
                 *(_DWORD *)(a2 + 280),
                 a2 + 96);
          if ( v5 >= 0 )
          {
            v5 = WbVerifyVirtualAddressSignature(*(PVOID *)(a2 + 272));
            if ( v5 >= 0 )
            {
              v13 = *(_QWORD *)(a2 + 296);
              if ( !v13 )
                goto LABEL_52;
              v14 = *(unsigned int *)(a2 + 308);
              v15 = *(const void **)(a2 + 296);
              if ( (_DWORD)v14 && (v13 + v14 > 0x7FFFFFFF0000LL || v13 + v14 < v13) )
              {
                MEMORY[0x7FFFFFFF0000] = 0;
                LODWORD(v14) = *(_DWORD *)(a2 + 308);
                v15 = *(const void **)(a2 + 296);
              }
              memmove((char *)Src + *(unsigned int *)(a2 + 312), v15, (unsigned int)v14);
              if ( *(_DWORD *)(a2 + 8) == 1 )
              {
                if ( *(_DWORD *)(a2 + 308) < 4u )
                {
                  v5 = -1073741811;
                  goto LABEL_66;
                }
                *(_DWORD *)((char *)Src + *(unsigned int *)(a2 + 312)) = *(_DWORD *)(a2 + 316);
              }
              else
              {
                v40 = 3;
                if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(v17, v16, 6u)
                  && g_wil_details_pfnFeatureLoggingHook )
                {
                  g_wil_details_pfnFeatureLoggingHook(
                    0xE67B5Au,
                    (const struct FEATURE_LOGGED_TRAITS *)&unk_14035C848,
                    0LL,
                    0,
                    (const enum wil_ReportingKind *)&v40,
                    0LL,
                    0,
                    1uLL);
                }
                if ( *(_DWORD *)(a2 + 8) )
                {
                  v5 = -1073741811;
                  goto LABEL_66;
                }
              }
              v37 = IoAllocateMdl(*(PVOID *)(a2 + 296), *(_DWORD *)(a2 + 308), 0, 0, 0LL);
              if ( !v37 )
              {
                v5 = -1073741801;
                goto LABEL_66;
              }
              MmProbeAndLockPagesPrivate((__int64)v37);
              v35 = 1;
              v5 = sub_140691C44(
                     0,
                     (int)Src + *(_DWORD *)(a2 + 312),
                     (int)Src + *(_DWORD *)(a2 + 312),
                     *(_DWORD *)(a2 + 308),
                     a2 + 88,
                     *(_DWORD *)(a2 + 304),
                     a2 + 96);
              if ( v5 >= 0 )
              {
                v5 = WbVerifyVirtualAddressSignature(*(PVOID *)(a2 + 296));
                if ( v5 >= 0 )
                {
LABEL_52:
                  v18 = v42;
                  memmove(v42, Src, *(unsigned int *)(a2 + 320));
                  v19 = v31;
                  v20 = (char *)v31 + 64;
                  *((_QWORD *)v31 + 8) = *(_QWORD *)a2;
                  v21 = v19 + 5;
                  v19[5] = v18;
                  v22 = (PVOID *)(v19 + 3);
                  v19[3] = v41 + *(unsigned int *)(a2 + 288);
                  v23 = *(unsigned int *)(a2 + 312);
                  if ( (_DWORD)v23 )
                  {
                    v24 = (PVOID *)(v19 + 4);
                    v19[4] = v41 + v23;
                  }
                  else
                  {
                    v24 = (PVOID *)((char *)v31 + 32);
                    *((_QWORD *)v31 + 4) = 0LL;
                  }
                  v25 = v31;
                  *((_DWORD *)v31 + 18) = *(_DWORD *)(a2 + 320);
                  v25[6] = *(_QWORD *)(a2 + 272);
                  v26 = *(_QWORD *)(a2 + 272) - (_QWORD)*v22;
                  v25[7] = v26;
                  v27 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
                  if ( v27 && ((v28 = *(_WORD *)(v27 + 8), v28 == 332) || v28 == 452) )
                    *(_QWORD *)*v21 = *v20;
                  else
                    *(_QWORD *)*v21 = v26;
                  *(_QWORD *)(*v21 + 8LL) = v43;
                  v5 = ZwFlushInstructionCache((HANDLE)0xFFFFFFFFFFFFFFFFLL, *v22, *(_DWORD *)(a2 + 284));
                  if ( v5 >= 0 )
                  {
                    if ( !*(_QWORD *)(a2 + 296)
                      || (v5 = ZwFlushInstructionCache((HANDLE)0xFFFFFFFFFFFFFFFFLL, *v24, *(_DWORD *)(a2 + 308)),
                          v5 >= 0) )
                    {
                      if ( a3 )
                      {
                        *a3 = v31;
                        v31 = 0LL;
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
LABEL_66:
  if ( MemoryDescriptorList )
  {
    if ( v32 )
      MmUnlockPages(MemoryDescriptorList);
    IoFreeMdl(MemoryDescriptorList);
  }
  if ( Mdl )
  {
    if ( v34 )
      MmUnlockPages(Mdl);
    IoFreeMdl(Mdl);
  }
  if ( v37 )
  {
    if ( v35 )
      MmUnlockPages(v37);
    IoFreeMdl(v37);
  }
  sub_140625A74(a1, (__int64)v31);
  if ( Src )
    ExFreePoolWithTag(Src, 0x42524157u);
  return (unsigned int)v5;
}
