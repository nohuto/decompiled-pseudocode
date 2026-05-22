/*
 * XREFs of ?OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800A4E30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x18001B064 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18002C41C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x18009A464 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800A5670 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ??0PenDeviceManager@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18012751C (--0PenDeviceManager@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ?AttachRIMDevice@PenDeviceManager@@QEAAXPEAX0@Z @ 0x180127BD4 (-AttachRIMDevice@PenDeviceManager@@QEAAXPEAX0@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PenDeviceCollection::OnDeviceAttach(void **this, unsigned int a2, struct DeviceInfo **a3)
{
  int Device; // ebx
  __int64 v6; // rdx
  int v8; // r8d
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v10; // rax
  PenDeviceManager *v11; // rbx
  struct ISMBamos_AutoBamos::BamoConnection *v12; // rdi
  PenDeviceManager *v13; // rax
  PenDeviceManager *v14; // rdi
  struct InputSystemServerConnection *v15; // rax
  struct RIMDevice *v16[2]; // [rsp+30h] [rbp-28h] BYREF
  PenDeviceManager *v17; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v16[1] = (struct RIMDevice *)-2LL;
  v16[0] = 0LL;
  Device = HIDDeviceCollection::OnDeviceAttach((HIDDeviceCollection *)this, a2, a3);
  if ( Device < 0 )
  {
    v6 = 83LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\pendevicecollection.cpp",
      (const char *)(unsigned int)Device);
    return (unsigned int)Device;
  }
  Device = RIMDeviceCollection::FindDevice((RIMDeviceCollection *)this, a2, 0LL, v16, 0LL);
  if ( Device < 0 )
  {
    v6 = (unsigned int)(v8 + 87);
    goto LABEL_3;
  }
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 19) + 8LL) + 200LL))(*((_QWORD *)BamoServerConnection + 19) + 8LL);
  v11 = (PenDeviceManager *)v10;
  if ( v10 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 24));
    v11 = (PenDeviceManager *)v10;
  }
  if ( !v11 )
  {
    v12 = ISMStatics::GetBamoServerConnection();
    v17 = (PenDeviceManager *)operator new(0x90uLL);
    v13 = PenDeviceManager::PenDeviceManager(v17, v12);
    v14 = v13;
    v11 = v13;
    if ( v13 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v13 + 6);
      v11 = v13;
    }
    v15 = ISMStatics::GetBamoServerConnection();
    (*(void (__fastcall **)(__int64, PenDeviceManager *))(*(_QWORD *)(*((_QWORD *)v15 + 19) + 8LL) + 208LL))(
      *((_QWORD *)v15 + 19) + 8LL,
      v14);
  }
  PenDeviceManager::AttachRIMDevice(v11, this[10], *((void **)v16[0] + 2));
  if ( v11 )
    (**((void (__fastcall ***)(__int64))v11 + 2))((__int64)v11 + 16);
  return 0LL;
}
