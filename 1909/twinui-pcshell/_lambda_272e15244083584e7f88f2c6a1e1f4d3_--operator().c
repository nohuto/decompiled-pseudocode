/*
 * XREFs of _lambda_272e15244083584e7f88f2c6a1e1f4d3_::operator() @ 0x18014430C
 * Callers:
 *     ?GetDefaultApplication@CImmersiveWindowManager@@UEAAJPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplication@@@Z @ 0x180144890 (-GetDefaultApplication@CImmersiveWindowManager@@UEAAJPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApp.c)
 * Callees:
 *     ??4?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@@@Z @ 0x180015428 (--4-$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003072C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall lambda_272e15244083584e7f88f2c6a1e1f4d3_::operator()(__int64 a1, __int64 a2)
{
  void (__fastcall *v4)(__int64, struct IUnknown **); // rbx
  struct IUnknown *v6; // [rsp+40h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(a1 + 8)
    || (v6 = 0LL,
        v4 = *(void (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)a2 + 464LL),
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v6),
        v4(a2, &v6),
        LOBYTE(v4) = (unsigned int)SHIsSameObject(v6, *(struct IUnknown **)(a1 + 8)) != 0,
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v6),
        (_BYTE)v4) )
  {
    if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 280LL))(a2) & 4) != 0 )
      Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::operator=(*(__int64 **)(a1 + 16), a2);
  }
  return **(_QWORD **)(a1 + 16) == 0LL;
}
