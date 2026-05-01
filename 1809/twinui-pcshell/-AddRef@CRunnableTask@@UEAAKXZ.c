/*
 * XREFs of ?AddRef@CRunnableTask@@UEAAKXZ @ 0x1800816C0
 * Callers:
 *     ?AddRef@CRunnableTask@@W7EAAKXZ @ 0x1800A80E0 (-AddRef@CRunnableTask@@W7EAAKXZ.c)
 *     ?AddRef@CRunnableTask@@WBA@EAAKXZ @ 0x1800A80F0 (-AddRef@CRunnableTask@@WBA@EAAKXZ.c)
 *     ?AddRef@CRunnableTask@@WBI@EAAKXZ @ 0x1800A8100 (-AddRef@CRunnableTask@@WBI@EAAKXZ.c)
 *     ?AddRef@CRunnableTask@@WCA@EAAKXZ @ 0x1800A8110 (-AddRef@CRunnableTask@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRunnableTask::AddRef(CRunnableTask *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 10);
}
