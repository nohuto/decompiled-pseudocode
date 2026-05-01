/*
 * XREFs of ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x18001E720
 * Callers:
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x18001F260 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180020A10 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 * Callees:
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000B03C (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     StringCopyWorkerW @ 0x180013800 (StringCopyWorkerW.c)
 *     CempPackageFamilyNameFromPsmKey @ 0x180018760 (CempPackageFamilyNameFromPsmKey.c)
 *     ?RmpPsmIsSharedEntityFromPsmKey@@YAJPEBGPEAE@Z @ 0x180018958 (-RmpPsmIsSharedEntityFromPsmKey@@YAJPEBGPEAE@Z.c)
 *     ?LogPendingEnd@ResourceSet@ExecutionModel@@AEAAXXZ @ 0x18001ADD0 (-LogPendingEnd@ResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18001B140 (-RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001B450 (-RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001B4C4 (-HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18001E540 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180020460 (-RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpPsmAppFamilyCompareForHashTable@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z @ 0x180038418 (-RmpPsmAppFamilyCompareForHashTable@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z.c)
 *     ?RmpActivityHostHasPpleResourceSet@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003D794 (-RmpActivityHostHasPpleResourceSet@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ExecutionModel::ResourceSet::CompleteAcquire(ExecutionModel::ResourceSet *this, int a2)
{
  _QWORD *v2; // rax
  char v3; // r13
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // xmm1_8
  __int64 v9; // rdi
  unsigned __int64 v10; // r12
  _QWORD *v11; // r14
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbx
  _DWORD *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // r15
  int v23; // ebx
  size_t *v24; // r8
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  WCHAR *v29; // rbx
  __int64 v30; // rdi
  __int64 v31; // rdx
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // r8
  unsigned int v34; // edx
  __int64 v35; // r10
  unsigned __int64 v36; // r9
  unsigned __int64 v37; // rdi
  unsigned __int64 v38; // r15
  unsigned __int64 v39; // r8
  unsigned __int64 v40; // r15
  int v41; // eax
  unsigned int v42; // eax
  struct _RM_ACTIVITY_HOST *v43; // rbx
  __int64 v44; // rcx
  unsigned int cchToCopya; // [rsp+20h] [rbp-E0h]
  size_t cchToCopy; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v47[4]; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR v48; // [rsp+54h] [rbp-ACh] BYREF
  int v49; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v50; // [rsp+60h] [rbp-A0h]
  __int64 v51; // [rsp+68h] [rbp-98h]
  __int128 v52; // [rsp+70h] [rbp-90h] BYREF
  __int64 v53; // [rsp+80h] [rbp-80h]
  unsigned __int64 v54; // [rsp+88h] [rbp-78h]
  unsigned __int64 v55; // [rsp+90h] [rbp-70h]
  wchar_t pszDest[232]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v57; // [rsp+270h] [rbp+170h] BYREF
  __int128 v58; // [rsp+280h] [rbp+180h]
  __int128 v59; // [rsp+290h] [rbp+190h]
  __int128 v60; // [rsp+2A0h] [rbp+1A0h]
  int v61; // [rsp+2B0h] [rbp+1B0h]
  int v62; // [rsp+2B4h] [rbp+1B4h]
  wchar_t pszSrc[232]; // [rsp+2C0h] [rbp+1C0h] BYREF

  v2 = (_QWORD *)(*((_QWORD *)this + 179) + 80LL);
  LODWORD(v52) = -1;
  *((_QWORD *)&v52 + 1) = 0LL;
  v3 = a2;
  LODWORD(v53) = 101;
  WORD2(v53) = 0;
  v49 = a2;
  v5 = *v2;
  if ( *(_QWORD **)(*v2 + 8LL) != v2 )
    goto LABEL_38;
  v6 = (_QWORD *)v2[1];
  if ( (_QWORD *)*v6 != v2 )
    goto LABEL_38;
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  *v2 = 0LL;
  v2[1] = 0LL;
  v7 = *((_QWORD *)this + 23);
  v8 = *((_QWORD *)this + 200);
  cchToCopya = *((_DWORD *)this + 2);
  v52 = *((_OWORD *)this + 99);
  v53 = v8;
  ExecutionModel::BaseResourceSet::RecursiveVisit(v7, 1, 1u, (int *)&v52, cchToCopya, 1, &v48, v47, 0LL, (__int64)this);
  v9 = *((_QWORD *)this + 180);
  *((_DWORD *)this + 350) = 2;
  if ( (*(_BYTE *)(v9 + 812) & 1) == 0 )
    goto LABEL_26;
  v10 = *((_QWORD *)this + 3);
  v11 = (_QWORD *)((char *)this + 1416);
  v12 = *((_QWORD *)this + 177);
  v50 = v10;
  if ( *(ExecutionModel::ResourceSet **)(v12 + 8) != (ExecutionModel::ResourceSet *)((char *)this + 1416) )
    goto LABEL_38;
  v13 = (_QWORD *)*((_QWORD *)this + 178);
  if ( (_QWORD *)*v13 != v11 )
    goto LABEL_38;
  *v13 = v12;
  *(_QWORD *)(v12 + 8) = v13;
  *v11 = 0LL;
  *((_QWORD *)this + 178) = 0LL;
  --*(_DWORD *)(v9 + 1072);
  v14 = *(_QWORD *)this;
  *((_DWORD *)this + 362) = 2;
  (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(v14 + 16))(this);
  (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)this + 16LL))(this);
  v15 = *((_QWORD *)this + 180);
  (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)this + 8LL))(this);
  v16 = (_DWORD *)(v15 + 1080);
  (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)this + 8LL))(this);
  v17 = *(_QWORD *)v16;
  if ( *(_DWORD **)(*(_QWORD *)v16 + 8LL) != v16 )
LABEL_38:
    __fastfail(3u);
  *v11 = v17;
  *((_QWORD *)this + 178) = v16;
  *(_QWORD *)(v17 + 8) = v11;
  *(_QWORD *)v16 = v11;
  ++v16[4];
  *((_DWORD *)this + 362) = 1;
  *((_BYTE *)this + 12) = 1;
  RmpActivityHostUpdateDigests((struct _RM_ACTIVITY_HOST *)v9, 3);
  RmpActivityHostUpdateImportance((struct _RM_ACTIVITY_HOST *)v9, 3u);
  QueryUnbiasedInterruptTime((PULONGLONG)(v9 + 1400));
  if ( (unsigned int)RmpActivityHostIsRevocable((struct _RM_ACTIVITY_HOST *)v9) )
    SetEvent(*(HANDLE *)(*(_QWORD *)(v9 + 56) + 88LL));
  v18 = *(_QWORD *)(v9 + 48);
  v19 = 0LL;
  *(_QWORD *)(v9 + 1152) = 0LL;
  v20 = *(_QWORD *)(v18 + 2688);
  v21 = *(_DWORD *)(v20 + 184);
  if ( (v21 & 3) == 0 )
  {
    *(_DWORD *)(v20 + 184) = v21 | 1;
    TpPostWork(*(_QWORD *)(v20 + 168));
  }
  if ( (*(_BYTE *)(v9 + 812) & 1) != 0
    || (int)RmpActivityHostComputeAndApplyEnforcementSettings((struct _RM_ACTIVITY_HOST *)v9) >= 0 )
  {
    ExecutionModel::ResourceManager::HostApplyExternalResourcePriorities(v10, (struct _RM_ACTIVITY_HOST *)v9);
    if ( *(_DWORD *)(v9 + 624) == 2 )
    {
      v47[0] = 0;
      RmpPsmIsSharedEntityFromPsmKey((const unsigned __int16 *)(v9 + 88), v47);
      if ( !v47[0] )
      {
        v22 = *(_QWORD *)(v9 + 48);
        v51 = v22;
        if ( CempPackageFamilyNameFromPsmKey(v9 + 88, (__int64)pszSrc) >= 0 )
        {
          v23 = *(_DWORD *)(v9 + 620);
          memset_0(pszDest, 0, 0x218uLL);
          StringCopyWorkerW(pszDest, 0xE8uLL, v24, pszSrc, cchToCopy);
          v25 = *(_OWORD *)(v9 + 552);
          v26 = *(_OWORD *)(v9 + 568);
          v61 = *(_DWORD *)(v9 + 616);
          v57 = v25;
          v27 = *(_OWORD *)(v9 + 584);
          v62 = v23;
          v58 = v26;
          v28 = *(_OWORD *)(v9 + 600);
          v59 = v27;
          v60 = v28;
          v29 = pszDest;
          v30 = 314159LL;
          do
          {
            v48 = RtlUpcaseUnicodeChar(*v29++);
            v30 = HIBYTE(v48) + 37 * ((unsigned __int8)v48 + 37 * v30);
          }
          while ( v29 < (WCHAR *)&v57 );
          v31 = BYTE1(v62)
              + 37
              * ((unsigned __int8)v62
               + 37
               * (HIBYTE(v61)
                + 37
                * (BYTE2(v61)
                 + 37
                 * (BYTE1(v61)
                  + 37
                  * ((unsigned __int8)v61
                   + 37
                   * (HIBYTE(v60) + 37 * (BYTE14(v60) + 37 * (BYTE13(v60) + 37 * (BYTE12(v60) + 37LL * BYTE11(v60))))))))));
          v32 = 0xBEEC149AF4096455uLL * BYTE2(v59)
              + 0x3C82EBCCD629C471LL * BYTE3(v59)
              + 0x8DBD43762DDB26BDuLL * BYTE12(v58)
              + 0x78803D01F0C17231LL * BYTE3(v58)
              + 0xF5BCA5B282606D41uLL * BYTE7(v58)
              + 0x423D249C25A50325LL * BYTE6(v57)
              + 0x407AFAF12AFB592DLL * BYTE8(v59)
              + 0x4128EAEEFF459821LL * HIBYTE(v57)
              + 0xECFE0C79B5739BCDuLL * (unsigned __int8)v60
              + 0xAA604B65C241EDD5uLL * BYTE2(v57)
              + 0xBD1CBAC2ED25B97DuLL * BYTE12(v57)
              + 0xBD90C36322378919uLL * BYTE5(v60)
              + 0x2B26220C747DAB5DLL * BYTE4(v59)
              + 0x84417E6FF051D6ADuLL * BYTE8(v57)
              + 0x92D64A9170D97459uLL * BYTE5(v57)
              + 0x38F8C7054F6DD0DDLL * BYTE4(v57)
              + 0x1CF3332BD290D80DLL * (unsigned __int8)v57
              + 0x2ECBEADD94E1B3F5LL * BYTE10(v59)
              + 0xDB9C20F4D76948E5uLL * BYTE6(v60)
              + 0x1D77462DBBD40701LL * BYTE7(v57)
              + 0xB5A728F1B3DF494DuLL * (unsigned __int8)v58
              + 0x6A88D147CBF58115LL * BYTE2(v58)
              + 0x8443F2CCD7EFCA65uLL * BYTE6(v58)
              + 0x4FE1DAF580C363FDLL * BYTE12(v59)
              + 0x8B7970C2A4EFB2A9uLL * BYTE9(v60)
              + 0x4D463845869B9CD9LL * BYTE5(v59)
              + 0x5D853AC4C14E51E9LL * BYTE9(v57)
              + 0x65EC3D53F206D09DLL * BYTE4(v60)
              + 0x1DD2179B35A84099LL * BYTE5(v58)
              + 0xC8228AB72E6AE889uLL * BYTE1(v60)
              + 0x7C5AC014A0AC9951LL * BYTE11(v58)
              + 0x6AE9F48AE50EFCC5LL * BYTE14(v57)
              + 0x65C63F607A7BA809LL * BYTE1(v58)
              + 0x3433B6F080FF8F35LL * BYTE10(v60)
              + 0x5A90B6DB573C2B45LL * BYTE14(v59)
              + 0xD1A7F3AEDA1FE1A5uLL * BYTE6(v59)
              + 0x7DA9078FE6510661LL * HIBYTE(v58)
              + 0x296E17CC49B5EC05LL * BYTE14(v58)
              + 0x981EFA65455B8049uLL * BYTE1(v59)
              + 0x14D2E4F3AFFE229LL * (BYTE9(v58) + 37LL * BYTE8(v58))
              + 37 * (BYTE2(v62) + 37 * v31);
          v33 = HIBYTE(v62)
              + 0x2F2665556EEF39E1LL * v30
              + 0xC53F5E946719795LL * BYTE2(v60)
              + 0x16EA6DB39BB240F9LL * BYTE13(v59)
              + 0x5526FE2C4673CF11LL * BYTE11(v57)
              + 0xF91DC2FB38F228B5uLL * BYTE10(v58)
              + 0x3BF4C3C47ADF2FF1LL * BYTE3(v57)
              + 0x40B7CD9739B584A1LL * HIBYTE(v59)
              + 0xDC6C00E405D269C1uLL * BYTE7(v60)
              + 0x4EA2BC662EBCED75LL * BYTE10(v57)
              + 0x4F5D696EC151561DLL * BYTE4(v58)
              + 0x9FEAE5B513875FC9uLL * BYTE1(v57)
              + 0xFCE97086A74B1CB9uLL * BYTE13(v58)
              + 0xC378F206849F0269uLL * BYTE9(v59)
              + 0xFC7A30A306398A8DuLL * (unsigned __int8)v59
              + 0x51C644DB3653E381LL * BYTE7(v59)
              + 0x73D058131B2A8879LL * BYTE13(v57)
              + 0x8BA4A57B9C3D7391uLL * BYTE11(v59)
              + 0x288D4C21D6A4D26DLL * BYTE8(v60)
              + 0xBB24DD21FAFC26B1uLL * BYTE3(v60)
              + v32;
          v55 = v33;
          v19 = 0LL;
LABEL_18:
          v34 = *(_DWORD *)(v22 + 2452);
          v35 = -1LL << (*(_BYTE *)(v22 + 2452) & 0x1F);
          v36 = v33 & v35;
          v37 = (v33 & v35) >> 56;
          v38 = v33 & v35;
          v39 = (v33 & v35) >> 48;
          v40 = HIDWORD(v38);
          v54 = v36 >> 8;
          if ( v19 )
          {
            v22 = v51;
LABEL_21:
            while ( 1 )
            {
              v19 = *(_QWORD *)v19;
              if ( (v19 & 1) != 0 )
                break;
              if ( v36 == (v35 & *(_QWORD *)(v19 + 8)) )
              {
                v42 = RmpPsmAppFamilyCompareForHashTable((struct _RTL_HASH_ENTRY *)v19, pszDest);
                v33 = v55;
                if ( !v42 )
                  goto LABEL_18;
                v10 = v50;
                v3 = v49;
                if ( !v19 )
                  goto LABEL_37;
                goto LABEL_25;
              }
            }
          }
          else if ( v34 >= 0x20 )
          {
            v41 = (unsigned __int8)v40;
            v22 = v51;
            v19 = *(_QWORD *)(v51 + 2456)
                + 8LL
                * (((_DWORD)v37
                  + 37
                  * ((unsigned __int8)v39
                   + 37
                   * (BYTE5(v36)
                    + 37
                    * (v41
                     + 37
                     * (BYTE3(v36)
                      + 37 * (BYTE2(v36) + 37 * ((unsigned __int8)v54 + 37 * ((unsigned __int8)v36 + 11623883)))))))) & ((v34 >> 5) - 1));
            goto LABEL_21;
          }
          v3 = v49;
          v10 = v50;
LABEL_37:
          v19 = 0LL;
        }
LABEL_25:
        v43 = *(struct _RM_ACTIVITY_HOST **)(v19 + 568);
        if ( v43 && RmpActivityHostHasPpleResourceSet(v43) )
          ExecutionModel::ResourceManager::HostApplyExternalResourcePriorities(v10, v43);
      }
    }
  }
LABEL_26:
  if ( (v3 & 1) != 0 )
  {
    v44 = *((_QWORD *)this + 229);
    if ( v44 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v44 + 32LL))(v44, *((_QWORD *)this + 230));
    *((_DWORD *)this + 363) |= 1u;
    ExecutionModel::ResourceSet::LogPendingEnd(this);
  }
}
