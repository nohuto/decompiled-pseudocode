/*
 * XREFs of ?InitializeViewboxAndRealizationSize@CCachedVisualImage@@AEAAXMM@Z @ 0x1801C7C7C
 * Callers:
 *     ?SetForDCompSnapshot@CCachedVisualImage@@QEAAJPEAVCVisual@@II_N@Z @ 0x1801C7EE8 (-SetForDCompSnapshot@CCachedVisualImage@@QEAAJPEAVCVisual@@II_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CCachedVisualImage::InitializeViewboxAndRealizationSize(CCachedVisualImage *this, float a2, float a3)
{
  *((float *)this + 38) = a2;
  *((float *)this + 39) = a3;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_DWORD *)this + 56) = 2;
  *((double *)this + 21) = a2;
  *((double *)this + 22) = a3;
  CCachedVisualImage::ChoosePixelFormat(this);
}
