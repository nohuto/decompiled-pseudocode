/*
 * XREFs of ?TryCreateAndInitialize@ConsumerControlNexusDevice@@SAJPEAVPnpDevice@@PEAUIRawInputClient@@PEAUIMessageSession@@PEAUIRawInputProvider@@PEAPEAV1@@Z @ 0x180077360
 * Callers:
 *     ?ProcessAddRemoveDeviceCommands@ConsumerControlManager@@AEAAJXZ @ 0x180072C58 (-ProcessAddRemoveDeviceCommands@ConsumerControlManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@ConsumerControlNexusDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x18007757C (-Initialize@ConsumerControlNexusDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 *     ?NotifyDeviceAttach@ConsumerControlNexusDevice@@AEAAJPEAUIRawInputProvider@@@Z @ 0x1800781A0 (-NotifyDeviceAttach@ConsumerControlNexusDevice@@AEAAJPEAUIRawInputProvider@@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ConsumerControlNexusDevice::TryCreateAndInitialize(
        struct PnpDevice *a1,
        struct IRawInputClient *a2,
        struct IMessageSession *a3,
        struct IRawInputProvider *a4,
        struct ConsumerControlNexusDevice **a5)
{
  char *v9; // rax
  char *v10; // rbx
  struct IRawInputClient *v12; // rcx
  struct IMessageSession *v13; // rcx
  int v14; // edi
  __int64 v15; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v9 = (char *)malloc(0x90uLL);
  v10 = v9;
  if ( v9 )
  {
    memset_0(v9, 0, 0x90uLL);
    *(_QWORD *)v10 = &RefCountedObject::`vftable';
    *((_DWORD *)v10 + 2) = 1;
    *(_QWORD *)v10 = &ConsumerControlNexusDevice::`vftable';
    *((_QWORD *)v10 + 2) = 0LL;
    *((_QWORD *)v10 + 3) = 0LL;
    *((_QWORD *)v10 + 4) = 0LL;
    *((_QWORD *)v10 + 8) = 0LL;
    *((_QWORD *)v10 + 7) = v10 + 48;
    *((_QWORD *)v10 + 6) = v10 + 48;
    *((_QWORD *)v10 + 11) = 0LL;
    *((_QWORD *)v10 + 10) = v10 + 72;
    *((_QWORD *)v10 + 9) = v10 + 72;
    v10[104] = 0;
    *((_QWORD *)v10 + 14) = 0LL;
    *((_QWORD *)v10 + 15) = 0LL;
    *((_QWORD *)v10 + 16) = 0LL;
    v10[136] = 0;
  }
  else
  {
    v10 = 0LL;
  }
  if ( !v10 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x34,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  v12 = (struct IRawInputClient *)*((_QWORD *)v10 + 14);
  if ( v12 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct IRawInputClient *))(*(_QWORD *)a2 + 8LL))(a2);
      v12 = (struct IRawInputClient *)*((_QWORD *)v10 + 14);
    }
    *((_QWORD *)v10 + 14) = a2;
    if ( v12 )
      (*(void (__fastcall **)(struct IRawInputClient *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = (struct IMessageSession *)*((_QWORD *)v10 + 15);
  if ( v13 != a3 )
  {
    if ( a3 )
    {
      (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)a3 + 8LL))(a3);
      v13 = (struct IMessageSession *)*((_QWORD *)v10 + 15);
    }
    *((_QWORD *)v10 + 15) = a3;
    if ( v13 )
      (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = ConsumerControlNexusDevice::Initialize((ConsumerControlNexusDevice *)v10, a1);
  if ( v14 >= 0 )
  {
    v14 = ConsumerControlNexusDevice::NotifyDeviceAttach((ConsumerControlNexusDevice *)v10, a4);
    if ( v14 >= 0 )
    {
      *a5 = (struct ConsumerControlNexusDevice *)v10;
      return 0LL;
    }
    v15 = 59LL;
  }
  else
  {
    v15 = 57LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
    (const char *)(unsigned int)v14);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v10 + 2, 0xFFFFFFFF) == 1 )
  {
    *((_DWORD *)v10 + 2) = 1;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v10 + 32LL))(v10);
    *((_DWORD *)v10 + 2) = 0;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v10 + 24LL))(v10, 1LL);
  }
  return (unsigned int)v14;
}
