/*
 * XREFs of ??1CD2DSharedBuffer@@MEAA@XZ @ 0x18004EF38
 * Callers:
 *     ??_ECD2DSharedBuffer@@MEAAPEAXI@Z @ 0x18004EF90 (--_ECD2DSharedBuffer@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x18005A8F0 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall CD2DSharedBuffer::~CD2DSharedBuffer(CD2DSharedBuffer *this)
{
  CGdiSpriteBitmap *v2; // rcx

  *(_QWORD *)this = &CD2DSharedBuffer::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CD2DSharedBuffer::`vftable'{for `ID2D1PrivateCompositorBuffer'};
  v2 = (CGdiSpriteBitmap *)*((_QWORD *)this + 5);
  if ( v2 )
  {
    CGdiSpriteBitmap::Release(v2);
    *((_QWORD *)this + 5) = 0LL;
  }
  else
  {
    WPF::ProcessHeapImpl::Free(*((void **)this + 3));
  }
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
