/*
 * XREFs of ??$SetBehavior@VCParticleScalarBehavior@@@CParticleBehaviors@@IEAAJPEAVCResource@@PEAPEAVCParticleScalarBehavior@@@Z @ 0x1801E87B0
 * Callers:
 *     ?ProcessSetAngularVelocity@CParticleBehaviors@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEBEHAVIORS_SETANGULARVELOCITY@@@Z @ 0x1801E8B54 (-ProcessSetAngularVelocity@CParticleBehaviors@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEBE.c)
 *     ?ProcessSetLifetime@CParticleBehaviors@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEBEHAVIORS_SETLIFETIME@@@Z @ 0x1801E8BF0 (-ProcessSetLifetime@CParticleBehaviors@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEBEHAVIORS.c)
 *     ?ProcessSetOpacity@CParticleBehaviors@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEBEHAVIORS_SETOPACITY@@@Z @ 0x1801E8C24 (-ProcessSetOpacity@CParticleBehaviors@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEBEHAVIORS_.c)
 *     ?ProcessSetSpeed@CParticleBehaviors@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEBEHAVIORS_SETSPEED@@@Z @ 0x1801E8CF4 (-ProcessSetSpeed@CParticleBehaviors@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEBEHAVIORS_SE.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180080220 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800B9DD4 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CParticleBehaviors::SetBehavior<CParticleScalarBehavior>(
        CResource *this,
        struct CResource *a2,
        struct CResource **a3)
{
  __int64 v6; // rcx
  unsigned int v7; // ebx
  signed int v8; // eax
  __int64 v9; // rcx

  if ( a2 == *a3 )
    return 0;
  if ( !a2 )
    goto LABEL_8;
  if ( !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 118LL) )
  {
    v7 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, 0x88980403, 0x42u, 0LL);
    return v7;
  }
  v8 = CResource::RegisterNotifier(this, a2);
  v7 = v8;
  if ( v8 >= 0 )
  {
LABEL_8:
    CResource::UnRegisterNotifierInternal(this, *a3);
    *a3 = a2;
    return 0;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x45u, 0LL);
  return v7;
}
