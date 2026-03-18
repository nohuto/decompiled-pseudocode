/*
 * XREFs of ?MarkInvalid@CFlipManagerToken@@UEAAXXZ @ 0x1C0053EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C000CC08 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000D988 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
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
