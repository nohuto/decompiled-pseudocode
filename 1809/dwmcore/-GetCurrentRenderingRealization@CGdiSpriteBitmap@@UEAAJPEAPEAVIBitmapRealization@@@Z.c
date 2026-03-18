/*
 * XREFs of ?GetCurrentRenderingRealization@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x18005EFD0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180092F84 (-CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGdiSpriteBitmap::GetCurrentRenderingRealization(
        CGdiSpriteBitmap *this,
        struct IBitmapRealization **a2)
{
  unsigned int v2; // ebx
  int Bitmap; // eax

  v2 = 0;
  *a2 = 0LL;
  if ( !*((_QWORD *)this + 50) )
  {
    Bitmap = CGdiSpriteBitmap::CreateBitmap(
               (CGdiSpriteBitmap *)((char *)this - 56),
               (enum DXGI_FORMAT)*((_DWORD *)this + 8));
    if ( Bitmap < 0 )
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, Bitmap, 0x13Fu);
  }
  if ( *((_QWORD *)this + 50) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 50) + 8LL))(*((_QWORD *)this + 50));
    *a2 = (struct IBitmapRealization *)*((_QWORD *)this + 50);
  }
  else
  {
    v2 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2003292412, 0x17Eu);
  }
  return v2;
}
