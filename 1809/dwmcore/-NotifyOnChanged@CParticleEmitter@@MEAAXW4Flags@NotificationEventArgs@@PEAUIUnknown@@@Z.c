/*
 * XREFs of ?NotifyOnChanged@CParticleEmitter@@MEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801C65E0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_ptr@VIAnimator@Particles@@U?$default_delete@VIAnimator@Particles@@@std@@@std@@QEAAXPEAVIAnimator@Particles@@@Z @ 0x1801C80C0 (-reset@-$unique_ptr@VIAnimator@Particles@@U-$default_delete@VIAnimator@Particles@@@std@@@std@@QE.c)
 */

__int64 __fastcall CParticleEmitter::NotifyOnChanged(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // edi

  v4 = a2;
  if ( a2 == 1 )
  {
    v4 = 6;
  }
  else if ( a3 == *(_QWORD *)(a1 + 5736) )
  {
    *(_BYTE *)(a1 + 5776) = 0;
  }
  else if ( a2 == 4 )
  {
    std::unique_ptr<Particles::IAnimator>::reset(a1 + 5720, 0LL);
  }
  return CResource::NotifyOnChanged(a1, v4, a3);
}
