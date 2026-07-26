/*
 * XREFs of ?ndisMProcessResetRequested@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0097720
 * Callers:
 *     ndisMProcessDeferred @ 0x1C009B2BC (ndisMProcessDeferred.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisMSwapOpenHandlers @ 0x1C001BD5C (ndisMSwapOpenHandlers.c)
 *     NdisMIndicateStatusEx @ 0x1C001C6F0 (NdisMIndicateStatusEx.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     McTemplateK0jqxq @ 0x1C0061938 (McTemplateK0jqxq.c)
 *     ndisMDeQueueWorkItem @ 0x1C009A2E8 (ndisMDeQueueWorkItem.c)
 */

__int64 __fastcall ndisMProcessResetRequested(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int8 *a2)
{
  unsigned int v4; // edi
  int v5; // edx
  __int64 v6; // rcx
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+40h] [rbp-98h] BYREF

  memset(&StatusIndication, 0, sizeof(StatusIndication));
  ndisMDeQueueWorkItem(a1, 3LL, 0LL, 0LL);
  if ( (a1->PnPFlags & 0x80000) != 0 )
  {
    a1->Flags &= ~0x100000u;
    return (unsigned int)-2147418111;
  }
  else
  {
    a1->Flags = a1->Flags & 0xFFCFFFFF | 0x200000;
    ndisMSwapOpenHandlers(a1, 1);
    a1->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    memset(&StatusIndication, 0, sizeof(StatusIndication));
    StatusIndication.StatusBuffer = 0LL;
    StatusIndication.StatusBufferSize = 0;
    StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
    StatusIndication.SourceHandle = a1;
    StatusIndication.StatusCode = 1073807364;
    NdisMIndicateStatusEx(a1, &StatusIndication);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v5,
        17,
        78,
        (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
        (char)a1);
    }
    if ( (byte_1C00E8081 & 4) != 0 )
      McTemplateK0jqxq(
        v6,
        &CallMiniportReset,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        1);
    v4 = ((__int64 (__fastcall *)(unsigned __int8 *, void *))a1->DriverHandle->MiniportDriverCharacteristics.ReturnNetBufferListsHandler)(
           a2,
           a1->MiniportAdapterContext);
    KeAcquireSpinLockAtDpcLevel(&a1->Lock);
    a1->MiniportThread = KeGetCurrentThread();
  }
  return v4;
}
