/*
 * XREFs of RtlpSetPreferredUILanguages @ 0x1800F0D10
 * Callers:
 *     RtlpSetInstallLanguage @ 0x1800F05E0 (RtlpSetInstallLanguage.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlpCheckMuiMultiStringSafe @ 0x18003B37C (RtlpCheckMuiMultiStringSafe.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18003C58C (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18003F300 (RtlpCreateProcessRegistryInfo.c)
 *     RtlLCIDToCultureName @ 0x18003FEC0 (RtlLCIDToCultureName.c)
 *     RtlCultureNameToLCID @ 0x180040460 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180040650 (RtlInitUnicodeString.c)
 *     CloseGlobalizationUserSettingsKey @ 0x18004C41C (CloseGlobalizationUserSettingsKey.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18004C444 (OpenGlobalizationUserSettingsKey.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x18004CBA0 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlpInitializeLangRegistryInfo @ 0x18004CBF0 (RtlpInitializeLangRegistryInfo.c)
 *     RtlUpdateProcessRegistryInfo @ 0x18004CD34 (RtlUpdateProcessRegistryInfo.c)
 *     DbgPrint @ 0x18004F300 (DbgPrint.c)
 *     RtlUnicodeStringToInteger @ 0x180079590 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     NtClose @ 0x1800A04E0 (NtClose.c)
 *     NtOpenKey @ 0x1800A0540 (NtOpenKey.c)
 *     ZwCreateKey @ 0x1800A06A0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1800A0EF0 (ZwSetValueKey.c)
 *     ZwGetMUIRegistryInfo @ 0x1800A20F0 (ZwGetMUIRegistryInfo.c)
 *     NtQueryInstallUILanguage @ 0x1800A2C10 (NtQueryInstallUILanguage.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     RtlStringCchCatW @ 0x1800EF0C0 (RtlStringCchCatW.c)
 *     RtlpAutoCompleteLanguageFallback @ 0x1800EF5A0 (RtlpAutoCompleteLanguageFallback.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800EFE10 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpGetMultiStringLength @ 0x1800F040C (RtlpGetMultiStringLength.c)
 *     RtlpSetInstallLanguage @ 0x1800F05E0 (RtlpSetInstallLanguage.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x1800F0B3C (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId @ 0x180100324 (RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId.c)
 */

