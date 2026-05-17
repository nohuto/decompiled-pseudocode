/*
 * XREFs of RtlRemoveVectoredContinueHandler @ 0x1800D8A80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlRemoveVectoredContinueHandler(__int64 a1)
{
  return RtlpRemoveVectoredHandler(a1, 1u);
}
