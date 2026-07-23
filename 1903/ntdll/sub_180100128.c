/*
 * XREFs of sub_180100128 @ 0x180100128
 * Callers:
 *     sub_1800FFD50 @ 0x1800FFD50 (sub_1800FFD50.c)
 * Callees:
 *     sub_1800090D4 @ 0x1800090D4 (sub_1800090D4.c)
 *     RtlLCIDToCultureName @ 0x180016330 (RtlLCIDToCultureName.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     RtlCompareUnicodeStrings @ 0x18001A040 (RtlCompareUnicodeStrings.c)
 *     sub_18008B794 @ 0x18008B794 (sub_18008B794.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwEnumerateValueKey @ 0x18009C940 (ZwEnumerateValueKey.c)
 *     ZwQueryValueKey @ 0x18009C9C0 (ZwQueryValueKey.c)
 *     ZwIsUILanguageComitted @ 0x18009E690 (ZwIsUILanguageComitted.c)
 *     ZwQueryInstallUILanguage @ 0x18009F010 (ZwQueryInstallUILanguage.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_1800FF6D0 @ 0x1800FF6D0 (sub_1800FF6D0.c)
 *     sub_18010058C @ 0x18010058C (sub_18010058C.c)
 */

NTSTATUS __fastcall sub_180100128(_WORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbp
  __int64 v8; // r12
  __int16 v9; // ax
  NTSTATUS v10; // r13d
  unsigned int v11; // ebx
  NTSTATUS result; // eax
  unsigned __int16 v13; // di
  unsigned __int16 v14; // r14
  bool v15; // sf
  __int64 v16; // r15
  int v17; // eax
  _WORD *v18; // rdi
  void *v19; // r14
  ULONG i; // r13d
  unsigned __int64 v21; // rdi
  __int16 v22; // r14
  unsigned int *v23; // rax
  LANGID InstallUILanguageId[2]; // [rsp+50h] [rbp+0h] BYREF

  v4 = (unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL;
  *(_QWORD *)(v4 + 40) = a2;
  *(_QWORD *)(v4 + 64) = a4;
  *(_QWORD *)(v4 + 8) = a3;
  *(_DWORD *)(v4 + 36) = 0;
  memset((void *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 80), 0, 0xAAuLL);
  memset((void *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 768), 0, 0xAAuLL);
  memset((void *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 944), 0, 0xAAuLL);
  *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = 0;
  LODWORD(v8) = 0;
  *(_WORD *)v4 = 0;
  if ( !a1 || !a3 || !a2 )
    return -1073741811;
  v9 = a1[2];
  v10 = 0;
  *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = 0;
  v11 = 0;
  if ( v9 )
  {
    v13 = a1[3];
    v14 = a1[4];
    *(_WORD *)v4 = v9;
  }
  else
  {
    result = ZwQueryInstallUILanguage((LANGID *)((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL));
    v10 = result;
    if ( result < 0 )
      return result;
    if ( (int)sub_18008B794((__int64)a1, (_WORD *)(v4 + 16), (_WORD *)(v4 + 20)) >= 0 )
    {
      v14 = *(_WORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x14);
      v13 = *(_WORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
    }
    else
    {
      v13 = 0;
      v14 = 0;
    }
    v15 = ZwIsUILanguageComitted() < 0;
    v9 = *(_WORD *)v4;
    if ( !v15 )
    {
      a1[4] = v14;
      a1[3] = v13;
      a1[2] = v9;
    }
  }
  v16 = -1LL;
  if ( *(_WORD *)(*(_QWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 8) + 4LL) == v9 )
  {
    if ( v13
      && (*(_QWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = ((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                              + 768,
          *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 512,
          *(_WORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x32) = 170,
          RtlLCIDToCultureName(v13, (PUNICODE_STRING)(v4 + 48)))
      && ZwQueryValueKey(
           *(HANDLE *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x28),
           (PUNICODE_STRING)(v4 + 48),
           KeyValueFullInformation,
           (PVOID)(v4 + 256),
           0x200u,
           (PULONG)(v4 + 4)) >= 0 )
    {
      v17 = sub_18010058C(a1, v4 + 256, v14, v4 + 944);
      v18 = *(_WORD **)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 8);
      if ( v17 >= 0 && (int)sub_1800FF6D0((__int64)a1, v18, 0, v4 + 256, (wchar_t *)(v4 + 944)) >= 0 )
      {
        v11 = 1;
        v8 = -1LL;
        do
          ++v8;
        while ( *(_WORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x300 + 2 * v8) );
      }
    }
    else
    {
      v18 = *(_WORD **)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 8);
    }
  }
  else
  {
    v18 = *(_WORD **)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 8);
  }
  RtlInitUnicodeString((PUNICODE_STRING)(v4 + 48), L"DefaultFallback");
  v19 = *(void **)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
  *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = 1;
  *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 170;
  if ( (int)sub_1800090D4(v19, (PUNICODE_STRING)(v4 + 48), (_DWORD *)(v4 + 16), (void *)(v4 + 80), (ULONG *)(v4 + 4)) >= 0
    && *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) == 1
    && (!(_DWORD)v8
     || RtlCompareUnicodeStrings(
          (PCWCH)(v4 + 80),
          (unsigned __int64)*(unsigned int *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 4) >> 1,
          (PCWCH)(v4 + 768),
          (unsigned int)v8,
          1u))
    && (RtlInitUnicodeString((PUNICODE_STRING)(v4 + 48), (PCWSTR)(v4 + 80)),
        *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 512,
        ZwQueryValueKey(
          v19,
          (PUNICODE_STRING)(v4 + 48),
          KeyValueFullInformation,
          (PVOID)(v4 + 256),
          0x200u,
          (PULONG)(v4 + 4)) >= 0)
    && *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x104) == 7
    && (int)sub_1800FF6D0((__int64)a1, v18, v11, v4 + 256, 0LL) >= 0 )
  {
    ++v11;
    do
      ++v16;
    while ( *(_WORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x50 + 2 * v16) );
  }
  else
  {
    v16 = *(_QWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
  }
  if ( v10 != -2147483622 )
  {
    for ( i = *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
          v11 < 4
       && ZwEnumerateValueKey(v19, i, KeyValueFullInformation, (PVOID)(v4 + 256), 0x200u, (PULONG)(v4 + 36)) >= 0;
          ++i )
    {
      if ( *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x104) == 7
        && *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x110) <= 0x200u )
      {
        if ( (_DWORD)v16 || (_DWORD)v8 )
        {
          v21 = (unsigned __int64)*(unsigned int *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL)
                                                  + 0x110) >> 1;
          v22 = *(_WORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x114 + 2 * v21);
          *(_WORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x114 + 2 * v21) = 0;
          if ( (_DWORD)v8
            && !RtlCompareUnicodeStrings(
                  (PCWCH)(v4 + 276),
                  (unsigned __int64)*(unsigned int *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL)
                                                    + 0x110) >> 1,
                  (PCWCH)(v4 + 768),
                  (unsigned int)v8,
                  1u)
            || (_DWORD)v16
            && !RtlCompareUnicodeStrings(
                  (PCWCH)(v4 + 276),
                  (unsigned __int64)*(unsigned int *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL)
                                                    + 0x110) >> 1,
                  (PCWCH)(v4 + 80),
                  (unsigned int)v16,
                  1u) )
          {
            v18 = *(_WORD **)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 8);
            goto LABEL_50;
          }
          *(_WORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x114 + 2 * v21) = v22;
          v18 = *(_WORD **)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 8);
        }
        if ( (int)sub_1800FF6D0((__int64)a1, v18, v11, v4 + 256, 0LL) >= 0 )
          ++v11;
      }
LABEL_50:
      v19 = *(void **)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
    }
  }
  v23 = *(unsigned int **)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
  if ( v23 )
    *v23 = v11;
  return 0;
}
