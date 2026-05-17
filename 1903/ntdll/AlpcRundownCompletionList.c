/*
 * XREFs of AlpcRundownCompletionList @ 0x180085060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcRundownCompletionList(__int64 a1)
{
  return ZwAlpcSetInformation(a1, 10LL, 0LL);
}
