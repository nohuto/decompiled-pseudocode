/*
 * XREFs of ?GetDeviceTexture@CCachedVisualImage@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180043D30
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x18004281C (-EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBi.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedVisualImage::GetDeviceTexture(
        CCachedVisualImage *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // ebx
  unsigned int v9; // [rsp+20h] [rbp-18h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  v5 = CCachedVisualImage::EnsureRenderTargetBitmapInfo((__int64)this - 136, *(_QWORD *)a2, *((_DWORD *)a2 + 2), &v10);
  v7 = v5;
  if ( v5 < 0 )
  {
    v9 = 1774;
    goto LABEL_8;
  }
  if ( !v10 )
  {
    v7 = -2003292287;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2003292287, 0x6F2u, 0LL);
    return v7;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, const struct RenderTargetInfo *, struct IDeviceTexture **))(*(_QWORD *)(*(_QWORD *)(v10 + 8) + 144LL) + 144LL))(
         *(_QWORD *)(v10 + 8) + 144LL,
         a2,
         a3);
  v7 = v5;
  if ( v5 < 0 )
  {
    v9 = 1783;
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, v9, 0LL);
  }
  return v7;
}
