/*
 * XREFs of _RtlpMuiRegInitLIPLanguage @ 0x1800FFBE4
 * Callers:
 *     RtlpMuiRegAddLanguageByName @ 0x1800FD5C8 (RtlpMuiRegAddLanguageByName.c)
 * Callees:
 *     LdrpQueryValueKey @ 0x1800090D4 (LdrpQueryValueKey.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     RtlCompareUnicodeStrings @ 0x18001A040 (RtlCompareUnicodeStrings.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     ZwEnumerateValueKey @ 0x18009D0F0 (ZwEnumerateValueKey.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 *     _RtlMuiRegAddLIPParent @ 0x1800FF5E0 (_RtlMuiRegAddLIPParent.c)
 */

__int64 __fastcall RtlpMuiRegInitLIPLanguage(__int64 a1, void *a2, _BYTE *a3)
{
  unsigned __int64 v3; // rbp
  unsigned int v7; // edi
  ULONG v8; // r12d
  __int64 v9; // rsi
  NTSTATUS ValueKey; // eax
  NTSTATUS v11; // ebx
  unsigned __int64 v12; // rdx
  int v14; // [rsp+50h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0uLL;
  *(_DWORD *)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0;
  v7 = 0;
  v8 = 0;
  memset((void *)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0uLL) + 32), 0, 0xAAuLL);
  LODWORD(v9) = 0;
  if ( !a1 || !a2 || !a3 || (*a3 & 4) == 0 )
    return 3221225485LL;
  RtlInitUnicodeString((PUNICODE_STRING)(v3 + 16), L"DefaultFallback");
  *(_DWORD *)v3 = 1;
  *(_DWORD *)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 170;
  if ( (int)LdrpQueryValueKey(
              a2,
              (PUNICODE_STRING)(v3 + 16),
              (_DWORD *)((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0uLL),
              (void *)(v3 + 32),
              (ULONG *)(v3 + 4)) < 0
    || *(_DWORD *)v3 != 1 )
  {
    goto LABEL_15;
  }
  RtlInitUnicodeString((PUNICODE_STRING)(v3 + 16), (PCWSTR)(v3 + 32));
  *(_DWORD *)v3 = 7;
  ValueKey = LdrpQueryValueKey(
               a2,
               (PUNICODE_STRING)(v3 + 16),
               (_DWORD *)((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0uLL),
               0LL,
               0LL);
  v11 = ValueKey;
  if ( (!ValueKey || ValueKey == -2147483643)
    && (*(_DWORD *)v3 == 7 || *(_DWORD *)v3 == 1)
    && (int)RtlMuiRegAddLIPParent(a1, (__int64)a3, 0, (WCHAR *)(v3 + 32)) >= 0 )
  {
    v7 = 1;
    v9 = -1LL;
    do
      ++v9;
    while ( *(_WORD *)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20 + 2 * v9) );
  }
  while ( v11 != -2147483622 )
  {
LABEL_15:
    if ( v7 >= 4 )
      return 0LL;
    v11 = ZwEnumerateValueKey(a2, v8, KeyValueFullInformation, (PVOID)(v3 + 224), 0x200u, (PULONG)(v3 + 8));
    if ( v11 >= 0
      && (*(_DWORD *)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0uLL) + 0xE4) == 7
       || *(_DWORD *)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0uLL) + 0xE4) == 1) )
    {
      v12 = *(unsigned int *)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0uLL) + 0xF0);
      if ( v12 + 24 <= 0x200 )
      {
        *(_WORD *)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0uLL) + 0xF4 + 2 * (v12 >> 1)) = 0;
        RtlInitUnicodeString((PUNICODE_STRING)(v3 + 16), (PCWSTR)(v3 + 244));
        if ( (!(_DWORD)v9
           || RtlCompareUnicodeStrings(
                *(PCWCH *)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18),
                (unsigned __int64)*(unsigned __int16 *)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) >> 1,
                (PCWCH)(v3 + 32),
                (unsigned int)v9,
                1u))
          && (int)RtlMuiRegAddLIPParent(
                    a1,
                    (__int64)a3,
                    v7,
                    *(WCHAR **)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18)) >= 0 )
        {
          ++v7;
        }
      }
    }
    ++v8;
  }
  return 0LL;
}
