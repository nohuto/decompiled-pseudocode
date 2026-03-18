/*
 * XREFs of ?GetInstance@CInertiaManager@@SAPEAV1@XZ @ 0x1C0004810
 * Callers:
 *     NtUserReportInertia @ 0x1C0004670 (NtUserReportInertia.c)
 *     ?StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z @ 0x1C0172ABC (-StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z.c)
 *     ?CacheInertia@CPTPProcessor@@AEAAXXZ @ 0x1C0177FA4 (-CacheInertia@CPTPProcessor@@AEAAXXZ.c)
 *     ?EndInertia@CPTPProcessor@@AEAAXXZ @ 0x1C0178570 (-EndInertia@CPTPProcessor@@AEAAXXZ.c)
 *     ?EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z @ 0x1C01785E0 (-EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z.c)
 *     ?HandleInertiaTimer@CPTPProcessor@@QEAAXXZ @ 0x1C01788AC (-HandleInertiaTimer@CPTPProcessor@@QEAAXXZ.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z @ 0x1C0179538 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z.c)
 *     ?HandleMake@InertiaEndSuppression@CMouseProcessor@@QEAA?AW4InertiaEndSuppressionResult@2@_K@Z @ 0x1C018F808 (-HandleMake@InertiaEndSuppression@CMouseProcessor@@QEAA-AW4InertiaEndSuppressionResult@2@_K@Z.c)
 * Callees:
 *     <none>
 */

struct CInertiaManager *CInertiaManager::GetInstance(void)
{
  if ( (dword_1C0215D98 & 1) == 0 )
  {
    qword_1C0215580 = 0LL;
    dword_1C0215D98 |= 1u;
  }
  return (struct CInertiaManager *)&qword_1C0215580;
}
