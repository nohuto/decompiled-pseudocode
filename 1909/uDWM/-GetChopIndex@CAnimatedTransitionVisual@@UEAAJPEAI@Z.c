/*
 * XREFs of ?GetChopIndex@CAnimatedTransitionVisual@@UEAAJPEAI@Z @ 0x18003C500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimatedTransitionVisual::GetChopIndex(CAnimatedTransitionVisual *this, unsigned int *a2)
{
  if ( !*((_BYTE *)this + 1000) && !*((_BYTE *)this + 1016) )
    return 2147943568LL;
  *a2 = *((_DWORD *)this + 247);
  return 0LL;
}
