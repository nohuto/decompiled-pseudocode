/*
 * XREFs of ?ClearAttractors@CParticleEmitterVisualMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01B60A0
 * Callers:
 *     ?ReleaseAllReferences@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01B65D0 (-ReleaseAllReferences@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationCh.c)
 *     ?SetReferenceArrayProperty@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C01B6BA0 (-SetReferenceArrayProperty@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicat.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0013C00 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CParticleEmitterVisualMarshaler::ClearAttractors(
        DirectComposition::CParticleEmitterVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 i; // rdi
  __int64 v5; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 122); i = (unsigned int)(i + 1) )
    DirectComposition::CApplicationChannel::ReleaseResource(
      a2,
      *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 60) + 8 * i));
  v5 = *((_QWORD *)this + 60);
  if ( v5 )
  {
    Win32FreePool(v5);
    *((_QWORD *)this + 60) = 0LL;
    *((_DWORD *)this + 122) = 0;
  }
}
