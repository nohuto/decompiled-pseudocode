/*
 * XREFs of sub_1800FFDA8 @ 0x1800FFDA8
 * Callers:
 *     RtlpMuiRegLoadRegistryInfo @ 0x180008720 (RtlpMuiRegLoadRegistryInfo.c)
 * Callees:
 *     RtlpMuiRegFreeRegistryInfo @ 0x180008810 (RtlpMuiRegFreeRegistryInfo.c)
 *     sub_18008B794 @ 0x18008B794 (sub_18008B794.c)
 *     ZwIsUILanguageComitted @ 0x18009E690 (ZwIsUILanguageComitted.c)
 *     ZwQueryInstallUILanguage @ 0x18009F010 (ZwQueryInstallUILanguage.c)
 *     sub_1800FD9F4 @ 0x1800FD9F4 (sub_1800FD9F4.c)
 *     sub_1800FDA88 @ 0x1800FDA88 (sub_1800FDA88.c)
 *     sub_1800FFEAC @ 0x1800FFEAC (sub_1800FFEAC.c)
 *     sub_18010062C @ 0x18010062C (sub_18010062C.c)
 */

__int64 __fastcall sub_1800FFDA8(__int64 a1)
{
  NTSTATUS InstallUILanguage; // edi
  __int64 result; // rax
  unsigned int v4; // ecx
  _QWORD *v5; // rax
  _QWORD *v6; // rax

  InstallUILanguage = 0;
  if ( !a1 )
    return 3221225485LL;
  if ( ZwIsUILanguageComitted() >= 0 )
  {
    InstallUILanguage = ZwQueryInstallUILanguage((LANGID *)(a1 + 4));
    if ( InstallUILanguage < 0 || ((*(_WORD *)(a1 + 4) - 4096) & 0xFBFF) == 0 )
      goto LABEL_13;
    sub_18008B794(a1, (_WORD *)(a1 + 6), (_WORD *)(a1 + 8));
  }
  RtlpMuiRegFreeRegistryInfo(a1, 0x3FFu);
  v5 = sub_1800FD9F4(v4);
  *(_QWORD *)(a1 + 24) = v5;
  if ( !v5 )
  {
    InstallUILanguage = -1073741801;
LABEL_13:
    RtlpMuiRegFreeRegistryInfo(a1, 0x3FFu);
    return (unsigned int)InstallUILanguage;
  }
  *(_DWORD *)a1 |= 1u;
  v6 = sub_1800FDA88(-1, -1);
  *(_QWORD *)(a1 + 32) = v6;
  if ( !v6 )
    goto LABEL_13;
  *(_DWORD *)a1 |= 2u;
  InstallUILanguage = sub_1800FFEAC(a1, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages");
  if ( InstallUILanguage < 0 )
    goto LABEL_13;
  InstallUILanguage = sub_1800FFEAC(
                        a1,
                        L"\\Registry\\Machine\\OSDATA\\System\\CurrentControlSet\\Control\\MUI\\UILanguages");
  if ( InstallUILanguage < 0 )
    goto LABEL_13;
  result = sub_18010062C(a1);
  InstallUILanguage = result;
  if ( (int)result < 0 )
    goto LABEL_13;
  return result;
}
