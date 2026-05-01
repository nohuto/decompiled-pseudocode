/*
 * XREFs of ?InternalRelease@?$ComPtr@UIMarshal@@@WRL@Microsoft@@IAEKXZ @ 0x100074B4
 * Callers:
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_c8fac60120d0355ff66629c823b43c3a__Windows::Foundation::IEventHandler_IInspectable_____ @ 0x100078FC (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_c8fac60120d0355ff66629c823b43c3a__Wind.c)
 *     _lambda_8fe8453917231015a81499f07f9fc156_::operator()_IInspectable___Windows::System::IAppMemoryUsageLimitChangingEventArgs___ @ 0x10007ADF (_lambda_8fe8453917231015a81499f07f9fc156_--operator()_IInspectable___Windows--System--IAppMemory.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_fa4066cff981cf6e25503d416ba3b572__Windows::Foundation::IEventHandler_Windows::System::AppMemoryUsageLimitChangingEventArgs_____ @ 0x10007B2B (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_fa4066cff981cf6e25503d416ba3b572__Wind.c)
 *     ??_GAppMemoryUsageLimitChangingEventArgs@System@Windows@@UAEPAXI@Z @ 0x100081E0 (--_GAppMemoryUsageLimitChangingEventArgs@System@Windows@@UAEPAXI@Z.c)
 *     ??_GCMemoryManager@System@Windows@@UAEPAXI@Z @ 0x1000F000 (--_GCMemoryManager@System@Windows@@UAEPAXI@Z.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UAE@XZ @ 0x10010428 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryUsageLimitCha.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__stdcall_Windows::Foundation::IEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::System::AppMemoryUsageLimitChangingEventArgs___Windows::System::IAppMemoryUsageLimitChangingEventArgs_____::_)(IInspectable___Windows::System::IAppMemoryUsageLimitChangingEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IEventHandler_Windows::System::AppMemoryUsageLimitChangingEventArgs____Microsoft::WRL::FtmBase___lambda_8fe8453917231015a81499f07f9fc156___1_IInspectable___Windows::System::IAppMemoryUsageLimitChangingEventArgs___::_scalar_deleting_destructor_ @ 0x10010480 (Microsoft--WRL--Details--DelegateArgTraits_long_(__stdcall_Windows--Foundation--IEve_ea_10010480.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@VFtmBase@23@@23@@WRL@Microsoft@@UAEPAXI@Z @ 0x100104D0 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$Implements@U-$RuntimeClassFlags@$0.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SGXJ@Z @ 0x100107BE (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SGXJ@Z.c)
 *     ?GetProcessMemoryReport@CMemoryManager@System@Windows@@UAGJPAPAUIProcessMemoryReport@23@@Z @ 0x100108C0 (-GetProcessMemoryReport@CMemoryManager@System@Windows@@UAGJPAPAUIProcessMemoryReport@23@@Z.c)
 * Callees:
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

int __thiscall Microsoft::WRL::ComPtr<IMarshal>::InternalRelease(int *this)
{
  int v1; // edx
  int result; // eax

  v1 = *this;
  result = 0;
  if ( *this )
  {
    *this = 0;
    return (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)v1 + 8))(*(_DWORD *)(*(_DWORD *)v1 + 8), v1);
  }
  return result;
}
