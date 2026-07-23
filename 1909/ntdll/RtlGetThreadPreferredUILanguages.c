/*
 * XREFs of RtlGetThreadPreferredUILanguages @ 0x180013B50
 * Callers:
 *     RtlSetThreadPreferredUILanguages @ 0x180012A10 (RtlSetThreadPreferredUILanguages.c)
 *     LdrpSetThreadPreferredLangList @ 0x180013968 (LdrpSetThreadPreferredLangList.c)
 *     RtlGetFileMUIPath @ 0x180059E30 (RtlGetFileMUIPath.c)
 * Callees:
 *     RtlpMuiFreeLangRegistryInfo @ 0x180005F10 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x1800085C8 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x180008C14 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x1800127D4 (RtlpMUIRegPatchLicenseInfortmation.c)
 *     RtlpInitMuiCriticalSection @ 0x180012D4C (RtlpInitMuiCriticalSection.c)
 *     RtlpMuiRegDupLanguageList @ 0x180012DAC (RtlpMuiRegDupLanguageList.c)
 *     RtlpAddNeutralsToMergedList @ 0x180013124 (RtlpAddNeutralsToMergedList.c)
 *     RtlpCreateProcessRegistryInfo @ 0x1800141C0 (RtlpCreateProcessRegistryInfo.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x180014248 (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlpSetProcUserMachineLangList @ 0x1800151CC (RtlpSetProcUserMachineLangList.c)
 *     InitializeTEBUserLangList @ 0x180015318 (InitializeTEBUserLangList.c)
 *     LdrpCreateLangFallbackList @ 0x180015604 (LdrpCreateLangFallbackList.c)
 *     RtlpMuiRegFreeLanguageList @ 0x180015770 (RtlpMuiRegFreeLanguageList.c)
 *     LdrpMergeLangFallbackLists @ 0x1800159B8 (LdrpMergeLangFallbackLists.c)
 *     RtlpComputeLangListCheckSum @ 0x180018A84 (RtlpComputeLangListCheckSum.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlpSetProcMergedLangList @ 0x180080578 (RtlpSetProcMergedLangList.c)
 *     RtlUpdateProcessRegistryInfo @ 0x18008B30C (RtlUpdateProcessRegistryInfo.c)
 */

