/*
 * XREFs of ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x1C00BB2E8
 * Callers:
 *     ndisPowerSaveStop @ 0x1C0014940 (ndisPowerSaveStop.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00FCE84 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C0103A54 (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisCancelWaitWake @ 0x1C0019D1C (ndisCancelWaitWake.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C001A2B4 (WPP_RECORDER_SF_Lq.c)
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x1C00BA9C4 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     ?ndisAoAcCleanup@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C00BAA80 (-ndisAoAcCleanup@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisAoAcCompleteQueuedIrps@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C00BACB0 (-ndisAoAcCompleteQueuedIrps@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00BCDBC (-ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 */

void __fastcall ndisAoAcStop(struct _NDIS_MINIPORT_BLOCK *a1, int a2, enum CallRunMode a3)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rbx
  KIRQL v7; // al
  int v8; // r9d
  KIRQL v9; // bp
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // edi
  int v17; // edx
  int v18; // eax
  char v19; // bl

  AoAc = a1->AoAc;
  v7 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  v8 = 1;
  v9 = v7;
  if ( a2 > 6 )
  {
    v14 = a2 - 8;
    if ( v14 )
    {
      v15 = v14 - 3;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          if ( v16 == 1 )
          {
            ++AoAc->PendingBindChangesCount;
            AoAc->StopFlags.Value |= 0x1000u;
          }
        }
        else
        {
          AoAc->StopFlags.Value |= 0x800u;
        }
      }
      else
      {
        AoAc->StopFlags.Value |= 0x400u;
      }
    }
    else
    {
      ++AoAc->PendingPnPOpCount;
      AoAc->StopFlags.Value |= 0x80u;
    }
  }
  else
  {
    if ( a2 == 6 )
    {
      AoAc->StopFlags.Value |= 0x20u;
      goto LABEL_23;
    }
    v10 = a2 - 1;
    if ( !v10 )
    {
      AoAc->StopFlags.Value |= 1u;
      goto LABEL_23;
    }
    v11 = v10 - 1;
    if ( !v11 )
    {
      AoAc->StopFlags.Value |= 2u;
      goto LABEL_12;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      AoAc->StopFlags.Value |= 4u;
      AoAc->DeviceGone = 1;
      goto LABEL_12;
    }
    v13 = v12 - 1;
    if ( v13 )
    {
      if ( v13 == 1 )
      {
        AoAc->StopFlags.Value |= 0x10u;
LABEL_12:
        ndisAoAcCleanup(AoAc);
      }
    }
    else
    {
      AoAc->StopFlags.Value |= 8u;
    }
  }
LABEL_23:
  if ( AoAc->TempRefReason )
  {
    AoAc->TempRefReason = NdisAoAcTempRefNone;
    ndisAoAcActiveRefSubtract(AoAc, NdisPMComponentUnspecified, v8);
    if ( KeCancelTimer(&AoAc->TempRefTimer.Timer) )
      ndisDereferenceMiniport((__int64)a1, 2u);
  }
  if ( AoAc->ActiveState )
  {
    KeReleaseSpinLock(&AoAc->Lock, v9);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v17) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v17,
        14,
        44,
        (struct _GUID *)&WPP_a4d5aa3896e33b50761396b1dd7f9853_Traceguids,
        (char)a1);
    }
    ndisCancelWaitWake((__int64)a1);
    v18 = ndisRequestNicActive(a1, a3);
    v19 = v18;
    if ( v18 && v18 != 259 )
    {
      ndisAoAcCompleteQueuedIrps(a1, v18);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Lq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xEu,
          0x2Du,
          (struct _GUID *)&WPP_a4d5aa3896e33b50761396b1dd7f9853_Traceguids,
          v19,
          a1);
    }
  }
  else
  {
    KeReleaseSpinLock(&AoAc->Lock, v9);
  }
}
