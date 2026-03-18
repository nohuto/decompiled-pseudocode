/*
 * XREFs of ?reset@?$unique_ptr@VIAnimator@Particles@@U?$default_delete@VIAnimator@Particles@@@std@@@std@@QEAAXPEAVIAnimator@Particles@@@Z @ 0x1801C80C0
 * Callers:
 *     ??$Create@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@MV?$allocator@M@6@@BulkAnimator@Particles@@SAJPEAVIAnimator@1@AEAV?$vector@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@std@@HHAEAV?$vector@MV?$allocator@M@std@@@4@HAEAV?$unique_ptr@VBulkAnimator@Particles@@U?$default_delete@VBulkAnimator@Particles@@@std@@@4@@Z @ 0x1801C3964 (--$Create@Ufloat2@Numerics@Foundation@Windows@@V-$allocator@Ufloat2@Numerics@Foundation@Windows@.c)
 *     ??$Create@Ufloat4@Numerics@Foundation@Windows@@V?$allocator@Ufloat4@Numerics@Foundation@Windows@@@std@@MV?$allocator@M@6@@BulkAnimator@Particles@@SAJPEAVIAnimator@1@AEAV?$vector@Ufloat4@Numerics@Foundation@Windows@@V?$allocator@Ufloat4@Numerics@Foundation@Windows@@@std@@@std@@HHAEAV?$vector@MV?$allocator@M@std@@@4@HAEAV?$unique_ptr@VBulkAnimator@Particles@@U?$default_delete@VBulkAnimator@Particles@@@std@@@4@@Z @ 0x1801C3A54 (--$Create@Ufloat4@Numerics@Foundation@Windows@@V-$allocator@Ufloat4@Numerics@Foundation@Windows@.c)
 *     ??$Create@Ufloat4@Numerics@Foundation@Windows@@V?$allocator@Ufloat4@Numerics@Foundation@Windows@@@std@@U1234@V56@@BulkAnimator@Particles@@SAJPEAVIAnimator@1@AEAV?$vector@Ufloat4@Numerics@Foundation@Windows@@V?$allocator@Ufloat4@Numerics@Foundation@Windows@@@std@@@std@@HH1HAEAV?$unique_ptr@VBulkAnimator@Particles@@U?$default_delete@VBulkAnimator@Particles@@@std@@@4@@Z @ 0x1801C3B40 (--$Create@Ufloat4@Numerics@Foundation@Windows@@V-$allocator@Ufloat4@Numerics@Founda_ea_1801C3B40.c)
 *     ?EnsureSpawner@CParticleEmitter@@AEAAJXZ @ 0x1801C58F8 (-EnsureSpawner@CParticleEmitter@@AEAAJXZ.c)
 *     ?NotifyOnChanged@CParticleEmitter@@MEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801C65E0 (-NotifyOnChanged@CParticleEmitter@@MEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<Particles::IAnimator>::reset(void **a1, void *a2)
{
  void *v2; // rax

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
    operator delete(v2);
}
