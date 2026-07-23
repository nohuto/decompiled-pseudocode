/*
 * XREFs of RtlLocateExtendedFeature @ 0x1800F4F20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlLocateExtendedFeature(PCONTEXT_EX ContextEx, ULONG FeatureId, PULONG Length)
{
  return (PVOID)RtlLocateExtendedFeature2((__int64)ContextEx, FeatureId, 2147353560LL, Length);
}
