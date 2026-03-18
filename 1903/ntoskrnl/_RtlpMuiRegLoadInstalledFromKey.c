/*
 * XREFs of _RtlpMuiRegLoadInstalledFromKey @ 0x14018DE58
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x140766264 (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwEnumerateKey @ 0x1401C0710 (ZwEnumerateKey.c)
 *     NtClose @ 0x1405FAB20 (NtClose.c)
 *     ValidateRegistrLangType @ 0x140765CAC (ValidateRegistrLangType.c)
 *     RtlpMuiRegAddLanguageByName @ 0x140765D10 (RtlpMuiRegAddLanguageByName.c)
 *     LdrpQueryValueKey @ 0x140765DD0 (LdrpQueryValueKey.c)
 *     LdrpOpenKey @ 0x140766360 (LdrpOpenKey.c)
 */

__int64 __fastcall RtlpMuiRegLoadInstalledFromKey(int a1, const WCHAR *a2)
{
  unsigned int *v2; // rbp
  ULONG v4; // edi
  __int64 v5; // r8
  NTSTATUS v6; // ebx
  unsigned __int64 v7; // rax
  __int64 v8; // r8
  void *v9; // rcx
  __int16 v10; // r11
  unsigned int v11; // r11d
  char v12; // dl
  void *v13; // rcx
  void *v14; // rcx
  int Length; // [rsp+20h] [rbp-30h]
  int v17; // [rsp+50h] [rbp+0h] BYREF

  v2 = (unsigned int *)((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL);
  *((_QWORD *)v2 + 5) = 0LL;
  *((_QWORD *)v2 + 6) = 0LL;
  v2[6] = 0;
  *((_WORD *)v2 + 2) = -1;
  v4 = 0;
  *((_QWORD *)v2 + 1) = 0LL;
  *v2 = 0;
  *((_QWORD *)v2 + 2) = 0LL;
  RtlInitUnicodeString((PUNICODE_STRING)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 40), a2);
  if ( (int)LdrpOpenKey(v2 + 10, 0LL, v5, v2 + 4) < 0 )
    return 0LL;
  do
  {
    v6 = ZwEnumerateKey(
           *(HANDLE *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10),
           v4,
           KeyBasicInformation,
           v2 + 16,
           0x200u,
           v2 + 6);
    if ( v6 < 0 )
    {
      if ( v6 != -2147483622 )
        goto LABEL_19;
    }
    else
    {
      v7 = *(unsigned int *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x4C);
      if ( v7 + 24 <= 0x200 )
      {
        *(_WORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50 + 2 * (v7 >> 1)) = 0;
        RtlInitUnicodeString((PUNICODE_STRING)(v2 + 10), (PCWSTR)v2 + 40);
        if ( (int)LdrpOpenKey(v2 + 10, *(_QWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10), v8, v2 + 2) >= 0 )
        {
          RtlInitUnicodeString((PUNICODE_STRING)(v2 + 10), L"Type");
          v9 = *(void **)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
          *(_DWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = 4;
          *(_DWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x1C) = 4;
          if ( (int)LdrpQueryValueKey(v9, (PUNICODE_STRING)(v2 + 10), (__int64)(v2 + 7)) >= 0
            && (int)ValidateRegistrLangType(*v2) >= 0 )
          {
            v11 = v10 & 0x419F;
            *v2 = v11;
            if ( (v11 & 7) != 0 && (v11 & 7 & -(v11 & 7)) == (v11 & 7) )
            {
              if ( (v11 & 0x180) == 0 || (v12 = v11, (v11 & 0x180 & -(v11 & 0x180)) != (v11 & 0x180)) )
              {
                v11 = v11 & 0xFFFFFE7F | 0x80;
                *v2 = v11;
                v12 = v11;
              }
              if ( (v12 & 0x18) != 0
                && (v12 & 0x18 & -(v12 & 0x18)) == (v12 & 0x18)
                && ((v12 & 8) == 0 || (v12 & 4) != 0) )
              {
                RtlpMuiRegAddLanguageByName(
                  a1,
                  *(_QWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 8),
                  (_DWORD)v2 + 80,
                  v11,
                  Length,
                  (__int64)(v2 + 1));
              }
            }
          }
        }
      }
    }
    v13 = *(void **)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
    if ( v13 )
    {
      NtClose(v13);
      *(_QWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0LL;
    }
    ++v4;
  }
  while ( v6 != -2147483622 );
  v6 = 0;
LABEL_19:
  v14 = *(void **)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
  if ( v14 )
    NtClose(v14);
  return (unsigned int)v6;
}