NTSTATUS __cdecl RtlGetThreadPreferredUILanguages(
        ULONG Flags,
        PULONG NumberOfLanguages,
        PZZWSTR Languages,
        PULONG ReturnLength)
{
  ULONG v4; // r14d
  __int64 v5; // r13
  __int64 v6; // rsi
  PVOID v7; // rdi
  ULONG v8; // r15d
  NTSTATUS result; // eax
  NTSTATUS v10; // ebx
  __int64 v11; // r12
  void *MergedPrefLanguages; // rsi
  PVOID v13; // rcx
  __int64 v14; // rdx
  char v15; // cl
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 *v18; // r14
  char v19; // [rsp+58h] [rbp-39h]
  char v20; // [rsp+59h] [rbp-38h]
  PVOID v21; // [rsp+60h] [rbp-31h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp-29h] BYREF
  unsigned int v23; // [rsp+70h] [rbp-21h]
  __int64 v24; // [rsp+78h] [rbp-19h]
  void *PreferredLanguages; // [rsp+80h] [rbp-11h]
  ULONG v26; // [rsp+88h] [rbp-9h]
  PVOID v27; // [rsp+90h] [rbp-1h] BYREF
  ULONG v28; // [rsp+98h] [rbp+7h]
  PVOID v29; // [rsp+A0h] [rbp+Fh]
  char v30; // [rsp+F8h] [rbp+67h] BYREF
  PULONG v31; // [rsp+100h] [rbp+6Fh]
  PZZWSTR v32; // [rsp+108h] [rbp+77h]
  PULONG v33; // [rsp+110h] [rbp+7Fh]

  v33 = ReturnLength;
  v32 = Languages;
  v31 = NumberOfLanguages;
  v4 = Flags & 0x30;
  v26 = 0;
  v23 = 0;
  v5 = 0LL;
  PreferredLanguages = 0LL;
  v6 = 0LL;
  v27 = 0LL;
  v7 = 0LL;
  BaseAddress = 0LL;
  v29 = 0LL;
  v19 = 0;
  v21 = 0LL;
  v20 = 0;
  v24 = 0LL;
  v28 = v4;
  if ( ReturnLength )
    v26 = *ReturnLength;
  if ( (Flags & 0xFFFEFC83) != 0 )
    goto LABEL_49;
  if ( (Flags & 0xC) != 0 )
  {
    if ( (Flags & 0xC) == 0xC )
      goto LABEL_49;
  }
  else
  {
    Flags |= 8u;
  }
  if ( (Flags & 0x10000) != 0 )
  {
    if ( (Flags & 0x40) != 0 || (Flags & 0x30) != 0 )
      goto LABEL_49;
    Flags |= 0x30u;
  }
  if ( (Flags & 0x40) != 0 && (Flags & 0x30) != 0 )
    goto LABEL_49;
  v8 = Flags | 0x20;
  if ( (Flags & 0x70) != 0 )
    v8 = Flags;
  if ( !ReturnLength )
    goto LABEL_49;
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
        v10 = RtlpCreateProcessRegistryInfo(&v21);
        if ( v10 < 0 )
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
      v30 = 0;
      PreferredLanguages = 0LL;
      if ( *((_DWORD *)v7 + 3) == MEMORY[0x7FFE03A4] )
      {
LABEL_21:
        if ( (v8 & 0x40) == 0 )
        {
          v10 = InitializeTEBUserLangList(0LL, v7);
          if ( v10 < 0 )
            goto LABEL_50;
          v5 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
          v7 = v21;
          v24 = *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1)
              ? *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1)
              : *((_QWORD *)v21 + 6);
          v10 = RtlpSetProcUserMachineLangList(v21, 0LL);
          if ( v10 < 0 )
            goto LABEL_50;
          v6 = *((_QWORD *)v7 + 7);
        }
        if ( NtCurrentTeb()->MergedPrefLanguages )
        {
          v19 = 1;
          if ( v4 == 48 )
          {
            if ( *((char *)NtCurrentTeb()->MergedPrefLanguages + 40) >= 0
              && NtCurrentTeb()->MuiGeneration == *((_DWORD *)v21 + 4) )
            {
              v7 = v21;
              v11 = v24;
              MergedPrefLanguages = NtCurrentTeb()->MergedPrefLanguages;
              BaseAddress = MergedPrefLanguages;
              goto LABEL_32;
            }
            v19 = 0;
            RtlpMuiRegFreeLanguageList(NtCurrentTeb()->MergedPrefLanguages);
            NtCurrentTeb()->MergedPrefLanguages = 0LL;
          }
          goto LABEL_53;
        }
        v19 = 0;
        if ( v4 != 48 || PreferredLanguages )
        {
LABEL_53:
          v7 = v21;
          goto LABEL_54;
        }
        v7 = v21;
        v16 = *((_QWORD *)v21 + 12);
        if ( v16 && v5 && (*(_BYTE *)(v5 + 40) & 0x40) != 0 && *(char *)(v16 + 40) >= 0 )
        {
          v7 = v21;
          v11 = v24;
          BaseAddress = (PVOID)*((_QWORD *)v21 + 12);
          NtCurrentTeb()->MuiGeneration = *((_DWORD *)v21 + 4);
LABEL_64:
          MergedPrefLanguages = BaseAddress;
LABEL_32:
          v10 = LdrpConvertLangFallbackListToMultiSz(
                  (_DWORD)MergedPrefLanguages,
                  (_DWORD)v7,
                  (_DWORD)v32,
                  (_DWORD)v33,
                  v8,
                  0,
                  (__int64)v31);
          if ( ((int)(v10 + 0x80000000) < 0 || v10 == -1073741789) && v4 == 48 )
          {
            if ( !*((_WORD *)MergedPrefLanguages + 22) )
              RtlpComputeLangListCheckSum(MergedPrefLanguages);
            if ( !v19 )
            {
              if ( (*((_BYTE *)MergedPrefLanguages + 40) & 0x40) == 0 )
              {
                RtlpMUIRegPatchLicenseInfortmation((__int64)MergedPrefLanguages);
                if ( !PreferredLanguages && (*(_BYTE *)(v5 + 40) & 0x40) != 0 && v11 == *((_QWORD *)v7 + 6) )
                  RtlpSetProcMergedLangList(v7, MergedPrefLanguages);
              }
              NtCurrentTeb()->MergedPrefLanguages = BaseAddress;
              v7 = v21;
              NtCurrentTeb()->MuiGeneration = v23;
            }
            MergedPrefLanguages = 0LL;
            BaseAddress = 0LL;
          }
          goto LABEL_38;
        }
