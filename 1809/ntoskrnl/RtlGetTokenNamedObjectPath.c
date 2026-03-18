/*
 * XREFs of RtlGetTokenNamedObjectPath @ 0x140893EB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetTokenNamedObjectPath @ 0x140894DCC (RtlpGetTokenNamedObjectPath.c)
 */

__int64 __fastcall RtlGetTokenNamedObjectPath(void *a1)
{
  return RtlpGetTokenNamedObjectPath(a1, 0LL);
}
