/*
 * XREFs of ?HampPkgCompareByIdentity@@YAJPEAX0@Z @ 0x180038240
 * Callers:
 *     ?HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x180007D50 (-HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 * Callees:
 *     memcmp_0 @ 0x1800499F6 (memcmp_0.c)
 */

int __fastcall HampPkgCompareByIdentity(const wchar_t *a1, const wchar_t *a2)
{
  char *v2; // rdi
  int result; // eax
  unsigned int v5; // eax
  unsigned int v6; // ecx
  const void *v7; // rsi
  ULONG v8; // edi
  ULONG v9; // eax

  v2 = (char *)(a2 + 48);
  result = _wcsicmp(a1, a2 + 48);
  if ( !result )
  {
    v5 = *((_DWORD *)a1 + 50);
    v6 = *((_DWORD *)v2 + 50);
    if ( v5 >= v6 )
    {
      if ( v5 > v6 )
        return 1;
      v7 = v2 + 132;
      v8 = RtlLengthSid(v2 + 132);
      v9 = RtlLengthSid((PSID)(a1 + 66));
      if ( v9 >= v8 )
      {
        if ( v9 <= v8 )
          return memcmp_0(a1 + 66, v7, v9);
        return 1;
      }
    }
    return -1;
  }
  return result;
}
