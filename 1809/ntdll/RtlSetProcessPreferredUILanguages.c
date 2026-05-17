/*
 * XREFs of RtlSetProcessPreferredUILanguages @ 0x180088CD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     RtlpCheckMuiMultiStringSafe @ 0x18003B37C (RtlpCheckMuiMultiStringSafe.c)
 *     LdrpMultiSZCchLength @ 0x18003B3F4 (LdrpMultiSZCchLength.c)
 *     RtlpInitMuiCriticalSection @ 0x18003B9B0 (RtlpInitMuiCriticalSection.c)
 *     RtlpMuiRegFreeLanguageList @ 0x18003C3D8 (RtlpMuiRegFreeLanguageList.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18003F300 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18003FB5C (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     DbgPrint @ 0x18004F300 (DbgPrint.c)
 */

__int64 __fastcall RtlSetProcessPreferredUILanguages(int a1, WCHAR *a2, _DWORD *a3)
{
  int v5; // edi
  __int64 result; // rax
  int v7; // ebx
  __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  __int64 v10; // rax
  unsigned __int64 v11; // rsi
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15[4]; // [rsp+48h] [rbp-20h] BYREF
  unsigned int v16; // [rsp+88h] [rbp+20h] BYREF

  v15[0] = 0LL;
  v14 = 0LL;
  v5 = a1;
  if ( NtCurrentTeb()->IsImpersonating )
    return 3221225741LL;
  if ( a1 )
  {
    if ( (a1 & 0xFFFFFFF3) != 0 || (a1 & 0xC) == 12 )
      return 3221225485LL;
  }
  else
  {
    v5 = 8;
  }
  result = RtlpCreateProcessRegistryInfo(v15);
  v7 = result;
  if ( (int)result >= 0 )
  {
    if ( !a2 )
      goto LABEL_27;
    if ( (int)RtlpCheckMuiMultiStringSafe(a2, (-(__int64)((v5 & 4) != 0) & 0xFFFFFFFFFFFFFFAFuLL) + 85) < 0 )
      DbgPrint(
        "*** ASSERT FAILED: Input parameter LanguagesBuffer for function RtlSetProcessPreferredUILanguages is not a valid"
        " multi-string!\n");
    if ( (int)LdrpMultiSZCchLength(a2, v8, &v16) < 0 )
      return (unsigned int)-1073741811;
    if ( v16 < 2 || *a2 || a2[1] )
    {
      v7 = RtlpMuiRegAddMultiSzToLangFallbackList(g_RegInfo, a2, v16, v5 | 2u, 26, 5u, (__int64 *)&v14);
      if ( v7 < 0 )
      {
        v13 = v14;
LABEL_29:
        RtlpMuiRegFreeLanguageList(v13);
        return (unsigned int)v7;
      }
      v9 = v14;
      if ( !v14 || !*(_WORD *)(v14 + 4) )
      {
        RtlpMuiRegFreeLanguageList(v14);
        return (unsigned int)-1073741823;
      }
      if ( a3 )
        *a3 = *(unsigned __int16 *)(v14 + 4);
    }
    else
    {
LABEL_27:
      v9 = v14;
    }
    RtlpInitMuiCriticalSection();
    RtlEnterCriticalSection((__int64)&RegistryInfoCritSect);
    v10 = v15[0];
    v11 = *(_QWORD *)(v15[0] + 72);
    *(_QWORD *)(v15[0] + 72) = v9;
    ++*(_DWORD *)(v10 + 16);
    v12 = *(_QWORD *)(v10 + 96);
    if ( v12 )
      *(_DWORD *)(v12 + 40) |= 0x80u;
    RtlLeaveCriticalSection((__int64)&RegistryInfoCritSect);
    if ( !v11 )
      return (unsigned int)v7;
    v13 = v11;
    goto LABEL_29;
  }
  return result;
}
