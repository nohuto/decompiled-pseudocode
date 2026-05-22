/*
 * XREFs of ?DetachDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z @ 0x18009A5D4
 * Callers:
 *     ?Close@RIMDeviceCollection@@IEAAXXZ @ 0x18009A430 (-Close@RIMDeviceCollection@@IEAAXXZ.c)
 *     ?OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKKGG0@Z @ 0x18009A990 (-OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKKGG0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z @ 0x18009AE54 (-RemoveDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z.c)
 */

__int64 __fastcall RIMDeviceCollection::DetachDevice(RIMDeviceCollection *this, struct RIMDevice *a2)
{
  unsigned int *v2; // rsi
  int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (unsigned int *)*((_QWORD *)a2 + 4);
  v5 = (*(__int64 (__fastcall **)(RIMDeviceCollection *, _QWORD))(*(_QWORD *)this + 72LL))(this, *v2);
  if ( v5 < 0 )
  {
    v6 = 1112LL;
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
      v6 = 1127LL;
      goto LABEL_3;
    }
  }
  v5 = RIMDeviceCollection::RemoveDevice(this, a2);
  if ( v5 < 0 )
  {
    v6 = 1130LL;
    goto LABEL_3;
  }
  return 0LL;
}
