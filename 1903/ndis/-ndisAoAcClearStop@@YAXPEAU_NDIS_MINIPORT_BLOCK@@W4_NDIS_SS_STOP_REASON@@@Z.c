/*
 * XREFs of ?ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C00BA8F0
 * Callers:
 *     ndisPowerSaveClearStop @ 0x1C00144F8 (ndisPowerSaveClearStop.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00FCE84 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C0103A54 (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 *     ?ndisAoAcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011C5D4 (-ndisAoAcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ?ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z @ 0x1C00BA6F0 (-ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z.c)
 *     ?ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00BCFA8 (-ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisAoAcClearStop(struct _NDIS_MINIPORT_BLOCK *a1, enum _NDIS_SS_STOP_REASON a2)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rbx
  signed __int64 v4; // rsi
  char v6; // r14
  int v7; // ebp
  int v8; // edx
  KIRQL v9; // r12
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // edi
  unsigned int Value; // ecx
  int PendingBindChangesCount; // eax
  int v19; // eax
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  int PendingPnPOpCount; // eax
  int v23; // eax

  AoAc = a1->AoAc;
  LODWORD(v4) = 0;
  v6 = 0;
  v7 = 5;
  v9 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  v10 = a2 - 1;
  if ( !v10 )
  {
    AoAc->StopFlags.Value &= ~1u;
    goto LABEL_28;
  }
  v11 = v10 - 3;
  if ( !v11 )
  {
    AoAc->StopFlags.Value &= ~8u;
    goto LABEL_28;
  }
  v12 = v11 - 2;
  if ( !v12 )
  {
    AoAc->StopFlags.Value &= ~0x20u;
    goto LABEL_28;
  }
  v13 = v12 - 2;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v14 )
    {
      v15 = v14 - 2;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          if ( v16 == 1 )
          {
            Value = AoAc->StopFlags.Value;
            if ( (Value & 0x1000) == 0 )
              NT_ASSERT("AoAc->StopFlags.BindChanges");
            PendingBindChangesCount = AoAc->PendingBindChangesCount;
            if ( PendingBindChangesCount <= 0 )
              NT_ASSERT("AoAc->PendingBindChangesCount > 0");
            v19 = PendingBindChangesCount - 1;
            AoAc->PendingBindChangesCount = v19;
            if ( !v19 )
            {
              v20 = Value & 0xFFFFEFFF;
LABEL_24:
              AoAc->StopFlags.Value = v20;
            }
          }
        }
        else
        {
          AoAc->StopFlags.Value &= ~0x800u;
          v7 = 6;
        }
      }
      else
      {
        AoAc->StopFlags.Value &= ~0x400u;
      }
    }
    else
    {
      AoAc->StopFlags.Value &= ~0x100u;
      v7 = 1;
      LODWORD(v4) = ndisNicQuietInitTimeout;
    }
  }
  else
  {
    v21 = AoAc->StopFlags.Value;
    if ( (v21 & 0x80u) == 0 )
      NT_ASSERT("AoAc->StopFlags.PnPOp");
    PendingPnPOpCount = AoAc->PendingPnPOpCount;
    if ( PendingPnPOpCount <= 0 )
      NT_ASSERT("AoAc->PendingPnPOpCount > 0");
    v23 = PendingPnPOpCount - 1;
    AoAc->PendingPnPOpCount = v23;
    if ( !v23 )
    {
      v20 = v21 & 0xFFFFFF7F;
      goto LABEL_24;
    }
  }
LABEL_28:
  if ( !AoAc->StopFlags.Value && AoAc->TempRefReason != NdisAoAcTempRefPmInit )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v8,
        14,
        46,
        (struct _GUID *)&WPP_a4d5aa3896e33b50761396b1dd7f9853_Traceguids,
        (char)a1);
    }
    AoAc->TempRefReason = v7;
    ndisAoAcActiveRefIncrement(AoAc, NdisPMComponentUnspecified);
    v6 = 1;
  }
  KeReleaseSpinLock(&AoAc->Lock, v9);
  if ( v6 )
  {
    if ( !(_DWORD)v4 )
    {
      v4 = ndisNicQuietInitTimeout - (MEMORY[0xFFFFF78000000008] - AoAc->StartTime) / 0x2710;
      if ( AoAc->DerefTimeoutMilliseconds > v4 )
        LODWORD(v4) = AoAc->DerefTimeoutMilliseconds;
    }
    ndisSetTempRefTimer(a1, v4);
  }
}
