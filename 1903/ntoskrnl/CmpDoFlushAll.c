/*
 * XREFs of CmpDoFlushAll @ 0x140168D30
 * Callers:
 *     NtFlushKey @ 0x1406E4CD0 (NtFlushKey.c)
 *     CmReconcileAndValidateAllHives @ 0x14082EADC (CmReconcileAndValidateAllHives.c)
 *     CmpForceFlushWorker @ 0x140834520 (CmpForceFlushWorker.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 *     CmpFlushHive @ 0x1406344A4 (CmpFlushHive.c)
 *     CmpGetNextHive @ 0x140637EC0 (CmpGetNextHive.c)
 *     CmpDereferenceHive @ 0x1406629A8 (CmpDereferenceHive.c)
 *     CmpGetLastHive @ 0x1406E3030 (CmpGetLastHive.c)
 *     CmpQuitNextHive @ 0x1407283F8 (CmpQuitNextHive.c)
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
