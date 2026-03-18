/*
 * XREFs of ??1CSpriteVectorShape@@UEAA@XZ @ 0x1801F93E8
 * Callers:
 *     ??_GCSpriteVectorShape@@UEAAPEAXI@Z @ 0x18019E380 (--_GCSpriteVectorShape@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D76C (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800BBF14 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?_Tidy@?$vector@MV?$allocator@M@std@@@std@@AEAAXXZ @ 0x1801A1B3C (-_Tidy@-$vector@MV-$allocator@M@std@@@std@@AEAAXXZ.c)
 */

void __fastcall CSpriteVectorShape::~CSpriteVectorShape(CSpriteVectorShape *this)
{
  struct CResource *v1; // rdx

  v1 = (struct CResource *)*((_QWORD *)this + 11);
  *(_QWORD *)this = &CSpriteVectorShape::`vftable';
  CResource::UnRegisterNotifierInternal(this, v1);
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 12));
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 13));
  std::vector<float>::_Tidy((__int64)this + 144);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 15);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 14);
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 7));
  CResource::~CResource(this);
}
