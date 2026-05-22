/*
 * XREFs of ??1?$list@U?$pair@$$CB_KV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@@std@@@2@@std@@QEAA@XZ @ 0x180084DC0
 * Callers:
 *     ??1Win32kInterop@@UEAA@XZ @ 0x1800812FC (--1Win32kInterop@@UEAA@XZ.c)
 *     ??_EMagnifierProcessor@@UEAAPEAXI@Z @ 0x18008D6C0 (--_EMagnifierProcessor@@UEAAPEAXI@Z.c)
 *     _Win32kInterop::Win32kInterop_::_1_::dtor$30 @ 0x180131D9B (_Win32kInterop--Win32kInterop_--_1_--dtor$30.c)
 *     _MagnifierProcessor::MagnifierProcessor_::_1_::dtor$5 @ 0x1801324C7 (_MagnifierProcessor--MagnifierProcessor_--_1_--dtor$5.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::list<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<MagnifierProcessor::DeviceState>>>::~list<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<MagnifierProcessor::DeviceState>>>(
        __int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rcx
  _QWORD *v4; // rsi
  __int64 v5; // rcx

  v2 = **(_QWORD ***)a1;
  **(_QWORD **)a1 = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  v3 = *(_QWORD **)a1;
  if ( v2 != v3 )
  {
    do
    {
      v4 = (_QWORD *)*v2;
      v5 = v2[3];
      if ( v5 )
      {
        v2[3] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
      operator delete(v2, (const struct std::nothrow_t *)0x20);
      v2 = v4;
      v3 = *(_QWORD **)a1;
    }
    while ( v4 != *(_QWORD **)a1 );
  }
  operator delete(v3, (const struct std::nothrow_t *)0x20);
}
