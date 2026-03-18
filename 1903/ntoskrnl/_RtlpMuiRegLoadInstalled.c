/*
 * XREFs of _RtlpMuiRegLoadInstalled @ 0x140766264
 * Callers:
 *     RtlpMuiRegLoadRegistryInfo @ 0x140765814 (RtlpMuiRegLoadRegistryInfo.c)
 * Callees:
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x14018DE58 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     ZwQueryInstallUILanguage @ 0x1401C2A10 (ZwQueryInstallUILanguage.c)
 *     RtlpLoadInstallLanguageFallback @ 0x140764A6C (RtlpLoadInstallLanguageFallback.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x140765884 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpMuiRegCreateLanguages @ 0x140765B50 (RtlpMuiRegCreateLanguages.c)
 *     RtlpMuiRegCreateStringPool @ 0x140765C10 (RtlpMuiRegCreateStringPool.c)
 *     _RtlpMuiRegValidateInstalled @ 0x140765F14 (_RtlpMuiRegValidateInstalled.c)
 */

NTSTATUS __fastcall RtlpMuiRegLoadInstalled(__int64 a1)
{
  int InstallUILanguage; // edi
  unsigned int v3; // ecx
  _QWORD *Languages; // rax
  _QWORD *StringPool; // rax
  NTSTATUS result; // eax

  InstallUILanguage = 0;
  if ( !a1 )
    return -1073741811;
  if ( PsUILanguageComitted )
  {
    InstallUILanguage = ZwQueryInstallUILanguage((LANGID *)(a1 + 4));
    if ( InstallUILanguage < 0 || ((*(_WORD *)(a1 + 4) - 4096) & 0xFBFF) == 0 )
      goto LABEL_11;
    RtlpLoadInstallLanguageFallback(a1, (_WORD *)(a1 + 6), (_WORD *)(a1 + 8));
  }
  RtlpMuiRegFreeRegistryInfo(a1, 0x3FFu);
  Languages = RtlpMuiRegCreateLanguages(v3);
  *(_QWORD *)(a1 + 24) = Languages;
  if ( !Languages )
  {
    InstallUILanguage = -1073741801;
LABEL_11:
    RtlpMuiRegFreeRegistryInfo(a1, 0x3FFu);
    return InstallUILanguage;
  }
  *(_DWORD *)a1 |= 1u;
  StringPool = RtlpMuiRegCreateStringPool(-1, -1);
  *(_QWORD *)(a1 + 32) = StringPool;
  if ( !StringPool )
    goto LABEL_11;
  *(_DWORD *)a1 |= 2u;
  InstallUILanguage = RtlpMuiRegLoadInstalledFromKey(
                        a1,
                        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages");
  if ( InstallUILanguage < 0 )
    goto LABEL_11;
  InstallUILanguage = RtlpMuiRegLoadInstalledFromKey(
                        a1,
                        L"\\Registry\\Machine\\OSDATA\\System\\CurrentControlSet\\Control\\MUI\\UILanguages");
  if ( InstallUILanguage < 0 )
    goto LABEL_11;
  result = RtlpMuiRegValidateInstalled(a1);
  InstallUILanguage = result;
  if ( result < 0 )
    goto LABEL_11;
  return result;
}
