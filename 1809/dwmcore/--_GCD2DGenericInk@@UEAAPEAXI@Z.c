/*
 * XREFs of ??_GCD2DGenericInk@@UEAAPEAXI@Z @ 0x180206170
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CD2DResource@@MEAA@XZ @ 0x18009AF30 (--1CD2DResource@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 */

CD2DGenericInk *__fastcall CD2DGenericInk::`scalar deleting destructor'(CD2DGenericInk *this, char a2)
{
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 13);
  CD2DResource::~CD2DResource(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
