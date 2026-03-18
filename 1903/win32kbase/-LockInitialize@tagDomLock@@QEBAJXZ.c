/*
 * XREFs of ?LockInitialize@tagDomLock@@QEBAJXZ @ 0x1C00A08B0
 * Callers:
 *     ?InitDomainLocks@@YAJXZ @ 0x1C00A06B0 (-InitDomainLocks@@YAJXZ.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall tagDomLock::LockInitialize(tagDomLock *this)
{
  struct _ERESOURCE *PoolWithTag; // rax

  PoolWithTag = (struct _ERESOURCE *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x68uLL, 0x72657355u);
  *(_QWORD *)this = PoolWithTag;
  if ( PoolWithTag )
    return ExInitializeResourceLite(PoolWithTag);
  else
    return -1073741801;
}
