/*
 * XREFs of ?SetParticleBehaviors@CParticleEmitterVisual@@QEAAJPEAVCResource@@@Z @ 0x1801EC7E0
 * Callers:
 *     ?ProcessSetParticleBehaviors@CParticleEmitterVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEEMITTERVISUAL_SETPARTICLEBEHAVIORS@@@Z @ 0x1801EC49C (-ProcessSetParticleBehaviors@CParticleEmitterVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PART.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18007BA60 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800BBF14 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CParticleEmitterVisual::SetParticleBehaviors(struct CResource **this, struct CResource *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  signed int v6; // eax
  __int64 v7; // rcx

  if ( a2 == this[783] )
    return 0;
  if ( !a2 )
    goto LABEL_8;
  if ( !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 113LL) )
  {
    v5 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, 0x88980403, 0x207u, 0LL);
    return v5;
  }
  v6 = CResource::RegisterNotifier((CResource *)this, a2);
  v5 = v6;
  if ( v6 >= 0 )
  {
LABEL_8:
    CResource::UnRegisterNotifierInternal((CResource *)this, this[783]);
    this[783] = a2;
    return 0;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x20Au, 0LL);
  return v5;
}
