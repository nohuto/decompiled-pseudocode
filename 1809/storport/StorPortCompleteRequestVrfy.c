/*
 * XREFs of StorPortCompleteRequestVrfy @ 0x1C0077170
 * Callers:
 *     <none>
 * Callees:
 *     StorPortCompleteRequest @ 0x1C003E8B0 (StorPortCompleteRequest.c)
 */

char __fastcall StorPortCompleteRequestVrfy(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned __int8 a5)
{
  return StorPortCompleteRequest(a1, a2, a3, a4, a5);
}
