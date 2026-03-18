/*
 * XREFs of ?SetEmitterViewBox@CParticleEmitterVisual@@QEAAJPEAVCResource@@@Z @ 0x1801EDE9C
 * Callers:
 *     ?ProcessSetEmitterViewBox@CParticleEmitterVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEEMITTERVISUAL_SETEMITTERVIEWBOX@@@Z @ 0x1801EDBE0 (-ProcessSetEmitterViewBox@CParticleEmitterVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICL.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180080220 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800B9DD4 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CParticleEmitterVisual::SetEmitterViewBox(struct CResource **this, struct CResource *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  signed int v6; // eax
  __int64 v7; // rcx

  if ( a2 == this[764] )
    return 0;
  if ( !a2 )
    goto LABEL_8;
  if ( !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 187LL) )
  {
    v5 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, 0x88980403, 0x1CFu, 0LL);
    return v5;
  }
  v6 = CResource::RegisterNotifier((CResource *)this, a2);
  v5 = v6;
  if ( v6 >= 0 )
  {
LABEL_8:
    CResource::UnRegisterNotifierInternal((CResource *)this, this[764]);
    this[764] = a2;
    return 0;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x1D2u, 0LL);
  return v5;
}
