/*
 * XREFs of ExpSetCurrentUserUILanguage @ 0x14071BB94
 * Callers:
 *     NtSetDefaultUILanguage @ 0x14071BB70 (NtSetDefaultUILanguage.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     DbgPrint @ 0x1401263A0 (DbgPrint.c)
 *     DbgPrintEx @ 0x140160560 (DbgPrintEx.c)
 *     DownLevelLangIDToLanguageName @ 0x140161130 (DownLevelLangIDToLanguageName.c)
 *     CloseGlobalizationUserSettingsKey @ 0x140174BB0 (CloseGlobalizationUserSettingsKey.c)
 *     OpenGlobalizationUserSettingsKey @ 0x140174BD4 (OpenGlobalizationUserSettingsKey.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x1401B8550 (ZwEnumerateValueKey.c)
 *     ZwQueryValueKey @ 0x1401B85D0 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x1401B8690 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1401B8EF0 (ZwSetValueKey.c)
 *     ZwDeleteKey @ 0x1401B9CB0 (ZwDeleteKey.c)
 *     ZwDeleteValueKey @ 0x1401B9D10 (ZwDeleteValueKey.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     RtlUnicodeStringToInteger @ 0x140696B10 (RtlUnicodeStringToInteger.c)
 *     NtQueryInstallUILanguage @ 0x1406C6650 (NtQueryInstallUILanguage.c)
 *     ExpValidateLocale @ 0x1408CE0B8 (ExpValidateLocale.c)
 */

