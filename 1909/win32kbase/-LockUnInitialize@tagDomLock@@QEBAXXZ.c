/*
 * XREFs of ?LockUnInitialize@tagDomLock@@QEBAXXZ @ 0x1C00B2050
 * Callers:
 *     ?CleanupDomainLocks@@YAXXZ @ 0x1C00B1F34 (-CleanupDomainLocks@@YAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall tagDomLock::LockUnInitialize(PVOID *this)
{
  struct _ERESOURCE *v2; // rcx

  v2 = (struct _ERESOURCE *)*this;
  if ( v2 )
  {
    ExDeleteResourceLite(v2);
    ExFreePoolWithTag(*this, 0);
    *this = 0LL;
  }
}
