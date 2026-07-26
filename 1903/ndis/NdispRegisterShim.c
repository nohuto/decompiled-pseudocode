/*
 * XREFs of NdispRegisterShim @ 0x1C0109984
 * Callers:
 *     NdisDllInitialize @ 0x1C0039560 (NdisDllInitialize.c)
 * Callees:
 *     <none>
 */

__int64 NdispRegisterShim()
{
  return KseRegisterShim(&NdisShim, 0LL, 0LL);
}
