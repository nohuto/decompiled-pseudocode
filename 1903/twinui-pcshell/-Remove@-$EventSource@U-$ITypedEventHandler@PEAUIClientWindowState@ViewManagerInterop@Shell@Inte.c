/*
 * XREFs of ?Remove@?$EventSource@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18004DA94
 * Callers:
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_e6e0eff2c801ccf50926d67388532b90__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ @ 0x180029640 (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_e6e0eff2c801ccf50926d67388532b90__Wind.c)
 *     ?remove_ClientWindowReadyForPresentationChanged@WindowWrapperBase@@UEAAJUEventRegistrationToken@@@Z @ 0x18004D960 (-remove_ClientWindowReadyForPresentationChanged@WindowWrapperBase@@UEAAJUEventRegistrationToken@.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_107e2df1239c9f44dfee9d64da397eb2__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ @ 0x180294A48 (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_107e2df1239c9f44dfee9d64da397eb2__Wind.c)
 *     ?remove_ClientWindowReadyForPresentationChanged@ViewWrapperBase@@UEAAJUEventRegistrationToken@@@Z @ 0x18029D1D0 (-remove_ClientWindowReadyForPresentationChanged@ViewWrapperBase@@UEAAJUEventRegistrationToken@@@.c)
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18004DC78 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18004DCA0 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x18004E458 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x18004ECB8 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2)
{
  RTL_SRWLOCK *v2; // rbx
  _QWORD *Ptr; // rax
  struct IUnknown **v6; // rcx
  volatile signed __int32 *v7; // rbx
  bool v8; // r15
  __int64 v9; // r12
  __int64 v10; // r12
  int v11; // ebx
  struct IUnknown **v13; // rsi
  void **v14; // r13
  __int64 v15; // [rsp+20h] [rbp-20h] BYREF
  RTL_SRWLOCK *v16; // [rsp+28h] [rbp-18h] BYREF
  RTL_SRWLOCK *v17; // [rsp+30h] [rbp-10h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v18; // [rsp+90h] [rbp+50h] BYREF
  volatile signed __int32 *v19; // [rsp+98h] [rbp+58h] BYREF

  v19 = 0LL;
  v2 = a1 + 2;
  AcquireSRWLockExclusive(a1 + 2);
  Ptr = a1->Ptr;
  v17 = v2;
  if ( !Ptr )
  {
LABEL_7:
    v11 = 0;
    goto LABEL_8;
  }
  v6 = (struct IUnknown **)Ptr[2];
  v7 = 0LL;
  v8 = 0;
  v9 = Ptr[3] - (_QWORD)v6;
  v18 = 0LL;
  v10 = (v9 >> 3) - 1;
  v15 = v10;
  if ( !v10 )
  {
    v8 = *v6 == a2;
LABEL_4:
    if ( v8 )
    {
      AcquireSRWLockExclusive(a1 + 1);
      v16 = a1 + 1;
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v19, a1);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(a1, &v18);
      Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v16);
      v7 = (volatile signed __int32 *)v18;
    }
LABEL_6:
    if ( v7 )
    {
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(Microsoft::WRL::Details::EventTargetArray *, __int64))(*(_QWORD *)v18 + 24LL))(v18, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
    goto LABEL_7;
  }
  v11 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64 &>(
          &v18,
          &v15);
  if ( v11 >= 0 )
  {
    v7 = (volatile signed __int32 *)v18;
    v13 = (struct IUnknown **)*((_QWORD *)a1->Ptr + 2);
    v14 = (void **)*((_QWORD *)a1->Ptr + 4);
    if ( v13 != *((struct IUnknown ***)a1->Ptr + 3) )
    {
      while ( 1 )
      {
        if ( v8 || a2 != *v13 )
        {
          if ( !v10 )
          {
LABEL_16:
            v15 = v10;
            goto LABEL_4;
          }
          Microsoft::WRL::Details::EventTargetArray::AddTail(
            (Microsoft::WRL::Details::EventTargetArray *)v7,
            *v13,
            *v14++);
          --v10;
        }
        else
        {
          v8 = 1;
        }
        if ( ++v13 == *((struct IUnknown ***)a1->Ptr + 3) )
          goto LABEL_16;
      }
    }
    goto LABEL_6;
  }
  if ( v18 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v18 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(Microsoft::WRL::Details::EventTargetArray *, __int64))(*(_QWORD *)v18 + 24LL))(v18, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
LABEL_8:
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v17);
  if ( v19 )
  {
    if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v19 + 24LL))(v19, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return (unsigned int)v11;
}
