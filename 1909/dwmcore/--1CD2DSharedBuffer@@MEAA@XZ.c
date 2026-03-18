/*
 * XREFs of ??1CD2DSharedBuffer@@MEAA@XZ @ 0x1800790FC
 * Callers:
 *     ??_ECD2DSharedBuffer@@MEAAPEAXI@Z @ 0x180079150 (--_ECD2DSharedBuffer@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800AC000 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
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
    operator delete(*((void **)this + 3));
  }
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
