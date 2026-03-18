/*
 * XREFs of ?AddRef@CEffectCompilationTask@@UEAAKXZ @ 0x1800D67C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEffectCompilationTask::AddRef(CEffectCompilationTask *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 24);
}
