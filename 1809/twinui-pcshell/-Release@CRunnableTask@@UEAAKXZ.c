/*
 * XREFs of ?Release@CRunnableTask@@UEAAKXZ @ 0x1802DF520
 * Callers:
 *     ?Release@CRunnableTask@@W7EAAKXZ @ 0x1800A81E0 (-Release@CRunnableTask@@W7EAAKXZ.c)
 *     ?Release@CRunnableTask@@WBA@EAAKXZ @ 0x1800A81F0 (-Release@CRunnableTask@@WBA@EAAKXZ.c)
 *     ?Release@CRunnableTask@@WBI@EAAKXZ @ 0x1800A8200 (-Release@CRunnableTask@@WBI@EAAKXZ.c)
 *     ?Release@CRunnableTask@@WCA@EAAKXZ @ 0x1800A8210 (-Release@CRunnableTask@@WCA@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRunnableTask::Release(CRunnableTask *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 10);
  if ( !v1 && this )
    (*(void (__fastcall **)(CRunnableTask *, __int64))(*(_QWORD *)this + 128LL))(this, 1LL);
  return v1;
}
