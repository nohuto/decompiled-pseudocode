/*
 * XREFs of ndisCancelWaitWake @ 0x1C0011794
 * Callers:
 *     NdisMIdleNotificationConfirm @ 0x1C0073DB0 (NdisMIdleNotificationConfirm.c)
 *     ndisSelectiveSuspendStop @ 0x1C0075C38 (ndisSelectiveSuspendStop.c)
 *     ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x1C0077498 (-ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z.c)
 *     ndisSetSystemPower @ 0x1C00B8930 (ndisSetSystemPower.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00F59FC (ndisWmiChangeSingleInstance.c)
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00FD784 (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisMPowerPolicy @ 0x1C010AA50 (ndisMPowerPolicy.c)
 *     ndisMInitializeAdapter @ 0x1C010B314 (ndisMInitializeAdapter.c)
 *     ndisPnPRemoveDevice @ 0x1C0118F00 (ndisPnPRemoveDevice.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     McTemplateK0jqxq @ 0x1C003D24C (McTemplateK0jqxq.c)
 */

void __fastcall ndisCancelWaitWake(__int64 a1)
{
  KSPIN_LOCK *v1; // rsi
  KIRQL v3; // al
  bool v4; // zf
  int v5; // ecx
  KIRQL v6; // al
  char v7; // bl

  v1 = (KSPIN_LOCK *)(a1 + 96);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v4 = *(_QWORD *)(a1 + 1296) == 0LL;
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1864) = 1708939;
  if ( v4 || *(_BYTE *)(a1 + 1328) || *(_BYTE *)(a1 + 1330) )
  {
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1864) = 0;
    KeReleaseSpinLock(v1, v3);
  }
  else
  {
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1864) = 0;
    *(_WORD *)(a1 + 1329) = 257;
    KeReleaseSpinLock(v1, v3);
    if ( IoCancelIrp(*(PIRP *)(a1 + 1296)) )
    {
      if ( (unsigned __int8)byte_1C00A025D >= 4u )
        WPP_SF_q(146LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a1);
      if ( (byte_1C00A2081 & 8) != 0 )
        McTemplateK0jqxq(
          v5,
          (unsigned int)&CancelledWakeIrp,
          a1 + 4040,
          a1 + 4040,
          *(_DWORD *)(a1 + 4088),
          *(_QWORD *)(a1 + 4056),
          166);
    }
    v6 = KeAcquireSpinLockRaiseToDpc(v1);
    v7 = *(_BYTE *)(a1 + 1328);
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1864) = 0;
    *(_BYTE *)(a1 + 1329) = 0;
    KeReleaseSpinLock(v1, v6);
    if ( v7 )
      IofCompleteRequest(*(PIRP *)(a1 + 1296), 0);
  }
}
