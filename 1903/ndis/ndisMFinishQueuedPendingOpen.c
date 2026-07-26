/*
 * XREFs of ndisMFinishQueuedPendingOpen @ 0x1C013A5B0
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisDereferencePackage @ 0x1C001B95C (ndisDereferencePackage.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001C08C (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisDereferenceAfNotification @ 0x1C00870CC (ndisDereferenceAfNotification.c)
 *     ndisCreateNotifyQueue @ 0x1C01380B8 (ndisCreateNotifyQueue.c)
 *     ndisNotifyAfRegistration @ 0x1C0138410 (ndisNotifyAfRegistration.c)
 */

void __fastcall ndisMFinishQueuedPendingOpen(__int64 *P)
{
  __int64 v1; // rsi
  __int64 v3; // rbp
  KIRQL v4; // al
  KIRQL v5; // bl
  PVOID Pa; // [rsp+60h] [rbp+8h] BYREF

  v1 = *P;
  Pa = 0LL;
  v3 = *(_QWORD *)(v1 + 16);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      6,
      18,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      v1);
  ndisReferencePackage((__int64)&ndisPkgs);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
  *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
  v5 = v4;
  ndisCreateNotifyQueue(v3, v1, 0LL, (_QWORD **)&Pa);
  *(_QWORD *)(v3 + 520) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v5);
  if ( Pa )
    ndisNotifyAfRegistration(Pa);
  ExFreePoolWithTag(P, 0);
  ndisDereferenceAfNotification(v1);
  ndisMDereferenceOpenUnlocked(v1, 0);
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      6,
      19,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      v1);
}
