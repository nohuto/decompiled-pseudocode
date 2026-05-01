/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c375c8f4cb799a2f5bee00a6619de85c_____lambda_c375c8f4cb799a2f5bee00a6619de85c___ @ 0x180066F68
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_75ecb61212cbd325c11a4ad813499630___ @ 0x180066E54 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_75ecb61212cbd325c11a4ad813499630___.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005A170 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c375c8f4cb799a2f5bee00a6619de85c_____lambda_c375c8f4cb799a2f5bee00a6619de85c___(
        volatile signed __int32 **a1,
        volatile signed __int32 *a2)
{
  volatile signed __int32 *v4; // rax
  volatile signed __int32 *v5; // rbx
  __int64 v6; // rax
  volatile signed __int32 *v7; // rdi

  *a1 = 0LL;
  v4 = (volatile signed __int32 *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 3) = 1;
    *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_QWORD *)v5 + 2) = 0LL;
    if ( v5 + 4 != a2 )
    {
      *((_QWORD *)v5 + 2) = *(_QWORD *)a2;
      *(_QWORD *)a2 = 0LL;
    }
    v6 = *((_QWORD *)a2 + 1);
    v7 = a2 + 4;
    *((_QWORD *)v5 + 3) = v6;
    *((_QWORD *)v5 + 4) = 0LL;
    if ( v5 + 8 != v7 )
    {
      *((_QWORD *)v5 + 4) = *(_QWORD *)v7;
      *(_QWORD *)v7 = 0LL;
    }
    *((_QWORD *)v5 + 5) = *((_QWORD *)v7 + 1);
    *(_QWORD *)v5 = off_18042A4F8;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(*a1);
    *a1 = v5;
  }
  return a1;
}