NTSTATUS __fastcall ExpSetCurrentUserUILanguage(PCWSTR SourceString, unsigned __int16 a2)
{
  unsigned __int64 v2; // rbp
  unsigned int v3; // ebx
  unsigned int v5; // edi
  char v6; // r12
  char v7; // r14
  char v8; // r15
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  NTSTATUS result; // eax
  NTSTATUS Key; // ebx
  NTSTATUS InstallUILanguage; // ebx
  int v15; // eax
  ULONG v16; // r12d
  ULONG v17; // edi
  ULONG v18; // edx
  void *v19; // rcx
  void *v20; // rcx
  void *v21; // rcx
  void *v22; // rcx
  __int64 v23; // rax
  ULONG v24; // ebx
  unsigned int v25; // ecx
  void *v26; // rbx
  void *v27; // rcx
  ULONG v28; // ebx
  NTSTATUS v29; // edi
  size_t v30; // r15
  __int64 v31; // rsi
  __int64 v32; // r14
  void *v33; // rcx
  _WORD *v34; // rcx
  unsigned int v35; // eax
  unsigned __int64 v36; // rdx
  __int16 v37; // ax
  struct _KTHREAD *CurrentThread; // rcx
  _DWORD *Teb; // rax
  char v40; // [rsp+60h] [rbp+0h] BYREF

  v2 = (unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL;
  v3 = a2;
  memset((void *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 448), 0, 0xAAuLL);
  v5 = v3;
  *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x88) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = 0LL;
  v6 = 1;
  *(_BYTE *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 2) = 1;
  v7 = 0;
  v8 = 0;
  *(_BYTE *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 1) = 0;
  result = OpenGlobalizationUserSettingsKey(
             v9,
             3u,
             v10,
             v11,
             (PHANDLE)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 144));
  if ( result < 0 )
    return result;
  RtlInitUnicodeString((PUNICODE_STRING)(v2 + 16), SourceString);
  RtlInitUnicodeString((PUNICODE_STRING)(v2 + 120), L"Control Panel\\Desktop");
  *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = 48;
  *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                   + 0x90);
  *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = 1600;
  *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = ((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                       + 120;
  *(_OWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = 0LL;
  if ( (_WORD)v3 )
  {
    Key = ExpValidateLocale(v3);
    *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = Key;
    if ( Key < 0 )
      goto LABEL_25;
    Key = ZwOpenKey((PHANDLE)(v2 + 48), 0x40000000u, (POBJECT_ATTRIBUTES)(v2 + 72));
    *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = Key;
    if ( Key < 0 )
      goto LABEL_25;
    *(_BYTE *)v2 = 1;
    *(_WORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0xD0) = 0;
    v34 = (_WORD *)(v2 + 206);
    do
    {
      v35 = v5 & 0xF;
      v36 = (unsigned __int64)(v34 - 1);
      if ( v35 > 9 )
        v37 = v35 + 55;
      else
        v37 = v35 + 48;
      *v34 = v37;
      v5 >>= 4;
      --v34;
    }
    while ( v36 >= v2 + 192 );
    Key = ZwSetValueKey(
            *(HANDLE *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30),
            (PUNICODE_STRING)(v2 + 16),
            0,
            1u,
            (PVOID)(v2 + 192),
            0x12u);
    *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = Key;
    goto LABEL_24;
  }
  Key = ZwOpenKey((PHANDLE)(v2 + 48), 0x40000000u, (POBJECT_ATTRIBUTES)(v2 + 72));
  *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = Key;
  if ( Key >= 0 )
  {
    *(_BYTE *)v2 = 1;
    RtlInitUnicodeString((PUNICODE_STRING)(v2 + 16), L"MultiUILanguageId");
    if ( ZwQueryValueKey(
           *(HANDLE *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30),
           (PUNICODE_STRING)(v2 + 16),
           KeyValuePartialInformation,
           (PVOID)(v2 + 192),
           0x100u,
           (PULONG)(v2 + 8)) >= 0
      && *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC8) > 4u
      && *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC4) == 1 )
    {
      RtlInitUnicodeString((PUNICODE_STRING)(v2 + 16), (PCWSTR)(v2 + 204));
      if ( RtlUnicodeStringToInteger((PCUNICODE_STRING)(v2 + 16), 0x10u, (PULONG)(v2 + 152)) >= 0
        && (int)DownLevelLangIDToLanguageName(
                  *(_WORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x98),
                  (unsigned __int16 *)(v2 + 448),
                  85,
                  0) > 1 )
      {
        RtlInitUnicodeString((PUNICODE_STRING)(v2 + 16), L"PreferredUILanguages");
        v23 = -1LL;
        do
          ++v23;
        while ( *(_WORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x1C0 + 2 * v23) );
        ZwSetValueKey(
          *(HANDLE *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30),
          (PUNICODE_STRING)(v2 + 16),
          0,
          7u,
          (PVOID)(v2 + 448),
          2 * v23 + 2);
      }
      RtlInitUnicodeString((PUNICODE_STRING)(v2 + 16), L"MultiUILanguageId");
      ZwDeleteValueKey(*(HANDLE *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30), (PUNICODE_STRING)(v2 + 16));
      v8 = 1;
      *(_BYTE *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 1) = 1;
    }
    RtlInitUnicodeString((PUNICODE_STRING)(v2 + 16), L"PreferredUILanguagesPending");
    if ( ZwQueryValueKey(
           *(HANDLE *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30),
           (PUNICODE_STRING)(v2 + 16),
           KeyValuePartialInformation,
           (PVOID)(v2 + 192),
           0x100u,
           (PULONG)(v2 + 8)) >= 0 )
    {
      v24 = *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC8);
      if ( v24 >= 4 && *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC4) == 7 )
      {
        RtlInitUnicodeString((PUNICODE_STRING)(v2 + 16), L"PreferredUILanguages");
        if ( ZwSetValueKey(
               *(HANDLE *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30),
               (PUNICODE_STRING)(v2 + 16),
               0,
               7u,
               (PVOID)(v2 + 204),
               v24) >= 0 )
        {
          v8 = 1;
          *(_BYTE *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 1) = 1;
          v25 = *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC8);
          if ( v25 + 12 < 0x100 )
          {
            *(_WORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0xCA + 2 * ((unsigned __int64)v25 >> 1)) = 0;
            RtlInitUnicodeString((PUNICODE_STRING)(v2 + 16), L"PreferredUILanguagesPending");
            ZwDeleteValueKey(
              *(HANDLE *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30),
              (PUNICODE_STRING)(v2 + 16));
            RtlInitUnicodeString((PUNICODE_STRING)(v2 + 160), (PCWSTR)(v2 + 204));
            RtlInitUnicodeString((PUNICODE_STRING)(v2 + 120), L"Control Panel\\Desktop\\LanguageConfigurationPending");
            *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = 48;
            *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                             + 0x90);
            *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = 1600;
            *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = ((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                 + 120;
            *(_OWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = 0LL;
            if ( ZwOpenKey((PHANDLE)(v2 + 136), 0x40000000u, (POBJECT_ATTRIBUTES)(v2 + 72)) >= 0
              && ZwQueryValueKey(
                   *(HANDLE *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x88),
                   (PUNICODE_STRING)(v2 + 160),
                   KeyValuePartialInformation,
                   (PVOID)(v2 + 640),
                   0x210u,
                   (PULONG)(v2 + 8)) >= 0
              && *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x284) == 7 )
            {
              RtlInitUnicodeString((PUNICODE_STRING)(v2 + 120), L"Control Panel\\Desktop\\LanguageConfiguration");
              *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = 48;
              *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                               + 0x90);
              *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = 1600;
              *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = ((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                   + 120;
              *(_OWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = 0LL;
              if ( ZwCreateKey((PHANDLE)(v2 + 56), 0x40000000u, (POBJECT_ATTRIBUTES)(v2 + 72), 0, 0LL, 0, 0LL) >= 0 )
              {
                if ( ZwSetValueKey(
                       *(HANDLE *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38),
                       (PUNICODE_STRING)(v2 + 160),
                       0,
                       7u,
                       (PVOID)(v2 + 652),
                       *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x288)) >= 0 )
                  ZwDeleteValueKey(
                    *(HANDLE *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x88),
                    (PUNICODE_STRING)(v2 + 160));
                ZwClose(*(HANDLE *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38));
              }
            }
          }
        }
      }
    }
    RtlInitUnicodeString((PUNICODE_STRING)(v2 + 120), L"Control Panel\\Desktop\\MuiCached");
    *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = 48;
    *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                     + 0x90);
    *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = 1600;
    *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = ((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                         + 120;
    *(_OWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = 0LL;
    ZwOpenKey((PHANDLE)(v2 + 32), 0x40000000u, (POBJECT_ATTRIBUTES)(v2 + 72));
    RtlInitUnicodeString(
      (PUNICODE_STRING)(v2 + 120),
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
    *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = 48;
    *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 0LL;
    *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = 1600;
    *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = ((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                         + 120;
    *(_OWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = 0LL;
    if ( ZwOpenKey((PHANDLE)(v2 + 56), 0x80000000, (POBJECT_ATTRIBUTES)(v2 + 72)) < 0 )
    {
      v26 = *(void **)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
      if ( v26 )
      {
        RtlInitUnicodeString((PUNICODE_STRING)(v2 + 16), L"MachinePreferredUILanguages");
        ZwDeleteValueKey(v26, (PUNICODE_STRING)(v2 + 16));
      }
LABEL_17:
      RtlInitUnicodeString((PUNICODE_STRING)(v2 + 120), L"MachineLanguageConfiguration");
      *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = 48;
      *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                       + 0x20);
      *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = 1600;
      *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = ((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                           + 120;
      *(_OWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = 0LL;
      if ( ZwOpenKey((PHANDLE)(v2 + 64), 0x40000000u, (POBJECT_ATTRIBUTES)(v2 + 72)) >= 0 )
      {
        v28 = 0;
        do
        {
          memset((void *)(v2 + 192), 0, 0x100uLL);
          v29 = ZwEnumerateValueKey(
                  *(HANDLE *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40),
                  v28,
                  KeyValueBasicInformation,
                  (PVOID)(v2 + 192),
                  0xFEu,
                  (PULONG)(v2 + 8));
          if ( v29 >= 0 )
          {
            RtlInitUnicodeString((PUNICODE_STRING)(v2 + 16), (PCWSTR)(v2 + 204));
            if ( ZwDeleteValueKey(
                   *(HANDLE *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40),
                   (PUNICODE_STRING)(v2 + 16)) < 0 )
            {
              DbgPrint(
                "*** MUI: Failed to delete value %S from MachineLanguageConfiguration!\n",
                (const wchar_t *)(v2 + 204));
              ++v28;
            }
          }
        }
        while ( v29 >= 0 );
      }
      RtlInitUnicodeString(
        (PUNICODE_STRING)(v2 + 120),
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings\\LanguageConfiguration");
      *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = 48;
      *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 0LL;
      *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = 1600;
      *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = ((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                           + 120;
      *(_OWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = 0LL;
      if ( ZwOpenKey((PHANDLE)(v2 + 56), 0x80000000, (POBJECT_ATTRIBUTES)(v2 + 72)) < 0 )
      {
        Key = 0;
        *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 0;
      }
      else
      {
        v16 = 0;
        do
        {
          v17 = v16;
          memset((void *)(v2 + 640), 0, 0x210uLL);
          v18 = v16++;
          Key = ZwEnumerateValueKey(
                  *(HANDLE *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38),
                  v18,
                  KeyValueFullInformation,
                  (PVOID)(v2 + 640),
                  0x20Eu,
                  (PULONG)(v2 + 8));
          *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = Key;
          if ( Key >= 0 )
          {
            v30 = *(unsigned int *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x290);
            if ( v30 + 24 <= 0x210
              && (v31 = *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x288),
                  v32 = *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28C),
                  (unsigned int)(v31 + v32) <= 0x210)
              && *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x284) == 7
              && *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x290) < 0xAAu )
            {
              memset((void *)(v2 + 448), 0, 0xAAuLL);
              memmove((void *)(v2 + 448), (const void *)(v2 + 660), v30);
              RtlInitUnicodeString((PUNICODE_STRING)(v2 + 16), (PCWSTR)(v2 + 448));
              v33 = *(void **)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
              if ( !v33 )
              {
                RtlInitUnicodeString((PUNICODE_STRING)(v2 + 120), L"MachineLanguageConfiguration");
                *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = 48;
                *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                                 + 0x20);
                *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = 1600;
                *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = ((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                     + 120;
                *(_OWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = 0LL;
                Key = ZwCreateKey((PHANDLE)(v2 + 64), 0x40000000u, (POBJECT_ATTRIBUTES)(v2 + 72), 0, 0LL, 1u, 0LL);
                *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = Key;
                if ( Key < 0 )
                  goto LABEL_23;
                *(_BYTE *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 2) = 0;
                v33 = *(void **)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
                v32 = *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28C);
                v31 = *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x288);
              }
              Key = ZwSetValueKey(v33, (PUNICODE_STRING)(v2 + 16), 0, 7u, (PVOID)((unsigned int)v31 + v2 + 640), v32);
              *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = Key;
              if ( Key < 0 )
              {
                DbgPrint("*** MUI: Can't copy language name for LanguageConfig item %S\n", (const wchar_t *)(v2 + 448));
                Key = 0;
                *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 0;
              }
            }
            else
            {
              DbgPrint("*** MUI: Can't copy language name for LanguageConfig item %u\n", v17);
            }
          }
        }
        while ( Key >= 0 );
        ZwClose(*(HANDLE *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38));
LABEL_23:
        v6 = *(_BYTE *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 2);
        v8 = *(_BYTE *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 1);
      }
      goto LABEL_24;
    }
    RtlInitUnicodeString((PUNICODE_STRING)(v2 + 16), L"PreferredUILanguages");
    if ( ZwQueryValueKey(
           *(HANDLE *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38),
           (PUNICODE_STRING)(v2 + 16),
           KeyValuePartialInformation,
           (PVOID)(v2 + 192),
           0x100u,
           (PULONG)(v2 + 8)) >= 0
      && *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC8) >= 4u
      && *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC4) == 7 )
    {
      goto LABEL_12;
    }
    *(_WORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = 0;
    *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC8) = 0;
    InstallUILanguage = NtQueryInstallUILanguage((LANGID *)(v2 + 40));
    if ( InstallUILanguage >= 0 )
    {
      v15 = DownLevelLangIDToLanguageName(
              *(_WORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28),
              (unsigned __int16 *)(v2 + 204),
              128,
              0);
      *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC8) = v15;
      if ( !v15 )
      {
        InstallUILanguage = -1073741823;
        goto LABEL_65;
      }
      *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC8) = 2 * v15;
    }
    if ( InstallUILanguage >= 0 )
    {
LABEL_12:
      if ( !*(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) )
      {
        RtlInitUnicodeString((PUNICODE_STRING)(v2 + 120), L"Control Panel\\Desktop\\MuiCached");
        *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = 48;
        *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                         + 0x90);
        *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = 1600;
        *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = ((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                             + 120;
        *(_OWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = 0LL;
        Key = ZwCreateKey((PHANDLE)(v2 + 32), 0x40000000u, (POBJECT_ATTRIBUTES)(v2 + 72), 0, 0LL, 1u, 0LL);
        *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = Key;
        if ( Key < 0 )
        {
LABEL_24:
          v7 = *(_BYTE *)v2;
          goto LABEL_25;
        }
      }
      RtlInitUnicodeString((PUNICODE_STRING)(v2 + 16), L"MachinePreferredUILanguages");
      if ( ZwSetValueKey(
             *(HANDLE *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20),
             (PUNICODE_STRING)(v2 + 16),
             0,
             7u,
             (PVOID)(v2 + 204),
             *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC8)) < 0 )
        DbgPrintEx(0xFFFFFFFF, 0, "sysinfo: Can't set MachinePreferredUILanguages\n");
      goto LABEL_16;
    }
LABEL_65:
    DbgPrintEx(0xFFFFFFFF, 0, "sysinfo: Can't set MachinePreferredUILanguages due to error %d\n", InstallUILanguage);
    v27 = *(void **)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
    if ( v27 )
      ZwDeleteValueKey(v27, (PUNICODE_STRING)(v2 + 16));
LABEL_16:
    ZwClose(*(HANDLE *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38));
    goto LABEL_17;
  }
LABEL_25:
  if ( v7 )
    ZwClose(*(HANDLE *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30));
  v19 = *(void **)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x88);
  if ( v19 )
  {
    if ( ZwEnumerateValueKey(v19, 0, KeyValueBasicInformation, 0LL, 0, (PULONG)(v2 + 8)) == -2147483622 )
      ZwDeleteKey(*(HANDLE *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x88));
    ZwClose(*(HANDLE *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x88));
  }
  if ( *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) )
  {
    v20 = *(void **)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
    if ( !v20 || v6 && ZwEnumerateValueKey(v20, 0, KeyValueBasicInformation, 0LL, 0, (PULONG)(v2 + 8)) == -2147483622 )
    {
      v21 = *(void **)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
      if ( v21 )
        ZwDeleteKey(v21);
      if ( ZwEnumerateValueKey(
             *(HANDLE *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20),
             0,
             KeyValueBasicInformation,
             0LL,
             0,
             (PULONG)(v2 + 8)) == -2147483622 )
        ZwDeleteKey(*(HANDLE *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20));
    }
    ZwClose(*(HANDLE *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20));
  }
  v22 = *(void **)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
  if ( v22 )
    ZwClose(v22);
  CloseGlobalizationUserSettingsKey(*(char **)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFE0uLL) + 0x90));
  if ( v8 == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
      Teb = 0LL;
    else
      Teb = CurrentThread->Teb;
    if ( Teb )
      Teb[1530] = 0;
  }
  return Key;
}
