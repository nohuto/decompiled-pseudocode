/*
 * XREFs of RtlGetUILanguageInfo @ 0x180084510
 * Callers:
 *     <none>
 * Callees:
 *     RtlpInitializeLangRegistryInfo @ 0x180005EE0 (RtlpInitializeLangRegistryInfo.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x180005F10 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlpCheckMuiMultiStringSafe @ 0x18000EE3C (RtlpCheckMuiMultiStringSafe.c)
 *     RtlpCreateProcessRegistryInfo @ 0x1800141C0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18001583C (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlLCIDToCultureName @ 0x180016330 (RtlLCIDToCultureName.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x180016414 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlCultureNameToLCID @ 0x1800168B0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     DbgPrint @ 0x180053E40 (DbgPrint.c)
 *     RtlUnicodeStringToInteger @ 0x180074900 (RtlUnicodeStringToInteger.c)
 *     RtlpMuiRegGetFallbackLanguagesAsMultiSZ @ 0x1800847C8 (RtlpMuiRegGetFallbackLanguagesAsMultiSZ.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     RtlUnicodeStringToLcid @ 0x1800EBE80 (RtlUnicodeStringToLcid.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByLangId @ 0x1800FDE94 (RtlpMuiRegGetFallbackLanguageInfoByLangId.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x1800FE05C (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 */

