/*
 * XREFs of ??1CParticleEmitterVisual@@MEAA@XZ @ 0x1801E9D6C
 * Callers:
 *     ??_ECParticleEmitterVisual@@MEAAPEAXI@Z @ 0x1801EA230 (--_ECParticleEmitterVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800BBF14 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1ParticleCollection@CParticleEmitterVisual@@QEAA@XZ @ 0x1801E9ED0 (--1ParticleCollection@CParticleEmitterVisual@@QEAA@XZ.c)
 *     ?UnregisterAttractorNotifiers@CParticleEmitterVisual@@IEAAXXZ @ 0x1801ED0EC (-UnregisterAttractorNotifiers@CParticleEmitterVisual@@IEAAXXZ.c)
 */

void __fastcall CParticleEmitterVisual::~CParticleEmitterVisual(struct CResource **this)
{
  struct CResource *v2; // rcx
  struct CResource *v3; // rcx
  struct CResource *v4; // rcx

  *this = (struct CResource *)&CParticleEmitterVisual::`vftable';
  CResource::UnRegisterNotifierInternal((CResource *)this, this[765]);
  this[765] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[763]);
  this[763] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[764]);
  this[764] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[782]);
  this[782] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[783]);
  this[783] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[784]);
  this[784] = 0LL;
  CParticleEmitterVisual::UnregisterAttractorNotifiers((CParticleEmitterVisual *)this);
  v2 = this[762];
  if ( v2 )
    operator delete(v2);
  v3 = this[132];
  if ( v3 )
  {
    std::_Deallocate<16,0>(v3, (this[134] - v3) & 0xFFFFFFFFFFFFFFF8uLL);
    this[132] = 0LL;
    this[133] = 0LL;
    this[134] = 0LL;
  }
  v4 = this[129];
  if ( v4 )
  {
    std::_Deallocate<16,0>(v4, 48 * ((this[131] - v4) / 48));
    this[129] = 0LL;
    this[130] = 0LL;
    this[131] = 0LL;
  }
  CParticleEmitterVisual::ParticleCollection::~ParticleCollection((CParticleEmitterVisual::ParticleCollection *)(this + 71));
  CVisual::~CVisual((CVisual *)this);
}
