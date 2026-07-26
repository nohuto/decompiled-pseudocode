/*
 * XREFs of ndisSelectiveSuspendClearStop @ 0x1C00B9200
 * Callers:
 *     ndisPowerSaveClearStop @ 0x1C00144F8 (ndisPowerSaveClearStop.c)
 *     ndisStartDeviceSynchronous @ 0x1C002F168 (ndisStartDeviceSynchronous.c)
 *     NdisWdfMiniportSetPower @ 0x1C009EDC0 (NdisWdfMiniportSetPower.c)
 *     NdisWdfPnpPowerEventHandler @ 0x1C009EEA0 (NdisWdfPnpPowerEventHandler.c)
 *     ?ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C00BC49C (-ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00BCBEC (-ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?ndisWdfAoAcDisengageComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C00BD6E8 (-ndisWdfAoAcDisengageComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00FCE84 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C0103A54 (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 *     ndisPmInitializeMiniport @ 0x1C013B4EC (ndisPmInitializeMiniport.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     ndisSetIdleTimer @ 0x1C00B9930 (ndisSetIdleTimer.c)
 */

void __fastcall ndisSelectiveSuspendClearStop(__int64 a1, int a2)
{
  __int64 v3; // rbx
  int v4; // ebp
  int v6; // edx
  KIRQL v7; // r14
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v15; // ecx
  int v16; // eax
  int v17; // eax

  v3 = *(_QWORD *)(a1 + 4448);
  v4 = *(_DWORD *)(a1 + 120) & 0x80;
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      15,
      35,
      (struct _GUID *)&WPP_5c92d274ba7c3cfc77b41af92408ef8f_Traceguids,
      a1,
      a2);
  }
  v8 = a2 - 1;
  if ( v8 )
  {
    v9 = v8 - 3;
    if ( v9 )
    {
      v10 = v9 - 2;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            v13 = v12 - 1;
            if ( v13 )
            {
              v14 = v13 - 2;
              if ( v14 )
              {
                if ( v14 == 2 )
                {
                  v15 = *(_DWORD *)(v3 + 508);
                  if ( (v15 & 0x1000) == 0 )
                    NT_ASSERT("SS->StopFlags.BindChanges");
                  v16 = *(_DWORD *)(v3 + 540);
                  if ( v16 <= 0 )
                    NT_ASSERT("SS->PendingBindChangesCount > 0");
                  v17 = v16 - 1;
                  *(_DWORD *)(v3 + 540) = v17;
                  if ( !v17 )
                    *(_DWORD *)(v3 + 508) = v15 & 0xFFFFEFFF;
                }
              }
              else
              {
                *(_DWORD *)(v3 + 508) &= ~0x400u;
              }
            }
            else
            {
              *(_DWORD *)(v3 + 508) &= ~0x100u;
            }
          }
          else if ( (*(_DWORD *)(v3 + 536))-- == 1 )
          {
            *(_DWORD *)(v3 + 508) &= ~0x80u;
          }
        }
        else
        {
          *(_DWORD *)(v3 + 508) &= ~0x40u;
        }
      }
      else
      {
        *(_DWORD *)(v3 + 508) &= ~0x20u;
      }
    }
    else
    {
      *(_DWORD *)(v3 + 508) &= ~8u;
    }
  }
  else
  {
    *(_DWORD *)(v3 + 508) &= ~1u;
  }
  if ( v4 )
  {
    if ( !*(_DWORD *)(v3 + 512)
      && !*(_DWORD *)(v3 + 516)
      && !*(_DWORD *)(v3 + 528)
      && !*(_DWORD *)(v3 + 532)
      && !*(_DWORD *)(v3 + 520)
      && !*(_DWORD *)(v3 + 524)
      && !*(_DWORD *)(v3 + 576)
      && !*(_DWORD *)(v3 + 508) )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)v3, v7);
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 3760) + 360LL) + 48LL))(*(_QWORD *)(a1 + 24));
      return;
    }
  }
  else if ( !*(_DWORD *)(v3 + 508) )
  {
    *(_DWORD *)(v3 + 504) &= ~0x200u;
    KeReleaseSpinLock((PKSPIN_LOCK)v3, v7);
    ndisSetIdleTimer(a1);
    return;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v3, v7);
}
