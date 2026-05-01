/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d83b735c081dd2fe41a4ef73e2aa52d1_____lambda_d83b735c081dd2fe41a4ef73e2aa52d1___ @ 0x1800171B8
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_21b79cea9a56d6bbfbb4614e776bd7a3___ @ 0x18001709C (CFrameApplicationPresentation--_AddTaskToQueue__lambda_21b79cea9a56d6bbfbb4614e776bd7a3___.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005A170 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d83b735c081dd2fe41a4ef73e2aa52d1_____lambda_d83b735c081dd2fe41a4ef73e2aa52d1___(
        _QWORD *a1,
        __int64 a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  _QWORD *v6; // rdx

  *a1 = 0LL;
  v4 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    v4[3] = 1;
    *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_QWORD *)v5 + 2) = 0LL;
    if ( v5 + 4 != (_DWORD *)a2 )
    {
      *((_QWORD *)v5 + 2) = *(_QWORD *)a2;
      *(_QWORD *)a2 = 0LL;
    }
    *((_QWORD *)v5 + 3) = *(_QWORD *)(a2 + 8);
    v6 = (_QWORD *)(a2 + 24);
    *((_QWORD *)v5 + 4) = *(_QWORD *)(a2 + 16);
    *((_QWORD *)v5 + 5) = 0LL;
    if ( v5 + 10 != (_DWORD *)(a2 + 24) )
    {
      *((_QWORD *)v5 + 5) = *v6;
      *v6 = 0LL;
    }
    *((_BYTE *)v5 + 48) = *(_BYTE *)(a2 + 32);
    *(_QWORD *)v5 = off_1804253D8;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release();
    *a1 = v5;
  }
  return a1;
}
