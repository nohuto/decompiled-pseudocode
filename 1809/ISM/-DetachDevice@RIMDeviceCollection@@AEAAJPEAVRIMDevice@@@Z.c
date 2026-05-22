/*
 * XREFs of ?DetachDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z @ 0x18005EC6C
 * Callers:
 *     ?Close@RIMDeviceCollection@@IEAAXXZ @ 0x18005DD2C (-Close@RIMDeviceCollection@@IEAAXXZ.c)
 *     ?OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKKGG0@Z @ 0x18005E010 (-OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKKGG0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindDeviceHandle@RIMDeviceCollection@@IEAAJPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x18005E9CC (-FindDeviceHandle@RIMDeviceCollection@@IEAAJPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RIMDeviceCollection::DetachDevice(RIMDeviceCollection *this, struct RIMDevice *a2)
{
  unsigned int *v2; // rsi
  int v5; // ebx
  __int64 v6; // rdx
  void *v8; // rdx
  int DeviceHandle; // eax
  __int64 v10; // rbx
  void (__fastcall ***v11)(_QWORD, __int64); // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = (unsigned int *)*((_QWORD *)a2 + 4);
  v5 = (*(__int64 (__fastcall **)(RIMDeviceCollection *, _QWORD))(*(_QWORD *)this + 72LL))(this, *v2);
  if ( v5 < 0 )
  {
    v6 = 1104LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  if ( (v2[1] & 0xFFFFFEFF) != 0 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 2) + 56LL))(*((_QWORD *)this + 2), v2);
    if ( v5 < 0 )
    {
      v6 = 1119LL;
      goto LABEL_3;
    }
  }
  v8 = (void *)*((_QWORD *)a2 + 2);
  v13 = 0;
  DeviceHandle = RIMDeviceCollection::FindDeviceHandle(this, v8, 0LL, &v13);
  v5 = DeviceHandle;
  if ( DeviceHandle >= 0 )
  {
    v10 = v13;
    v11 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + v13 + 78);
    if ( v11 )
      (**v11)(v11, 1LL);
    *((_QWORD *)this + v10 + 78) = 0LL;
    --*((_DWORD *)this + 668);
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3EA,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)(unsigned int)DeviceHandle);
  }
  if ( v5 < 0 )
  {
    v6 = 1122LL;
    goto LABEL_3;
  }
  return 0LL;
}
