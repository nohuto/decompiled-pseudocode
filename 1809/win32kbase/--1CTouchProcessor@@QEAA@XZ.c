/*
 * XREFs of ??1CTouchProcessor@@QEAA@XZ @ 0x1C000657C
 * Callers:
 *     UnInitializeInputComponents @ 0x1C0005BB4 (UnInitializeInputComponents.c)
 *     ??_GCPTPProcessor@@AEAAPEAXI@Z @ 0x1C014A3FC (--_GCPTPProcessor@@AEAAPEAXI@Z.c)
 * Callees:
 *     ??1CBaseProcessor@@QEAA@XZ @ 0x1C000660C (--1CBaseProcessor@@QEAA@XZ.c)
 *     ?Uninitialize@CInpLockGuard@@QEAAXXZ @ 0x1C0006658 (-Uninitialize@CInpLockGuard@@QEAAXXZ.c)
 *     ?CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ @ 0x1C0006698 (-CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ.c)
 */

void __fastcall CTouchProcessor::~CTouchProcessor(CTouchProcessor *this)
{
  *(_QWORD *)this = &CBaseProcessor::`vftable';
  CTouchProcessor::CleanupCoalesceInfo(this);
  CInpLockGuard::Uninitialize((CTouchProcessor *)((char *)this + 56));
  *(_QWORD *)this = &CBaseProcessor::`vftable';
  CBaseProcessor::~CBaseProcessor(this);
}
