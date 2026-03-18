/*
 * XREFs of ?NotifyOnChanged@CParticleEmitterVisual@@MEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801ED910
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_ptr@VCSpawner@EmitterShapes@@U?$default_delete@VCSpawner@EmitterShapes@@@std@@@std@@QEAAXPEAVCSpawner@EmitterShapes@@@Z @ 0x1801A361C (-reset@-$unique_ptr@VCSpawner@EmitterShapes@@U-$default_delete@VCSpawner@EmitterShapes@@@std@@@s.c)
 *     ?AnimateRemainingParticles@CParticleEmitterVisual@@IEAAJXZ @ 0x1801EB9E8 (-AnimateRemainingParticles@CParticleEmitterVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CParticleEmitterVisual::NotifyOnChanged(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // edi

  v4 = a2;
  if ( a2 == 1 )
  {
    v4 = 6;
  }
  else if ( a3 == *(_QWORD *)(a1 + 6120) )
  {
    *(_BYTE *)(a1 + 6282) = 0;
  }
  else if ( a2 == 4 )
  {
    std::unique_ptr<EmitterShapes::CSpawner>::reset((void **)(a1 + 6096), 0LL);
  }
  else if ( a2 - 8 <= 1 && *(_QWORD *)(a1 + 6272) == a3 )
  {
    *(_BYTE *)(a1 + 6280) = 0;
    CParticleEmitterVisual::AnimateRemainingParticles((CParticleEmitterVisual *)a1);
  }
  return CResource::NotifyOnChanged(a1, v4, a3);
}
