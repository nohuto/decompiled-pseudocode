/*
 * XREFs of RtlSetSystemBootStatusEx @ 0x1800EB000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSetSystemBootStatusEx(__int64 a1, unsigned int a2, __int64 a3)
{
  return RtlpSystemBootStatusRequest(32, a1, a2, a3);
}
