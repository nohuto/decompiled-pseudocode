/*
 * XREFs of _RtlpMuiRegLoadInstalled @ 0x1800FFE88
 * Callers:
 *     RtlpMuiRegLoadRegistryInfo @ 0x180008720 (RtlpMuiRegLoadRegistryInfo.c)
 * Callees:
 *     RtlpMuiRegFreeRegistryInfo @ 0x180008810 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18008BE34 (RtlpLoadInstallLanguageFallback.c)
 *     NtIsUILanguageComitted @ 0x18009EE40 (NtIsUILanguageComitted.c)
 *     NtQueryInstallUILanguage @ 0x18009F7C0 (NtQueryInstallUILanguage.c)
 *     RtlpMuiRegCreateLanguages @ 0x1800FDAD4 (RtlpMuiRegCreateLanguages.c)
 *     RtlpMuiRegCreateStringPool @ 0x1800FDB68 (RtlpMuiRegCreateStringPool.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x1800FFF8C (_RtlpMuiRegLoadInstalledFromKey.c)
 *     _RtlpMuiRegValidateInstalled @ 0x18010070C (_RtlpMuiRegValidateInstalled.c)
 */

__int64 __fastcall RtlpMuiRegLoadInstalled(__int64 a1)
{
  NTSTATUS InstallUILanguage; // edi
  __int64 result; // rax
  unsigned int v4; // ecx
  _QWORD *Languages; // rax
  _QWORD *StringPool; // rax

  InstallUILanguage = 0;
  if ( !a1 )
    return 3221225485LL;
  if ( NtIsUILanguageComitted() >= 0 )
  {
    InstallUILanguage = NtQueryInstallUILanguage((LANGID *)(a1 + 4));
    if ( InstallUILanguage < 0 || ((*(_WORD *)(a1 + 4) - 4096) & 0xFBFF) == 0 )
      goto LABEL_13;
    RtlpLoadInstallLanguageFallback(a1, (_WORD *)(a1 + 6), (_WORD *)(a1 + 8));
  }
  RtlpMuiRegFreeRegistryInfo(a1, 0x3FFu);
  Languages = RtlpMuiRegCreateLanguages(v4);
  *(_QWORD *)(a1 + 24) = Languages;
  if ( !Languages )
  {
    InstallUILanguage = -1073741801;
LABEL_13:
    RtlpMuiRegFreeRegistryInfo(a1, 0x3FFu);
    return (unsigned int)InstallUILanguage;
  }
  *(_DWORD *)a1 |= 1u;
  StringPool = RtlpMuiRegCreateStringPool(-1, -1);
  *(_QWORD *)(a1 + 32) = StringPool;
  if ( !StringPool )
    goto LABEL_13;
  *(_DWORD *)a1 |= 2u;
  InstallUILanguage = RtlpMuiRegLoadInstalledFromKey(
                        a1,
                        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages");
  if ( InstallUILanguage < 0 )
    goto LABEL_13;
  InstallUILanguage = RtlpMuiRegLoadInstalledFromKey(
                        a1,
                        L"\\Registry\\Machine\\OSDATA\\System\\CurrentControlSet\\Control\\MUI\\UILanguages");
  if ( InstallUILanguage < 0 )
    goto LABEL_13;
  result = RtlpMuiRegValidateInstalled(a1);
  InstallUILanguage = result;
  if ( (int)result < 0 )
    goto LABEL_13;
  return result;
}
