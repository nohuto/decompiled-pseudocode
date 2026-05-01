/*
 * XREFs of ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x180018F20
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180008370 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000B03C (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     CempPackageFamilyNameFromPsmKey @ 0x180018760 (CempPackageFamilyNameFromPsmKey.c)
 *     ?RmpPsmAppFamilyIdInitialize@@YAXPEBGPEAT_RM_SID@@KPEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x180018890 (-RmpPsmAppFamilyIdInitialize@@YAXPEBGPEAT_RM_SID@@KPEAU_RM_PSM_APP_FAMILY_ID@@@Z.c)
 *     ?RmpPsmIsSharedEntityFromPsmKey@@YAJPEBGPEAE@Z @ 0x180018958 (-RmpPsmIsSharedEntityFromPsmKey@@YAJPEBGPEAE@Z.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXXZ @ 0x180018A10 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     ?RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18001B140 (-RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001B450 (-RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001B4C4 (-HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@.c)
 *     ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180020460 (-RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180024860 (-RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800277F0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpPsmAppFamilyCompareForHashTable@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z @ 0x180038418 (-RmpPsmAppFamilyCompareForHashTable@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z.c)
 *     ?RmpActivityHostGetResourceSetCount@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x1800391FC (-RmpActivityHostGetResourceSetCount@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostHasPpleResourceSet@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003D794 (-RmpActivityHostHasPpleResourceSet@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::ReleaseResourcesInternal(ExecutionModel::ResourceSet *this, UCHAR a2)
{
  __int64 v2; // rsi
  unsigned int v4; // r11d
  unsigned int v5; // ebx
  unsigned int v6; // r15d
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  ExecutionModel::ResourceManager *v10; // rdi
  __int64 v11; // r14
  WCHAR *v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rdx
  unsigned __int64 v15; // r8
  __int64 v16; // rbx
  unsigned __int64 v17; // r8
  unsigned int v18; // edx
  __int64 v19; // r10
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // r8
  unsigned int v23; // eax
  struct _RM_ACTIVITY_HOST *v24; // rbx
  DWORD v25; // r14d
  _QWORD *Value; // rdi
  _QWORD *v27; // rax
  unsigned int ResourceSetCount; // eax
  unsigned __int8 v31[4]; // [rsp+20h] [rbp-E0h] BYREF
  WCHAR v32; // [rsp+24h] [rbp-DCh]
  ExecutionModel::ResourceManager *v33; // [rsp+28h] [rbp-D8h]
  __int64 v34; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v35; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v36; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v37; // [rsp+48h] [rbp-B8h]
  _BYTE v38[464]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v39[80]; // [rsp+220h] [rbp+120h] BYREF
  char v40[464]; // [rsp+270h] [rbp+170h] BYREF

  v2 = *((_QWORD *)this + 180);
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v2 + 16)) <= 1 )
    __fastfail(0xEu);
  if ( *((_DWORD *)this + 350) )
  {
    v4 = 2;
    if ( (a2 & 2) != 0
      && *((_BYTE *)this + 12)
      && (ResourceSetCount = RmpActivityHostGetResourceSetCount((struct _RM_ACTIVITY_HOST *)v2, 2u),
          ResourceSetCount < v4) )
    {
      v6 = -2147220221;
    }
    else
    {
      v5 = 1;
      if ( *((_BYTE *)this + 12) )
        v5 = v4;
      ExecutionModel::ResourceSet::PerformReleaseResources(this, a2);
      RmpActivityHostUpdateDigests((struct _RM_ACTIVITY_HOST *)v2, v5);
      RmpActivityHostUpdateImportance((struct _RM_ACTIVITY_HOST *)v2, v5);
      QueryUnbiasedInterruptTime((PULONGLONG)(v2 + 1400));
      if ( RmpActivityHostIsRevocable((struct _RM_ACTIVITY_HOST *)v2) )
        SetEvent(*(HANDLE *)(*(_QWORD *)(v2 + 56) + 88LL));
      v6 = 0;
      if ( (v5 & 2) != 0 )
      {
        v7 = *(_QWORD *)(v2 + 48);
        *(_QWORD *)(v2 + 1152) = 0LL;
        v8 = *(_QWORD *)(v7 + 2688);
        v9 = *(_DWORD *)(v8 + 184);
        if ( (v9 & 3) == 0 )
        {
          *(_DWORD *)(v8 + 184) = v9 | 1;
          TpPostWork(*(_QWORD *)(v8 + 168));
        }
      }
      if ( v5 == 2 )
      {
        if ( (*(_BYTE *)(v2 + 812) & 1) == 0 )
          RmpActivityHostComputeAndApplyEnforcementSettings((struct _RM_ACTIVITY_HOST *)v2);
        v10 = (ExecutionModel::ResourceManager *)*((_QWORD *)this + 3);
        v33 = v10;
        ExecutionModel::ResourceManager::HostApplyExternalResourcePriorities(v10, (struct _RM_ACTIVITY_HOST *)v2);
        if ( *(_DWORD *)(v2 + 624) == 2 )
        {
          v31[0] = 0;
          RmpPsmIsSharedEntityFromPsmKey((const unsigned __int16 *)(v2 + 88), v31);
          if ( !v31[0] )
          {
            v11 = *(_QWORD *)(v2 + 48);
            v34 = v11;
            if ( CempPackageFamilyNameFromPsmKey(v2 + 88, (__int64)v40) >= 0 )
            {
              RmpPsmAppFamilyIdInitialize(
                v40,
                (union _RM_SID *)(v2 + 552),
                *(_DWORD *)(v2 + 620),
                (struct _RM_PSM_APP_FAMILY_ID *)v38);
              v12 = (WCHAR *)v38;
              v13 = 314159LL;
              do
              {
                v32 = RtlUpcaseUnicodeChar(*v12++);
                v13 = HIBYTE(v32) + 37 * ((unsigned __int8)v32 + 37 * v13);
              }
              while ( v12 < (WCHAR *)v39 );
              v14 = v39[69]
                  + 37
                  * (v39[68]
                   + 37
                   * (v39[67]
                    + 37
                    * (v39[66]
                     + 37
                     * (v39[65]
                      + 37
                      * (v39[64] + 37 * (v39[63] + 37 * (v39[62] + 37 * (v39[61] + 37 * (v39[60] + 37LL * v39[59])))))))));
              v15 = 0x78803D01F0C17231LL * v39[19]
                  + 0x407AFAF12AFB592DLL * v39[40]
                  + 0x4128EAEEFF459821LL * v39[15]
                  + 0xBD90C36322378919uLL * v39[53]
                  + 0x2B26220C747DAB5DLL * v39[36]
                  + 0xECFE0C79B5739BCDuLL * v39[48]
                  + 0xAA604B65C241EDD5uLL * v39[2]
                  + 0xBD1CBAC2ED25B97DuLL * v39[12]
                  + 0x84417E6FF051D6ADuLL * v39[8]
                  + 0x92D64A9170D97459uLL * v39[5]
                  + 0x288D4C21D6A4D26DLL * v39[56]
                  + 0x38F8C7054F6DD0DDLL * v39[4]
                  + 0x2ECBEADD94E1B3F5LL * v39[42]
                  + 0xDB9C20F4D76948E5uLL * v39[54]
                  + 0x1D77462DBBD40701LL * v39[7]
                  + 0xB5A728F1B3DF494DuLL * v39[16]
                  + 0x8443F2CCD7EFCA65uLL * v39[22]
                  + 0x8B7970C2A4EFB2A9uLL * v39[57]
                  + 0x1CF3332BD290D80DLL * v39[0]
                  + 0x4D463845869B9CD9LL * v39[37]
                  + 0x6A88D147CBF58115LL * v39[18]
                  + 0x4FE1DAF580C363FDLL * v39[44]
                  + 0x5D853AC4C14E51E9LL * v39[9]
                  + 0x65EC3D53F206D09DLL * v39[52]
                  + 0x1DD2179B35A84099LL * v39[21]
                  + 0xC8228AB72E6AE889uLL * v39[49]
                  + 0x7C5AC014A0AC9951LL * v39[27]
                  + 0x6AE9F48AE50EFCC5LL * v39[14]
                  + 0x65C63F607A7BA809LL * v39[17]
                  + 0x3433B6F080FF8F35LL * v39[58]
                  + 0x5A90B6DB573C2B45LL * v39[46]
                  + 0xD1A7F3AEDA1FE1A5uLL * v39[38]
                  + 0x7DA9078FE6510661LL * v39[31]
                  + 0x296E17CC49B5EC05LL * v39[30]
                  + 0x16EA6DB39BB240F9LL * v39[45]
                  + 0x5526FE2C4673CF11LL * v39[11]
                  + 0x981EFA65455B8049uLL * v39[33]
                  + 0xC53F5E946719795LL * v39[50]
                  + 0xF91DC2FB38F228B5uLL * v39[26]
                  + 0x14D2E4F3AFFE229LL * (v39[25] + 37LL * v39[24])
                  + 37 * (v39[70] + 37 * v14);
              v16 = 0LL;
              v17 = v39[71]
                  + 0x2F2665556EEF39E1LL * v13
                  + 0x3BF4C3C47ADF2FF1LL * v39[3]
                  + 0x73D058131B2A8879LL * v39[13]
                  + 0x40B7CD9739B584A1LL * v39[47]
                  + 0xDC6C00E405D269C1uLL * v39[55]
                  + 0x4EA2BC662EBCED75LL * v39[10]
                  + 0x4F5D696EC151561DLL * v39[20]
                  + 0xBB24DD21FAFC26B1uLL * v39[51]
                  + 0xBEEC149AF4096455uLL * v39[34]
                  + 0x9FEAE5B513875FC9uLL * v39[1]
                  + 0xF5BCA5B282606D41uLL * v39[23]
                  + 0x423D249C25A50325LL * v39[6]
                  + 0xFCE97086A74B1CB9uLL * v39[29]
                  + 0xC378F206849F0269uLL * v39[41]
                  + 0xFC7A30A306398A8DuLL * v39[32]
                  + 0x51C644DB3653E381LL * v39[39]
                  + 0x8BA4A57B9C3D7391uLL * v39[43]
                  + 0x3C82EBCCD629C471LL * v39[35]
                  + 0x8DBD43762DDB26BDuLL * v39[28]
                  + v15;
              v37 = v17;
LABEL_20:
              v18 = *(_DWORD *)(v11 + 2452);
              v19 = -1LL << (*(_BYTE *)(v11 + 2452) & 0x1F);
              v20 = v17 & v19;
              v36 = (v17 & v19) >> 16;
              v21 = (v17 & v19) >> 56;
              v22 = (v17 & v19) >> 48;
              v35 = v20 >> 8;
              if ( v16 )
              {
                v11 = v34;
LABEL_23:
                while ( 1 )
                {
                  v16 = *(_QWORD *)v16;
                  if ( (v16 & 1) != 0 )
                    break;
                  if ( v20 == (v19 & *(_QWORD *)(v16 + 8)) )
                  {
                    v23 = RmpPsmAppFamilyCompareForHashTable((struct _RTL_HASH_ENTRY *)v16, v38);
                    v17 = v37;
                    if ( !v23 )
                      goto LABEL_20;
                    v10 = v33;
                    if ( !v16 )
                      goto LABEL_50;
                    goto LABEL_27;
                  }
                }
              }
              else if ( v18 >= 0x20 )
              {
                v11 = v34;
                v16 = *(_QWORD *)(v34 + 2456)
                    + 8LL
                    * (((_DWORD)v21
                      + 37
                      * ((unsigned __int8)v22
                       + 37
                       * (BYTE5(v20)
                        + 37
                        * (BYTE4(v20)
                         + 37
                         * (BYTE3(v20)
                          + 37
                          * ((unsigned __int8)v36 + 37 * ((unsigned __int8)v35 + 37 * ((unsigned __int8)v20 + 11623883)))))))) & ((v18 >> 5) - 1));
                goto LABEL_23;
              }
              v10 = v33;
            }
LABEL_50:
            v16 = 0LL;
LABEL_27:
            v24 = *(struct _RM_ACTIVITY_HOST **)(v16 + 568);
            if ( v24 && RmpActivityHostHasPpleResourceSet(v24) )
              ExecutionModel::ResourceManager::HostApplyExternalResourcePriorities(v10, v24);
          }
        }
      }
      v25 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        Value = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v25) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
          __int2c();
        *Value |= 2uLL;
        ++Value[2];
      }
      RtlAcquireSRWLockExclusive(v2 + 64);
      *(_DWORD *)(v2 + 72) = GetCurrentThreadId();
      if ( RmpActivityHostCanDelete((struct _RM_ACTIVITY_HOST *)v2) )
        HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)(v2 + 64), 1u);
      if ( HampLockTrackerId != -1 )
      {
        v27 = TlsGetValue(HampLockTrackerId);
        if ( (*(_BYTE *)v27 & 2) == 0 )
          __int2c();
        if ( v27[2]-- == 1LL )
          *v27 &= ~2uLL;
      }
      *(_DWORD *)(v2 + 72) = 0;
      RtlReleaseSRWLockExclusive(v2 + 64);
    }
  }
  else
  {
    v6 = 0;
  }
  RmpObjectRelease((struct _RM_OBJECT_HEADER *)v2);
  return v6;
}
