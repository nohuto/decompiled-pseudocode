/*
 * XREFs of ??$make_unique@VCPowerReferenceManager@@$$V$0A@@std@@YA?AV?$unique_ptr@VCPowerReferenceManager@@U?$default_delete@VCPowerReferenceManager@@@std@@@0@XZ @ 0x18005E314
 * Callers:
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x18005CA90 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180057130 (--2@YAPEAX_K@Z.c)
 *     ??0CPowerReferenceManager@@QEAA@XZ @ 0x18005E378 (--0CPowerReferenceManager@@QEAA@XZ.c)
 *     memset_0 @ 0x180065BEE (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
CPowerReferenceManager **__fastcall std::make_unique<CPowerReferenceManager,,0>(CPowerReferenceManager **a1)
{
  void *v2; // rdi
  CPowerReferenceManager *v3; // rax

  v2 = operator new(0x198uLL);
  v3 = 0LL;
  if ( v2 )
  {
    memset_0(v2, 0, 0x198uLL);
    v3 = CPowerReferenceManager::CPowerReferenceManager((CPowerReferenceManager *)v2);
  }
  *a1 = v3;
  return a1;
}
