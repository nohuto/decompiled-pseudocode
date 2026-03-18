/*
 * XREFs of ExpSetPendingUILanguage @ 0x140743A3C
 * Callers:
 *     NtSetDefaultUILanguage @ 0x140743800 (NtSetDefaultUILanguage.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     DbgPrintEx @ 0x1401264A0 (DbgPrintEx.c)
 *     DbgPrint @ 0x1401264E0 (DbgPrint.c)
 *     DownLevelLangIDToLanguageName @ 0x1401778C4 (DownLevelLangIDToLanguageName.c)
 *     OpenGlobalizationUserSettingsKey @ 0x14017E9D8 (OpenGlobalizationUserSettingsKey.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x1401C0330 (ZwEnumerateValueKey.c)
 *     ZwQueryValueKey @ 0x1401C03B0 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x1401C0470 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1401C0CD0 (ZwSetValueKey.c)
 *     ZwDeleteKey @ 0x1401C1AB0 (ZwDeleteKey.c)
 *     ZwDeleteValueKey @ 0x1401C1B10 (ZwDeleteValueKey.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     NtQueryInstallUILanguage @ 0x1406E6F90 (NtQueryInstallUILanguage.c)
 */

NTSTATUS ExpSetPendingUILanguage()
{
  unsigned __int64 v0; // rbp
  char v1; // r12
  char v2; // si
  __int64 v3; // rdx
  int v4; // ecx
  NTSTATUS result; // eax
  NTSTATUS Key; // ebx
  NTSTATUS InstallUILanguage; // ebx
  int v8; // eax
  ULONG v9; // r12d
  ULONG v10; // esi
  ULONG v11; // edx
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  ULONG v17; // ebx
  unsigned int v18; // ecx
  struct _KTHREAD *CurrentThread; // rcx
  _DWORD *Teb; // rax
  void *v21; // rbx
  void *v22; // rcx
  ULONG v23; // ebx
  NTSTATUS v24; // esi
  __int64 v25; // r13
  __int64 v26; // r14
  __int64 v27; // r15
  void *v28; // rcx
  char v29; // [rsp+60h] [rbp+0h] BYREF

  v0 = (unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL;
  memset((void *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 80), 0, 0x30uLL);
  *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x98) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0xA0) = 0LL;
  memset((void *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 448), 0, 0xAAuLL);
  *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x90) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x80) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = 0LL;
  v1 = 1;
  *(_BYTE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 1) = 1;
  v2 = 0;
  *(_BYTE *)((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) = 0;
  result = OpenGlobalizationUserSettingsKey(v4, v3, (HANDLE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 136));
  if ( result < 0 )
    return result;
  RtlInitUnicodeString((PUNICODE_STRING)(v0 + 48), L"Control Panel\\Desktop");
  *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 48;
  *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                   + 0x88);
  *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = 1600;
  *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = ((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                       + 48;
  *(_OWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70) = 0LL;
  Key = ZwOpenKey((PHANDLE)(v0 + 144), 0x40000000u, (POBJECT_ATTRIBUTES)(v0 + 80));
  *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = Key;
  if ( Key < 0 )
    goto LABEL_23;
  RtlInitUnicodeString((PUNICODE_STRING)(v0 + 64), L"PreferredUILanguagesPending");
  if ( ZwQueryValueKey(
         *(HANDLE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x90),
         (PUNICODE_STRING)(v0 + 64),
         KeyValuePartialInformation,
         (PVOID)(v0 + 192),
         0x100u,
         (PULONG)(v0 + 4)) >= 0 )
  {
    v17 = *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC8);
    if ( v17 >= 4 && *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC4) == 7 )
    {
      RtlInitUnicodeString((PUNICODE_STRING)(v0 + 64), L"PreferredUILanguages");
      if ( ZwSetValueKey(
             *(HANDLE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x90),
             (PUNICODE_STRING)(v0 + 64),
             0,
             7u,
             (PVOID)(v0 + 204),
             v17) >= 0 )
      {
        v2 = 1;
        *(_BYTE *)v0 = 1;
        v18 = *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC8);
        if ( v18 + 12 < 0x100 )
        {
          *(_WORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0xCA + 2 * ((unsigned __int64)v18 >> 1)) = 0;
          RtlInitUnicodeString((PUNICODE_STRING)(v0 + 64), L"PreferredUILanguagesPending");
          ZwDeleteValueKey(
            *(HANDLE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x90),
            (PUNICODE_STRING)(v0 + 64));
          RtlInitUnicodeString((PUNICODE_STRING)(v0 + 152), (PCWSTR)(v0 + 204));
          RtlInitUnicodeString((PUNICODE_STRING)(v0 + 48), L"Control Panel\\Desktop\\LanguageConfigurationPending");
          *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 48;
          *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                           + 0x88);
          *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = 1600;
          *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = ((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                               + 48;
          *(_OWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70) = 0LL;
          if ( ZwOpenKey((PHANDLE)(v0 + 128), 0x40000000u, (POBJECT_ATTRIBUTES)(v0 + 80)) >= 0
            && ZwQueryValueKey(
                 *(HANDLE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x80),
                 (PUNICODE_STRING)(v0 + 152),
                 KeyValuePartialInformation,
                 (PVOID)(v0 + 640),
                 0x210u,
                 (PULONG)(v0 + 4)) >= 0
            && *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x284) == 7 )
          {
            RtlInitUnicodeString((PUNICODE_STRING)(v0 + 48), L"Control Panel\\Desktop\\LanguageConfiguration");
            *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 48;
            *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                             + 0x88);
            *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = 1600;
            *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = ((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                 + 48;
            *(_OWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70) = 0LL;
            if ( ZwCreateKey((PHANDLE)(v0 + 32), 0x40000000u, (POBJECT_ATTRIBUTES)(v0 + 80), 0, 0LL, 0, 0LL) >= 0 )
            {
              if ( ZwSetValueKey(
                     *(HANDLE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20),
                     (PUNICODE_STRING)(v0 + 152),
                     0,
                     7u,
                     (PVOID)(v0 + 652),
                     *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x288)) >= 0 )
                ZwDeleteValueKey(
                  *(HANDLE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x80),
                  (PUNICODE_STRING)(v0 + 152));
              ZwClose(*(HANDLE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20));
            }
          }
        }
      }
    }
  }
  RtlInitUnicodeString((PUNICODE_STRING)(v0 + 48), L"Control Panel\\Desktop\\MuiCached");
  *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 48;
  *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                   + 0x88);
  *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = 1600;
  *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = ((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                       + 48;
  *(_OWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70) = 0LL;
  ZwOpenKey((PHANDLE)(v0 + 16), 0x40000000u, (POBJECT_ATTRIBUTES)(v0 + 80));
  RtlInitUnicodeString(
    (PUNICODE_STRING)(v0 + 48),
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
  *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 48;
  *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = 0LL;
  *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = 1600;
  *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = ((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                       + 48;
  *(_OWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70) = 0LL;
  if ( ZwOpenKey((PHANDLE)(v0 + 32), 0x80000000, (POBJECT_ATTRIBUTES)(v0 + 80)) < 0 )
  {
    v21 = *(void **)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
    if ( v21 )
    {
      RtlInitUnicodeString((PUNICODE_STRING)(v0 + 64), L"MachinePreferredUILanguages");
      ZwDeleteValueKey(v21, (PUNICODE_STRING)(v0 + 64));
    }
    goto LABEL_15;
  }
  RtlInitUnicodeString((PUNICODE_STRING)(v0 + 64), L"PreferredUILanguages");
  if ( ZwQueryValueKey(
         *(HANDLE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20),
         (PUNICODE_STRING)(v0 + 64),
         KeyValuePartialInformation,
         (PVOID)(v0 + 192),
         0x100u,
         (PULONG)(v0 + 4)) < 0
    || *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC8) < 4u
    || *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC4) != 7 )
  {
    *(_WORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = 0;
    *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC8) = 0;
    InstallUILanguage = NtQueryInstallUILanguage((LANGID *)(v0 + 24));
    if ( InstallUILanguage >= 0 )
    {
      v8 = DownLevelLangIDToLanguageName(
             *(_WORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18),
             (unsigned __int16 *)(v0 + 204),
             128,
             0);
      *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC8) = v8;
      if ( !v8 )
      {
        InstallUILanguage = -1073741823;
        goto LABEL_62;
      }
      *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC8) = 2 * v8;
    }
    if ( InstallUILanguage >= 0 )
      goto LABEL_10;
LABEL_62:
    DbgPrintEx(0xFFFFFFFF, 0, "sysinfo: Can't set MachinePreferredUILanguages due to error %d\n", InstallUILanguage);
    v22 = *(void **)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
    if ( v22 )
      ZwDeleteValueKey(v22, (PUNICODE_STRING)(v0 + 64));
    goto LABEL_14;
  }
LABEL_10:
  if ( *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) )
    goto LABEL_12;
  RtlInitUnicodeString((PUNICODE_STRING)(v0 + 48), L"Control Panel\\Desktop\\MuiCached");
  *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 48;
  *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                   + 0x88);
  *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = 1600;
  *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = ((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                       + 48;
  *(_OWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70) = 0LL;
  Key = ZwCreateKey((PHANDLE)(v0 + 16), 0x40000000u, (POBJECT_ATTRIBUTES)(v0 + 80), 0, 0LL, 1u, 0LL);
  *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = Key;
  if ( Key >= 0 )
  {
LABEL_12:
    RtlInitUnicodeString((PUNICODE_STRING)(v0 + 64), L"MachinePreferredUILanguages");
    if ( ZwSetValueKey(
           *(HANDLE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10),
           (PUNICODE_STRING)(v0 + 64),
           0,
           7u,
           (PVOID)(v0 + 204),
           *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC8)) < 0 )
      DbgPrintEx(0xFFFFFFFF, 0, "sysinfo: Can't set MachinePreferredUILanguages\n");
LABEL_14:
    ZwClose(*(HANDLE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20));
LABEL_15:
    RtlInitUnicodeString((PUNICODE_STRING)(v0 + 48), L"MachineLanguageConfiguration");
    *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 48;
    *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                     + 0x10);
    *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = 1600;
    *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = ((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                         + 48;
    *(_OWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70) = 0LL;
    if ( ZwOpenKey((PHANDLE)(v0 + 40), 0x40000000u, (POBJECT_ATTRIBUTES)(v0 + 80)) >= 0 )
    {
      v23 = 0;
      do
      {
        memset((void *)(v0 + 192), 0, 0x100uLL);
        v24 = ZwEnumerateValueKey(
                *(HANDLE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28),
                v23,
                KeyValueBasicInformation,
                (PVOID)(v0 + 192),
                0xFEu,
                (PULONG)(v0 + 4));
        if ( v24 >= 0 )
        {
          RtlInitUnicodeString((PUNICODE_STRING)(v0 + 64), (PCWSTR)(v0 + 204));
          if ( ZwDeleteValueKey(
                 *(HANDLE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28),
                 (PUNICODE_STRING)(v0 + 64)) < 0 )
          {
            DbgPrint(
              "*** MUI: Failed to delete value %S from MachineLanguageConfiguration!\n",
              (const wchar_t *)(v0 + 204));
            ++v23;
          }
        }
      }
      while ( v24 >= 0 );
    }
    RtlInitUnicodeString(
      (PUNICODE_STRING)(v0 + 48),
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings\\LanguageConfiguration");
    *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 48;
    *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = 0LL;
    *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = 1600;
    *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = ((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                         + 48;
    *(_OWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70) = 0LL;
    if ( ZwOpenKey((PHANDLE)(v0 + 32), 0x80000000, (POBJECT_ATTRIBUTES)(v0 + 80)) < 0 )
    {
      Key = 0;
      *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0;
    }
    else
    {
      v9 = 0;
      do
      {
        v10 = v9;
        memset((void *)(v0 + 640), 0, 0x210uLL);
        v11 = v9++;
        Key = ZwEnumerateValueKey(
                *(HANDLE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20),
                v11,
                KeyValueFullInformation,
                (PVOID)(v0 + 640),
                0x20Eu,
                (PULONG)(v0 + 4));
        *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = Key;
        if ( Key >= 0 )
        {
          v25 = *(unsigned int *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x290);
          if ( (unsigned __int64)(v25 + 24) <= 0x210
            && (v26 = *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x288),
                v27 = *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28C),
                (unsigned int)(v26 + v27) <= 0x210)
            && *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x284) == 7
            && *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x290) < 0xAAu )
          {
            memset((void *)(v0 + 448), 0, 0xAAuLL);
            memmove((void *)(v0 + 448), (const void *)(v0 + 660), (unsigned int)v25);
            RtlInitUnicodeString((PUNICODE_STRING)(v0 + 64), (PCWSTR)(v0 + 448));
            v28 = *(void **)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
            if ( !v28 )
            {
              RtlInitUnicodeString((PUNICODE_STRING)(v0 + 48), L"MachineLanguageConfiguration");
              *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 48;
              *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                               + 0x10);
              *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = 1600;
              *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = ((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                   + 48;
              *(_OWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70) = 0LL;
              Key = ZwCreateKey((PHANDLE)(v0 + 40), 0x40000000u, (POBJECT_ATTRIBUTES)(v0 + 80), 0, 0LL, 1u, 0LL);
              *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = Key;
              if ( Key < 0 )
                goto LABEL_21;
              *(_BYTE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 1) = 0;
              v28 = *(void **)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
              v27 = *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28C);
              v26 = *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x288);
            }
            Key = ZwSetValueKey(v28, (PUNICODE_STRING)(v0 + 64), 0, 7u, (PVOID)((unsigned int)v26 + v0 + 640), v27);
            *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = Key;
            if ( Key < 0 )
            {
              DbgPrint("*** MUI: Can't copy language name for LanguageConfig item %S\n", (const wchar_t *)(v0 + 448));
              Key = 0;
              *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0;
            }
          }
          else
          {
            DbgPrint("*** MUI: Can't copy language name for LanguageConfig item %u\n", v10);
          }
        }
      }
      while ( Key >= 0 );
      ZwClose(*(HANDLE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20));
LABEL_21:
      v1 = *(_BYTE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 1);
    }
    v2 = *(_BYTE *)v0;
  }
