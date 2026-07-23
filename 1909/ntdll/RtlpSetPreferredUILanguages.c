/*
 * XREFs of RtlpSetPreferredUILanguages @ 0x1800EDCD0
 * Callers:
 *     RtlpSetInstallLanguage @ 0x1800ED610 (RtlpSetInstallLanguage.c)
 * Callees:
 *     RtlpInitializeLangRegistryInfo @ 0x180005EE0 (RtlpInitializeLangRegistryInfo.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x180005F10 (RtlpMuiFreeLangRegistryInfo.c)
 *     OpenGlobalizationUserSettingsKey @ 0x180009204 (OpenGlobalizationUserSettingsKey.c)
 *     RtlpCheckMuiMultiStringSafe @ 0x18000EE3C (RtlpCheckMuiMultiStringSafe.c)
 *     RtlpCreateProcessRegistryInfo @ 0x1800141C0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18001583C (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlLCIDToCultureName @ 0x180016330 (RtlLCIDToCultureName.c)
 *     RtlCultureNameToLCID @ 0x1800168B0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     DbgPrint @ 0x180053E40 (DbgPrint.c)
 *     RtlUnicodeStringToInteger @ 0x180074900 (RtlUnicodeStringToInteger.c)
 *     RtlUpdateProcessRegistryInfo @ 0x18008B30C (RtlUpdateProcessRegistryInfo.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     NtOpenKey @ 0x18009D0D0 (NtOpenKey.c)
 *     ZwCreateKey @ 0x18009D230 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x18009DA80 (ZwSetValueKey.c)
 *     ZwGetMUIRegistryInfo @ 0x18009ECA0 (ZwGetMUIRegistryInfo.c)
 *     NtQueryInstallUILanguage @ 0x18009F7C0 (NtQueryInstallUILanguage.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 *     RtlStringCchCatW @ 0x1800EBDA8 (RtlStringCchCatW.c)
 *     RtlpAutoCompleteLanguageFallback @ 0x1800EC288 (RtlpAutoCompleteLanguageFallback.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800ECAE0 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpGetMultiStringLength @ 0x1800ED0DC (RtlpGetMultiStringLength.c)
 *     RtlpSetInstallLanguage @ 0x1800ED610 (RtlpSetInstallLanguage.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x1800EDAF8 (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId @ 0x1800FDC04 (RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId.c)
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
  __int64 Buffer; // rdx
  __int64 v15; // rdx
  wchar_t *Heap; // rax
  wchar_t *v17; // r13
  unsigned __int64 v18; // r15
  const WCHAR *v19; // r14
  int v20; // esi
  unsigned __int16 v21; // si
  __int64 v22; // rax
  int v23; // ecx
  int FallbackInstalledLanguageInfoByLangId; // eax
  _QWORD *v25; // rax
  _WORD *v26; // rcx
  _QWORD *v27; // rsi
  __int64 v28; // rax
  unsigned int v30; // esi
  PVOID v31; // rax
  int v32; // r13d
  __int16 v33; // r15
  WCHAR *v34; // r14
  _WORD *v35; // rsi
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned __int16 v39; // si
  __int64 v40; // rcx
  __int64 v41; // rax
  WCHAR *v42; // rcx
  HANDLE v43; // rcx
  __int64 v44; // rax
  bool v45; // sf
  WCHAR *v46; // rcx
  __int64 v47; // rax
  unsigned int v48; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v49[2]; // [rsp+44h] [rbp-BCh] BYREF
  int v50; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v51; // [rsp+4Ch] [rbp-B4h]
  _UNICODE_STRING String; // [rsp+50h] [rbp-B0h] BYREF
  PVOID Data[2]; // [rsp+60h] [rbp-A0h] BYREF
  LANGID InstallUILanguageId[2]; // [rsp+70h] [rbp-90h] BYREF
  ULONG Value; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v56; // [rsp+78h] [rbp-88h]
  HANDLE Handle; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v58; // [rsp+88h] [rbp-78h]
  PVOID v59; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v60[4]; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v61; // [rsp+9Ch] [rbp-64h]
  _BYTE *v62; // [rsp+A0h] [rbp-60h]
  _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  HANDLE v64; // [rsp+B8h] [rbp-48h] BYREF
  HANDLE v65; // [rsp+C0h] [rbp-40h] BYREF
  PVOID BaseAddress; // [rsp+C8h] [rbp-38h] BYREF
  PVOID v67; // [rsp+D0h] [rbp-30h]
  HANDLE v68; // [rsp+D8h] [rbp-28h] BYREF
  HANDLE KeyHandle; // [rsp+E0h] [rbp-20h] BYREF
  wchar_t *v70; // [rsp+E8h] [rbp-18h]
  __int128 v71; // [rsp+F0h] [rbp-10h] BYREF
  PVOID v72; // [rsp+100h] [rbp+0h]
  _DWORD *v73; // [rsp+108h] [rbp+8h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+110h] [rbp+10h] BYREF
  _OBJECT_ATTRIBUTES v75; // [rsp+140h] [rbp+40h] BYREF
  _OBJECT_ATTRIBUTES v76; // [rsp+170h] [rbp+70h] BYREF
  _OBJECT_ATTRIBUTES v77; // [rsp+1A0h] [rbp+A0h] BYREF
  _OBJECT_ATTRIBUTES v78; // [rsp+1D0h] [rbp+D0h] BYREF
  _QWORD v79[3]; // [rsp+200h] [rbp+100h] BYREF
  int v80; // [rsp+218h] [rbp+118h]

  v73 = a3;
  LOBYTE(v3) = a1;
  v68 = 0LL;
  v65 = 0LL;
  v64 = 0LL;
  v4 = a2;
  Handle = 0LL;
  v5 = 0;
  v58 = 0;
  v6 = 0;
  v56 = 0;
  v7 = 0;
  v61 = 0;
  v48 = 0;
  v49[0] = 0;
  v62 = 0LL;
  memset(v79, 0, sizeof(v79));
  v80 = 0;
  v72 = 0LL;
  v51 = 0;
  v59 = 0LL;
  v67 = 0LL;
  BaseAddress = 0LL;
  InstallUILanguageId[0] = 0;
  v70 = 0LL;
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
    if ( (v3 & 0x80u) != 0 && v59 )
      RtlpMuiFreeLangRegistryInfo(v59);
    *v73 = v5 + v6 + v61;
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
    v13 = RtlpCreateProcessRegistryInfo(&v59);
  else
    v13 = RtlpInitializeLangRegistryInfo(&v59);
  InstallUILanguage = v13;
  if ( v13 >= 0 )
  {
    if ( !v4 )
    {
      v33 = 2;
      LODWORD(Data[0]) = 262146;
      v34 = (WCHAR *)&unk_180132D8C;
      v3 = v12;
      Data[1] = &unk_180132D8C;
      v39 = 4;
      goto LABEL_133;
    }
    v15 = 4LL;
    if ( (v12 & 4) == 0 )
      v15 = 85LL;
    if ( (int)RtlpCheckMuiMultiStringSafe(v4, v15) < 0 )
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
        if ( v64 )
        {
          NtClose(v64);
          v64 = 0LL;
        }
        if ( v65 )
        {
          NtClose(v65);
          v65 = 0LL;
        }
        if ( v68 )
        {
          NtClose(v68);
          v68 = 0LL;
        }
        if ( v72 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v72);
        v5 = v58;
        v6 = v56;
        goto LABEL_103;
      }
      Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x20AuLL);
      v70 = Heap;
      v17 = Heap;
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
        if ( v17 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v17);
        if ( v67 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v67);
        goto LABEL_92;
      }
      v18 = (unsigned __int64)String.Length >> 1;
      if ( (v12 & 4) != 0 )
      {
        InstallUILanguage = RtlpConvertLCIDsToCultureNames(v4, &BaseAddress);
        if ( InstallUILanguage < 0 )
          goto LABEL_85;
        v4 = (WCHAR *)BaseAddress;
        v3 = v12 & 0xFFF3 | 8;
      }
      InstallUILanguage = RtlpGetMultiStringLength(v4, &v50, 0LL);
      if ( InstallUILanguage < 0 )
        goto LABEL_85;
      memmove(&v17[v18 + 1], v4, 2LL * ((unsigned int)(unsigned __int16)v50 + 1));
      InstallUILanguage = RtlpAutoCompleteLanguageFallback((__int64)v59, v17);
      if ( InstallUILanguage < 0 )
        goto LABEL_85;
      v4 = v17;
    }
    InstallUILanguage = RtlpGetMultiStringLength(v4, Data, &v48);
    if ( InstallUILanguage >= 0 )
    {
      Data[1] = v4;
      LOWORD(Data[0]) *= 2;
      WORD1(Data[0]) = LOWORD(Data[0]) + 2;
      if ( v48 - 1 > 2 )
      {
        InstallUILanguage = -1073741811;
        goto LABEL_85;
      }
      v19 = v4;
      v67 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
      if ( !v67 )
      {
        InstallUILanguage = -1073741801;
        goto LABEL_85;
      }
      v7 = v48;
      v50 = 0;
      if ( v48 )
      {
        v20 = v3 & 4;
        LODWORD(v71) = v20;
        while ( 1 )
        {
          RtlInitUnicodeString(&DestinationString, v19);
          if ( v20 )
          {
            if ( RtlUnicodeStringToInteger(&DestinationString, 0x10u, &Value) < 0 )
              goto LABEL_84;
            v21 = Value;
            if ( ((Value - 4096) & 0xFFFFFBFF) == 0 )
              goto LABEL_84;
            DestinationString.Buffer = (wchar_t *)v67;
            *(_DWORD *)&DestinationString.Length = 11141120;
            if ( !RtlLCIDToCultureName(Value, &DestinationString) )
              goto LABEL_84;
            Buffer = (__int64)DestinationString.Buffer;
            v22 = -1LL;
            do
              ++v22;
            while ( DestinationString.Buffer[v22] );
            v51 += v22 + 1;
          }
          else
          {
            if ( !RtlCultureNameToLCID(&DestinationString, &Value) )
              goto LABEL_84;
            v21 = Value;
            if ( ((Value - 4096) & 0xFFFFFBFF) == 0 )
              goto LABEL_84;
            Buffer = (__int64)DestinationString.Buffer;
          }
          v23 = v50;
          if ( v50 )
          {
            if ( v50 == 1 )
            {
              if ( (v3 & 0x800) != 0 || (v3 & 0x10) != 0 || (*v62 & 1) != 0 )
                goto LABEL_84;
              if ( (*v62 & 2) != 0 )
              {
                v26 = v60;
              }
              else
              {
                if ( (*v62 & 4) == 0 || v7 > 2 )
                  goto LABEL_84;
                v26 = v49;
              }
              FallbackInstalledLanguageInfoByLangId = RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId(
                                                        (_DWORD)v59,
                                                        (_DWORD)v62,
                                                        v21,
                                                        (unsigned int)v79,
                                                        (__int64)v26);
            }
            else
            {
              if ( v50 != 2 )
                goto LABEL_77;
              FallbackInstalledLanguageInfoByLangId = RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId(
                                                        (_DWORD)v59,
                                                        (_DWORD)v62,
                                                        v21,
                                                        (unsigned int)v79,
                                                        (__int64)v60);
            }
            if ( FallbackInstalledLanguageInfoByLangId < 0 )
              goto LABEL_84;
            v25 = v79;
          }
          else
          {
            v27 = v59;
            if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName((__int64)v59, (const WCHAR *)Buffer, 1, v49) < 0 )
              goto LABEL_84;
            v25 = (_QWORD *)(*(_QWORD *)(v27[3] + 16LL) + 28LL * v49[0]);
          }
          v23 = v50;
          v62 = v25;
LABEL_77:
          if ( v19 )
          {
            v28 = -1LL;
            Buffer = 0LL;
            do
              ++v28;
            while ( v19[v28] );
            v19 += v28 + 1;
          }
          else
          {
            v19 = 0LL;
          }
          v50 = v23 + 1;
          if ( v23 + 1 >= v7 )
            break;
          v20 = v71;
        }
      }
      if ( (v3 & 0x14) == 4 )
      {
        v30 = v51 + 1;
        v51 = v30;
        if ( v30 > 0xFFFF )
          goto LABEL_84;
        v31 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2LL * v30);
        v32 = 0;
        v72 = v31;
        if ( !v31 )
        {
          InstallUILanguage = -1073741670;
          goto LABEL_85;
        }
        Data[1] = v31;
        v33 = 2 * v30;
        v34 = (WCHAR *)v31;
        LOWORD(Data[0]) = 2 * v30;
        *(_QWORD *)&v71 = (unsigned __int16)(2 * v30);
        v35 = v31;
        WORD1(Data[0]) = v71;
        if ( v48 )
        {
          do
          {
            RtlInitUnicodeString(&DestinationString, v4);
            if ( RtlUnicodeStringToInteger(&DestinationString, 0x10u, &Value) < 0 )
              goto LABEL_84;
            DestinationString.Buffer = (wchar_t *)v67;
            *(_DWORD *)&DestinationString.Length = 11141120;
            if ( !RtlLCIDToCultureName(Value, &DestinationString) )
              goto LABEL_84;
            if ( (int)RtlStringCchCatW(v35, v51, (__int64)DestinationString.Buffer) < 0 )
            {
              InstallUILanguage = -1073741670;
              goto LABEL_85;
            }
            Buffer = -1LL;
            v36 = -1LL;
            do
              ++v36;
            while ( v35[v36] );
            v51 += -1 - v36;
            if ( v35 )
            {
              v37 = -1LL;
              do
                ++v37;
              while ( v35[v37] );
              v35 += v37 + 1;
            }
            if ( v4 )
            {
              v38 = -1LL;
              do
                ++v38;
              while ( v4[v38] );
              v4 += v38 + 1;
            }
            else
            {
              v4 = 0LL;
            }
          }
          while ( ++v32 < v48 );
        }
        v7 = v48;
        *v35 = 0;
        v4 = v34;
        v39 = v71;
      }
      else
      {
        v34 = (WCHAR *)Data[1];
        v39 = WORD1(Data[0]);
        v33 = (__int16)Data[0];
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
        v40 = -1LL;
        do
          ++v40;
        while ( v34[v40] );
        WORD1(Data[0]) = -2 - 2 * v40 + v39;
        if ( v34 )
        {
          v41 = -1LL;
          do
            ++v41;
          while ( v34[v41] );
          v42 = &v34[v41 + 1];
        }
        else
        {
          v42 = 0LL;
        }
        Data[1] = v42;
        InstallUILanguage = RtlpGetMultiStringLength(v42, Data, &v48);
        if ( InstallUILanguage < 0 )
          goto LABEL_85;
        v33 = (__int16)Data[0];
        v34 = (WCHAR *)Data[1];
        InstallUILanguage = ZwSetValueKey(KeyHandle, &String, 0, 7u, Data[1], 2 * LOWORD(Data[0]));
        if ( InstallUILanguage < 0 )
          goto LABEL_85;
        v7 = v48;
        v39 = WORD1(Data[0]);
        v61 = v48;
      }
      if ( (v3 & 0x10) != 0 )
      {
        InstallUILanguage = RtlpSetInstallLanguage(v3, v4);
        if ( InstallUILanguage < 0 )
          goto LABEL_85;
        v61 = v7;
      }
      if ( (v3 & 0x4000) != 0 )
      {
        InstallUILanguage = OpenGlobalizationUserSettingsKey(0x2000000u, Buffer, &v68);
        if ( InstallUILanguage < 0 )
          goto LABEL_85;
        RtlInitUnicodeString(&String, L"Control Panel\\Desktop");
        v75.Length = 48;
        v64 = 0LL;
        v75.RootDirectory = v68;
        v75.Attributes = 64;
        v75.ObjectName = &String;
        *(_OWORD *)&v75.SecurityDescriptor = 0LL;
        InstallUILanguage = NtOpenKey(&v64, 0xF003Fu, &v75);
        if ( InstallUILanguage < 0 )
          goto LABEL_85;
        if ( (v3 & 0x800) != 0 )
        {
          RtlInitUnicodeString(&String, L"PreferredUILanguagesPending");
          v43 = v64;
        }
        else
        {
          if ( v7 < 2 )
            goto LABEL_84;
          RtlInitUnicodeString(&String, L"LanguageConfigurationPending");
          v76.RootDirectory = v64;
          v76.Length = 48;
          v76.ObjectName = &String;
          v76.Attributes = 64;
          *(_OWORD *)&v76.SecurityDescriptor = 0LL;
          Handle = 0LL;
          InstallUILanguage = ZwCreateKey(&Handle, 0xF003Fu, &v76, 0, 0LL, 0, 0LL);
          if ( InstallUILanguage < 0 )
            goto LABEL_85;
          RtlInitUnicodeString(&String, v4);
          if ( v4 )
          {
            v44 = -1LL;
            do
              ++v44;
            while ( v4[v44] );
            v34 = &v4[v44 + 1];
            Data[1] = v34;
          }
          else
          {
            v34 = 0LL;
            Data[1] = 0LL;
          }
          v39 -= String.MaximumLength;
          v43 = Handle;
          WORD1(Data[0]) = v39;
          LOWORD(Data[0]) = v33 - String.MaximumLength;
        }
        InstallUILanguage = ZwSetValueKey(v43, &String, 0, 7u, v34, v39);
        if ( InstallUILanguage < 0 )
          goto LABEL_85;
        v58 = v7;
      }
      if ( Handle )
      {
        NtClose(Handle);
        Handle = 0LL;
      }
      if ( (v3 & 0x8800) == 0x8800 )
      {
        v71 = *(_OWORD *)Data;
        InstallUILanguage = RtlpSetMachineUILanguagesImmediate((__int64)&v71);
        v56 = v7;
      }
      if ( (v3 & 0x2000) == 0 && (v3 & 0x9000) != 0x9000 )
        goto LABEL_181;
      RtlInitUnicodeString(&String, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
      v77.Length = 48;
      v77.RootDirectory = 0LL;
      v65 = 0LL;
      v77.Attributes = 64;
      v77.ObjectName = &String;
      *(_OWORD *)&v77.SecurityDescriptor = 0LL;
      InstallUILanguage = ZwCreateKey(&v65, 0xF003Fu, &v77, 0, 0LL, 0, 0LL);
      if ( InstallUILanguage < 0 )
        goto LABEL_85;
      if ( (v3 & 0x800) != 0 )
      {
        RtlInitUnicodeString(&String, L"PreferredUILanguages");
        InstallUILanguage = ZwSetValueKey(v65, &String, 0, 7u, v34, v39);
        v45 = InstallUILanguage < 0;
LABEL_179:
        if ( v45 )
          goto LABEL_85;
        v56 = v7;
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
        v78.RootDirectory = v65;
        v78.Length = 48;
        v78.ObjectName = &String;
        v78.Attributes = 64;
        *(_OWORD *)&v78.SecurityDescriptor = 0LL;
        Handle = 0LL;
        InstallUILanguage = ZwCreateKey(&Handle, 0xF003Fu, &v78, 0, 0LL, 0, 0LL);
        if ( InstallUILanguage < 0 )
          goto LABEL_85;
        RtlInitUnicodeString(&String, v4);
        v46 = 0LL;
        if ( v4 )
        {
          v47 = -1LL;
          do
            ++v47;
          while ( v4[v47] );
          v46 = &v4[v47 + 1];
        }
        InstallUILanguage = ZwSetValueKey(Handle, &String, 0, 7u, v46, (unsigned __int16)(v39 - String.MaximumLength));
        v45 = InstallUILanguage < 0;
        goto LABEL_179;
      }
LABEL_84:
      InstallUILanguage = -1073741811;
    }
LABEL_85:
    if ( BaseAddress )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    v17 = v70;
    goto LABEL_88;
  }
  return (unsigned int)InstallUILanguage;
}
