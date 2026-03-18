/*
 * XREFs of ?SetEmitterShape@CParticleEmitterVisual@@QEAAJPEAVCResource@@@Z @ 0x1801EDDE8
 * Callers:
 *     ?ProcessSetEmitterGeometry@CParticleEmitterVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEEMITTERVISUAL_SETEMITTERGEOMETRY@@@Z @ 0x1801EDBB4 (-ProcessSetEmitterGeometry@CParticleEmitterVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTIC.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180080220 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800B9DD4 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?reset@?$unique_ptr@VCSpawner@EmitterShapes@@U?$default_delete@VCSpawner@EmitterShapes@@@std@@@std@@QEAAXPEAVCSpawner@EmitterShapes@@@Z @ 0x1801A361C (-reset@-$unique_ptr@VCSpawner@EmitterShapes@@U-$default_delete@VCSpawner@EmitterShapes@@@std@@@s.c)
 *     ?IsValidEmitterShape@CParticleEmitterVisual@@KA_NPEAVCResource@@@Z @ 0x1801ED880 (-IsValidEmitterShape@CParticleEmitterVisual@@KA_NPEAVCResource@@@Z.c)
 */

__int64 __fastcall CParticleEmitterVisual::SetEmitterShape(CParticleEmitterVisual *this, struct CResource *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  signed int v6; // eax
  __int64 v7; // rcx

  if ( a2 == *((struct CResource **)this + 763) )
    goto LABEL_9;
  if ( !a2 )
    goto LABEL_8;
  if ( !CParticleEmitterVisual::IsValidEmitterShape(a2) )
  {
    v5 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, 0x88980403, 0x1B1u, 0LL);
    return v5;
  }
  v6 = CResource::RegisterNotifier(this, a2);
  v5 = v6;
  if ( v6 >= 0 )
  {
LABEL_8:
    CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 763));
    *((_QWORD *)this + 763) = a2;
LABEL_9:
    std::unique_ptr<EmitterShapes::CSpawner>::reset((void **)this + 762, 0LL);
    return 0;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x1B4u, 0LL);
  return v5;
}
