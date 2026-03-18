/*
 * XREFs of ?LockShared@tagDomLock@@QEBAXXZ @ 0x1C007B340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall tagDomLock::LockShared(PERESOURCE *this)
{
  ExEnterCriticalRegionAndAcquireResourceShared(*this);
}
