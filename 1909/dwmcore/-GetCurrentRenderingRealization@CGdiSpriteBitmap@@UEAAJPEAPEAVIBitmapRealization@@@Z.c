/*
 * XREFs of ?GetCurrentRenderingRealization@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800BE900
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z @ 0x180048CA0 (-CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGdiSpriteBitmap::GetCurrentRenderingRealization(
        CGdiSpriteBitmap *this,
        struct IBitmapRealization **a2)
{
  unsigned int v2; // ebx
  signed int Bitmap; // eax
  __int64 v7; // rcx

  v2 = 0;
  *a2 = 0LL;
  if ( !*((_QWORD *)this + 50) )
  {
    Bitmap = CGdiSpriteBitmap::CreateBitmap(
               (CGdiSpriteBitmap *)((char *)this - 56),
               (enum DXGI_FORMAT)*((_DWORD *)this + 8));
    if ( Bitmap < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, Bitmap, 0x145u, 0LL);
  }
  if ( *((_QWORD *)this + 50) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 50) + 8LL))(*((_QWORD *)this + 50));
    *a2 = (struct IBitmapRealization *)*((_QWORD *)this + 50);
  }
  else
  {
    return (unsigned int)-2003292412;
  }
  return v2;
}
