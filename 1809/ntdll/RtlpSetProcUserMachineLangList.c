/*
 * XREFs of RtlpSetProcUserMachineLangList @ 0x18003C1E4
 * Callers:
 *     InitializeUserOrMachineLangList @ 0x180039F7C (InitializeUserOrMachineLangList.c)
 *     RtlGetThreadPreferredUILanguages @ 0x18003CC60 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x18004B910 (RtlpMuiRegLoadRegistryInfo.c)
 *     RtlGetSystemPreferredUILanguages @ 0x18007A110 (RtlGetSystemPreferredUILanguages.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     RtlpInitMuiCriticalSection @ 0x18003B9B0 (RtlpInitMuiCriticalSection.c)
 *     RtlpMuiRegCreateLanguageList @ 0x18003C454 (RtlpMuiRegCreateLanguageList.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18004BE14 (RtlpMuiRegLoadPreferredUILanguages.c)
 */

__int64 __fastcall RtlpSetProcUserMachineLangList(__int64 a1, unsigned int a2)
{
  int PreferredUILanguages; // edi
  int v6; // edx
  __int64 v7; // rdx
  __int64 LanguageList; // rcx
  bool v9; // sf
  char v10; // [rsp+60h] [rbp+8h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  PreferredUILanguages = 0;
  v11 = 0LL;
  v10 = 0;
  if ( !a1 || a2 > 1 )
    return 3221225485LL;
  if ( a2 == 1 && *(_QWORD *)(a1 + 64) || *(_QWORD *)(a1 + 56) && !a2 )
    return 0LL;
  RtlpInitMuiCriticalSection();
  RtlEnterCriticalSection(&RegistryInfoCritSect);
  if ( (!*(_QWORD *)(a1 + 64) || a2 != 1) && (!*(_QWORD *)(a1 + 56) || a2) )
  {
    PreferredUILanguages = RtlpMuiRegLoadPreferredUILanguages(a1, v6, a2, 3, (__int64)&v10, (__int64)&v11);
    LanguageList = v11;
    if ( !v11 )
    {
      LOBYTE(v7) = a2 != 1;
      LanguageList = RtlpMuiRegCreateLanguageList(1LL, v7, a1);
      v11 = LanguageList;
      if ( !LanguageList )
        PreferredUILanguages = -1073741801;
    }
    v9 = PreferredUILanguages < 0;
    if ( PreferredUILanguages )
    {
      if ( PreferredUILanguages != -1073741801 && v10 )
        PreferredUILanguages = 0;
      v9 = PreferredUILanguages < 0;
    }
    if ( !v9 )
    {
      *(_DWORD *)(LanguageList + 40) |= 0x10u;
      *(_DWORD *)(LanguageList + 40) |= 0x40u;
      if ( a2 == 1 )
      {
        *(_QWORD *)(a1 + 64) = LanguageList;
        *(_DWORD *)a1 |= 0x20u;
      }
      else if ( !a2 )
      {
        *(_QWORD *)(a1 + 56) = LanguageList;
        *(_DWORD *)a1 |= 0x10u;
      }
    }
  }
  RtlLeaveCriticalSection(&RegistryInfoCritSect);
  return (unsigned int)PreferredUILanguages;
}