__int64 __fastcall RtlpSetPreferredUILanguages(int a1, WCHAR *a2, _DWORD *a3)
{
  __int16 v3; // di
  WCHAR *v4; // r12
  unsigned int v5; // r15d
  int v6; // r14d
  unsigned int v7; // r13d
  int InstallUILanguage; // ebx
  int v9; // eax
  __int16 v10; // dx
  __int16 v11; // cx
  __int16 v12; // si
  int v13; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  wchar_t *Heap; // rax
  wchar_t *v18; // r13
  unsigned __int64 v19; // r15
  const WCHAR *v20; // r14
  int v21; // esi
  unsigned __int16 v22; // si
  wchar_t *Buffer; // rdx
  __int64 v24; // rax
  int v25; // ecx
  int FallbackInstalledLanguageInfoByLangId; // eax
  _QWORD *v27; // rax
  _WORD *v28; // rcx
  _QWORD *v29; // rsi
  __int64 v30; // rax
  unsigned int v32; // esi
  PVOID v33; // rax
  int v34; // r13d
  __int16 v35; // r15
  WCHAR *v36; // r14
  _WORD *v37; // rsi
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned __int16 v41; // si
  __int64 v42; // rcx
  __int64 v43; // rax
  WCHAR *v44; // rcx
  HANDLE v45; // rcx
  __int64 v46; // rax
  bool v47; // sf
  WCHAR *v48; // rcx
  __int64 v49; // rax
  unsigned int v50; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v51[2]; // [rsp+44h] [rbp-BCh] BYREF
  int v52; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v53; // [rsp+4Ch] [rbp-B4h]
  _UNICODE_STRING String; // [rsp+50h] [rbp-B0h] BYREF
  PVOID Data[2]; // [rsp+60h] [rbp-A0h] BYREF
  LANGID InstallUILanguageId[2]; // [rsp+70h] [rbp-90h] BYREF
  ULONG Value; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v58; // [rsp+78h] [rbp-88h]
  HANDLE Handle; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v60; // [rsp+88h] [rbp-78h]
  PVOID v61; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v62[4]; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v63; // [rsp+9Ch] [rbp-64h]
  _BYTE *v64; // [rsp+A0h] [rbp-60h]
  _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  HANDLE v66; // [rsp+B8h] [rbp-48h] BYREF
  HANDLE v67; // [rsp+C0h] [rbp-40h] BYREF
  PVOID BaseAddress; // [rsp+C8h] [rbp-38h] BYREF
  PVOID v69; // [rsp+D0h] [rbp-30h]
  HANDLE CurrentUserKey; // [rsp+D8h] [rbp-28h] BYREF
  HANDLE KeyHandle; // [rsp+E0h] [rbp-20h] BYREF
  wchar_t *v72; // [rsp+E8h] [rbp-18h]
  __int128 v73; // [rsp+F0h] [rbp-10h] BYREF
  PVOID v74; // [rsp+100h] [rbp+0h]
  _DWORD *v75; // [rsp+108h] [rbp+8h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+110h] [rbp+10h] BYREF
  _OBJECT_ATTRIBUTES v77; // [rsp+140h] [rbp+40h] BYREF
  _OBJECT_ATTRIBUTES v78; // [rsp+170h] [rbp+70h] BYREF
  _OBJECT_ATTRIBUTES v79; // [rsp+1A0h] [rbp+A0h] BYREF
  _OBJECT_ATTRIBUTES v80; // [rsp+1D0h] [rbp+D0h] BYREF
  _QWORD v81[3]; // [rsp+200h] [rbp+100h] BYREF
  int v82; // [rsp+218h] [rbp+118h]

  v75 = a3;
  LOBYTE(v3) = a1;
  CurrentUserKey = 0LL;
  v67 = 0LL;
  v66 = 0LL;
  v4 = a2;
  Handle = 0LL;
  v5 = 0;
  v60 = 0;
  v6 = 0;
  v58 = 0;
  v7 = 0;
  v63 = 0;
  v50 = 0;
  v51[0] = 0;
  v64 = 0LL;
  memset(v81, 0, sizeof(v81));
  v82 = 0;
  v74 = 0LL;
  v53 = 0;
  v61 = 0LL;
  v69 = 0LL;
  BaseAddress = 0LL;
  InstallUILanguageId[0] = 0;
  v72 = 0LL;
  KeyHandle = 0LL;
  if ( !a3 )
    goto LABEL_2;
  v9 = 18440;
  if ( a1 )
    v9 = a1;
  if ( (LOBYTE(v3) = v9, (v9 & 0xFFFF0363) != 0)
    || (v9 & 0x400) != 0 && (!a2 || (v9 & 0xFFFFFBF3) != 0)
    || (v9 & 0x8000) != 0 && (!a2 || (v9 & 0xFFFF6773) != 0)
    || (v9 & 0xC) == 0xC
    || (v9 & 0x1800) == 0x1800
    || (v9 & 0x10) != 0 && (v9 & 0x7080) != 0 )
  {
LABEL_2:
    InstallUILanguage = -1073741811;
LABEL_103:
    if ( (v3 & 0x80u) != 0 && v61 )
      RtlpMuiFreeLangRegistryInfo(v61);
    *v75 = v5 + v6 + v63;
    return (unsigned int)InstallUILanguage;
  }
  v10 = v9 | 8;
  if ( (v9 & 0xC) != 0 )
    v10 = v9;
  v11 = v10 | 0x4000;
  if ( (v10 & 0xE410) != 0 )
    v11 = v10;
  v12 = v11 | 0x800;
  if ( (v11 & 0x1C00) != 0 )
    v12 = v11;
  if ( (v12 & 0x80u) == 0 )
    v13 = RtlpCreateProcessRegistryInfo(&v61);
  else
    v13 = RtlpInitializeLangRegistryInfo(&v61);
  InstallUILanguage = v13;
  if ( v13 >= 0 )
  {
    if ( !v4 )
    {
      v35 = 2;
      LODWORD(Data[0]) = 262146;
      v36 = (WCHAR *)&unk_180132A8C;
      v3 = v12;
      Data[1] = &unk_180132A8C;
      v41 = 4;
      goto LABEL_133;
    }
    v16 = 4LL;
    if ( (v12 & 4) == 0 )
      v16 = 85LL;
    if ( (int)RtlpCheckMuiMultiStringSafe(v4, v16) < 0 )
      DbgPrint(
        "*** ASSERT FAILED: Input parameter LanguagesBuffer for function RtlpSetPreferredUILanguages is not a valid multi-string!\n");
    v3 = v12;
    if ( (v12 & 0x400) != 0 )
    {
      InstallUILanguage = NtQueryInstallUILanguage(InstallUILanguageId);
      if ( InstallUILanguage < 0 )
      {
LABEL_92:
        if ( Handle )
        {
          NtClose(Handle);
          Handle = 0LL;
        }
        if ( v66 )
        {
          NtClose(v66);
          v66 = 0LL;
        }
        if ( v67 )
        {
          NtClose(v67);
          v67 = 0LL;
        }
        if ( CurrentUserKey )
        {
          CloseGlobalizationUserSettingsKey((char *)CurrentUserKey);
          CurrentUserKey = 0LL;
        }
        if ( v74 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v74);
        v5 = v60;
        v6 = v58;
        goto LABEL_103;
      }
      Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x20AuLL);
      v72 = Heap;
      v18 = Heap;
      if ( !Heap )
      {
        InstallUILanguage = -1073741801;
        goto LABEL_92;
      }
      String.Buffer = Heap;
      *(_DWORD *)&String.Length = 11141120;
      if ( !RtlLCIDToCultureName(InstallUILanguageId[0], &String) )
      {
        InstallUILanguage = -1073741811;
LABEL_88:
        if ( v18 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v18);
        if ( v69 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v69);
        goto LABEL_92;
      }
      v19 = (unsigned __int64)String.Length >> 1;
      if ( (v12 & 4) != 0 )
      {
        InstallUILanguage = RtlpConvertLCIDsToCultureNames(v4, &BaseAddress);
        if ( InstallUILanguage < 0 )
          goto LABEL_85;
        v4 = (WCHAR *)BaseAddress;
        v3 = v12 & 0xFFF3 | 8;
      }
      InstallUILanguage = RtlpGetMultiStringLength(v4, &v52, 0LL);
      if ( InstallUILanguage < 0 )
        goto LABEL_85;
      memmove(&v18[v19 + 1], v4, 2LL * ((unsigned int)(unsigned __int16)v52 + 1));
      InstallUILanguage = RtlpAutoCompleteLanguageFallback((__int64)v61, v18);
      if ( InstallUILanguage < 0 )
        goto LABEL_85;
      v4 = v18;
    }
    v50 = 0;
    InstallUILanguage = RtlpGetMultiStringLength(v4, Data, &v50);
    if ( InstallUILanguage >= 0 )
    {
      Data[1] = v4;
      LOWORD(Data[0]) *= 2;
      WORD1(Data[0]) = LOWORD(Data[0]) + 2;
      if ( v50 - 1 > 2 )
      {
        InstallUILanguage = -1073741811;
        goto LABEL_85;
      }
      v20 = v4;
      v69 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
      if ( !v69 )
      {
        InstallUILanguage = -1073741801;
        goto LABEL_85;
      }
      v7 = v50;
      v52 = 0;
      if ( v50 )
      {
        v21 = v3 & 4;
        LODWORD(v73) = v21;
        while ( 1 )
        {
          RtlInitUnicodeString(&DestinationString, v20);
          if ( v21 )
          {
            if ( RtlUnicodeStringToInteger(&DestinationString, 0x10u, &Value) < 0 )
              goto LABEL_84;
            v22 = Value;
            if ( ((Value - 4096) & 0xFFFFFBFF) == 0 )
              goto LABEL_84;
            DestinationString.Buffer = (wchar_t *)v69;
            *(_DWORD *)&DestinationString.Length = 11141120;
            if ( !RtlLCIDToCultureName(Value, &DestinationString) )
              goto LABEL_84;
            Buffer = DestinationString.Buffer;
            v24 = -1LL;
            do
              ++v24;
            while ( DestinationString.Buffer[v24] );
            v53 += v24 + 1;
          }
          else
          {
            if ( !RtlCultureNameToLCID(&DestinationString, &Value) )
              goto LABEL_84;
            v22 = Value;
            if ( ((Value - 4096) & 0xFFFFFBFF) == 0 )
              goto LABEL_84;
            Buffer = DestinationString.Buffer;
          }
          v25 = v52;
          if ( v52 )
          {
            if ( v52 == 1 )
            {
              if ( (v3 & 0x800) != 0 || (v3 & 0x10) != 0 || (*v64 & 1) != 0 )
                goto LABEL_84;
              if ( (*v64 & 2) != 0 )
              {
                v28 = v62;
              }
              else
              {
                if ( (*v64 & 4) == 0 || v7 > 2 )
                  goto LABEL_84;
                v28 = v51;
              }
              FallbackInstalledLanguageInfoByLangId = RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId(
                                                        (_DWORD)v61,
                                                        (_DWORD)v64,
                                                        v22,
                                                        (unsigned int)v81,
                                                        (__int64)v28);
            }
            else
            {
              if ( v52 != 2 )
                goto LABEL_77;
              FallbackInstalledLanguageInfoByLangId = RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId(
                                                        (_DWORD)v61,
                                                        (_DWORD)v64,
                                                        v22,
                                                        (unsigned int)v81,
                                                        (__int64)v62);
            }
            if ( FallbackInstalledLanguageInfoByLangId < 0 )
              goto LABEL_84;
            v27 = v81;
          }
          else
          {
            v29 = v61;
            if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName((__int64)v61, Buffer, 1, v51) < 0 )
              goto LABEL_84;
            v27 = (_QWORD *)(*(_QWORD *)(v29[3] + 16LL) + 28LL * v51[0]);
          }
          v25 = v52;
          v64 = v27;
LABEL_77:
          if ( v20 )
          {
            v30 = -1LL;
            do
              ++v30;
            while ( v20[v30] );
            v20 += v30 + 1;
          }
          else
          {
            v20 = 0LL;
          }
          v52 = v25 + 1;
          if ( v25 + 1 >= v7 )
            break;
          v21 = v73;
        }
      }
      if ( (v3 & 0x14) == 4 )
      {
        v32 = v53 + 1;
        v53 = v32;
        if ( v32 > 0xFFFF )
          goto LABEL_84;
        v33 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2LL * v32);
        v34 = 0;
        v74 = v33;
        if ( !v33 )
        {
          InstallUILanguage = -1073741670;
          goto LABEL_85;
        }
        Data[1] = v33;
        v35 = 2 * v32;
        v36 = (WCHAR *)v33;
        LOWORD(Data[0]) = 2 * v32;
        *(_QWORD *)&v73 = (unsigned __int16)(2 * v32);
        v37 = v33;
        WORD1(Data[0]) = v73;
        if ( v50 )
        {
          do
          {
            RtlInitUnicodeString(&DestinationString, v4);
            if ( RtlUnicodeStringToInteger(&DestinationString, 0x10u, &Value) < 0 )
              goto LABEL_84;
            DestinationString.Buffer = (wchar_t *)v69;
            *(_DWORD *)&DestinationString.Length = 11141120;
            if ( !RtlLCIDToCultureName(Value, &DestinationString) )
              goto LABEL_84;
            if ( (int)RtlStringCchCatW(v37, v53, (__int64)DestinationString.Buffer) < 0 )
            {
              InstallUILanguage = -1073741670;
              goto LABEL_85;
            }
            v38 = -1LL;
            do
              ++v38;
            while ( v37[v38] );
            v53 += -1 - v38;
            if ( v37 )
            {
              v39 = -1LL;
              do
                ++v39;
              while ( v37[v39] );
              v37 += v39 + 1;
            }
            if ( v4 )
            {
              v40 = -1LL;
              do
                ++v40;
              while ( v4[v40] );
              v4 += v40 + 1;
            }
            else
            {
              v4 = 0LL;
            }
          }
          while ( ++v34 < v50 );
        }
        v7 = v50;
        *v37 = 0;
        v4 = v36;
        v41 = v73;
      }
      else
      {
        v36 = (WCHAR *)Data[1];
        v41 = WORD1(Data[0]);
        v35 = (__int16)Data[0];
      }
