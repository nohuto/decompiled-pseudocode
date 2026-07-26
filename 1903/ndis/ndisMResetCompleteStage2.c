/*
 * XREFs of ndisMResetCompleteStage2 @ 0x1C009BB24
 * Callers:
 *     ndisOidRequestComplete @ 0x1C00076F0 (ndisOidRequestComplete.c)
 *     NdisMResetComplete @ 0x1C0098660 (NdisMResetComplete.c)
 *     ndisMProcessDeferred @ 0x1C009B0EC (ndisMProcessDeferred.c)
 * Callees:
 *     ndisMRestoreOpenHandlers @ 0x1C00145B4 (ndisMRestoreOpenHandlers.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001C118 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     NdisMIndicateStatusEx @ 0x1C001C6F0 (NdisMIndicateStatusEx.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ndisMDeQueueWorkItem @ 0x1C009A118 (ndisMDeQueueWorkItem.c)
 */

void __fastcall ndisMResetCompleteStage2(__int64 a1)
{
  int v2; // edx
  int v3; // ecx
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rcx
  struct _KEVENT *v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-49h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+30h] [rbp-39h] BYREF

  v8 = 0LL;
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  v3 = *(_DWORD *)(a1 + 120);
  if ( (v3 & 0x40000) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 392);
    *(_QWORD *)(a1 + 392) = 0LL;
    v8 = v4;
  }
  else
  {
    ndisMDeQueueWorkItem(a1, 4, &v8, 0LL);
    v3 = *(_DWORD *)(a1 + 120);
  }
  LOBYTE(v2) = 1;
  *(_DWORD *)(a1 + 120) = v3 & 0xFFDFFFFF;
  ndisMRestoreOpenHandlers(a1, v2);
  *(_QWORD *)(a1 + 520) = 0LL;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
  StatusIndication.StatusBuffer = (void *)(a1 + 384);
  StatusIndication.SourceHandle = (void *)a1;
  StatusIndication.StatusCode = 1073807365;
  StatusIndication.StatusBufferSize = 4;
  NdisMIndicateStatusEx((NDIS_HANDLE)a1, &StatusIndication);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
  v5 = v8;
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  if ( v5 )
  {
    *(_QWORD *)(a1 + 520) = 0LL;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
    (*(void (__fastcall **)(_QWORD, _QWORD))(v5 + 200))(*(_QWORD *)(v5 + 32), *(unsigned int *)(a1 + 384));
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
    v6 = v8;
    *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
    ndisMDereferenceOpenLocked(v6, 8u);
  }
  v7 = *(struct _KEVENT **)(a1 + 1888);
  if ( v7 )
    KeSetEvent(v7, 0, 0);
}
