/*
 * XREFs of sub_1800129A4 @ 0x1800129A4
 * Callers:
 *     sub_18000EF6C @ 0x18000EF6C (sub_18000EF6C.c)
 *     sub_18001292C @ 0x18001292C (sub_18001292C.c)
 *     sub_1800EBE9C @ 0x1800EBE9C (sub_1800EBE9C.c)
 *     sub_1800FF6D0 @ 0x1800FF6D0 (sub_1800FF6D0.c)
 *     sub_18010058C @ 0x18010058C (sub_18010058C.c)
 * Callees:
 *     _wcsicmp @ 0x18008E1D0 (_wcsicmp.c)
 */

char __fastcall sub_1800129A4(wchar_t *String1, wchar_t *String2)
{
  char v2; // bl
  const wchar_t *v4; // rdi
  __int64 v5; // rax

  v2 = 0;
  v4 = String1;
  if ( String1 && String2 )
  {
    while ( *v4 )
    {
      if ( !wcsicmp(v4, String2) )
        return 1;
      v5 = -1LL;
      do
        ++v5;
      while ( v4[v5] );
      v4 += v5 + 1;
      if ( !v4 )
        return v2;
    }
  }
  return v2;
}
