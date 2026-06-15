/*
 * XREFs of ?SetStreamFlags@CSpatialCrossProcessBaseEndpoint@@UEAAJK@Z @ 0x140015360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::SetStreamFlags(CSpatialCrossProcessBaseEndpoint *this, int a2)
{
  *((_DWORD *)this + 27) = a2;
  return 0LL;
}
