/*
 * XREFs of ??$SetBehavior@VCParticleVector4Behavior@@@CParticleBehaviors@@IEAAJPEAVCResource@@PEAPEAVCParticleVector4Behavior@@@Z @ 0x1801E725C
 * Callers:
 *     ?ProcessSetOrientation@CParticleBehaviors@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEBEHAVIORS_SETORIENTATION@@@Z @ 0x1801E74E8 (-ProcessSetOrientation@CParticleBehaviors@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEBEHAVI.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18007BA60 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800BBF14 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CParticleBehaviors::SetBehavior<CParticleVector4Behavior>(
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
  if ( !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 121LL) )
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
