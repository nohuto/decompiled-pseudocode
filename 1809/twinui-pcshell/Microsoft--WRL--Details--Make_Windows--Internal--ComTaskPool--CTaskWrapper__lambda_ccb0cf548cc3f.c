/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ccb0cf548cc3fece8ee6b509d46c06e0_____lambda_ccb0cf548cc3fece8ee6b509d46c06e0___ @ 0x18006859C
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_b19e27c48b295a3a48a5cf32f8a10a66___ @ 0x1800684B8 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_b19e27c48b295a3a48a5cf32f8a10a66___.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180053B90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ccb0cf548cc3fece8ee6b509d46c06e0_____lambda_ccb0cf548cc3fece8ee6b509d46c06e0___(
        __int64 *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rax
  volatile int *v5; // rdx
  _QWORD *v6; // rbx

  *a1 = 0LL;
  v4 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 3) = 1;
    *v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v6[2] = 0LL;
    if ( v6 + 2 != a2 )
    {
      v6[2] = *a2;
      *a2 = 0LL;
    }
    v6[3] = a2[1];
    v6[4] = a2[2];
    *v6 = off_1803C8140;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
        *a1,
        v5);
    *a1 = (__int64)v6;
  }
  return a1;
}
