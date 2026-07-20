/*
 * XREFs of SmpConfigureExcludeKnownDlls @ 0x140012540
 * Callers:
 *     <none>
 * Callees:
 *     SmpSaveRegistryValue @ 0x1400098E8 (SmpSaveRegistryValue.c)
 */

__int64 __fastcall SmpConfigureExcludeKnownDlls(__int64 a1, int a2, const WCHAR *a3, __int64 a4, int a5, __int64 a6)
{
  const WCHAR *v6; // rbx
  __int64 result; // rax

  v6 = a3;
  if ( a2 != 7 && a2 != 1 || !*a3 )
    return 0LL;
  while ( 1 )
  {
    result = SmpSaveRegistryValue(a6, v6, 0LL, 1u, 0LL);
    if ( (int)result < 0 || a2 == 1 )
      break;
    while ( *v6++ )
      ;
    if ( !*v6 )
      return 0LL;
  }
  return result;
}
