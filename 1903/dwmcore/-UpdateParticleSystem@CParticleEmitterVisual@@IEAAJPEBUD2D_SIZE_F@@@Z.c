/*
 * XREFs of ?UpdateParticleSystem@CParticleEmitterVisual@@IEAAJPEBUD2D_SIZE_F@@@Z @ 0x1801EEAA4
 * Callers:
 *     ?GetBounds@CParticleEmitter@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801EA4C0 (-GetBounds@CParticleEmitter@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRect.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ApplyActiveBehaviors@CParticleEmitterVisual@@IEAAXM@Z @ 0x1801EBBB4 (-ApplyActiveBehaviors@CParticleEmitterVisual@@IEAAXM@Z.c)
 *     ?EmitParticles@CParticleEmitterVisual@@IEAAJMPEBUD2D_SIZE_F@@@Z @ 0x1801EC91C (-EmitParticles@CParticleEmitterVisual@@IEAAJMPEBUD2D_SIZE_F@@@Z.c)
 *     ?UpdateBounds@CParticleEmitterVisual@@IEAAXXZ @ 0x1801EE8DC (-UpdateBounds@CParticleEmitterVisual@@IEAAXXZ.c)
 *     ?UpdateParticles@CParticleEmitterVisual@@IEAAXM@Z @ 0x1801EEBB8 (-UpdateParticles@CParticleEmitterVisual@@IEAAXM@Z.c)
 */

__int64 __fastcall CParticleEmitterVisual::UpdateParticleSystem(
        CParticleEmitterVisual *this,
        const struct D2D_SIZE_F *a2)
{
  float v2; // xmm1_4
  unsigned int v3; // edi
  float v4; // xmm0_4
  float v7; // xmm1_4
  float v8; // xmm1_4
  signed int v9; // eax
  __int64 v10; // rcx
  float v11; // xmm0_4

  v2 = *((float *)this + 1533);
  v3 = 0;
  v4 = *((float *)this + 1532);
  if ( v4 > v2 )
  {
    v4 = v4 - *((float *)this + 1543);
    *((float *)this + 1532) = v4;
  }
  v7 = (float)(v2 - v4) + *((float *)this + 1521);
  *((float *)this + 1521) = v7;
  if ( v7 <= 0.016666668 )
  {
LABEL_8:
    CParticleEmitterVisual::UpdateBounds(this);
    *((_DWORD *)this + 1532) = *((_DWORD *)this + 1533);
    *((_BYTE *)this + 6281) = 0;
  }
  else
  {
    while ( 1 )
    {
      v8 = FLOAT_0_016666668;
      CParticleEmitterVisual::UpdateParticles(this, 0.016666668);
      if ( *((_BYTE *)this + 6280) )
      {
        if ( *((float *)this + 1543) > *((float *)this + 1533) )
        {
          v8 = FLOAT_0_016666668;
          v9 = CParticleEmitterVisual::EmitParticles(this, 0.016666668, a2);
          v3 = v9;
          if ( v9 < 0 )
            break;
        }
      }
      CParticleEmitterVisual::ApplyActiveBehaviors(this, v8);
      v11 = *((float *)this + 1521) - 0.016666668;
      *((float *)this + 1521) = v11;
      if ( v11 <= 0.016666668 )
        goto LABEL_8;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xE4u, 0LL);
  }
  return v3;
}
