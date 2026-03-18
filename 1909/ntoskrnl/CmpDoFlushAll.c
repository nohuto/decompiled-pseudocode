/*
 * XREFs of CmpDoFlushAll @ 0x140168780
 * Callers:
 *     NtFlushKey @ 0x1406E5920 (NtFlushKey.c)
 *     CmReconcileAndValidateAllHives @ 0x14082E94C (CmReconcileAndValidateAllHives.c)
 *     CmpForceFlushWorker @ 0x140833B80 (CmpForceFlushWorker.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 *     CmpFlushHive @ 0x14063725C (CmpFlushHive.c)
 *     CmpGetNextHive @ 0x14063AF48 (CmpGetNextHive.c)
 *     CmpDereferenceHive @ 0x1406B9778 (CmpDereferenceHive.c)
 *     CmpGetLastHive @ 0x1406E448C (CmpGetLastHive.c)
 *     CmpQuitNextHive @ 0x140729768 (CmpQuitNextHive.c)
 */

void CmpDoFlushAll()
{
  __int64 LastHive; // rdi
  void *i; // rcx
  struct _EX_RUNDOWN_REF *NextHive; // rax
  ULONG_PTR v3; // rbx

  if ( !BYTE1(NlsMbCodePageTag) )
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
      CmpQuitNextHive(v3);
      CmpDereferenceHive(LastHive);
    }
  }
}
