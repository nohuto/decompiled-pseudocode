/*
 * XREFs of ?HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800219DC
 * Callers:
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180023A10 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 *     ?RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x1800281C0 (-RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@S.c)
 *     ?_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x1802204F8 (-_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_379fb6251cfae0942258739af0295e77_____lambda_379fb6251cfae0942258739af0295e77___ @ 0x180021B08 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_379fb6251cfae.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180053B90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _CxxThrowException_0 @ 0x1800850F0 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ConnectedStandbyHelper::HandleViewCreated(
        ConnectedStandbyHelper *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  __int64 v4; // rdx
  signed __int32 v5; // eax
  __int64 v6; // r14
  volatile signed __int32 *v7; // rdi
  unsigned int v8; // esi
  __int64 *v9; // rax
  __int64 v10; // rbx
  void **pExceptionObject; // [rsp+30h] [rbp-40h] BYREF
  __int64 v12; // [rsp+38h] [rbp-38h]
  __int64 v13; // [rsp+40h] [rbp-30h]
  _QWORD v14[2]; // [rsp+48h] [rbp-28h] BYREF
  std::_Ref_count_base *v15; // [rsp+58h] [rbp-18h]
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v16; // [rsp+60h] [rbp-10h] BYREF
  __int64 v17; // [rsp+90h] [rbp+20h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v18; // [rsp+A0h] [rbp+30h] BYREF

  v4 = *((_QWORD *)this + 1);
  if ( !v4 )
  {
LABEL_19:
    v12 = 0LL;
    v13 = 0LL;
    pExceptionObject = &std::bad_weak_ptr::`vftable';
    throw (std::bad_weak_ptr *)&pExceptionObject;
  }
  do
  {
    v5 = *(_DWORD *)(v4 + 8);
    if ( !v5 )
      goto LABEL_19;
  }
  while ( v5 != _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v5 + 1, v5) );
  v6 = *(_QWORD *)this;
  v7 = (volatile signed __int32 *)*((_QWORD *)this + 1);
  v18 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
  v14[0] = this;
  if ( v7 )
    _InterlockedIncrement(v7 + 2);
  v14[1] = v6;
  v15 = (std::_Ref_count_base *)v7;
  v16 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
  v8 = *((_DWORD *)this + 4);
  v9 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_379fb6251cfae0942258739af0295e77_____lambda_379fb6251cfae0942258739af0295e77___(
                    &v17,
                    v14);
  v10 = *v9;
  *v9 = 0LL;
  if ( v17 )
  {
    v17 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release();
  }
  SHTaskPoolQueueTask(3LL, 2LL, v8, 0LL, v10, 0LL, pExceptionObject, v12);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  if ( v15 )
    std::_Ref_count_base::_Decref(v15);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  if ( v7 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v7);
}
