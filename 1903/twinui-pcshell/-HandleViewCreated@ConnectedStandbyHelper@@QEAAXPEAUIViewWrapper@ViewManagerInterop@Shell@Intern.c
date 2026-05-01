/*
 * XREFs of ?HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180036604
 * Callers:
 *     ?RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x18000DAD0 (-RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@S.c)
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180036E90 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 *     ?_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x18027592C (-_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 * Callees:
 *     ?_Incref_nz@_Ref_count_base@std@@QEAA_NXZ @ 0x18003673C (-_Incref_nz@_Ref_count_base@std@@QEAA_NXZ.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_379fb6251cfae0942258739af0295e77_____lambda_379fb6251cfae0942258739af0295e77___ @ 0x18003675C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_379fb6251cfae.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180036E68 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005A170 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _CxxThrowException_0 @ 0x180087D7C (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ConnectedStandbyHelper::HandleViewCreated(
        ConnectedStandbyHelper *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  std::_Ref_count_base *v4; // rcx
  __int64 v5; // r14
  volatile signed __int32 *v6; // rdi
  unsigned int v7; // esi
  __int64 *v8; // rax
  __int64 v9; // rbx
  _QWORD pExceptionObject[3]; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v11[2]; // [rsp+50h] [rbp-20h] BYREF
  std::_Ref_count_base *v12; // [rsp+60h] [rbp-10h]
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v13; // [rsp+68h] [rbp-8h] BYREF
  __int64 v14; // [rsp+90h] [rbp+20h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v15; // [rsp+A0h] [rbp+30h] BYREF

  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 1);
  if ( !v4 || !std::_Ref_count_base::_Incref_nz(v4) )
  {
    pExceptionObject[1] = 0LL;
    pExceptionObject[2] = 0LL;
    pExceptionObject[0] = &std::bad_weak_ptr::`vftable';
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  v5 = *(_QWORD *)this;
  v6 = (volatile signed __int32 *)*((_QWORD *)this + 1);
  v15 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
  v11[0] = this;
  if ( v6 )
    _InterlockedIncrement(v6 + 2);
  v11[1] = v5;
  v12 = (std::_Ref_count_base *)v6;
  v13 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
  v7 = *((_DWORD *)this + 4);
  v8 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_379fb6251cfae0942258739af0295e77_____lambda_379fb6251cfae0942258739af0295e77___(
                    &v14,
                    v11);
  v9 = *v8;
  *v8 = 0LL;
  if ( v14 )
  {
    v14 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release();
  }
  SHTaskPoolQueueTask(3LL, 2LL, v7, 0LL, v9, 0LL);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  if ( v6 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v6);
}
