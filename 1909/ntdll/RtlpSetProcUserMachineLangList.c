/*
 * XREFs of RtlpSetProcUserMachineLangList @ 0x1800151CC
 * Callers:
 *     InitializeUserOrMachineLangList @ 0x180007D24 (InitializeUserOrMachineLangList.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x180008720 (RtlpMuiRegLoadRegistryInfo.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180013B50 (RtlGetThreadPreferredUILanguages.c)
 *     RtlGetSystemPreferredUILanguages @ 0x1800746F0 (RtlGetSystemPreferredUILanguages.c)
 * Callees:
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x180008C14 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpInitMuiCriticalSection @ 0x180012D4C (RtlpInitMuiCriticalSection.c)
 *     RtlpMuiRegCreateLanguageList @ 0x18001564C (RtlpMuiRegCreateLanguageList.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 */

__int64 __fastcall RtlpSetProcUserMachineLangList(__int64 a1, unsigned int a2)
{
  int v4; // edi
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 LanguageList; // rcx
  bool v9; // sf
  char v10; // [rsp+60h] [rbp+8h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
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
    v4 = RtlpMuiRegLoadPreferredUILanguages(a1, v6, a2, 3, &v10, &v11);
    LanguageList = v11;
    if ( !v11 )
    {
      LOBYTE(v7) = a2 != 1;
      LanguageList = RtlpMuiRegCreateLanguageList(1LL, v7, a1);
      v11 = LanguageList;
      if ( !LanguageList )
        v4 = -1073741801;
    }
    v9 = v4 < 0;
    if ( v4 )
    {
      if ( v4 != -1073741801 && v10 )
        v4 = 0;
      v9 = v4 < 0;
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
  return (unsigned int)v4;
}
