/*
 * XREFs of ?SetBrush@CParticleEmitterVisual@@QEAAJPEAVCResource@@@Z @ 0x1801EDCA8
 * Callers:
 *     ?ProcessSetBrush@CParticleEmitterVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEEMITTERVISUAL_SETBRUSH@@@Z @ 0x1801EDB28 (-ProcessSetBrush@CParticleEmitterVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEEMITTERV.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180080220 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800B9DD4 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?IsValidBrushResource@CParticleEmitterVisual@@KA_NPEBVCResource@@@Z @ 0x1801ED7F8 (-IsValidBrushResource@CParticleEmitterVisual@@KA_NPEBVCResource@@@Z.c)
 */

__int64 __fastcall CParticleEmitterVisual::SetBrush(struct CResource **this, struct CResource *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  signed int v6; // eax
  __int64 v7; // rcx

  if ( a2 == this[765] )
    return 0;
  if ( !a2 )
    goto LABEL_8;
  if ( !CParticleEmitterVisual::IsValidBrushResource(a2) )
  {
    v5 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, 0x88980403, 0x194u, 0LL);
    return v5;
  }
  v6 = CResource::RegisterNotifier((CResource *)this, a2);
  v5 = v6;
  if ( v6 >= 0 )
  {
LABEL_8:
    CResource::UnRegisterNotifierInternal((CResource *)this, this[765]);
    this[765] = a2;
    *((_BYTE *)this + 6282) = 0;
    return 0;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x197u, 0LL);
  return v5;
}
