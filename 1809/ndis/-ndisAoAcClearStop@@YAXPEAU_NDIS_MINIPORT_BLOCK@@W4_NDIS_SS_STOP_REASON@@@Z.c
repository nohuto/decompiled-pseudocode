/*
 * XREFs of ?ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C0076CF4
 * Callers:
 *     ndisPowerSaveClearStop @ 0x1C00B8300 (ndisPowerSaveClearStop.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00C0590 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C00C080C (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 *     ?ndisAoAcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00FCC00 (-ndisAoAcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ?ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z @ 0x1C0076AF4 (-ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z.c)
 *     ?ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0079088 (-ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisAoAcClearStop(struct _NDIS_MINIPORT_BLOCK *a1, enum _NDIS_SS_STOP_REASON a2)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rbx
  signed __int64 v4; // rsi
  char v6; // r15
  int v7; // ebp
  KIRQL v8; // r12
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v15; // edi
  unsigned int Value; // ecx
  int PendingBindChangesCount; // eax
  int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  int PendingPnPOpCount; // eax
  int v22; // eax

  AoAc = a1->AoAc;
  LODWORD(v4) = 0;
  v6 = 0;
  v7 = 5;
  v8 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  v9 = a2 - 1;
  if ( !v9 )
  {
    AoAc->StopFlags.Value &= ~1u;
    goto LABEL_28;
  }
  v10 = v9 - 3;
  if ( !v10 )
  {
    AoAc->StopFlags.Value &= ~8u;
    goto LABEL_28;
  }
  v11 = v10 - 2;
  if ( !v11 )
  {
    AoAc->StopFlags.Value &= ~0x20u;
    goto LABEL_28;
  }
  v12 = v11 - 2;
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 2;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          if ( v15 == 1 )
          {
            Value = AoAc->StopFlags.Value;
            if ( (Value & 0x1000) == 0 )
              NT_ASSERT("AoAc->StopFlags.BindChanges");
            PendingBindChangesCount = AoAc->PendingBindChangesCount;
            if ( PendingBindChangesCount <= 0 )
              NT_ASSERT("AoAc->PendingBindChangesCount > 0");
            v18 = PendingBindChangesCount - 1;
            AoAc->PendingBindChangesCount = v18;
            if ( !v18 )
            {
              v19 = Value & 0xFFFFEFFF;
LABEL_24:
              AoAc->StopFlags.Value = v19;
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
    v20 = AoAc->StopFlags.Value;
    if ( (v20 & 0x80u) == 0 )
      NT_ASSERT("AoAc->StopFlags.PnPOp");
    PendingPnPOpCount = AoAc->PendingPnPOpCount;
    if ( PendingPnPOpCount <= 0 )
      NT_ASSERT("AoAc->PendingPnPOpCount > 0");
    v22 = PendingPnPOpCount - 1;
    AoAc->PendingPnPOpCount = v22;
    if ( !v22 )
    {
      v19 = v20 & 0xFFFFFF7F;
      goto LABEL_24;
    }
  }
LABEL_28:
  if ( !AoAc->StopFlags.Value && AoAc->TempRefReason != NdisAoAcTempRefPmInit )
  {
    if ( (unsigned __int8)byte_1C00A025D >= 4u )
      WPP_SF_q(0x2Cu, &WPP_68d7649c6d7b36189a1e4a9b4cf52062_Traceguids, (__int64)a1);
    AoAc->TempRefReason = v7;
    ndisAoAcActiveRefIncrement(AoAc, NdisPMComponentUnspecified);
    v6 = 1;
  }
  KeReleaseSpinLock(&AoAc->Lock, v8);
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
