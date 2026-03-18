/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CMagnifierRenderTarget@@UEAAXXZ @ 0x1801A9470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMagnifierRenderTarget::ReleaseResourcesForDisplayChange(CMagnifierRenderTarget *this)
{
  if ( *((_BYTE *)this + 620) )
    *((_DWORD *)this + 156) = -2003304442;
}
