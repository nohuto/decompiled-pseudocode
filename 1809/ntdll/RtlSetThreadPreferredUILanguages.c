/*
 * XREFs of RtlSetThreadPreferredUILanguages @ 0x18003BAA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpInitializeUserList @ 0x18003A98C (RtlpInitializeUserList.c)
 *     RtlpCheckMuiMultiStringSafe @ 0x18003B37C (RtlpCheckMuiMultiStringSafe.c)
 *     LdrpMultiSZCchLength @ 0x18003B3F4 (LdrpMultiSZCchLength.c)
 *     RtlpMuiRegDupLanguageList @ 0x18003BA10 (RtlpMuiRegDupLanguageList.c)
 *     RtlpMuiRegFreeLanguageList @ 0x18003C3D8 (RtlpMuiRegFreeLanguageList.c)
 *     LdrpCreateLangFallbackList @ 0x18003C40C (LdrpCreateLangFallbackList.c)
 *     RtlGetThreadPreferredUILanguages @ 0x18003CC60 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18003F300 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18003FB5C (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     DbgPrint @ 0x18004F300 (DbgPrint.c)
 *     RtlpUpdateTEBLanguage @ 0x180080CA0 (RtlpUpdateTEBLanguage.c)
 */

__int64 __fastcall RtlSetThreadPreferredUILanguages(int a1, _WORD *a2, int *a3)
{
  int v5; // esi
  char v6; // r12
  __int64 result; // rax
  __int64 v8; // rdx
  int updated; // edi
  __int64 v10; // rdx
  _DWORD *MergedPrefLanguages; // rcx
  int v12; // eax
  __int64 v13; // rbx
  int v14; // eax
  unsigned int v15; // eax
  int v16; // eax
  unsigned __int16 v17; // ax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  ULONG NumberOfLanguages; // [rsp+40h] [rbp-20h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-18h] BYREF
  __int64 v23; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v24; // [rsp+A0h] [rbp+40h] BYREF
  ULONG ReturnLength; // [rsp+B8h] [rbp+58h] BYREF

  v24 = 0;
  ReturnLength = 0;
  v5 = a1;
  BaseAddress = 0LL;
  v6 = 0;
  v23 = 0LL;
  if ( (a1 & 0xFFFF7CF2) != 0 )
    return 3221225485LL;
  if ( (a1 & 0xC) != 0 )
  {
    if ( (a1 & 0xC) == 0xC )
      return 3221225485LL;
  }
  else
  {
    v5 = a1 | 8;
  }
  if ( (v5 & 0x300) == 0x300 || (v5 & 1) != 0 && (v5 & 0x300) != 0 )
    return 3221225485LL;
  result = RtlpCreateProcessRegistryInfo(&v23);
  updated = result;
  if ( (int)result < 0 )
    return result;
  if ( (v5 & 0x301) != 0 )
  {
    if ( !a2 )
    {
      v6 = 1;
      RtlpInitializeUserList(v23);
      goto LABEL_18;
    }
    return 3221225485LL;
  }
  if ( a2 )
  {
    if ( (int)RtlpCheckMuiMultiStringSafe(a2, (-(__int64)((v5 & 4) != 0) & 0xFFFFFFFFFFFFFFAFuLL) + 85) < 0 )
      DbgPrint(
        "*** ASSERT FAILED: Input parameter LanguagesBuffer for function RtlSetThreadPreferredUILanguages is not a valid multi-string!\n");
    if ( (int)LdrpMultiSZCchLength(a2, v10, &v24) < 0 )
      return (unsigned int)-1073741811;
    if ( v24 < 2 || *a2 || a2[1] )
    {
      if ( (int)LdrpCreateLangFallbackList(&BaseAddress, v23, 5LL, 0LL) < 0 || !BaseAddress )
        return (unsigned int)-1073741801;
      updated = RtlpMuiRegAddMultiSzToLangFallbackList(g_RegInfo, a2, v24, v5 | 2u, 26, 5, &BaseAddress);
      if ( updated < 0 )
      {
        RtlpMuiRegFreeLanguageList(BaseAddress);
        goto LABEL_21;
      }
      v17 = *((_WORD *)BaseAddress + 2);
      if ( !v17 )
      {
        RtlpMuiRegFreeLanguageList(BaseAddress);
        return (unsigned int)-1073741823;
      }
      if ( a3 )
        *a3 = v17;
    }
  }
  if ( NtCurrentTeb()->PreferredLanguages )
  {
    RtlpMuiRegFreeLanguageList(NtCurrentTeb()->PreferredLanguages);
    NtCurrentTeb()->PreferredLanguages = 0LL;
  }
  NtCurrentTeb()->PreferredLanguages = BaseAddress;
LABEL_18:
  if ( NtCurrentTeb()->MergedPrefLanguages )
  {
    MergedPrefLanguages = NtCurrentTeb()->MergedPrefLanguages;
    v12 = MergedPrefLanguages[10];
    if ( (v12 & 0x40) == 0 )
    {
LABEL_20:
      MergedPrefLanguages[10] = v12 | 0x80;
      NtCurrentTeb()->MergedPrefLanguages = MergedPrefLanguages;
      goto LABEL_21;
    }
    v18 = RtlpMuiRegDupLanguageList((__int64)MergedPrefLanguages, v8);
    MergedPrefLanguages = (_DWORD *)v18;
    if ( v18 )
    {
      *(_DWORD *)(v18 + 40) &= ~0x40u;
      v12 = *(_DWORD *)(v18 + 40);
      goto LABEL_20;
    }
    return (unsigned int)-1073741823;
  }
LABEL_21:
  if ( updated || !v6 )
    return (unsigned int)updated;
  if ( NtCurrentTeb()->UserPrefLanguages )
    v13 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
  else
    v13 = 0LL;
  if ( !v13 )
    goto LABEL_40;
  v14 = *(_DWORD *)(v13 + 40);
  if ( (v5 & 1) == 0 )
  {
    if ( (v5 & 0x100) != 0 )
    {
      if ( (v14 & 0x40) == 0 )
      {
LABEL_35:
        v15 = v14 & 0xFFFFFFF9 | 2;
LABEL_36:
        *(_DWORD *)(v13 + 40) = v15;
        if ( (v5 & 0x8000) != 0 && a3 )
        {
          v16 = *a3;
          if ( *a3 )
          {
            *(_WORD *)(v13 + 42) = 0;
            *(_DWORD *)(v13 + 40) |= v16 << 16;
          }
        }
        goto LABEL_40;
      }
      v19 = RtlpMuiRegDupLanguageList(v13, v8);
      v13 = v19;
      if ( v19 )
      {
        updated = RtlpUpdateTEBLanguage(v19, 0LL, 4LL);
        if ( !updated )
        {
          *(_DWORD *)(v13 + 40) &= ~0x40u;
          v14 = *(_DWORD *)(v13 + 40);
          goto LABEL_35;
        }
      }
      return 3221225473LL;
    }
    if ( (v14 & 0x40) != 0 )
    {
      v20 = RtlpMuiRegDupLanguageList(v13, v8);
      v13 = v20;
      if ( !v20 )
        return 3221225473LL;
      updated = RtlpUpdateTEBLanguage(v20, 0LL, 4LL);
      if ( updated )
        return 3221225473LL;
      *(_DWORD *)(v13 + 40) &= ~0x40u;
      v14 = *(_DWORD *)(v13 + 40);
    }
    v15 = v14 & 0xFFFFFFF9 | 4;
    goto LABEL_36;
  }
  *(_DWORD *)(v13 + 40) = v14 & 0xFFFFFFF9;
LABEL_40:
  RtlGetThreadPreferredUILanguages(v5 | 0x30, &NumberOfLanguages, 0LL, &ReturnLength);
  return (unsigned int)updated;
}