NTSTATUS __cdecl RtlGetUILanguageInfo(
        ULONG Flags,
        PCZZWSTR Languages,
        PZZWSTR FallbackLanguages,
        PULONG NumberOfFallbackLanguages,
        PULONG Attributes)
{
  char v5; // bl
  PZZWSTR v7; // r12
  WCHAR *v8; // rdi
  ULONG v9; // r13d
  const WCHAR *v11; // rdi
  int v12; // r8d
  int v13; // eax
  NTSTATUS FallbackLanguagesAsMultiSZ; // ebx
  __int64 v15; // rdx
  ULONG v16; // r15d
  int v17; // eax
  __int64 v18; // r12
  int InstalledLanguageIndexByLangId; // eax
  __int64 v20; // r9
  __int64 v21; // r15
  PVOID Heap; // rax
  int v23; // r9d
  int FallbackLanguageInfoByLangId; // eax
  void *v25; // rsi
  char v26; // [rsp+30h] [rbp-61h]
  _WORD v27[2]; // [rsp+34h] [rbp-5Dh] BYREF
  PZZWSTR v28; // [rsp+38h] [rbp-59h]
  DWORD Lcid; // [rsp+40h] [rbp-51h] BYREF
  int v30; // [rsp+44h] [rbp-4Dh]
  _QWORD *v31; // [rsp+48h] [rbp-49h] BYREF
  ULONG v32; // [rsp+50h] [rbp-41h]
  int v33; // [rsp+54h] [rbp-3Dh]
  PVOID BaseAddress; // [rsp+58h] [rbp-39h]
  _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-31h] BYREF
  PULONG v36; // [rsp+70h] [rbp-21h]
  _UNICODE_STRING String; // [rsp+78h] [rbp-19h] BYREF
  __int128 v38; // [rsp+88h] [rbp-9h] BYREF
  __int64 v39; // [rsp+98h] [rbp+7h]
  int v40; // [rsp+A0h] [rbp+Fh]

  v5 = Flags;
  v32 = Flags;
  v28 = FallbackLanguages;
  v36 = Attributes;
  v31 = 0LL;
  v7 = FallbackLanguages;
  v27[0] = -1;
  v8 = (WCHAR *)Languages;
  LOBYTE(v30) = 0;
  BaseAddress = 0LL;
  if ( NumberOfFallbackLanguages )
    v9 = *NumberOfFallbackLanguages;
  else
    v9 = 0;
  if ( !Languages || !*Languages || (Flags & 0xC) == 0xC || (Flags & 0xFFFFFF73) != 0 || v9 && !FallbackLanguages )
    return -1073741811;
  v15 = 4LL;
  v16 = Flags & 4;
  if ( (Flags & 4) == 0 )
    v15 = 85LL;
  if ( (int)RtlpCheckMuiMultiStringSafe(v8, v15) < 0 )
    DbgPrint(
      "*** ASSERT FAILED: Input parameter pwmszLanguage for function RtlGetUILanguageInfo is not a valid multi-string!\n");
  if ( v7 )
  {
    if ( v9 )
      *v7 = 0;
    if ( v9 > 1 )
      v7[1] = 0;
  }
  if ( NumberOfFallbackLanguages )
    *NumberOfFallbackLanguages = 2;
  if ( Attributes )
    *Attributes = 0;
  v33 = v5 & 0x80;
  if ( v5 < 0 )
    v17 = RtlpInitializeLangRegistryInfo(&v31);
  else
    v17 = RtlpCreateProcessRegistryInfo(&v31);
  v25 = v31;
  FallbackLanguagesAsMultiSZ = v17;
  if ( v17 >= 0 )
  {
    if ( v31 )
    {
      v18 = v31[3];
      if ( v16 )
      {
        v26 = 1;
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
        BaseAddress = Heap;
        if ( Heap )
        {
          DestinationString.Buffer = (wchar_t *)Heap;
          *(_DWORD *)&DestinationString.Length = 11141120;
          RtlInitUnicodeString(&String, v8);
          if ( (int)RtlUnicodeStringToLcid(&String, &Lcid) < 0 || !RtlLCIDToCultureName(Lcid, &DestinationString) )
          {
            v25 = v31;
            FallbackLanguagesAsMultiSZ = -1073741811;
            goto LABEL_66;
          }
          v25 = v31;
          InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId((__int64)v31, Lcid, 1, v27);
LABEL_50:
          FallbackLanguagesAsMultiSZ = InstalledLanguageIndexByLangId;
          if ( InstalledLanguageIndexByLangId < 0 )
          {
            v7 = v28;
            if ( InstalledLanguageIndexByLangId == -1073741823 )
              FallbackLanguagesAsMultiSZ = -1073741772;
            goto LABEL_20;
          }
          if ( v27[0] >= 0 && v27[0] < (int)*(unsigned __int16 *)(v18 + 6) )
          {
            v21 = *(_QWORD *)(v18 + 16) + 28LL * v27[0];
            while ( *v8 )
              ++v8;
            v11 = v8 + 1;
            v38 = *(_OWORD *)v21;
            v39 = *(_QWORD *)(v21 + 16);
            v40 = *(_DWORD *)(v21 + 24);
            if ( (*(_BYTE *)v21 & 1) == 0 )
            {
              LOBYTE(v12) = v30;
              if ( *v11 )
              {
                while ( !(_BYTE)v12 )
                {
                  if ( v26 )
                  {
                    RtlInitUnicodeString(&String, v11);
                    if ( RtlUnicodeStringToInteger(&String, 0x10u, &Lcid) < 0 )
                      break;
                    LOBYTE(v23) = 1;
                    FallbackLanguageInfoByLangId = RtlpMuiRegGetFallbackLanguageInfoByLangId(
                                                     (_DWORD)v25,
                                                     (unsigned int)&v38,
                                                     (unsigned __int16)Lcid,
                                                     v23,
                                                     (__int64)&v38);
                  }
                  else
                  {
                    LOBYTE(v20) = 1;
                    FallbackLanguageInfoByLangId = RtlpMuiRegGetFallbackLanguageInfoByName(v25, &v38, v11, v20, &v38);
                  }
                  FallbackLanguagesAsMultiSZ = FallbackLanguageInfoByLangId;
                  if ( FallbackLanguageInfoByLangId < 0 )
                    goto LABEL_66;
                  v12 = (unsigned __int8)v30;
                  if ( (v38 & 0x20) != 0 )
                    v12 = 1;
                  v30 = v12;
                  while ( *v11 )
                    ++v11;
                  if ( !*++v11 )
                    goto LABEL_13;
                }
                FallbackLanguagesAsMultiSZ = -1073741811;
                goto LABEL_66;
              }
              goto LABEL_13;
            }
            if ( (*(_BYTE *)v21 & 6) != 0 )
            {
              FallbackLanguagesAsMultiSZ = -1073741595;
              goto LABEL_66;
            }
            if ( !*v11 )
            {
              LOBYTE(v12) = v30;
LABEL_13:
              if ( v36 )
              {
                v13 = *(_WORD *)v21 & 0x419F | 0x20;
                if ( (*(_WORD *)v21 & 0x1000) != 0 )
                  v13 = *(_WORD *)v21 & 0x419F;
                *v36 = v13 | 0x40;
              }
              if ( NumberOfFallbackLanguages )
              {
                v7 = v28;
                *NumberOfFallbackLanguages = v9;
                if ( (_BYTE)v12 )
                  *NumberOfFallbackLanguages = 2;
                else
                  FallbackLanguagesAsMultiSZ = RtlpMuiRegGetFallbackLanguagesAsMultiSZ(
                                                 v32,
                                                 (_DWORD)v25,
                                                 (unsigned int)&v38,
                                                 (_DWORD)NumberOfFallbackLanguages,
                                                 (__int64)v7);
LABEL_20:
                if ( BaseAddress )
                {
                  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
                  v25 = v31;
                }
                goto LABEL_22;
              }
LABEL_66:
              v7 = v28;
              goto LABEL_20;
            }
          }
          FallbackLanguagesAsMultiSZ = -1073741772;
          goto LABEL_66;
        }
        v25 = v31;
        FallbackLanguagesAsMultiSZ = -1073741801;
      }
      else
      {
        v26 = 0;
        RtlInitUnicodeString(&DestinationString, v8);
        if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
        {
          InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByName((__int64)v25, v8, 1, v27);
          goto LABEL_50;
        }
        FallbackLanguagesAsMultiSZ = -1073741811;
      }
      v7 = v28;
    }
    else
    {
      FallbackLanguagesAsMultiSZ = -1073741823;
    }
  }
LABEL_22:
  if ( v33 && v25 )
    RtlpMuiFreeLangRegistryInfo(v25);
  if ( !FallbackLanguagesAsMultiSZ && NumberOfFallbackLanguages && *NumberOfFallbackLanguages > v9 )
  {
    if ( v7 )
      return -1073741789;
  }
  return FallbackLanguagesAsMultiSZ;
}
