/*
 * XREFs of ?CreateAndInitialize@ConsumerControlGenericDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z @ 0x180078E54
 * Callers:
 *     ?ProcessAddRemoveDeviceCommands@ConsumerControlManager@@AEAAJXZ @ 0x180072C58 (-ProcessAddRemoveDeviceCommands@ConsumerControlManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@VPnpDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVPnpDevice@@@Z @ 0x180073034 (--4-$ComPtr@VPnpDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVPnpDevice@@@Z.c)
 *     ?GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z @ 0x1800733F0 (-GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?OpenInterface@PnpDevice@@QEAAJXZ @ 0x180073434 (-OpenInterface@PnpDevice@@QEAAJXZ.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ConsumerControlGenericDevice::CreateAndInitialize(
        struct PnpDevice *a1,
        struct ConsumerControlGenericDevice **a2)
{
  volatile signed __int32 *v4; // rax
  volatile signed __int32 *v5; // rdi
  unsigned int v6; // ebx
  int InterfacePath; // eax
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (volatile signed __int32 *)malloc(0x20uLL);
  v5 = v4;
  if ( v4 )
  {
    memset_0((void *)v4, 0, 0x20uLL);
    *(_QWORD *)v5 = &RefCountedObject::`vftable';
    *((_DWORD *)v5 + 2) = 1;
    *(_QWORD *)v5 = &ConsumerControlGenericDevice::`vftable';
    *((_QWORD *)v5 + 2) = 0LL;
    *((_QWORD *)v5 + 3) = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( !v5 )
  {
    v6 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolgenericdevice.cpp",
      (const char *)0x8007000ELL);
    return v6;
  }
  Microsoft::WRL::ComPtr<PnpDevice>::operator=((volatile signed __int32 **)v5 + 2, (volatile signed __int32 *)a1);
  WindowsDeleteString(*((HSTRING *)v5 + 3));
  *((_QWORD *)v5 + 3) = 0LL;
  InterfacePath = PnpDevice::GetInterfacePath(*((HSTRING **)v5 + 2), (HSTRING *)v5 + 3);
  v6 = InterfacePath;
  if ( InterfacePath < 0 )
  {
    v9 = 37LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolgenericdevice.cpp",
      (const char *)(unsigned int)InterfacePath);
    goto LABEL_13;
  }
  InterfacePath = PnpDevice::OpenInterface(*((PnpDevice **)v5 + 2));
  v6 = InterfacePath;
  if ( InterfacePath < 0 )
  {
    v9 = 40LL;
    goto LABEL_9;
  }
  v6 = 0;
LABEL_13:
  if ( (v6 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolgenericdevice.cpp",
      (const char *)v6);
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      *((_DWORD *)v5 + 2) = 1;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 32LL))(v5);
      *((_DWORD *)v5 + 2) = 0;
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v5 + 24LL))(v5, 1LL);
    }
    return v6;
  }
  *a2 = (struct ConsumerControlGenericDevice *)v5;
  return 0LL;
}
