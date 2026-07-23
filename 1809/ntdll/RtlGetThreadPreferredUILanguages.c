/*
 * XREFs of RtlGetThreadPreferredUILanguages @ 0x18003CC60
 * Callers:
 *     RtlGetFileMUIPath @ 0x180034DB0 (RtlGetFileMUIPath.c)
 *     RtlSetThreadPreferredUILanguages @ 0x18003BAA0 (RtlSetThreadPreferredUILanguages.c)
 *     LdrpSetThreadPreferredLangList @ 0x18003F110 (LdrpSetThreadPreferredLangList.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     RtlpComputeLangListCheckSum @ 0x18003ACBC (RtlpComputeLangListCheckSum.c)
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x18003B144 (RtlpMUIRegPatchLicenseInfortmation.c)
 *     RtlpInitMuiCriticalSection @ 0x18003B9B0 (RtlpInitMuiCriticalSection.c)
 *     RtlpMuiRegDupLanguageList @ 0x18003BA10 (RtlpMuiRegDupLanguageList.c)
 *     InitializeTEBUserLangList @ 0x18003BEF8 (InitializeTEBUserLangList.c)
 *     RtlpSetProcUserMachineLangList @ 0x18003C1E4 (RtlpSetProcUserMachineLangList.c)
 *     RtlpMuiRegFreeLanguageList @ 0x18003C3D8 (RtlpMuiRegFreeLanguageList.c)
 *     LdrpCreateLangFallbackList @ 0x18003C40C (LdrpCreateLangFallbackList.c)
 *     LdrpMergeLangFallbackLists @ 0x18003C708 (LdrpMergeLangFallbackLists.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18003F300 (RtlpCreateProcessRegistryInfo.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x18003F6C8 (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlpAddNeutralsToMergedList @ 0x1800423A4 (RtlpAddNeutralsToMergedList.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18004B7A8 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18004BE14 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x18004CBA0 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlUpdateProcessRegistryInfo @ 0x18004CD34 (RtlUpdateProcessRegistryInfo.c)
 *     RtlpSetProcMergedLangList @ 0x180084B0C (RtlpSetProcMergedLangList.c)
 */

