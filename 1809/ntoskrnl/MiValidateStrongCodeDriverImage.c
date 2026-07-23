/*
 * XREFs of MiValidateStrongCodeDriverImage @ 0x1402AB324
 * Callers:
 *     MmLoadSystemImageEx @ 0x1406821B8 (MmLoadSystemImageEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiValidateStrongCodeDriverImage(__int64 a1)
{
  int v1; // edx
  _DWORD *i; // rcx

  v1 = *(unsigned __int16 *)(a1 + 6);
  if ( !*(_WORD *)(a1 + 6) )
    return 0LL;
  for ( i = (_DWORD *)(*(unsigned __int16 *)(a1 + 20) + 60LL + a1); (*i & 0xA2000000) != 0xA0000000; i += 10 )
  {
    if ( !--v1 )
      return 0LL;
  }
  dword_140439EB0 = 194;
  return 3221225595LL;
}
