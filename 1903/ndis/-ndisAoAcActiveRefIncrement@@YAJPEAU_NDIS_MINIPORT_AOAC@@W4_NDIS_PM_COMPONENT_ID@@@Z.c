/*
 * XREFs of ?ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z @ 0x1C00BA6F0
 * Callers:
 *     NdisTryAcquireNicActive @ 0x1C0011BA0 (NdisTryAcquireNicActive.c)
 *     ?ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C00BA8F0 (-ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisAoAcIsTempRefNeededAfterDeref@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C00BAE1C (-ndisAoAcIsTempRefNeededAfterDeref@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisAoAcPmInitTempRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BAEE8 (-ndisAoAcPmInitTempRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAoAcTakeInternalRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BB31C (-ndisAoAcTakeInternalRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C00BB4D0 (-ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1C00BBFB4 (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisWdfRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@W4_NDIS_TMP_REF_REASON@@@Z @ 0x1C00BD7E8 (-ndisWdfRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@W4_NDIS_TMP_REF_REASON@@@Z.c)
 * Callees:
 *     ?ndisAoAcPauseRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C00BAEB0 (-ndisAoAcPauseRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 */

__int64 __fastcall ndisAoAcActiveRefIncrement(struct _NDIS_MINIPORT_AOAC *a1, enum _NDIS_PM_COMPONENT_ID a2)
{
  unsigned int ActiveRef; // r10d
  __int64 v4; // r9
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // r8
  _NDIS_NIC_ACTIVE_STATE ActiveState; // eax
  unsigned __int64 v9; // rdx

  ++a1->ActiveRef;
  a1->WakeFlags.Value |= 2u;
  ActiveRef = a1->ActiveRef;
  v4 = a2;
  v5 = a2;
  v6 = a1->ComponentRefCounts[a2] + 1;
  a1->ComponentRefCounts[a2] = v6;
  if ( a1->IsInCsResiliency && v6 == 1 )
  {
    if ( a2 != NdisPMComponentWCMNetActivation || ndisPowerRefManagementState )
    {
      if ( !a1->ComponentRefCounts[15] || ndisPowerRefManagementState == 1 )
      {
        ActiveState = a1->ActiveState;
        if ( ActiveState == NdisNicActive || ActiveState == NdisNicResuming )
        {
          v9 = MEMORY[0xFFFFF78000000008];
          if ( (_DWORD)v4 )
          {
            if ( a1->ComponentRefCounts[0] > 0 && a1->CsRefTimes[0].CurrentRefStartTime )
            {
              a1->CsRefTimes[0].TotalRefTime += MEMORY[0xFFFFF78000000008] - a1->CsRefTimes[0].CurrentRefStartTime;
              a1->CsRefTimes[0].CurrentRefStartTime = 0LL;
            }
            a1->CsRefTimes[v5].CurrentRefStartTime = v9;
          }
          else if ( ActiveRef == 1 )
          {
            a1->CsRefTimes[v4].CurrentRefStartTime = MEMORY[0xFFFFF78000000008];
          }
        }
      }
    }
    else
    {
      ndisAoAcPauseRefTimeStats(a1);
      *(_QWORD *)(v7 + 816) = MEMORY[0xFFFFF78000000008];
    }
  }
  return ActiveRef;
}
