/*
 * XREFs of LdrFindResourceEx_U @ 0x140890E90
 * Callers:
 *     <none>
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x14067AF10 (LdrpSearchResourceSection_U.c)
 */

__int64 __fastcall LdrFindResourceEx_U(int a1, char *a2, __int64 *a3, unsigned int a4, __int64 *a5)
{
  return LdrpSearchResourceSection_U(a2, a3, a4, a1, a5);
}
