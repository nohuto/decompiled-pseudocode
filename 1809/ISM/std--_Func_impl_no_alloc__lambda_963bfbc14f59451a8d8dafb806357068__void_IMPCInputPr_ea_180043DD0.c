/*
 * XREFs of std::_Func_impl_no_alloc__lambda_963bfbc14f59451a8d8dafb806357068__void_IMPCInputProviderBase_____ptr64_::_Do_call @ 0x180043DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?push_back@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAAXAEBUPointData3D@@@Z @ 0x18004356C (-push_back@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@QEAAXAEBUPointData3D@@@.c)
 *     ??1?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAA@XZ @ 0x180043600 (--1-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl_no_alloc__lambda_963bfbc14f59451a8d8dafb806357068__void_IMPCInputProviderBase_____ptr64_::_Do_call(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbp
  __int64 i; // rbx
  _QWORD v6[4]; // [rsp+28h] [rbp-20h] BYREF

  v3 = *a2;
  (*(void (__fastcall **)(_QWORD, _QWORD *, _QWORD))(*(_QWORD *)*a2 + 104LL))(*a2, v6, *(_QWORD *)(a1 + 8));
  v4 = v6[1];
  for ( i = v6[0]; i != v4; i += 184LL )
  {
    *(_DWORD *)(i + 176) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 320LL))(v3);
    std::vector<PointData3D>::push_back(*(_QWORD *)(a1 + 16), (_OWORD *)i);
  }
  std::vector<PointData3D>::~vector<PointData3D>((__int64)v6);
}
