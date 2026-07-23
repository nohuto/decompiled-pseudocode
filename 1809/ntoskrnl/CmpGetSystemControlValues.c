/*
 * XREFs of CmpGetSystemControlValues @ 0x1409CF008
 * Callers:
 *     CmInitSystem0 @ 0x1409CDCF0 (CmInitSystem0.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpInitSecurityCache @ 0x1405A8210 (CmpInitSecurityCache.c)
 *     HvHiveInitialize @ 0x1405A824C (HvHiveInitialize.c)
 *     HvHiveStartMemoryBacked @ 0x14073DCFC (HvHiveStartMemoryBacked.c)
 *     CmpFindSubKeyByName @ 0x14073E2CC (CmpFindSubKeyByName.c)
 *     CmpFindControlSet @ 0x14073E4AC (CmpFindControlSet.c)
 *     CmpWalkPath @ 0x14073E880 (CmpWalkPath.c)
 *     CmpFindValueByName @ 0x14073EA48 (CmpFindValueByName.c)
 *     CmpInitializeSystemPoliciesFeatureOverrides @ 0x1409ABBC0 (CmpInitializeSystemPoliciesFeatureOverrides.c)
 *     CmSelectQualifiedInstallLanguage @ 0x1409CE3F0 (CmSelectQualifiedInstallLanguage.c)
 *     CmpGetBootValueData @ 0x1409CF7FC (CmpGetBootValueData.c)
 *     CmpConvertLangId @ 0x1409CFABC (CmpConvertLangId.c)
 */

