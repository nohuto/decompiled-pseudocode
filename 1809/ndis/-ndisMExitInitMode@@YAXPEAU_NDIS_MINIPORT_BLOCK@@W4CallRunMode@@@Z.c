/*
 * XREFs of ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00BE1DC
 * Callers:
 *     ndisInitialBindCompleted @ 0x1C001DC88 (ndisInitialBindCompleted.c)
 *     ndisInitModeTimeoutWorkItem @ 0x1C00BE150 (ndisInitModeTimeoutWorkItem.c)
 *     ?DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00BE458 (-DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 * Callees:
 *     ndisCancelInitModeTimeoutTimer @ 0x1C00BE278 (ndisCancelInitModeTimeoutTimer.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00C0590 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00C1204 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisAoAcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00FCC00 (-ndisAoAcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisMExitInitMode(struct _NDIS_MINIPORT_BLOCK *a1, enum CallRunMode a2)
{
  if ( !a1->InitModeNotNeededAnymore )
  {
    a1->InitModeNotNeededAnymore = 1;
    ndisCancelInitModeTimeoutTimer(a1, 0LL);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
    a1->BindEngine.m_isDirty = 1;
    Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
    Ndis::BindEngine::ApplyBindChanges(&a1->BindEngine, a2, 0);
    if ( (a1->Flags & 0x80u) == 0 )
    {
      if ( a1->AoAc )
        ndisAoAcStart(a1);
    }
  }
}
