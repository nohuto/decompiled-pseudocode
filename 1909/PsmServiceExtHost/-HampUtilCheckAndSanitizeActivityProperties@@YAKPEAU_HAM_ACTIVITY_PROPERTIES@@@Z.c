/*
 * XREFs of ?HampUtilCheckAndSanitizeActivityProperties@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18001213C
 * Callers:
 *     ?HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x180011F4C (-HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@P.c)
 *     ?HampHostDepValidateCustomProperties@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18007B544 (-HampHostDepValidateCustomProperties@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampUtilCheckAndSanitizeActivityProperties(const wchar_t *a1)
{
  __int64 result; // rax

  if ( *(_DWORD *)a1 < 0x2000000u
    && wcsnlen(a1 + 6, 0x40uLL) != 64
    && wcsnlen(a1 + 70, 0x40uLL) != 64
    && *((int *)a1 + 67) <= 5 )
  {
    return 1LL;
  }
  result = 0LL;
  *((_WORD *)a1 + 69) = 0;
  *((_WORD *)a1 + 133) = 0;
  return result;
}
