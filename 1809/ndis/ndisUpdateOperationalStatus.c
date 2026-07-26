/*
 * XREFs of ndisUpdateOperationalStatus @ 0x1C0017108
 * Callers:
 *     ?ndisPostProcessRestartParametersAfterProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0016E30 (-ndisPostProcessRestartParametersAfterProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_I.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C010C328 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C001889C (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisIndicateStatusInternal @ 0x1C0018E1C (ndisIndicateStatusInternal.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0019B2C (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ndisIfSetInterfaceState @ 0x1C0019BD4 (ndisIfSetInterfaceState.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     memset @ 0x1C0027180 (memset.c)
 */

void __fastcall ndisUpdateOperationalStatus(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned __int64 *p_Lock; // rdi
  __int64 v3; // rdx
  KIRQL v4; // si
  __int64 v5; // r8
  char v6; // al
  _NDIS_IF_BLOCK *IfBlock; // rcx
  KIRQL NewIrql[16]; // [rsp+28h] [rbp-49h] BYREF
  _QWORD v9[14]; // [rsp+38h] [rbp-39h] BYREF
  __int64 v10; // [rsp+A8h] [rbp+37h] BYREF
  unsigned int ifOperStatusFlags; // [rsp+B0h] [rbp+3Fh]

  p_Lock = &a1->Lock;
  NewIrql[0] = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  LOBYTE(v3) = 1;
  v4 = NewIrql[0];
  LOBYTE(v5) = NewIrql[0];
  a1->MiniportThread = KeGetCurrentThread();
  a1->LockDbg = 2103277;
  v6 = ndisIfSetInterfaceState(a1, v3, v5);
  a1->MiniportThread = 0LL;
  a1->LockDbg = 0;
  if ( v6 )
  {
    KeReleaseSpinLock(p_Lock, v4);
    ndisMAcquireStInLockWithSpinLock(a1, NewIrql);
    IfBlock = a1->IfBlock;
    ifOperStatusFlags = 0;
    v10 = 786816LL;
    HIDWORD(v10) = IfBlock->ifOperStatus;
    ifOperStatusFlags = IfBlock->ifOperStatusFlags;
    memset(v9, 0, sizeof(v9));
    LODWORD(v9[0]) = 7340440;
    v9[6] = &v10;
    v9[1] = a1;
    HIDWORD(v9[2]) = 1073807395;
    LODWORD(v9[7]) = 12;
    ndisIndicateStatusInternal(a1, v9);
    ndisMReleaseStInLockAndSpinLock(a1, NewIrql[0]);
  }
  else
  {
    KeReleaseSpinLock(p_Lock, v4);
  }
}
