/*
 * XREFs of ?SetBrush@CParticleEmitter@@QEAAJPEAVCResource@@@Z @ 0x1801C69E4
 * Callers:
 *     ?ProcessSetBrush@CParticleEmitterVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PARTICLEEMITTERVISUAL_SETBRUSH@@@Z @ 0x1801AA8F4 (-ProcessSetBrush@CParticleEmitterVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PARTICLEEMITTERVISU.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A5544 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsValidBrushResource@CParticleEmitter@@CA_NPEBVCResource@@@Z @ 0x1801C6554 (-IsValidBrushResource@CParticleEmitter@@CA_NPEBVCResource@@@Z.c)
 */

__int64 __fastcall CParticleEmitter::SetBrush(struct CResource **this, struct CResource *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rcx

  if ( a2 == this[717] )
    return 0;
  if ( !a2 )
    goto LABEL_8;
  if ( !CParticleEmitter::IsValidBrushResource(a2) )
  {
    v5 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2003303421, 0x110u);
    return v5;
  }
  v6 = CResource::RegisterNotifier((CResource *)this, a2);
  v5 = v6;
  if ( v6 >= 0 )
  {
LABEL_8:
    CResource::UnRegisterNotifierInternal((CResource *)this, this[717]);
    this[717] = a2;
    *((_BYTE *)this + 5776) = 0;
    return 0;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x113u);
  return v5;
}
