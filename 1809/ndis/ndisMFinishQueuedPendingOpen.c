/*
 * XREFs of ndisMFinishQueuedPendingOpen @ 0x1C0118D10
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C00173F4 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ndisDereferenceAfNotification @ 0x1C0053B98 (ndisDereferenceAfNotification.c)
 *     ndisDereferencePackage @ 0x1C00B6834 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00B685C (ndisReferencePackage.c)
 *     ndisCreateNotifyQueue @ 0x1C01170F8 (ndisCreateNotifyQueue.c)
 *     ndisNotifyAfRegistration @ 0x1C01173B0 (ndisNotifyAfRegistration.c)
 */

void __fastcall ndisMFinishQueuedPendingOpen(__int64 *P)
{
  __int64 v1; // rsi
  __int64 v3; // rbp
  KIRQL v4; // al
  KIRQL v5; // bl
  PVOID Pa; // [rsp+40h] [rbp+8h] BYREF

  v1 = *P;
  Pa = 0LL;
  v3 = *(_QWORD *)(v1 + 16);
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_q(0x12u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, v1);
  ndisReferencePackage((__int64)&ndisPkgs);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
  *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
  *(_DWORD *)(v3 + 1864) = 459666;
  v5 = v4;
  ndisCreateNotifyQueue(v3, v1, 0LL, (_QWORD **)&Pa);
  *(_QWORD *)(v3 + 520) = 0LL;
  *(_DWORD *)(v3 + 1864) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v5);
  if ( Pa )
    ndisNotifyAfRegistration(Pa);
  ExFreePoolWithTag(P, 0);
  ndisDereferenceAfNotification(v1);
  ndisMDereferenceOpenUnlocked(v1, 0);
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_q(0x13u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, v1);
}
