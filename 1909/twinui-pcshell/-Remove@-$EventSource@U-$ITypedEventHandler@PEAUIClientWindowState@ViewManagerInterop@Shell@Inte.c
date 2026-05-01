/*
 * XREFs of ?Remove@?$EventSource@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18004FF00
 * Callers:
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_e6e0eff2c801ccf50926d67388532b90__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ @ 0x180032920 (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_e6e0eff2c801ccf50926d67388532b90__Wind.c)
 *     ?remove_ClientWindowReadyForPresentationChanged@WindowWrapperBase@@UEAAJUEventRegistrationToken@@@Z @ 0x18004FDD0 (-remove_ClientWindowReadyForPresentationChanged@WindowWrapperBase@@UEAAJUEventRegistrationToken@.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_107e2df1239c9f44dfee9d64da397eb2__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ @ 0x1802B3F10 (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_107e2df1239c9f44dfee9d64da397eb2__Wind.c)
 *     ?remove_ClientWindowReadyForPresentationChanged@ViewWrapperBase@@UEAAJUEventRegistrationToken@@@Z @ 0x1802BC6C0 (-remove_ClientWindowReadyForPresentationChanged@ViewWrapperBase@@UEAAJUEventRegistrationToken@@@.c)
 * Callees:
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x18004F520 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800500AC (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800500D4 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x180050628 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180050DC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18008E7A0 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2)
{
  RTL_SRWLOCK *v2; // rbx
  __int64 v4; // rdi
  _QWORD *Ptr; // rax
  struct IUnknown **v7; // rcx
  Microsoft::WRL::Details::EventTargetArray *v8; // rbx
  bool v9; // r12
  __int64 v10; // r13
  __int64 v11; // r13
  volatile int *v12; // rdx
  int v13; // ebx
  __int64 v14; // r10
  struct IUnknown **v15; // r15
  void **v16; // rdi
  RTL_SRWLOCK *v18; // [rsp+20h] [rbp-10h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v19; // [rsp+70h] [rbp+40h] BYREF
  __int64 v20; // [rsp+80h] [rbp+50h] BYREF
  RTL_SRWLOCK *v21; // [rsp+88h] [rbp+58h] BYREF

  v2 = a1 + 2;
  v4 = 0LL;
  v20 = 0LL;
  AcquireSRWLockExclusive(a1 + 2);
  Ptr = a1->Ptr;
  v18 = v2;
  if ( !Ptr )
  {
LABEL_22:
    v13 = 0;
    goto LABEL_23;
  }
  v7 = (struct IUnknown **)Ptr[2];
  v8 = 0LL;
  v9 = 0;
  v10 = Ptr[3] - (_QWORD)v7;
  v19 = 0LL;
  v11 = (v10 >> 3) - 1;
  v21 = (RTL_SRWLOCK *)v11;
  if ( !v11 )
  {
    v9 = *v7 == a2;
    goto LABEL_18;
  }
  v13 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64 &>(
          &v19,
          (unsigned __int64 *)&v21);
  if ( v13 >= 0 )
  {
    v8 = v19;
    v15 = (struct IUnknown **)*((_QWORD *)a1->Ptr + 2);
    if ( v15 == *((struct IUnknown ***)a1->Ptr + 3) )
    {
LABEL_20:
      if ( v8 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v8);
      goto LABEL_22;
    }
    v16 = (void **)*((_QWORD *)a1->Ptr + 4);
    do
    {
      if ( v9 || a2 != *v15 )
      {
        if ( !v11 )
          break;
        Microsoft::WRL::Details::EventTargetArray::AddTail(v8, *v15, *v16++);
        --v11;
      }
      else
      {
        v9 = 1;
      }
      ++v15;
    }
    while ( v15 != *((struct IUnknown ***)a1->Ptr + 3) );
    v4 = v20;
LABEL_18:
    if ( v9 )
    {
      AcquireSRWLockExclusive(a1 + 1);
      v21 = a1 + 1;
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v20, a1);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(a1, &v19);
      Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v21);
      v4 = v20;
      v8 = v19;
    }
    goto LABEL_20;
  }
  if ( v19 )
  {
    if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference(
            (Microsoft::WRL::Details::EventTargetArray *)((char *)v19 + 12),
            v12) )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 24LL))(v14, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
LABEL_23:
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v18);
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v4);
  return (unsigned int)v13;
}
