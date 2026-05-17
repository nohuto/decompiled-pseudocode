/*
 * XREFs of RtlGetTokenNamedObjectPath @ 0x180082740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetTokenNamedObjectPath(__int64 a1, char a2, UNICODE_STRING *a3)
{
  return sub_18000BCF8(a1, 0LL, a2 != 0, a3);
}
