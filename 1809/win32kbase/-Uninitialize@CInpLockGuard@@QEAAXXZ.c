/*
 * XREFs of ?Uninitialize@CInpLockGuard@@QEAAXXZ @ 0x1C0006658
 * Callers:
 *     UnInitializeInputComponents @ 0x1C0005BB4 (UnInitializeInputComponents.c)
 *     ?Uninitialize@DelayZonePalmRejection@@SAXXZ @ 0x1C0006234 (-Uninitialize@DelayZonePalmRejection@@SAXXZ.c)
 *     ??1CTouchProcessor@@QEAA@XZ @ 0x1C000657C (--1CTouchProcessor@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CInpLockGuard::Uninitialize(PVOID *this)
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
