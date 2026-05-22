/*
 * XREFs of ?OnDeviceRemoval@PenDeviceCollection@@MEAAJK@Z @ 0x1800A4FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x18001B064 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x18009A464 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z @ 0x1800A59F0 (-OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z.c)
 *     ?RemoveRIMDevice@PenDeviceManager@@QEAAXPEAX@Z @ 0x180128E9C (-RemoveRIMDevice@PenDeviceManager@@QEAAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenDeviceCollection::OnDeviceRemoval(PenDeviceCollection *this, unsigned int a2)
{
  int Device; // ebx
  __int64 v5; // rdx
  int v7; // r8d
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v9; // rax
  PenDeviceManager *v10; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct RIMDevice *v12; // [rsp+60h] [rbp+18h] BYREF
  PenDeviceManager *v13; // [rsp+68h] [rbp+20h]

  v12 = 0LL;
  Device = HIDDeviceCollection::OnDeviceRemoval(this, a2);
  if ( Device < 0 )
  {
    v5 = 119LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\pendevicecollection.cpp",
      (const char *)(unsigned int)Device);
    return (unsigned int)Device;
  }
  Device = RIMDeviceCollection::FindDevice(this, a2, 0LL, &v12, 0LL);
  if ( Device < 0 )
  {
    v5 = (unsigned int)(v7 + 123);
    goto LABEL_3;
  }
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 19) + 8LL) + 200LL))(*((_QWORD *)BamoServerConnection + 19) + 8LL);
  v10 = (PenDeviceManager *)v9;
  v13 = (PenDeviceManager *)v9;
  if ( v9 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 24));
    v10 = v13;
  }
  PenDeviceManager::RemoveRIMDevice(v10, *((void **)v12 + 2));
  if ( v10 )
    (**((void (__fastcall ***)(__int64))v10 + 2))((__int64)v10 + 16);
  return 0LL;
}
