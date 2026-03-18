/*
 * XREFs of ??_ECD3DVidMemOnlyTexture@@MEAAPEAXI@Z @ 0x180049650
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??1CD3DTexture@@MEAA@XZ @ 0x18004956C (--1CD3DTexture@@MEAA@XZ.c)
 */

CD3DVidMemOnlyTexture *__fastcall CD3DVidMemOnlyTexture::`vector deleting destructor'(
        CD3DVidMemOnlyTexture *this,
        char a2)
{
  *(_QWORD *)this = &CD3DVidMemOnlyTexture::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)this + 3) = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
  CD3DTexture::~CD3DTexture(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
