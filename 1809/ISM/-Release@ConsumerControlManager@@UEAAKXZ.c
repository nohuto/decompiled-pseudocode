/*
 * XREFs of ?Release@ConsumerControlManager@@UEAAKXZ @ 0x180072920
 * Callers:
 *     ??1LampArrayRawInputProvider@@EEAA@XZ @ 0x1800703F8 (--1LampArrayRawInputProvider@@EEAA@XZ.c)
 *     ?CreateAndInitialize@ConsumerControlManager@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAV1@@Z @ 0x180072680 (-CreateAndInitialize@ConsumerControlManager@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAP.c)
 *     ?QueueAddRemoveDevice@ConsumerControlManager@@AEAAJPEAVPnpDevice@@_N@Z @ 0x1800729D0 (-QueueAddRemoveDevice@ConsumerControlManager@@AEAAJPEAVPnpDevice@@_N@Z.c)
 *     ?WorkerThreadProcThunk@ConsumerControlManager@@CAKPEAX@Z @ 0x180072B30 (-WorkerThreadProcThunk@ConsumerControlManager@@CAKPEAX@Z.c)
 *     ??_GConsumerControlDeviceCommandListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x1800730B0 (--_GConsumerControlDeviceCommandListEntry@ConsumerControlManager@@QEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ConsumerControlManager::Release(__int64 *dwData)
{
  unsigned __int32 v2; // esi
  __int64 v3; // rax
  void *v4; // rbx

  v2 = _InterlockedDecrement((volatile signed __int32 *)dwData + 2);
  if ( !v2 )
  {
    v3 = *dwData;
    *((_DWORD *)dwData + 2) = 1;
    (*(void (**)(void))(v3 + 32))();
    *((_DWORD *)dwData + 2) = 0;
    (*(void (__fastcall **)(__int64 *, __int64))(*dwData + 24))(dwData, 1LL);
  }
  if ( v2 == 1 )
  {
    v4 = (void *)_InterlockedExchange64(dwData + 12, 0LL);
    if ( v4 )
    {
      if ( WaitForSingleObject(v4, 0) == 258
        && QueueUserAPC(ConsumerControlManager::TerminateWorkerThreadApc, v4, (ULONG_PTR)dwData) )
      {
        WaitForSingleObject(v4, 0x9C4u);
      }
      CloseHandle(v4);
    }
  }
  return v2;
}
