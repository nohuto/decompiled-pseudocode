/*
 * XREFs of ??_ECD3DVidMemOnlyTexture@@MEAAPEAXI@Z @ 0x1800B2A60
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD3DTexture@@MEAA@XZ @ 0x1800B2AB0 (--1CD3DTexture@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 */

CD3DVidMemOnlyTexture *__fastcall CD3DVidMemOnlyTexture::`vector deleting destructor'(
        CD3DVidMemOnlyTexture *this,
        char a2)
{
  *(_QWORD *)this = &CD3DVidMemOnlyTexture::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)this + 3) = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
  CD3DTexture::~CD3DTexture(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x100uLL);
  return this;
}