LABEL_133:
      if ( (v3 & 0x400) != 0 )
      {
        RtlInitUnicodeString(&String, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language");
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        KeyHandle = 0LL;
        ObjectAttributes.Attributes = 64;
        ObjectAttributes.ObjectName = &String;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        InstallUILanguage = ZwCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 0, 0LL);
        if ( InstallUILanguage < 0 )
          goto LABEL_85;
        RtlInitUnicodeString(&String, L"InstallLanguageFallback");
        v42 = -1LL;
        do
          ++v42;
        while ( v36[v42] );
        WORD1(Data[0]) = -2 - 2 * v42 + v41;
        if ( v36 )
        {
          v43 = -1LL;
          do
            ++v43;
          while ( v36[v43] );
          v44 = &v36[v43 + 1];
        }
        else
        {
          v44 = 0LL;
        }
        Data[1] = v44;
        InstallUILanguage = RtlpGetMultiStringLength(v44, Data, &v50);
        if ( InstallUILanguage < 0 )
          goto LABEL_85;
        v35 = (__int16)Data[0];
        v36 = (WCHAR *)Data[1];
        InstallUILanguage = ZwSetValueKey(KeyHandle, &String, 0, 7u, Data[1], 2 * LOWORD(Data[0]));
        if ( InstallUILanguage < 0 )
          goto LABEL_85;
        v7 = v50;
        v41 = WORD1(Data[0]);
        v63 = v50;
      }
      if ( (v3 & 0x10) != 0 )
      {
        InstallUILanguage = RtlpSetInstallLanguage(v3, v4);
        if ( InstallUILanguage < 0 )
          goto LABEL_85;
        v63 = v7;
      }
      if ( (v3 & 0x4000) != 0 )
      {
        InstallUILanguage = OpenGlobalizationUserSettingsKey(0x2000000u, 0LL, v14, v15, &CurrentUserKey);
        if ( InstallUILanguage < 0 )
          goto LABEL_85;
        RtlInitUnicodeString(&String, L"Control Panel\\Desktop");
        v77.Length = 48;
        v66 = 0LL;
        v77.RootDirectory = CurrentUserKey;
        v77.Attributes = 64;
        v77.ObjectName = &String;
        *(_OWORD *)&v77.SecurityDescriptor = 0LL;
        InstallUILanguage = NtOpenKey(&v66, 0xF003Fu, &v77);
        if ( InstallUILanguage < 0 )
          goto LABEL_85;
        if ( (v3 & 0x800) != 0 )
        {
          RtlInitUnicodeString(&String, L"PreferredUILanguagesPending");
          v45 = v66;
        }
        else
        {
          if ( v7 < 2 )
            goto LABEL_84;
          RtlInitUnicodeString(&String, L"LanguageConfigurationPending");
          v78.RootDirectory = v66;
          v78.Length = 48;
          v78.ObjectName = &String;
          v78.Attributes = 64;
          *(_OWORD *)&v78.SecurityDescriptor = 0LL;
          Handle = 0LL;
          InstallUILanguage = ZwCreateKey(&Handle, 0xF003Fu, &v78, 0, 0LL, 0, 0LL);
          if ( InstallUILanguage < 0 )
            goto LABEL_85;
          RtlInitUnicodeString(&String, v4);
          if ( v4 )
          {
            v46 = -1LL;
            do
              ++v46;
            while ( v4[v46] );
            v36 = &v4[v46 + 1];
            Data[1] = v36;
          }
          else
          {
            v36 = 0LL;
            Data[1] = 0LL;
          }
          v41 -= String.MaximumLength;
          v45 = Handle;
          WORD1(Data[0]) = v41;
          LOWORD(Data[0]) = v35 - String.MaximumLength;
        }
        InstallUILanguage = ZwSetValueKey(v45, &String, 0, 7u, v36, v41);
        if ( InstallUILanguage < 0 )
          goto LABEL_85;
        v60 = v7;
      }
      if ( Handle )
      {
        NtClose(Handle);
        Handle = 0LL;
      }
      if ( (v3 & 0x8800) == 0x8800 )
      {
        v73 = *(_OWORD *)Data;
        InstallUILanguage = RtlpSetMachineUILanguagesImmediate((__int64)&v73);
        v58 = v7;
      }
      if ( (v3 & 0x2000) == 0 && (v3 & 0x9000) != 0x9000 )
        goto LABEL_181;
      RtlInitUnicodeString(&String, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
      v79.Length = 48;
      v79.RootDirectory = 0LL;
      v67 = 0LL;
      v79.Attributes = 64;
      v79.ObjectName = &String;
      *(_OWORD *)&v79.SecurityDescriptor = 0LL;
      InstallUILanguage = ZwCreateKey(&v67, 0xF003Fu, &v79, 0, 0LL, 0, 0LL);
      if ( InstallUILanguage < 0 )
        goto LABEL_85;
      if ( (v3 & 0x800) != 0 )
      {
        RtlInitUnicodeString(&String, L"PreferredUILanguages");
        InstallUILanguage = ZwSetValueKey(v67, &String, 0, 7u, v36, v41);
        v47 = InstallUILanguage < 0;
LABEL_179:
        if ( v47 )
          goto LABEL_85;
        v58 = v7;
LABEL_181:
        if ( InstallUILanguage >= 0 && (v3 & 0xE410) != 0 )
        {
          ZwGetMUIRegistryInfo(8u, 0LL, 0LL);
          if ( (v3 & 0x8410) != 0 )
            RtlUpdateProcessRegistryInfo();
        }
        goto LABEL_85;
      }
      if ( v7 >= 2 )
      {
        RtlInitUnicodeString(&String, L"LanguageConfiguration");
        v80.RootDirectory = v67;
        v80.Length = 48;
        v80.ObjectName = &String;
        v80.Attributes = 64;
        *(_OWORD *)&v80.SecurityDescriptor = 0LL;
        Handle = 0LL;
        InstallUILanguage = ZwCreateKey(&Handle, 0xF003Fu, &v80, 0, 0LL, 0, 0LL);
        if ( InstallUILanguage < 0 )
          goto LABEL_85;
        RtlInitUnicodeString(&String, v4);
        v48 = 0LL;
        if ( v4 )
        {
          v49 = -1LL;
          do
            ++v49;
          while ( v4[v49] );
          v48 = &v4[v49 + 1];
        }
        InstallUILanguage = ZwSetValueKey(Handle, &String, 0, 7u, v48, (unsigned __int16)(v41 - String.MaximumLength));
        v47 = InstallUILanguage < 0;
        goto LABEL_179;
      }
LABEL_84:
      InstallUILanguage = -1073741811;
    }
LABEL_85:
    if ( BaseAddress )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    v18 = v72;
    goto LABEL_88;
  }
  return (unsigned int)InstallUILanguage;
}
