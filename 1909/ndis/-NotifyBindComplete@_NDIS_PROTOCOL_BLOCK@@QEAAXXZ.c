/*
 * XREFs of ?NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ @ 0x1C01052A0
 * Callers:
 *     <none>
 * Callees:
 *     ndisInitializeNetPnPEvent @ 0x1C001BF38 (ndisInitializeNetPnPEvent.c)
 *     ndisDereferenceProtocol @ 0x1C00280E0 (ndisDereferenceProtocol.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ndisDeliverNetPnPEventSynchronously @ 0x1C00FC974 (ndisDeliverNetPnPEventSynchronously.c)
 */

void __fastcall _NDIS_PROTOCOL_BLOCK::NotifyBindComplete(_NDIS_PROTOCOL_BLOCK *this)
{
  __int64 v3; // rdx
  int v4; // r9d
  struct _KEVENT v5; // [rsp+30h] [rbp-E8h] BYREF
  _DWORD v6[44]; // [rsp+50h] [rbp-C8h] BYREF

  memset(v6, 0, sizeof(v6));
  ndisInitializeNetPnPEvent(v6, &v5);
  v6[2] = 6;
  KeWaitForSingleObject(&this->Mutex, Executive, 0, 0, 0LL);
  ++this->MutexOwnerCount;
  this->MutexOwnerThread = KeGetCurrentThread();
  ndisDeliverNetPnPEventSynchronously((__int64)this, 0LL, (__int64)v6);
  if ( this->MutexOwnerCount-- == 1 )
    this->MutexOwnerThread = 0LL;
  KeReleaseMutex(&this->Mutex, 0);
  ndisDereferenceProtocol(this, v3, 0xCu, v4);
}
