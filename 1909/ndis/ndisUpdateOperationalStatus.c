/*
 * XREFs of ndisUpdateOperationalStatus @ 0x1C003F7A8
 * Callers:
 *     ?ndisPostProcessRestartParametersAfterProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0027124 (-ndisPostProcessRestartParametersAfterProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_I.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C012FE70 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ndisIndicateStatusInternal @ 0x1C0015988 (ndisIndicateStatusInternal.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0018498 (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ndisIfSetInterfaceState @ 0x1C001AE84 (ndisIfSetInterfaceState.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00293F8 (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memset @ 0x1C00416C0 (memset.c)
 */

void __fastcall ndisUpdateOperationalStatus(struct _NDIS_MINIPORT_BLOCK *a1)
{
  KIRQL v2; // al
  KIRQL v3; // si
  char v4; // al
  KSPIN_LOCK *p_Lock; // rcx
  _NDIS_IF_BLOCK *IfBlock; // rcx
  KIRQL NewIrql[16]; // [rsp+20h] [rbp-59h] BYREF
  __int128 v8[7]; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v9[2]; // [rsp+A0h] [rbp+27h] BYREF

  memset(v8, 0, sizeof(v8));
  memset(v9, 0, 12);
  v2 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  NewIrql[0] = v2;
  v3 = v2;
  a1->MiniportThread = KeGetCurrentThread();
  v4 = ndisIfSetInterfaceState((__int64)a1, 1, v2);
  a1->MiniportThread = 0LL;
  p_Lock = &a1->Lock;
  if ( v4 )
  {
    KeReleaseSpinLock(p_Lock, v3);
    ndisMAcquireStInLockWithSpinLock(a1, NewIrql);
    *(_QWORD *)((char *)v9 + 4) = 0LL;
    IfBlock = a1->IfBlock;
    LODWORD(v9[0]) = 786816;
    HIDWORD(v9[0]) = IfBlock->ifOperStatus;
    LODWORD(v9[1]) = IfBlock->ifOperStatusFlags;
    memset(v8, 0, sizeof(v8));
    LODWORD(v8[0]) = 7340440;
    *(_QWORD *)&v8[3] = v9;
    *((_QWORD *)&v8[0] + 1) = a1;
    DWORD1(v8[1]) = 1073807395;
    DWORD2(v8[3]) = 12;
    ndisIndicateStatusInternal(a1, v8);
    ndisMReleaseStInLockAndSpinLock(a1, NewIrql[0]);
  }
  else
  {
    KeReleaseSpinLock(p_Lock, v3);
  }
}
