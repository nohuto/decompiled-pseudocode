/*
 * XREFs of ?Update@CParticleEmitter@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1801C7770
 * Callers:
 *     <none>
 * Callees:
 *     ?ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800A39EC (-ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?ApplyActiveBehaviors@CParticleEmitter@@IEAAXM@Z @ 0x1801C5318 (-ApplyActiveBehaviors@CParticleEmitter@@IEAAXM@Z.c)
 *     ?EmitParticles@CParticleEmitter@@IEAAJM@Z @ 0x1801C57D0 (-EmitParticles@CParticleEmitter@@IEAAJM@Z.c)
 *     ?UpdateBounds@CParticleEmitter@@IEAAXXZ @ 0x1801C785C (-UpdateBounds@CParticleEmitter@@IEAAXXZ.c)
 *     ?UpdateParticles@CParticleEmitter@@IEAAXM@Z @ 0x1801C7A78 (-UpdateParticles@CParticleEmitter@@IEAAXM@Z.c)
 */

__int64 __fastcall CParticleEmitter::Update(
        CParticleEmitter *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        const void *a3)
{
  unsigned int v4; // edi
  float i; // xmm0_4
  float v6; // xmm1_4
  int v7; // eax
  __int64 v8; // rcx

  v4 = 0;
  if ( CResource::ModifyProperty(this, a2, a3) )
  {
    for ( i = (float)(*((float *)this + 1439) - *((float *)this + 1438)) + *((float *)this + 1425);
          ;
          i = *((float *)this + 1425) - 0.016666668 )
    {
      *((float *)this + 1425) = i;
      if ( i <= 0.016666668 )
      {
        CParticleEmitter::UpdateBounds(this);
        *((_DWORD *)this + 1438) = *((_DWORD *)this + 1439);
        (*(void (__fastcall **)(CParticleEmitter *, _QWORD, CParticleEmitter *))(*(_QWORD *)this + 64LL))(
          this,
          0LL,
          this);
        return v4;
      }
      v6 = FLOAT_0_016666668;
      CParticleEmitter::UpdateParticles(this, 0.016666668);
      if ( *((float *)this + 1393) > *((float *)this + 1439) )
      {
        v6 = FLOAT_0_016666668;
        v7 = CParticleEmitter::EmitParticles(this, 0.016666668);
        v4 = v7;
        if ( v7 < 0 )
          break;
      }
      CParticleEmitter::ApplyActiveBehaviors(this, v6);
    }
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x42u);
  }
  return v4;
}