PVOID __fastcall CmpGetSystemControlValues(_DWORD *a1, __int64 a2, char a3)
{
  wchar_t **v3; // rbx
  unsigned int ControlSet; // r12d
  int started; // eax
  unsigned int v8; // edi
  __int64 v9; // rdi
  unsigned int SubKeyByName; // r15d
  __int64 v11; // rcx
  bool i; // zf
  unsigned int v13; // edi
  unsigned int v14; // eax
  __int64 v15; // rax
  int v16; // r14d
  unsigned int ValueByName; // r14d
  unsigned int *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // rcx
  unsigned int v22; // edx
  wchar_t *v23; // rcx
  __int64 v24; // rdi
  unsigned int *v25; // rax
  __int64 v26; // rcx
  unsigned int v27; // eax
  int v29; // [rsp+78h] [rbp-90h] BYREF
  _DWORD v30[2]; // [rsp+80h] [rbp-88h] BYREF
  _DWORD v31[2]; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  int v33; // [rsp+A0h] [rbp-68h] BYREF
  PVOID v34[2]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v35[44]; // [rsp+B8h] [rbp-50h] BYREF

  v3 = CmControlVector;
  v31[1] = 0;
  v30[1] = 0;
  v31[0] = -1;
  v30[0] = -1;
  memset(v35, 0, sizeof(v35));
  ControlSet = -1;
  CmpInitializeThreadInfo(v34);
  memset(&CmControlHive, 0, 0x12F8uLL);
  CmpInitSecurityCache((__int64)&CmControlHive);
  HvHiveInitialize(&CmControlHive);
  v35[0] = &CmControlHive;
  qword_140A0EFE8 = (__int64)v35;
  started = HvHiveStartMemoryBacked(
              (ULONG_PTR)&CmControlHive,
              4LL,
              1,
              0LL,
              a1,
              0LL,
              1,
              0LL,
              0LL,
              0LL,
              &v29,
              0LL,
              (__int64)v35);
  if ( started < 0 )
    KeBugCheckEx(0x74u, 1uLL, 1uLL, (ULONG_PTR)&CmControlHive, started);
  qword_140A0EFE8 = 0LL;
  v8 = a1[9];
  if ( a3 == 1 )
  {
    v9 = ((__int64 (__fastcall *)(ULONG_PTR *, _QWORD, _DWORD *))qword_140A0EFB8)(&CmControlHive, v8, v30);
    if ( !v9 )
      return CmCleanupThreadInfo(v34);
    RtlInitUnicodeString(&DestinationString, L"ControlSetOverride");
    SubKeyByName = CmpFindSubKeyByName((__int64)&CmControlHive, v9, (__int64)&DestinationString);
    if ( SubKeyByName == -1 )
      return CmCleanupThreadInfo(v34);
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"current");
    ControlSet = CmpFindControlSet((ULONG_PTR)&CmControlHive, v8, (int)&DestinationString, &v29);
    if ( ControlSet == -1 )
      KeBugCheckEx(0x74u, 1uLL, 2uLL, (ULONG_PTR)&CmControlHive, (ULONG_PTR)&DestinationString);
    v24 = ((__int64 (__fastcall *)(ULONG_PTR *, _QWORD, _DWORD *))qword_140A0EFB8)(&CmControlHive, ControlSet, v30);
    if ( !v24 )
      return CmCleanupThreadInfo(v34);
    RtlInitUnicodeString(&DestinationString, L"control");
    SubKeyByName = CmpFindSubKeyByName((__int64)&CmControlHive, v24, (__int64)&DestinationString);
    if ( SubKeyByName == -1 )
      KeBugCheckEx(0x74u, 1uLL, 3uLL, v24, (ULONG_PTR)&DestinationString);
  }
  ((void (__fastcall *)(ULONG_PTR *, _DWORD *))qword_140A0EFC0)(&CmControlHive, v30);
  for ( i = CmControlVector[0] == 0LL; !i; i = *v3 == 0LL )
  {
    if ( a3 != 1 || *((_BYTE *)v3 + 40) )
    {
      v13 = -1;
      v14 = CmpWalkPath((__int64)&CmControlHive, SubKeyByName, *v3);
      if ( v14 != -1 )
      {
        v15 = ((__int64 (__fastcall *)(ULONG_PTR *, _QWORD, _DWORD *))qword_140A0EFB8)(&CmControlHive, v14, v30);
        v16 = v15;
        if ( !v15 )
          return CmCleanupThreadInfo(v34);
        RtlInitUnicodeString(&DestinationString, v3[1]);
        ValueByName = CmpFindValueByName((int)&CmControlHive, v16, (int)&DestinationString);
        ((void (__fastcall *)(ULONG_PTR *, _DWORD *))qword_140A0EFC0)(&CmControlHive, v30);
        if ( ValueByName != -1 )
        {
          v18 = (unsigned int *)v3[3];
          v13 = 4;
          if ( v18 )
            v13 = *v18;
          v19 = ((__int64 (__fastcall *)(ULONG_PTR *, _QWORD, _DWORD *))qword_140A0EFB8)(
                  &CmControlHive,
                  ValueByName,
                  v31);
          v20 = v19;
          if ( !v19 )
            return CmCleanupThreadInfo(v34);
          v21 = *(unsigned int *)(v19 + 4);
          v22 = v21 + 0x80000000;
          if ( (unsigned int)v21 < 0x80000000 )
            v22 = *(_DWORD *)(v19 + 4);
          if ( v13 >= v22 )
            v13 = v22;
          if ( v13 && !(unsigned __int8)CmpGetBootValueData(v21, v19, v3[2], v13) )
          {
            ((void (__fastcall *)(ULONG_PTR *, _DWORD *))qword_140A0EFC0)(&CmControlHive, v31);
            return CmCleanupThreadInfo(v34);
          }
          v23 = v3[4];
          if ( v23 )
            *(_DWORD *)v23 = *(_DWORD *)(v20 + 12);
          ((void (__fastcall *)(ULONG_PTR *, _DWORD *))qword_140A0EFC0)(&CmControlHive, v31);
        }
      }
      v25 = (unsigned int *)v3[3];
      if ( v25 )
        *v25 = v13;
    }
    v3 += 6;
  }
  CmpInitializeSystemPoliciesFeatureOverrides(v11, ControlSet);
  if ( CmDefaultLanguageIdType == 1 )
  {
    PsDefaultSystemLocaleId = (unsigned __int16)CmpConvertLangId(
                                                  CmDefaultLanguageId,
                                                  (unsigned int)CmDefaultLanguageIdLength);
  }
  else if ( !a3 )
  {
    PsDefaultSystemLocaleId = 1033;
  }
  if ( CmInstallUILanguageIdType == 1 )
    WORD1(NlsMbCodePageTag) = CmpConvertLangId(CmInstallUILanguageId, (unsigned int)CmInstallUILanguageIdLength);
  if ( !a3 )
  {
    v27 = CmSelectQualifiedInstallLanguage(v26, SubKeyByName, &v33, WORD1(NlsMbCodePageTag));
    if ( v27 )
    {
      if ( !psMUITest )
        KeBugCheckEx(0x12Au, 1uLL, v27, 0LL, 0LL);
      WORD1(NlsMbCodePageTag) = PsDefaultSystemLocaleId;
    }
    else if ( WORD1(NlsMbCodePageTag) != v33 )
    {
      WORD1(NlsMbCodePageTag) = v33;
      CmInstallUILanguageFallbackToOOBm = 1;
    }
  }
  PsDefaultThreadLocaleId = PsDefaultSystemLocaleId;
  PsDefaultUILanguageId = WORD1(NlsMbCodePageTag);
  if ( !PsMachineUILanguageId || a3 == 1 )
    PsMachineUILanguageId = WORD1(NlsMbCodePageTag);
  return CmCleanupThreadInfo(v34);
}
