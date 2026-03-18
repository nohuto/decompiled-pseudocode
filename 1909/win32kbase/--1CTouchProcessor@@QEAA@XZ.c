/*
 * XREFs of ??1CTouchProcessor@@QEAA@XZ @ 0x1C00B1DB4
 * Callers:
 *     UnInitializeInputComponents @ 0x1C00B1AC4 (UnInitializeInputComponents.c)
 *     ??_GCPTPProcessor@@AEAAPEAXI@Z @ 0x1C0177C18 (--_GCPTPProcessor@@AEAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize@CInpLockGuard@@QEAAXXZ @ 0x1C00B1DEC (-Uninitialize@CInpLockGuard@@QEAAXXZ.c)
 *     ?CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ @ 0x1C00B1E58 (-CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ.c)
 */

void __fastcall CTouchProcessor::~CTouchProcessor(CTouchProcessor *this)
{
  *(_QWORD *)this = &CBaseProcessor::`vftable';
  CTouchProcessor::CleanupCoalesceInfo(this);
  CInpLockGuard::Uninitialize((CTouchProcessor *)((char *)this + 48));
  *(_QWORD *)this = &CBaseProcessor::`vftable';
}
