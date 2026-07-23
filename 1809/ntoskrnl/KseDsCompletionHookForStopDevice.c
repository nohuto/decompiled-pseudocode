/*
 * XREFs of KseDsCompletionHookForStopDevice @ 0x1402A0640
 * Callers:
 *     <none>
 * Callees:
 *     KsepDsEventPnpStopDevice @ 0x1402A12B8 (KsepDsEventPnpStopDevice.c)
 */

__int64 __fastcall KseDsCompletionHookForStopDevice(__int64 a1, __int64 a2)
{
  return KsepDsEventPnpStopDevice(*(_QWORD *)(a1 + 8), a1, a2, *(unsigned int *)(a2 + 48));
}
