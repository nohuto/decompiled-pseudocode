/*
 * XREFs of ?MarkInvalid@CFlipManagerToken@@UEAAXXZ @ 0x1C005AB00
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0012334 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0012460 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CFlipManagerToken::MarkInvalid(CFlipManagerToken *this)
{
  if ( (**(unsigned __int8 (__fastcall ***)(CFlipManagerToken *))this)(this) )
  {
    CPushLock::AcquireLockExclusive((CFlipManagerToken *)((char *)this + 40));
    *((_BYTE *)this + 113) = 0;
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 1) + 56LL))((char *)this + 8);
    CPushLock::ReleaseLock((CFlipManagerToken *)((char *)this + 40));
  }
}
