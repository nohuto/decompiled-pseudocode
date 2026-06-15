/*
 * XREFs of ?IsProperlyInitialized@CCrossProcessBaseClientEndpoint@@MEAAJXZ @ 0x14004F760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCrossProcessBaseClientEndpoint::IsProperlyInitialized(CCrossProcessBaseClientEndpoint *this)
{
  __int64 result; // rax

  if ( (*((_DWORD *)this + 44) & 0x40000) == 0 )
    return 1LL;
  if ( !*(_WORD *)(*((_QWORD *)this + 10) + 4LL) )
    return 1LL;
  result = 2289827918LL;
  if ( *((_DWORD *)this + 110) )
    return 1LL;
  return result;
}
