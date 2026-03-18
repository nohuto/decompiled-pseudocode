/*
 * XREFs of ?FindExistingRenderTarget@CCachedVisualImage@@AEAAPEAURenderTargetBitmapInfo@1@U_LUID@@VDisplayId@@@Z @ 0x1800523CC
 * Callers:
 *     ?EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x18005207C (-EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBi.c)
 * Callees:
 *     ?IsSameLuidAndDisplayId@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NU_LUID@@VDisplayId@@@Z @ 0x180052538 (-IsSameLuidAndDisplayId@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NU_LUID@@VDisplayId@@@Z.c)
 */

__int64 __fastcall CCachedVisualImage::FindExistingRenderTarget(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  unsigned int v7; // ebp
  __int64 v8; // r14

  v3 = 0LL;
  v7 = 0;
  if ( *(_DWORD *)(a1 + 264) )
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(a1 + 240) + 48LL * v7;
      if ( (unsigned __int8)CCachedVisualImage::RenderTargetBitmapInfo::IsSameLuidAndDisplayId(v8, a2, a3) )
        break;
      if ( ++v7 >= *(_DWORD *)(a1 + 264) )
        return v3;
    }
    return v8;
  }
  return v3;
}
