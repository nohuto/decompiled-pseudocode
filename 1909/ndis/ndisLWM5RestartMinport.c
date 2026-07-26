/*
 * XREFs of ndisLWM5RestartMinport @ 0x1C0099900
 * Callers:
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C012FE70 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisLWM5RestartMinport(__int64 a1)
{
  KSPIN_LOCK *v1; // rdi
  KIRQL v3; // al

  v1 = (KSPIN_LOCK *)(a1 + 2000);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2000));
  *(_QWORD *)(a1 + 2016) = 0LL;
  *(_DWORD *)(a1 + 2008) = 4;
  KeReleaseSpinLock(v1, v3);
  return 0LL;
}