LABEL_23:
  v12 = *(void **)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x90);
  if ( v12 )
    ZwClose(v12);
  v13 = *(void **)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x80);
  if ( v13 )
  {
    if ( ZwEnumerateValueKey(v13, 0, KeyValueBasicInformation, 0LL, 0, (PULONG)(v0 + 4)) == -2147483622 )
      ZwDeleteKey(*(HANDLE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x80));
    ZwClose(*(HANDLE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x80));
  }
  if ( *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) )
  {
    v14 = *(void **)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
    if ( !v14 || v1 && ZwEnumerateValueKey(v14, 0, KeyValueBasicInformation, 0LL, 0, (PULONG)(v0 + 4)) == -2147483622 )
    {
      v15 = *(void **)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
      if ( v15 )
        ZwDeleteKey(v15);
      if ( ZwEnumerateValueKey(
             *(HANDLE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10),
             0,
             KeyValueBasicInformation,
             0LL,
             0,
             (PULONG)(v0 + 4)) == -2147483622 )
        ZwDeleteKey(*(HANDLE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10));
    }
    ZwClose(*(HANDLE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10));
  }
  v16 = *(void **)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
  if ( v16 )
    ZwClose(v16);
  ZwClose(*(HANDLE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x88));
  if ( v2 == 1 )
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