LABEL_54:
        if ( (v8 & 0x10000) == 0 )
        {
          RtlpInitMuiCriticalSection();
          RtlEnterCriticalSection(&RegistryInfoCritSect);
          v29 = (PVOID)RtlpMuiRegDupLanguageList(*((_QWORD *)v7 + 9), v14);
          v23 = *((_DWORD *)v7 + 4);
          RtlLeaveCriticalSection(&RegistryInfoCritSect);
        }
        v10 = LdrpCreateLangFallbackList(&BaseAddress, v7, 25LL);
        if ( v10 < 0 )
          goto LABEL_107;
        if ( (v8 & 0x40) != 0 )
        {
          v11 = v24;
          v10 = LdrpMergeLangFallbackLists(
                  v8,
                  (_DWORD)v7,
                  (unsigned int)&BaseAddress,
                  (_DWORD)PreferredLanguages,
                  0LL,
                  v5,
                  v6,
                  v24,
                  0);
        }
        else
        {
          LdrpCreateLangFallbackList(&v27, v7, 25LL);
          v11 = v24;
          v10 = LdrpMergeLangFallbackLists(
                  v8,
                  (_DWORD)v7,
                  (unsigned int)&v27,
                  (_DWORD)PreferredLanguages,
                  (__int64)v29,
                  v5,
                  v6,
                  v24,
                  0);
          if ( v10 >= 0 )
          {
            v15 = v4 == 48 || (v8 & 0x10) != 0;
            v10 = RtlpAddNeutralsToMergedList(v15, (DWORD *)v7, (__int64)v27, &BaseAddress);
          }
          RtlpMuiRegFreeLanguageList(v27);
        }
        if ( v10 < 0 )
        {
LABEL_107:
          MergedPrefLanguages = BaseAddress;
LABEL_38:
          if ( MergedPrefLanguages )
          {
            v13 = BaseAddress;
            if ( BaseAddress == NtCurrentTeb()->MergedPrefLanguages )
            {
              v13 = BaseAddress;
              NtCurrentTeb()->MergedPrefLanguages = 0LL;
            }
            RtlpMuiRegFreeLanguageList(v13);
            v7 = v21;
          }
LABEL_42:
          if ( v10 >= 0 )
          {
LABEL_43:
            if ( v20 && v7 )
              RtlpMuiFreeLangRegistryInfo(v7);
            if ( v29 )
              RtlpMuiRegFreeLanguageList(v29);
            return v10;
          }
LABEL_50:
          if ( v32 && v26 )
          {
            if ( v26 == 1 )
              *v32 = 0;
            else
              *(_DWORD *)v32 = 0;
          }
          goto LABEL_43;
        }
        goto LABEL_64;
      }
      v21 = 0LL;
      v10 = RtlpMuiRegCreateAndLoadRegistryInfo(&v21);
      if ( v10 >= 0 )
      {
        v7 = v21;
        v20 = 1;
        v18 = (__int64 *)((char *)v21 + 56);
        if ( !*((_QWORD *)v21 + 7) )
        {
          v10 = RtlpMuiRegLoadPreferredUILanguages((__int64)v21, v17, 0, 3, &v30, (_QWORD *)v21 + 7);
          if ( v10 < 0 && !v30 )
            goto LABEL_42;
        }
        if ( !*((_QWORD *)v7 + 8) )
        {
          v30 = 0;
          v10 = RtlpMuiRegLoadPreferredUILanguages((__int64)v7, v17, 1u, 3, &v30, (_QWORD *)v7 + 8);
          if ( v10 < 0 && !v30 )
            goto LABEL_42;
        }
        v5 = *((_QWORD *)v7 + 8);
        v6 = *v18;
        v4 = v28;
        goto LABEL_54;
      }
LABEL_99:
      v7 = v21;
      goto LABEL_50;
    }
LABEL_49:
    v10 = -1073741811;
    goto LABEL_50;
  }
  return -1073741811;
}
