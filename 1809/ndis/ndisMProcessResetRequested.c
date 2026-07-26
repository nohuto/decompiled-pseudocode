/*
 * XREFs of ndisMProcessResetRequested @ 0x1C00635E8
 * Callers:
 *     ndisMProcessDeferred @ 0x1C00632D4 (ndisMProcessDeferred.c)
 * Callees:
 *     NdisMIndicateStatusEx @ 0x1C001B340 (NdisMIndicateStatusEx.c)
 *     ndisMSwapOpenHandlers @ 0x1C001C6F8 (ndisMSwapOpenHandlers.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     McTemplateK0jqxq @ 0x1C003D24C (McTemplateK0jqxq.c)
 *     ndisMDeQueueWorkItem @ 0x1C0062524 (ndisMDeQueueWorkItem.c)
 */

__int64 __fastcall ndisMProcessResetRequested(char *MiniportAdapterHandle, __int64 a2)
{
  int v4; // ecx
  unsigned int v5; // edi
  __int64 v6; // rcx
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+40h] [rbp-98h] BYREF

  ndisMDeQueueWorkItem((__int64)MiniportAdapterHandle, 3, 0LL, 0LL);
  v4 = *((_DWORD *)MiniportAdapterHandle + 30);
  if ( (*((_DWORD *)MiniportAdapterHandle + 31) & 0x80000) != 0 )
  {
    v5 = -2147418111;
    *((_DWORD *)MiniportAdapterHandle + 30) = v4 & 0xFFEFFFFF;
  }
  else
  {
    *((_DWORD *)MiniportAdapterHandle + 30) = v4 & 0xFFCFFFFF | 0x200000;
    ndisMSwapOpenHandlers((__int64)MiniportAdapterHandle, 1u);
    *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
    *((_DWORD *)MiniportAdapterHandle + 466) = 0;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)MiniportAdapterHandle + 12);
    memset(&StatusIndication, 0, sizeof(StatusIndication));
    StatusIndication.StatusBuffer = 0LL;
    StatusIndication.StatusBufferSize = 0;
    StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
    StatusIndication.SourceHandle = MiniportAdapterHandle;
    StatusIndication.StatusCode = 1073807364;
    NdisMIndicateStatusEx(MiniportAdapterHandle, &StatusIndication);
    if ( (unsigned __int8)byte_1C00A0260 >= 4u )
      WPP_SF_q(0x50u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, (__int64)MiniportAdapterHandle);
    if ( (byte_1C00A2081 & 4) != 0 )
      McTemplateK0jqxq(
        v6,
        &CallMiniportReset,
        (const GUID *)(MiniportAdapterHandle + 4040),
        (__int64)(MiniportAdapterHandle + 4040),
        *((_DWORD *)MiniportAdapterHandle + 1022),
        *((_QWORD *)MiniportAdapterHandle + 507),
        143);
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*((_QWORD *)MiniportAdapterHandle + 474) + 192LL))(
           a2,
           *((_QWORD *)MiniportAdapterHandle + 3));
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)MiniportAdapterHandle + 12);
    *((_QWORD *)MiniportAdapterHandle + 65) = KeGetCurrentThread();
    *((_DWORD *)MiniportAdapterHandle + 466) = 726422;
  }
  return v5;
}
