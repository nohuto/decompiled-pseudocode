/*
 * XREFs of PnpProcessCompletedEject @ 0x140862770
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x14072E630 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     PnpDisableWatchdog @ 0x1400B38B0 (PnpDisableWatchdog.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PnpCompleteDeviceEvent @ 0x14066C488 (PnpCompleteDeviceEvent.c)
 *     PpDevNodeUnlockTree @ 0x1406A2B0C (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406A2C34 (PpDevNodeLockTree.c)
 *     PnpInvalidateRelationsInList @ 0x14072FE3C (PnpInvalidateRelationsInList.c)
 *     IopFreeRelationList @ 0x1407311AC (IopFreeRelationList.c)
 *     PpProfileMarkAllTransitioningDocksEjected @ 0x14086D4F4 (PpProfileMarkAllTransitioningDocksEjected.c)
 *     PnpSetDeviceRemovalSafe @ 0x14086DC78 (PnpSetDeviceRemovalSafe.c)
 *     PnpTrackQueryRemoveDevices @ 0x14086E040 (PnpTrackQueryRemoveDevices.c)
 *     IopWarmEjectDevice @ 0x140878040 (IopWarmEjectDevice.c)
 */

void __fastcall PnpProcessCompletedEject(PVOID P)
{
  int v1; // esi
  __int64 v3; // rcx
  _QWORD *v4; // rcx
  PVOID *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  _QWORD *v8; // rcx
  _QWORD *v9; // rdi

  v1 = 0;
  if ( *((_DWORD *)P + 23) > 1u )
  {
    *((_BYTE *)P + 89) = 0;
    v1 = IopWarmEjectDevice(*((_QWORD *)P + 7));
  }
  v3 = *((_QWORD *)P + 12);
  if ( v3 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(v3 + 32))(*(_QWORD *)(v3 + 8), 1LL);
    (*(void (__fastcall **)(_QWORD))(*((_QWORD *)P + 12) + 24LL))(*(_QWORD *)(*((_QWORD *)P + 12) + 8LL));
  }
  PpDevNodeLockTree(1);
  v4 = *(_QWORD **)P;
  if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P || (v5 = (PVOID *)*((_QWORD *)P + 1), *v5 != P) )
    __fastfail(3u);
  *v5 = v4;
  v4[1] = v5;
  v6 = *((_QWORD *)P + 7);
  if ( v6 )
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
  else
    v7 = 0LL;
  v8 = (_QWORD *)*((_QWORD *)P + 8);
  if ( v8 )
  {
    if ( *((_BYTE *)P + 88) )
    {
      PpProfileMarkAllTransitioningDocksEjected();
      v8 = (_QWORD *)*((_QWORD *)P + 8);
    }
    PnpInvalidateRelationsInList(v8, 4u, 0, 1);
    PnpTrackQueryRemoveDevices(*((_QWORD *)P + 8), 0LL);
    IopFreeRelationList(*((_QWORD **)P + 8));
    *(_QWORD *)(v7 + 696) = 0LL;
  }
  else
  {
    *((_BYTE *)P + 89) = 0;
  }
  PpDevNodeUnlockTree(1);
  v9 = (_QWORD *)*((_QWORD *)P + 6);
  if ( v9 )
  {
    if ( v9[13] )
    {
      PnpDisableWatchdog(*((_QWORD **)P + 6), 1);
      v9[13] = 0LL;
    }
    PnpCompleteDeviceEvent(v9, v1);
  }
  if ( *((_BYTE *)P + 89) )
    PnpSetDeviceRemovalSafe(*((PVOID *)P + 7));
  ObfDereferenceObject(*((PVOID *)P + 7));
  ExFreePoolWithTag(P, 0);
}
