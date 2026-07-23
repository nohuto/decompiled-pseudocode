/*
 * XREFs of CmpDoFlushAll @ 0x140157B08
 * Callers:
 *     NtFlushKey @ 0x1406C1210 (NtFlushKey.c)
 *     CmReconcileAndValidateAllHives @ 0x1407F6EF0 (CmReconcileAndValidateAllHives.c)
 *     CmpForceFlushWorker @ 0x1407FC360 (CmpForceFlushWorker.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     CmpFlushHive @ 0x1405B3F54 (CmpFlushHive.c)
 *     CmpGetNextHive @ 0x1405D10F0 (CmpGetNextHive.c)
 *     CmpGetLastHive @ 0x1406C3594 (CmpGetLastHive.c)
 *     CmpDereferenceHive @ 0x1406E1F90 (CmpDereferenceHive.c)
 */

void CmpDoFlushAll()
{
  __int64 LastHive; // rdi
  void *i; // rcx
  struct _EX_RUNDOWN_REF *NextHive; // rax
  ULONG_PTR v3; // rbx

  if ( !CmpNoWrite )
  {
    LastHive = CmpGetLastHive();
    if ( LastHive )
    {
      for ( i = 0LL; ; i = (void *)v3 )
      {
        NextHive = (struct _EX_RUNDOWN_REF *)CmpGetNextHive(i);
        v3 = (ULONG_PTR)NextHive;
        if ( !NextHive )
          break;
        if ( ExAcquireRundownProtection_0(NextHive + 204) )
        {
          if ( (*(_DWORD *)(v3 + 160) & 2) == 0 )
            CmpFlushHive(v3);
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v3 + 1632));
        }
        if ( v3 == LastHive )
          break;
      }
      CmpDereferenceHive(v3);
      CmpDereferenceHive(LastHive);
    }
  }
}
