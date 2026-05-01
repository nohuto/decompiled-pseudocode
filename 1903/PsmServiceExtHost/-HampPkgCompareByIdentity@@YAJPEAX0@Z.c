/*
 * XREFs of ?HampPkgCompareByIdentity@@YAJPEAX0@Z @ 0x180039100
 * Callers:
 *     ?HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x180011880 (-HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 * Callees:
 *     memcmp_0 @ 0x180049286 (memcmp_0.c)
 */

int __fastcall HampPkgCompareByIdentity(const wchar_t *a1, const wchar_t *a2)
{
  char *v2; // rdi
  int result; // eax
  unsigned int v5; // eax
  const void *v6; // rsi
  ULONG v7; // edi
  ULONG v8; // eax

  v2 = (char *)(a2 + 48);
  result = _wcsicmp(a1, a2 + 48);
  if ( !result )
  {
    v5 = *((_DWORD *)a1 + 50);
    if ( v5 >= *((_DWORD *)v2 + 50) )
    {
      if ( v5 > *((_DWORD *)v2 + 50) )
        return 1;
      v6 = v2 + 132;
      v7 = RtlLengthSid(v2 + 132);
      v8 = RtlLengthSid((PSID)(a1 + 66));
      if ( v8 >= v7 )
      {
        if ( v8 <= v7 )
          return memcmp_0(a1 + 66, v6, v8);
        return 1;
      }
    }
    return -1;
  }
  return result;
}
