/*
 * XREFs of InitializeUserOrMachineLangList @ 0x180039F7C
 * Callers:
 *     RtlpInitializeUserList @ 0x18003A98C (RtlpInitializeUserList.c)
 *     InitializeTEBUserLangList @ 0x18003BEF8 (InitializeTEBUserLangList.c)
 *     RtlpQueryDefaultUILanguage @ 0x18007A6B0 (RtlpQueryDefaultUILanguage.c)
 * Callees:
 *     RtlpSetProcUserMachineLangList @ 0x18003C1E4 (RtlpSetProcUserMachineLangList.c)
 *     RtlpMuiRegCreateLanguageList @ 0x18003C454 (RtlpMuiRegCreateLanguageList.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18004BE14 (RtlpMuiRegLoadPreferredUILanguages.c)
 */

__int64 __fastcall InitializeUserOrMachineLangList(__int64 a1, unsigned int a2, __int64 *a3, int a4, char a5)
{
  __int64 PreferredUILanguages; // rdx
  __int64 LanguageList; // rax
  char v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0;
  if ( a3 && a1 && a2 <= 1 && (unsigned int)(a4 - 2) <= 1 )
  {
    if ( a5 && a4 == 3 )
    {
      LODWORD(PreferredUILanguages) = RtlpSetProcUserMachineLangList();
      if ( (int)PreferredUILanguages >= 0 )
      {
        if ( a2 == 1 )
        {
          *a3 = *(_QWORD *)(a1 + 64);
        }
        else if ( !a2 )
        {
          *a3 = *(_QWORD *)(a1 + 56);
        }
      }
      return (unsigned int)PreferredUILanguages;
    }
    PreferredUILanguages = (unsigned int)RtlpMuiRegLoadPreferredUILanguages(a1, a2, a2, a4, (__int64)&v11, (__int64)a3);
    if ( !*a3 )
    {
      LOBYTE(PreferredUILanguages) = a2 != 1;
      LanguageList = RtlpMuiRegCreateLanguageList(1LL, PreferredUILanguages, a1);
      *a3 = LanguageList;
      if ( !LanguageList )
      {
        LODWORD(PreferredUILanguages) = -1073741801;
        return (unsigned int)PreferredUILanguages;
      }
      LODWORD(PreferredUILanguages) = 0;
    }
    if ( (_DWORD)PreferredUILanguages && (_DWORD)PreferredUILanguages != -1073741801 && v11 )
      LODWORD(PreferredUILanguages) = 0;
    return (unsigned int)PreferredUILanguages;
  }
  return 3221225485LL;
}
