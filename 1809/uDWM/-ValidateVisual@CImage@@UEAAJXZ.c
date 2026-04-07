/*
 * XREFs of ?ValidateVisual@CImage@@UEAAJXZ @ 0x180033190
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x180022DA0 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?UpdateBitmap@CImage@@QEAAJXZ @ 0x1800331EC (-UpdateBitmap@CImage@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UpdateViewPort@CImage@@QEAAJXZ @ 0x18007CC24 (-UpdateViewPort@CImage@@QEAAJXZ.c)
 */

__int64 __fastcall CImage::ValidateVisual(CImage *this)
{
  int v1; // eax
  int updated; // eax
  unsigned int v4; // edi
  int v5; // eax
  int v7; // eax

  v1 = *((_DWORD *)this + 20);
  if ( (v1 & 0x1000) != 0 )
  {
    updated = CImage::UpdateBitmap(this);
    v4 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x57u);
      return v4;
    }
    *((_DWORD *)this + 20) &= ~0x1000u;
    v1 = *((_DWORD *)this + 20);
  }
  if ( (v1 & 0x2000) != 0 )
  {
    v7 = CImage::UpdateViewPort(this);
    v4 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x5Du);
      return v4;
    }
    *((_DWORD *)this + 20) &= ~0x2000u;
  }
  v5 = CRenderDataVisual::ValidateVisual(this);
  v4 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x61u);
  return v4;
}
