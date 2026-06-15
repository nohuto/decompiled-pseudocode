/*
 * XREFs of ?SetStreamFlags@CCrossProcessBaseEndpoint@@UEAAJK@Z @ 0x14001B250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCrossProcessBaseEndpoint::SetStreamFlags(CCrossProcessBaseEndpoint *this, int a2)
{
  *((_DWORD *)this + 44) = a2;
  return 0LL;
}