NTSTATUS __cdecl RtlGetThreadPreferredUILanguages(
        ULONG Flags,
        PULONG NumberOfLanguages,
        PZZWSTR Languages,
        PULONG ReturnLength)
{
  ULONG v4; // r14d
  __int64 v5; // rsi
  bool v6; // r15
  PVOID v7; // rdi
  ULONG v8; // r12d
  NTSTATUS result; // eax
  NTSTATUS LangFallbackList; // ebx
  void *MergedPrefLanguages; // rcx
  __int64 v12; // r13
  void *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  PVOID v16; // rcx
  __int64 v17; // rax
  int v18; // edx
  __int64 *v19; // r14
  char v20; // [rsp+58h] [rbp-49h]
  PVOID v21; // [rsp+60h] [rbp-41h] BYREF
  PVOID v22; // [rsp+68h] [rbp-39h] BYREF
  unsigned int v23; // [rsp+70h] [rbp-31h]
  __int64 v24; // [rsp+78h] [rbp-29h]
  void *PreferredLanguages; // [rsp+80h] [rbp-21h]
  ULONG v26; // [rsp+88h] [rbp-19h]
  __int64 v27; // [rsp+90h] [rbp-11h]
  PVOID BaseAddress; // [rsp+98h] [rbp-9h] BYREF
  ULONG v29; // [rsp+A0h] [rbp-1h]
  PVOID v30; // [rsp+A8h] [rbp+7h]
  char v31; // [rsp+108h] [rbp+67h] BYREF
  PULONG v32; // [rsp+110h] [rbp+6Fh]
  PZZWSTR v33; // [rsp+118h] [rbp+77h]
  PULONG v34; // [rsp+120h] [rbp+7Fh]

  v34 = ReturnLength;
  v33 = Languages;
  v32 = NumberOfLanguages;
  v4 = Flags & 0x30;
  v26 = 0;
  v23 = 0;
  v5 = 0LL;
  PreferredLanguages = 0LL;
  v6 = 0;
  v24 = 0LL;
  v7 = 0LL;
  BaseAddress = 0LL;
  v22 = 0LL;
  v30 = 0LL;
  v21 = 0LL;
  v20 = 0;
  v27 = 0LL;
  v29 = v4;
  if ( ReturnLength )
    v26 = *ReturnLength;
  if ( (Flags & 0xFFFEFC83) != 0 )
    goto LABEL_62;
  if ( (Flags & 0xC) != 0 )
  {
    if ( (Flags & 0xC) == 0xC )
      goto LABEL_62;
  }
  else
  {
    Flags |= 8u;
  }
  if ( (Flags & 0x10000) != 0 )
  {
    if ( (Flags & 0x40) != 0 || (Flags & 0x30) != 0 )
      goto LABEL_62;
    Flags |= 0x30u;
  }
  if ( (Flags & 0x40) != 0 && (Flags & 0x30) != 0 )
    goto LABEL_62;
  v8 = Flags | 0x20;
  if ( (Flags & 0x70) != 0 )
    v8 = Flags;
  if ( !ReturnLength )
    goto LABEL_62;
  if ( !*ReturnLength || Languages )
  {
    if ( (v8 & 0x300) != 0x300 )
    {
      result = RtlpCreateProcessRegistryInfo(&v21);
      if ( result < 0 )
        return result;
      if ( v4 == 48 )
      {
        v7 = v21;
        if ( *((_DWORD *)v21 + 3) == MEMORY[0x7FFE03A4] || (int)RtlUpdateProcessRegistryInfo() < 0 )
          goto LABEL_17;
        v21 = 0LL;
        LangFallbackList = RtlpCreateProcessRegistryInfo(&v21);
        if ( LangFallbackList < 0 )
          goto LABEL_99;
      }
      v7 = v21;
LABEL_17:
      if ( (v8 & 0x10000) == 0 )
      {
        if ( NtCurrentTeb()->PreferredLanguages )
          PreferredLanguages = NtCurrentTeb()->PreferredLanguages;
        v7 = v21;
        goto LABEL_21;
      }
      v31 = 0;
      PreferredLanguages = 0LL;
      if ( *((_DWORD *)v7 + 3) == MEMORY[0x7FFE03A4] )
      {
LABEL_21:
        if ( (v8 & 0x40) == 0 )
        {
          LangFallbackList = InitializeTEBUserLangList(0, (__int64)v7);
          if ( LangFallbackList < 0 )
            goto LABEL_63;
          v24 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
          v7 = v21;
          v27 = *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1)
              ? *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1)
              : *((_QWORD *)v21 + 6);
          LangFallbackList = RtlpSetProcUserMachineLangList((__int64)v21, 0);
          if ( LangFallbackList < 0 )
            goto LABEL_63;
          v5 = *((_QWORD *)v7 + 7);
        }
        MergedPrefLanguages = NtCurrentTeb()->MergedPrefLanguages;
        if ( MergedPrefLanguages && v4 == 48 )
        {
          if ( *((char *)NtCurrentTeb()->MergedPrefLanguages + 40) >= 0
            && NtCurrentTeb()->MuiGeneration == *((_DWORD *)v21 + 4) )
          {
            v6 = MergedPrefLanguages != 0LL;
            v7 = v21;
            v12 = v24;
            v13 = NtCurrentTeb()->MergedPrefLanguages;
            v22 = v13;
            goto LABEL_45;
          }
          v6 = 0;
          RtlpMuiRegFreeLanguageList(NtCurrentTeb()->MergedPrefLanguages);
          NtCurrentTeb()->MergedPrefLanguages = 0LL;
          goto LABEL_33;
        }
        v6 = MergedPrefLanguages != 0LL;
        if ( v4 != 48 || (v6 = MergedPrefLanguages != 0LL, PreferredLanguages) )
        {
LABEL_33:
          v7 = v21;
          goto LABEL_34;
        }
        v7 = v21;
        v17 = *((_QWORD *)v21 + 12);
        if ( v17 && v24 && (*(_BYTE *)(v24 + 40) & 0x40) != 0 && *(char *)(v17 + 40) >= 0 )
        {
          v7 = v21;
          v12 = v24;
          v22 = (PVOID)*((_QWORD *)v21 + 12);
          NtCurrentTeb()->MuiGeneration = *((_DWORD *)v21 + 4);
LABEL_44:
          v13 = v22;
LABEL_45:
          LangFallbackList = LdrpConvertLangFallbackListToMultiSz(
                               (_DWORD)v13,
                               (_DWORD)v7,
                               (_DWORD)v33,
                               (_DWORD)v34,
                               v8,
                               0,
                               (__int64)v32);
          if ( ((int)(LangFallbackList + 0x80000000) < 0 || LangFallbackList == -1073741789) && v4 == 48 )
          {
            if ( !*((_WORD *)v13 + 22) )
              RtlpComputeLangListCheckSum((__int64)v13);
            if ( !v6 )
            {
              if ( (*((_BYTE *)v13 + 40) & 0x40) == 0 )
              {
                RtlpMUIRegPatchLicenseInfortmation((__int64)v13);
                if ( !PreferredLanguages && (*(_BYTE *)(v12 + 40) & 0x40) != 0 && v27 == *((_QWORD *)v7 + 6) )
                  RtlpSetProcMergedLangList(v7, v13);
              }
              NtCurrentTeb()->MergedPrefLanguages = v22;
              v7 = v21;
              NtCurrentTeb()->MuiGeneration = v23;
            }
            v13 = 0LL;
            v22 = 0LL;
          }
          goto LABEL_51;
        }
LABEL_34:
        if ( (v8 & 0x10000) == 0 )
        {
          RtlpInitMuiCriticalSection();
          RtlEnterCriticalSection(&RegistryInfoCritSect);
          v30 = (PVOID)RtlpMuiRegDupLanguageList(*((_QWORD *)v7 + 9), v14);
          v23 = *((_DWORD *)v7 + 4);
          RtlLeaveCriticalSection(&RegistryInfoCritSect);
        }
        LangFallbackList = LdrpCreateLangFallbackList((__int64 *)&v22, (__int64)v7, 0x19u, 0);
        if ( LangFallbackList < 0 )
          goto LABEL_107;
        if ( (v8 & 0x40) != 0 )
        {
          v12 = v24;
          LangFallbackList = LdrpMergeLangFallbackLists(
                               v8,
                               (__int64)v7,
                               (__int64)&v22,
                               (__int64)PreferredLanguages,
                               0LL,
                               v24,
                               v5,
                               v27,
                               0);
        }
        else
        {
          LdrpCreateLangFallbackList((__int64 *)&BaseAddress, (__int64)v7, 0x19u, 0);
          v12 = v24;
          LangFallbackList = LdrpMergeLangFallbackLists(
                               v8,
                               (__int64)v7,
                               (__int64)&BaseAddress,
                               (__int64)PreferredLanguages,
                               (__int64)v30,
                               v24,
                               v5,
                               v27,
                               0);
          if ( LangFallbackList >= 0 )
          {
            LOBYTE(v15) = v4 == 48 || (v8 & 0x10) != 0;
            LangFallbackList = RtlpAddNeutralsToMergedList(v15, v7, BaseAddress, &v22);
          }
          RtlpMuiRegFreeLanguageList(BaseAddress);
        }
        if ( LangFallbackList < 0 )
        {
LABEL_107:
          v13 = v22;
LABEL_51:
          if ( v13 )
          {
            v16 = v22;
            if ( v22 == NtCurrentTeb()->MergedPrefLanguages )
            {
              v16 = v22;
              NtCurrentTeb()->MergedPrefLanguages = 0LL;
            }
            RtlpMuiRegFreeLanguageList(v16);
            v7 = v21;
          }
LABEL_55:
          if ( LangFallbackList >= 0 )
          {
LABEL_56:
            if ( v20 && v7 )
              RtlpMuiFreeLangRegistryInfo(v7);
            if ( v30 )
              RtlpMuiRegFreeLanguageList(v30);
            return LangFallbackList;
          }
LABEL_63:
          if ( v33 && v26 )
          {
            if ( v26 == 1 )
              *v33 = 0;
            else
              *(_DWORD *)v33 = 0;
          }
          goto LABEL_56;
        }
        goto LABEL_44;
      }
      v21 = 0LL;
      LangFallbackList = RtlpMuiRegCreateAndLoadRegistryInfo(&v21);
      if ( LangFallbackList >= 0 )
      {
        v7 = v21;
        v20 = 1;
        v19 = (__int64 *)((char *)v21 + 56);
        if ( !*((_QWORD *)v21 + 7) )
        {
          LangFallbackList = RtlpMuiRegLoadPreferredUILanguages(
                               (_DWORD)v21,
                               v18,
                               0,
                               3,
                               (__int64)&v31,
                               (__int64)v21 + 56);
          if ( LangFallbackList < 0 && !v31 )
            goto LABEL_55;
        }
        if ( !*((_QWORD *)v7 + 8) )
        {
          v31 = 0;
          LangFallbackList = RtlpMuiRegLoadPreferredUILanguages((_DWORD)v7, v18, 1, 3, (__int64)&v31, (__int64)v7 + 64);
          if ( LangFallbackList < 0 && !v31 )
            goto LABEL_55;
        }
        v5 = *v19;
        v4 = v29;
        v24 = *((_QWORD *)v7 + 8);
        goto LABEL_34;
      }
LABEL_99:
      v7 = v21;
      goto LABEL_63;
    }
LABEL_62:
    LangFallbackList = -1073741811;
    goto LABEL_63;
  }
  return -1073741811;
}
