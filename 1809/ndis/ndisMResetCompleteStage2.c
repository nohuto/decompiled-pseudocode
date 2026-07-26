/*
 * XREFs of ndisMResetCompleteStage2 @ 0x1C0063DD4
 * Callers:
 *     ndisOidRequestComplete @ 0x1C000D320 (ndisOidRequestComplete.c)
 *     NdisMResetComplete @ 0x1C0060FE0 (NdisMResetComplete.c)
 *     ndisMProcessDeferred @ 0x1C00632D4 (ndisMProcessDeferred.c)
 * Callees:
 *     ndisMRestoreOpenHandlers @ 0x1C0010C30 (ndisMRestoreOpenHandlers.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0017490 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     NdisMIndicateStatusEx @ 0x1C001B340 (NdisMIndicateStatusEx.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     ndisMDeQueueWorkItem @ 0x1C0062524 (ndisMDeQueueWorkItem.c)
 */

void __fastcall ndisMResetCompleteStage2(char *MiniportAdapterHandle, __int64 a2)
{
  int v3; // ecx
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rcx
  struct _KEVENT *v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-49h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+30h] [rbp-39h] BYREF

  v8 = 0LL;
  v3 = *((_DWORD *)MiniportAdapterHandle + 30);
  if ( (v3 & 0x40000) != 0 )
  {
    v4 = *((_QWORD *)MiniportAdapterHandle + 49);
    *((_QWORD *)MiniportAdapterHandle + 49) = 0LL;
    v8 = v4;
  }
  else
  {
    ndisMDeQueueWorkItem((__int64)MiniportAdapterHandle, 4, &v8, 0LL);
    v3 = *((_DWORD *)MiniportAdapterHandle + 30);
  }
  LOBYTE(a2) = 1;
  *((_DWORD *)MiniportAdapterHandle + 30) = v3 & 0xFFDFFFFF;
  ndisMRestoreOpenHandlers((__int64)MiniportAdapterHandle, a2);
  *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
  *((_DWORD *)MiniportAdapterHandle + 466) = 0;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)MiniportAdapterHandle + 12);
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
  StatusIndication.StatusBuffer = MiniportAdapterHandle + 384;
  StatusIndication.SourceHandle = MiniportAdapterHandle;
  StatusIndication.StatusCode = 1073807365;
  StatusIndication.StatusBufferSize = 4;
  NdisMIndicateStatusEx(MiniportAdapterHandle, &StatusIndication);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)MiniportAdapterHandle + 12);
  v5 = v8;
  *((_QWORD *)MiniportAdapterHandle + 65) = KeGetCurrentThread();
  *((_DWORD *)MiniportAdapterHandle + 466) = 726840;
  if ( v5 )
  {
    *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
    *((_DWORD *)MiniportAdapterHandle + 466) = 0;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)MiniportAdapterHandle + 12);
    (*(void (__fastcall **)(_QWORD, _QWORD))(v5 + 200))(
      *(_QWORD *)(v5 + 32),
      *((unsigned int *)MiniportAdapterHandle + 96));
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)MiniportAdapterHandle + 12);
    v6 = v8;
    *((_QWORD *)MiniportAdapterHandle + 65) = KeGetCurrentThread();
    *((_DWORD *)MiniportAdapterHandle + 466) = 726851;
    ndisMDereferenceOpenLocked(v6, 8u);
  }
  v7 = (struct _KEVENT *)*((_QWORD *)MiniportAdapterHandle + 237);
  if ( v7 )
    KeSetEvent(v7, 0, 0);
}
