/*
 * XREFs of ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x1800207E0
 * Callers:
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x180021320 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180022DB0 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 * Callees:
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000BF94 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     StringCopyWorkerW @ 0x18001A290 (StringCopyWorkerW.c)
 *     CempPackageFamilyNameFromPsmKey @ 0x18001B0B0 (CempPackageFamilyNameFromPsmKey.c)
 *     ?RmpPsmIsSharedEntityFromPsmKey@@YAJPEBGPEAE@Z @ 0x18001B35C (-RmpPsmIsSharedEntityFromPsmKey@@YAJPEBGPEAE@Z.c)
 *     ?LogPendingEnd@ResourceSet@ExecutionModel@@AEAAXXZ @ 0x18001D730 (-LogPendingEnd@ResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18001DAA0 (-RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001DD90 (-RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001DE04 (-HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x180020610 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180022810 (-RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpPsmAppFamilyCompareForHashTable@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z @ 0x180039474 (-RmpPsmAppFamilyCompareForHashTable@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z.c)
 *     ?RmpActivityHostHasPpleResourceSet@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180040E60 (-RmpActivityHostHasPpleResourceSet@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ExecutionModel::ResourceSet::CompleteAcquire(ExecutionModel::ResourceSet *this, int a2)
{
  char v2; // r12
  _QWORD *v3; // rax
  __int64 v5; // r8
  _QWORD *v6; // rcx
  __int64 v7; // xmm1_8
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // rdi
  unsigned __int64 v11; // r13
  _QWORD *v12; // r14
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rbx
  _DWORD *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // r15
  int v24; // ebx
  size_t *v25; // r8
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  wchar_t *v30; // rbx
  __int64 v31; // rdi
  __int64 v32; // rdx
  unsigned __int64 v33; // r14
  unsigned __int64 v34; // r14
  __int64 v35; // r10
  unsigned __int64 v36; // r9
  struct _RM_ACTIVITY_HOST *v37; // rbx
  __int64 v38; // rcx
  unsigned int cchToCopya; // [rsp+20h] [rbp-E0h]
  size_t cchToCopy; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v41[4]; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR v42; // [rsp+54h] [rbp-ACh] BYREF
  int v43; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v44; // [rsp+60h] [rbp-A0h]
  __int64 v45; // [rsp+68h] [rbp-98h]
  __int128 v46; // [rsp+70h] [rbp-90h] BYREF
  __int64 v47; // [rsp+80h] [rbp-80h]
  wchar_t pszDest[232]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v49; // [rsp+260h] [rbp+160h] BYREF
  __int128 v50; // [rsp+270h] [rbp+170h]
  __int128 v51; // [rsp+280h] [rbp+180h]
  __int128 v52; // [rsp+290h] [rbp+190h]
  int v53; // [rsp+2A0h] [rbp+1A0h]
  int v54; // [rsp+2A4h] [rbp+1A4h]
  wchar_t pszSrc[232]; // [rsp+2B0h] [rbp+1B0h] BYREF

  v2 = a2;
  v3 = (_QWORD *)(*((_QWORD *)this + 164) + 80LL);
  v43 = a2;
  v5 = *v3;
  if ( *(_QWORD **)(*v3 + 8LL) != v3 )
    goto LABEL_38;
  v6 = (_QWORD *)v3[1];
  if ( (_QWORD *)*v6 != v3 )
    goto LABEL_38;
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  *v3 = 0LL;
  v3[1] = 0LL;
  v7 = *((_QWORD *)this + 185);
  v8 = *((_QWORD *)this + 8);
  cchToCopya = *((_DWORD *)this + 2);
  v46 = *(_OWORD *)((char *)this + 1464);
  v47 = v7;
  ExecutionModel::BaseResourceSet::RecursiveVisit(v8, 1, 1u, (int *)&v46, cchToCopya, 1, &v42, v41, 0LL, (__int64)this);
  v10 = *((_QWORD *)this + 165);
  *((_DWORD *)this + 320) = 2;
  if ( (*(_BYTE *)(v10 + 836) & 1) == 0 )
    goto LABEL_25;
  v11 = *((_QWORD *)this + 3);
  v12 = (_QWORD *)((char *)this + 1296);
  v13 = *((_QWORD *)this + 162);
  v44 = v11;
  if ( *(ExecutionModel::ResourceSet **)(v13 + 8) != (ExecutionModel::ResourceSet *)((char *)this + 1296) )
    goto LABEL_38;
  v14 = (_QWORD *)*((_QWORD *)this + 163);
  if ( (_QWORD *)*v14 != v12 )
    goto LABEL_38;
  *v14 = v13;
  *(_QWORD *)(v13 + 8) = v14;
  *v12 = 0LL;
  *((_QWORD *)this + 163) = 0LL;
  --*(_DWORD *)(v10 + 1128);
  v15 = *(_QWORD *)this;
  *((_DWORD *)this + 332) = 2;
  (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(v15 + 16))(this);
  (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)this + 16LL))(this);
  v16 = *((_QWORD *)this + 165);
  (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)this + 8LL))(this);
  v17 = (_DWORD *)(v16 + 1136);
  (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)this + 8LL))(this);
  v18 = *(_QWORD *)v17;
  if ( *(_DWORD **)(*(_QWORD *)v17 + 8LL) != v17 )
LABEL_38:
    __fastfail(3u);
  *v12 = v18;
  *((_QWORD *)this + 163) = v17;
  *(_QWORD *)(v18 + 8) = v12;
  *(_QWORD *)v17 = v12;
  ++v17[4];
  *((_DWORD *)this + 332) = 1;
  *((_BYTE *)this + 12) = 1;
  RmpActivityHostUpdateDigests((struct _RM_ACTIVITY_HOST *)v10, 3);
  RmpActivityHostUpdateImportance((struct _RM_ACTIVITY_HOST *)v10, 3u);
  QueryUnbiasedInterruptTime((PULONGLONG)(v10 + 1456));
  if ( (unsigned int)RmpActivityHostIsRevocable((struct _RM_ACTIVITY_HOST *)v10) )
    SetEvent(*(HANDLE *)(*(_QWORD *)(v10 + 56) + 88LL));
  v19 = *(_QWORD *)(v10 + 48);
  v20 = 0LL;
  *(_QWORD *)(v10 + 1208) = 0LL;
  v21 = *(_QWORD *)(v19 + 2624);
  v22 = *(_DWORD *)(v21 + 160);
  if ( (v22 & 3) == 0 )
  {
    *(_DWORD *)(v21 + 160) = v22 | 1;
    TpPostWork(*(_QWORD *)(v21 + 144));
  }
  if ( (*(_BYTE *)(v10 + 836) & 1) != 0 || (int)RmpActivityHostComputeAndApplyEnforcementSettings((char *)v10) >= 0 )
  {
    ExecutionModel::ResourceManager::HostApplyExternalResourcePriorities(v11, (struct _RM_ACTIVITY_HOST *)v10);
    if ( *(_DWORD *)(v10 + 624) == 2 )
    {
      v41[0] = 0;
      RmpPsmIsSharedEntityFromPsmKey((const unsigned __int16 *)(v10 + 88), v41);
      if ( !v41[0] )
      {
        v23 = *(_QWORD *)(v10 + 48);
        v45 = v23;
        if ( CempPackageFamilyNameFromPsmKey(v10 + 88, (__int64)pszSrc) >= 0 )
        {
          v24 = *(_DWORD *)(v10 + 620);
          memset_0(pszDest, 0, sizeof(pszDest));
          StringCopyWorkerW(pszDest, 0xE8uLL, v25, pszSrc, cchToCopy);
          v26 = *(_OWORD *)(v10 + 552);
          v27 = *(_OWORD *)(v10 + 568);
          v53 = *(_DWORD *)(v10 + 616);
          v49 = v26;
          v28 = *(_OWORD *)(v10 + 584);
          v54 = v24;
          v50 = v27;
          v29 = *(_OWORD *)(v10 + 600);
          v51 = v28;
          v52 = v29;
          v30 = pszDest;
          v31 = 314159LL;
          do
          {
            v42 = RtlUpcaseUnicodeChar(*v30++);
            v31 = HIBYTE(v42) + 37 * ((unsigned __int8)v42 + 37 * v31);
          }
          while ( v30 < (wchar_t *)&v49 );
          v32 = BYTE1(v54)
              + 37
              * ((unsigned __int8)v54
               + 37
               * (HIBYTE(v53)
                + 37
                * (BYTE2(v53)
                 + 37
                 * (BYTE1(v53)
                  + 37
                  * ((unsigned __int8)v53
                   + 37
                   * (HIBYTE(v52) + 37 * (BYTE14(v52) + 37 * (BYTE13(v52) + 37 * (BYTE12(v52) + 37LL * BYTE11(v52))))))))));
          v33 = 0xBEEC149AF4096455uLL * BYTE2(v51)
              + 0x3C82EBCCD629C471LL * BYTE3(v51)
              + 0x8DBD43762DDB26BDuLL * BYTE12(v50)
              + 0x78803D01F0C17231LL * BYTE3(v50)
              + 0xF5BCA5B282606D41uLL * BYTE7(v50)
              + 0x423D249C25A50325LL * BYTE6(v49)
              + 0x407AFAF12AFB592DLL * BYTE8(v51)
              + 0x4128EAEEFF459821LL * HIBYTE(v49)
              + 0xECFE0C79B5739BCDuLL * (unsigned __int8)v52
              + 0xAA604B65C241EDD5uLL * BYTE2(v49)
              + 0xBD1CBAC2ED25B97DuLL * BYTE12(v49)
              + 0xBD90C36322378919uLL * BYTE5(v52)
              + 0x2B26220C747DAB5DLL * BYTE4(v51)
              + 0x84417E6FF051D6ADuLL * BYTE8(v49)
              + 0x92D64A9170D97459uLL * BYTE5(v49)
              + 0x38F8C7054F6DD0DDLL * BYTE4(v49)
              + 0x1CF3332BD290D80DLL * (unsigned __int8)v49
              + 0x2ECBEADD94E1B3F5LL * BYTE10(v51)
              + 0xDB9C20F4D76948E5uLL * BYTE6(v52)
              + 0x1D77462DBBD40701LL * BYTE7(v49)
              + 0xB5A728F1B3DF494DuLL * (unsigned __int8)v50
              + 0x6A88D147CBF58115LL * BYTE2(v50)
              + 0x8443F2CCD7EFCA65uLL * BYTE6(v50)
              + 0x4FE1DAF580C363FDLL * BYTE12(v51)
              + 0x8B7970C2A4EFB2A9uLL * BYTE9(v52)
              + 0x4D463845869B9CD9LL * BYTE5(v51)
              + 0x5D853AC4C14E51E9LL * BYTE9(v49)
              + 0x65EC3D53F206D09DLL * BYTE4(v52)
              + 0x1DD2179B35A84099LL * BYTE5(v50)
              + 0xC8228AB72E6AE889uLL * BYTE1(v52)
              + 0x7C5AC014A0AC9951LL * BYTE11(v50)
              + 0x6AE9F48AE50EFCC5LL * BYTE14(v49)
              + 0x65C63F607A7BA809LL * BYTE1(v50)
              + 0x3433B6F080FF8F35LL * BYTE10(v52)
              + 0x5A90B6DB573C2B45LL * BYTE14(v51)
              + 0xD1A7F3AEDA1FE1A5uLL * BYTE6(v51)
              + 0x7DA9078FE6510661LL * HIBYTE(v50)
              + 0x296E17CC49B5EC05LL * BYTE14(v50)
              + 0x981EFA65455B8049uLL * BYTE1(v51)
              + 0x14D2E4F3AFFE229LL * (BYTE9(v50) + 37LL * BYTE8(v50))
              + 37 * (BYTE2(v54) + 37 * v32);
          v34 = HIBYTE(v54)
              + 0x2F2665556EEF39E1LL * v31
              + 0xC53F5E946719795LL * BYTE2(v52)
              + 0x16EA6DB39BB240F9LL * BYTE13(v51)
              + 0x5526FE2C4673CF11LL * BYTE11(v49)
              + 0xF91DC2FB38F228B5uLL * BYTE10(v50)
              + 0x3BF4C3C47ADF2FF1LL * BYTE3(v49)
              + 0x40B7CD9739B584A1LL * HIBYTE(v51)
              + 0xDC6C00E405D269C1uLL * BYTE7(v52)
              + 0x4EA2BC662EBCED75LL * BYTE10(v49)
              + 0x4F5D696EC151561DLL * BYTE4(v50)
              + 0x9FEAE5B513875FC9uLL * BYTE1(v49)
              + 0xFCE97086A74B1CB9uLL * BYTE13(v50)
              + 0xC378F206849F0269uLL * BYTE9(v51)
              + 0xFC7A30A306398A8DuLL * (unsigned __int8)v51
              + 0x51C644DB3653E381LL * BYTE7(v51)
              + 0x73D058131B2A8879LL * BYTE13(v49)
              + 0x8BA4A57B9C3D7391uLL * BYTE11(v51)
              + 0x288D4C21D6A4D26DLL * BYTE8(v52)
              + 0xBB24DD21FAFC26B1uLL * BYTE3(v52)
              + v33;
          v20 = 0LL;
LABEL_18:
          v35 = -1LL << (*(_BYTE *)(v23 + 2452) & 0x1F);
          v36 = v34 & v35;
          v9 = (v34 & v35) >> 8;
          if ( v20 )
          {
            v23 = v45;
            goto LABEL_20;
          }
          if ( *(_DWORD *)(v45 + 2452) >= 0x20u )
          {
            v23 = v45;
            LODWORD(v9) = (unsigned __int8)((v34 & v35) >> 48)
                        + 37
                        * ((unsigned __int8)((unsigned __int16)((v34 & v35) >> 32) >> 8)
                         + 37
                         * ((unsigned __int8)((v34 & v35) >> 32)
                          + 37
                          * ((((unsigned int)v34 & (unsigned int)v35) >> 24)
                           + 37
                           * ((unsigned __int8)(((unsigned int)v34 & (unsigned int)v35) >> 16)
                            + 37 * ((unsigned __int8)v9 + 37 * ((unsigned __int8)v36 + 11623883))))));
            v20 = *(_QWORD *)(v45 + 2456)
                + 8 * ((((v34 & v35) >> 56) + 37 * (int)v9) & (unsigned int)((*(_DWORD *)(v45 + 2452) >> 5) - 1));
LABEL_20:
            while ( 1 )
            {
              v20 = *(_QWORD *)v20;
              if ( (v20 & 1) != 0 )
                break;
              if ( v36 == (v35 & *(_QWORD *)(v20 + 8)) )
              {
                if ( !RmpPsmAppFamilyCompareForHashTable((struct _RTL_HASH_ENTRY *)v20, pszDest) )
                  goto LABEL_18;
                v2 = v43;
                v11 = v44;
                if ( !v20 )
                  goto LABEL_33;
                goto LABEL_24;
              }
            }
          }
          v11 = v44;
          v2 = v43;
LABEL_33:
          v20 = 0LL;
        }
LABEL_24:
        v37 = *(struct _RM_ACTIVITY_HOST **)(v20 + 568);
        if ( v37 && RmpActivityHostHasPpleResourceSet(v37) )
          ExecutionModel::ResourceManager::HostApplyExternalResourcePriorities(v11, v37);
      }
    }
  }
LABEL_25:
  if ( (v2 & 1) != 0 )
  {
    v38 = *((_QWORD *)this + 214);
    if ( v38 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v38 + 32LL))(v38, *((_QWORD *)this + 215));
    *((_DWORD *)this + 333) |= 1u;
    ExecutionModel::ResourceSet::LogPendingEnd(this, v9);
  }
}
