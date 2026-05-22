/*
 * XREFs of ?QueueAddRemoveDevice@ConsumerControlManager@@AEAAJPEAVPnpDevice@@_N@Z @ 0x1800729D0
 * Callers:
 *     ?OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z @ 0x180070764 (-OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z.c)
 *     ?StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z @ 0x180072360 (-StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@ConsumerControlManager@@UEAAKXZ @ 0x180072920 (-Release@ConsumerControlManager@@UEAAKXZ.c)
 *     ??4?$ComPtr@VPnpDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVPnpDevice@@@Z @ 0x180073034 (--4-$ComPtr@VPnpDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVPnpDevice@@@Z.c)
 *     ??_GConsumerControlDeviceCommandListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x1800730B0 (--_GConsumerControlDeviceCommandListEntry@ConsumerControlManager@@QEAAPEAXI@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C2B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall ConsumerControlManager::QueueAddRemoveDevice(
        ConsumerControlManager *this,
        struct PnpDevice *a2,
        unsigned __int8 a3)
{
  void *v5; // rax
  ULONG_PTR v6; // rbx
  __int64 *v8; // rcx
  DWORD v9; // eax
  unsigned int v10; // edx
  ConsumerControlManager::ConsumerControlDeviceCommandListEntry *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = (ULONG_PTR)v5;
  if ( v5 )
  {
    memset_0(v5, 0, 0x28uLL);
    *(_QWORD *)(v6 + 24) = 0LL;
    *(_QWORD *)(v6 + 32) = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    v8 = *(__int64 **)(v6 + 24);
    if ( v8 != (__int64 *)this )
    {
      if ( this )
      {
        _InterlockedIncrement((volatile signed __int32 *)this + 2);
        v8 = *(__int64 **)(v6 + 24);
      }
      *(_QWORD *)(v6 + 24) = this;
      if ( v8 )
        ConsumerControlManager::Release(v8);
    }
    Microsoft::WRL::ComPtr<PnpDevice>::operator=(v6 + 32);
    *(_DWORD *)(v6 + 16) = a3 ^ 1;
    v9 = QueueUserAPC(ConsumerControlManager::AddRemoveDeviceCommandApc, *((HANDLE *)this + 12), v6);
    v11 = (ConsumerControlManager::ConsumerControlDeviceCommandListEntry *)v6;
    if ( v9 )
      v11 = 0LL;
    if ( v11 )
      ConsumerControlManager::ConsumerControlDeviceCommandListEntry::`scalar deleting destructor'(v11, v10);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x96,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolmanager.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
