/*
 * XREFs of ??1CProjectedShadowReceiver@@MEAA@XZ @ 0x180003520
 * Callers:
 *     ??_ECProjectedShadowReceiver@@MEAAPEAXI@Z @ 0x1800034E0 (--_ECProjectedShadowReceiver@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z @ 0x1800036B0 (-SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800B9DD4 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CProjectedShadowReceiver::~CProjectedShadowReceiver(struct CResource **this)
{
  struct CResource *v2; // rcx

  *this = (struct CResource *)&CProjectedShadowReceiver::`vftable';
  CProjectedShadowReceiver::SetReceivingVisual((CProjectedShadowReceiver *)this, 0LL);
  CResource::UnRegisterNotifierInternal((CResource *)this, this[12]);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(this + 13);
  v2 = this[8];
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (this[10] - v2) & 0xFFFFFFFFFFFFFFF8uLL);
    this[8] = 0LL;
    this[9] = 0LL;
    this[10] = 0LL;
  }
  CResource::~CResource((CResource *)this);
}
