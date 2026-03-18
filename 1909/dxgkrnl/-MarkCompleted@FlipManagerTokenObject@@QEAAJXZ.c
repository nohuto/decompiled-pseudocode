/*
 * XREFs of ?MarkCompleted@FlipManagerTokenObject@@QEAAJXZ @ 0x1C005A274
 * Callers:
 *     ?CompleteFlipManagerToken@CTokenManager@@IEAAJPEAX@Z @ 0x1C0059E00 (-CompleteFlipManagerToken@CTokenManager@@IEAAJPEAX@Z.c)
 * Callees:
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00123F0 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0012460 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FlipManagerTokenObject::MarkCompleted(FlipManagerTokenObject *this)
{
  int v2; // ebx

  v2 = CPushLock::AcquireLockShared((FlipManagerTokenObject *)((char *)this + 72));
  if ( v2 >= 0 )
  {
    if ( *((_DWORD *)this + 16) == 1 )
      (*(void (__fastcall **)(char *))(*((_QWORD *)this + 5) + 24LL))((char *)this + 40);
    else
      v2 = -1073741823;
    CPushLock::ReleaseLock((FlipManagerTokenObject *)((char *)this + 72));
  }
  return (unsigned int)v2;
}
