/*
 * XREFs of ?MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z @ 0x18002AFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180008370 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     CempLockTrackerMarkAcquired @ 0x180023D40 (CempLockTrackerMarkAcquired.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800277F0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800499F6 (memcmp_0.c)
 *     memcpy_0 @ 0x180049A02 (memcpy_0.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::MemoryLimitNotification(
        ExecutionModel::ResourceManager *this,
        const unsigned __int16 *a2,
        union _RM_SID *a3,
        int a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  __int64 v10; // r14
  ULONG v11; // eax
  DWORD v12; // edi
  _QWORD *Value; // rbx
  __int64 v14; // rsi
  __int64 v15; // r12
  WCHAR *v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rdx
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // r15
  int v21; // edi
  unsigned __int64 v22; // r15
  unsigned int v23; // edx
  __int64 v24; // r10
  __int64 v25; // r9
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // r15
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned int v32; // edi
  _QWORD *v33; // rax
  bool v34; // zf
  _QWORD *v36; // rax
  WCHAR v37; // [rsp+20h] [rbp-E0h]
  __int64 v38; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v39; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v40; // [rsp+40h] [rbp-C0h]
  wchar_t Destination[232]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE Buf1[68]; // [rsp+220h] [rbp+120h] BYREF
  int v43; // [rsp+264h] [rbp+164h]
  unsigned int v44; // [rsp+268h] [rbp+168h]
  unsigned __int8 v45; // [rsp+26Ch] [rbp+16Ch]
  unsigned __int8 v46; // [rsp+26Dh] [rbp+16Dh]
  unsigned __int8 v47; // [rsp+26Eh] [rbp+16Eh]
  unsigned __int8 v48; // [rsp+26Fh] [rbp+16Fh]
  unsigned __int64 v49; // [rsp+270h] [rbp+170h]

  v10 = 0LL;
  memset_0(Destination, 0, 0x228uLL);
  wcscpy_s(Destination, 0xE8uLL, a2);
  memset_0(Buf1, 0, sizeof(Buf1));
  v11 = RtlLengthSid(a3);
  memcpy_0(Buf1, a3, v11);
  v12 = HampLockTrackerId;
  v44 = a5;
  v49 = a6;
  v43 = a4;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v12) )
      __int2c();
    *Value |= 1uLL;
    ++Value[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  dword_18009BF18 = GetCurrentThreadId();
  v14 = 0LL;
  v15 = *((_QWORD *)this + 18);
  v16 = Destination;
  v38 = v15;
  v17 = 314159LL;
  do
  {
    v37 = RtlUpcaseUnicodeChar(*v16++);
    v17 = HIBYTE(v37) + 37 * ((unsigned __int8)v37 + 37 * v17);
  }
  while ( v16 < (WCHAR *)Buf1 );
  v18 = BYTE5(v49)
      + 37
      * (BYTE4(v49)
       + 37
       * (BYTE3(v49)
        + 37
        * (BYTE2(v49)
         + 37
         * (BYTE1(v49)
          + 37 * ((unsigned __int8)v49 + 37 * (v48 + 37 * (v47 + 37 * (v46 + 37 * (v45 + 37LL * HIBYTE(v44))))))))));
  v19 = 0x78803D01F0C17231LL * Buf1[35]
      + 0xB2261F79558AB0C1uLL * Buf1[7]
      + 0xF5BCA5B282606D41uLL * Buf1[39]
      + 0x423D249C25A50325LL * Buf1[22]
      + 0xFC7A30A306398A8DuLL * Buf1[48]
      + 0x407AFAF12AFB592DLL * Buf1[56]
      + 0x51C644DB3653E381LL * Buf1[55]
      + 0x8BA4A57B9C3D7391uLL * Buf1[59]
      + 0x4128EAEEFF459821LL * Buf1[31]
      + 0x3C82EBCCD629C471LL * Buf1[51]
      + 0xECFE0C79B5739BCDuLL * Buf1[64]
      + 0x8DBD43762DDB26BDuLL * Buf1[44]
      + 0xAA604B65C241EDD5uLL * Buf1[18]
      + 0xBD1CBAC2ED25B97DuLL * Buf1[28]
      + 0xEC517606CCCE0235uLL * Buf1[10]
      + 0xBD90C36322378919uLL * BYTE1(v43)
      + 0x2B26220C747DAB5DLL * Buf1[52]
      + 0x27C60EFB99C651A9LL * Buf1[9]
      + 0x2ECBEADD94E1B3F5LL * Buf1[58]
      + 0xDB9C20F4D76948E5uLL * BYTE2(v43)
      + 0x84417E6FF051D6ADuLL * Buf1[24]
      + 0x92D64A9170D97459uLL * Buf1[21]
      + 0xBF828C895D0B8BE5uLL * Buf1[6]
      + 0x1D77462DBBD40701LL * Buf1[23]
      + 0xB5A728F1B3DF494DuLL * Buf1[32]
      + 0x44A84175CE2F14D1LL * Buf1[11]
      + 0x288D4C21D6A4D26DLL * (unsigned __int8)v44
      + 0x38F8C7054F6DD0DDLL * Buf1[20]
      + 0xBFA02A5D39A9CD6DuLL * Buf1[8]
      + 0x8443F2CCD7EFCA65uLL * Buf1[38]
      + 0x8B7970C2A4EFB2A9uLL * BYTE1(v44)
      + 0x4D463845869B9CD9LL * Buf1[53]
      + 0x6A88D147CBF58115LL * Buf1[34]
      + 0x4FE1DAF580C363FDLL * Buf1[60]
      + 0x5D853AC4C14E51E9LL * Buf1[25]
      + 0x2453E5DE3D4C8439LL * Buf1[13]
      + 0x65EC3D53F206D09DLL * (unsigned __int8)v43
      + 0x1DD2179B35A84099LL * Buf1[37]
      + 0xC8228AB72E6AE889uLL * Buf1[65]
      + 0x14D2E4F3AFFE229LL * (Buf1[41] + 37LL * Buf1[40])
      + 37 * (BYTE6(v49) + 37 * v18);
  v20 = 0xAABDA8ABA0A9EBA1uLL * v17
      + 0x7C5AC014A0AC9951LL * Buf1[43]
      + 0xC9D9072F359EFDB1uLL * Buf1[3]
      + 0x6AE9F48AE50EFCC5LL * Buf1[30]
      + 0x65C63F607A7BA809LL * Buf1[33]
      + 0x3433B6F080FF8F35LL * BYTE2(v44)
      + 0x42E28804A37A36CDLL * Buf1[0]
      + 0x5A90B6DB573C2B45LL * Buf1[62]
      + 0x69976B75BF3AA789LL * Buf1[1]
      + 0x296E17CC49B5EC05LL * Buf1[46]
      + 0x2F2665556EEF39E1LL * Buf1[15]
      + 0x16EA6DB39BB240F9LL * Buf1[61]
      + 0xD08CA55908935D85uLL * Buf1[14]
      + 0x5526FE2C4673CF11LL * Buf1[27]
      + 0x21218A9292BF1B9DLL * Buf1[4]
      + 0xD1A7F3AEDA1FE1A5uLL * Buf1[54]
      + 0x7DA9078FE6510661LL * Buf1[47]
      + 0x1CF3332BD290D80DLL * Buf1[16]
      + 0x981EFA65455B8049uLL * Buf1[49]
      + 0x4EA2BC662EBCED75LL * Buf1[26]
      + 0xC53F5E946719795LL * Buf1[66]
      + 0x4F5D696EC151561DLL * Buf1[36]
      + 0xADDE4FDA72AB3819uLL * Buf1[5]
      + 0xF91DC2FB38F228B5uLL * Buf1[42]
      + 0x3BF4C3C47ADF2FF1LL * Buf1[19]
      + 0x9FEAE5B513875FC9uLL * Buf1[17]
      + 0xFCE97086A74B1CB9uLL * Buf1[45]
      + 0xC378F206849F0269uLL * Buf1[57]
      + 0x73D058131B2A8879LL * Buf1[29]
      + 0x4020391EDC0F1C3DLL * Buf1[12]
      + 0x40B7CD9739B584A1LL * Buf1[63]
      + 0xDC6C00E405D269C1uLL * HIBYTE(v43)
      + 0x2C5E09D2BFFAAA95LL * Buf1[2]
      + 0xBB24DD21FAFC26B1uLL * Buf1[67]
      + 0xBEEC149AF4096455uLL * Buf1[50]
      + v19;
  v21 = -1073741275;
  v22 = HIBYTE(v49) + v20;
  v39 = v22;
  RtlAcquireSRWLockShared(v15 + 32);
LABEL_8:
  v23 = *(_DWORD *)(v15 + 2436);
  v24 = -1LL << (*(_BYTE *)(v15 + 2436) & 0x1F);
  v40 = (v24 & v22) >> 16;
  v25 = v24 & v22;
  v26 = (v24 & v22) >> 56;
  v27 = (v24 & v22) >> 48;
  v28 = (v24 & v22) >> 40;
  if ( v14 )
  {
    v15 = v38;
LABEL_11:
    while ( 1 )
    {
      v14 = *(_QWORD *)v14;
      if ( (v14 & 1) != 0 )
        break;
      if ( v25 == (v24 & *(_QWORD *)(v14 + 8)) )
      {
        v29 = v14 - 1336;
        v22 = v39;
        if ( _wcsicmp(Destination, (const wchar_t *)(v14 - 1336 + 88))
          || memcmp_0(Buf1, (const void *)(v29 + 552), 0x58uLL) )
        {
          goto LABEL_8;
        }
        v21 = 0;
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v29 + 16)) <= 1 )
          __fastfail(0xEu);
        v10 = v14 - 1336;
        break;
      }
    }
  }
  else
  {
    if ( v23 >= 0x20 )
    {
      v15 = v38;
      v14 = *(_QWORD *)(v38 + 2440)
          + 8LL
          * (((_DWORD)v26
            + 37
            * ((unsigned __int8)v27
             + 37
             * ((unsigned __int8)v28
              + 37
              * (BYTE4(v25)
               + 37
               * (BYTE3(v25) + 37 * ((unsigned __int8)v40 + 37 * (BYTE1(v25) + 37 * ((unsigned __int8)v25 + 11623883)))))))) & ((v23 >> 5) - 1));
      goto LABEL_11;
    }
    v15 = v38;
  }
  RtlReleaseSRWLockShared(v15 + 32);
  if ( v21 < 0 )
  {
    v32 = v21 | 0x10000000;
  }
  else
  {
    if ( (*(_BYTE *)(v10 + 812) & 1) != 0 )
    {
      CempLockTrackerMarkAcquired(v31, v30, 1u, 0);
      RtlAcquireSRWLockExclusive(v10 + 64);
      *(_DWORD *)(v10 + 72) = GetCurrentThreadId();
      *(_QWORD *)(v10 + 696) |= 0x40000000000000uLL;
      HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)(v10 + 64), 0);
      if ( HampLockTrackerId != -1 )
      {
        v36 = TlsGetValue(HampLockTrackerId);
        if ( (*(_BYTE *)v36 & 2) == 0 )
          __int2c();
        v34 = v36[2]-- == 1LL;
        if ( v34 )
          *v36 &= ~2uLL;
      }
      *(_DWORD *)(v10 + 72) = 0;
      RtlReleaseSRWLockExclusive(v10 + 64);
    }
    else if ( (*(_BYTE *)(*(_QWORD *)(v10 + 48) + 2684LL) & 2) == 0 && (*(_BYTE *)(v10 + 1416) & 1) == 0 )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v10 + 16)) <= 1 )
        __fastfail(0xEu);
      *(_DWORD *)(v10 + 1416) |= 1u;
      TpPostWork(*(_QWORD *)(v10 + 1328));
    }
    v32 = 0;
  }
  dword_18009BF18 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v33 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v33 & 1) == 0 )
      __int2c();
    v34 = v33[1]-- == 1LL;
    if ( v34 )
      *v33 &= ~1uLL;
  }
  if ( v10 )
    RmpObjectRelease((struct _RM_OBJECT_HEADER *)v10);
  return v32;
}
