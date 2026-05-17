/*
 * XREFs of RtlGetProcessPreferredUILanguages @ 0x18008BBD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     RtlpInitMuiCriticalSection @ 0x18003B9B0 (RtlpInitMuiCriticalSection.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18003F300 (RtlpCreateProcessRegistryInfo.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x18003F6C8 (LdrpConvertLangFallbackListToMultiSz.c)
 */

__int64 __fastcall RtlGetProcessPreferredUILanguages(int a1, int *a2, _DWORD *a3, unsigned int *a4)
{
  char v7; // bl
  __int64 result; // rax
  __int64 v9; // rsi
  unsigned int v10; // ebx
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF

  v11 = 0LL;
  v7 = a1;
  if ( !a4 || !a2 || !a3 && *a4 )
    return 3221225485LL;
  if ( a1 )
  {
    if ( (a1 & 0xFFFFFFF3) == 0 && (a1 & 0xC) != 12 )
      goto LABEL_7;
    return 3221225485LL;
  }
  v7 = 8;
LABEL_7:
  result = RtlpCreateProcessRegistryInfo(&v11);
  if ( (int)result >= 0 )
  {
    v9 = v11;
    if ( *(_QWORD *)(v11 + 72) )
    {
      RtlpInitMuiCriticalSection();
      RtlEnterCriticalSection((__int64)&RegistryInfoCritSect);
      v10 = LdrpConvertLangFallbackListToMultiSz(*(_QWORD *)(v9 + 72), v9, a3, a4, v7, 0, a2);
      RtlLeaveCriticalSection((__int64)&RegistryInfoCritSect);
    }
    else
    {
      return (unsigned int)LdrpConvertLangFallbackListToMultiSz(0LL, v11, a3, a4, v7, 0, a2);
    }
    return v10;
  }
  return result;
}
