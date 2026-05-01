/*
 * XREFs of ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180043E30
 * Callers:
 *     ?add_ClientWindowReadyForPresentationChanged@WindowWrapperBase@@UEAAJPEAU?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180043DE0 (-add_ClientWindowReadyForPresentationChanged@WindowWrapperBase@@UEAAJPEAU-$ITypedEventHandler@PE.c)
 *     ?add_ClientWindowReadyForPresentationChanged@ViewWrapperBase@@UEAAJPEAU?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x18029BFA0 (-add_ClientWindowReadyForPresentationChanged@ViewWrapperBase@@UEAAJPEAU-$ITypedEventHandler@PEAU.c)
 * Callees:
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x180043FBC (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18004DC78 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x18004E458 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005E750 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  RTL_SRWLOCK *v4; // r15
  _QWORD *v9; // rcx
  __int64 v10; // rax
  int v11; // edi
  _QWORD *v12; // rax
  Microsoft::WRL::Details::EventTargetArray *v13; // rdi
  __int64 *v14; // r14
  __int64 v15; // rcx
  _QWORD *v16; // rcx
  _QWORD *v17; // rbx
  void **v19; // rbp
  struct IUnknown **i; // r14
  RTL_SRWLOCK *v21; // [rsp+20h] [rbp-48h] BYREF
  char v22; // [rsp+28h] [rbp-40h] BYREF
  __int64 v23; // [rsp+70h] [rbp+8h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v24; // [rsp+88h] [rbp+20h] BYREF

  *a4 = 0LL;
  v4 = (RTL_SRWLOCK *)(a1 + 16);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 16));
  v9 = *(_QWORD **)a1;
  v24 = 0LL;
  v21 = v4;
  if ( v9 )
    v10 = ((__int64)(v9[3] - v9[2]) >> 3) + 1;
  else
    v10 = 1LL;
  v23 = v10;
  v11 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
          &v24,
          &v23);
  if ( v11 < 0 )
  {
    if ( v24 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v24 + 3, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(Microsoft::WRL::Details::EventTargetArray *, __int64))(*(_QWORD *)v24 + 24LL))(v24, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v21);
  }
  else
  {
    v12 = *(_QWORD **)a1;
    v13 = v24;
    if ( *(_QWORD *)a1 )
    {
      v19 = (void **)v12[4];
      for ( i = (struct IUnknown **)v12[2]; i != (struct IUnknown **)v12[3]; ++i )
      {
        Microsoft::WRL::Details::EventTargetArray::AddTail(v13, *i, *v19);
        v12 = *(_QWORD **)a1;
        ++v19;
      }
    }
    *a4 = a2;
    v14 = (__int64 *)*((_QWORD *)v13 + 3);
    v15 = *v14;
    if ( *v14 != a2 )
    {
      if ( a2 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
        v15 = *v14;
      }
      *v14 = a2;
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    *(_QWORD *)(*((_QWORD *)v13 + 4) + 8 * ((__int64)(*((_QWORD *)v13 + 3) - *((_QWORD *)v13 + 2)) >> 3)) = a3;
    *((_QWORD *)v13 + 3) += 8LL;
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
    v16 = *(_QWORD **)a1;
    v17 = 0LL;
    if ( &v22 != (char *)a1 )
    {
      v17 = *(_QWORD **)a1;
      v16 = 0LL;
    }
    *(_QWORD *)a1 = v13;
    if ( v16 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v16);
    if ( a1 != -8 )
      ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 8));
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    v11 = 0;
    if ( v17 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v17);
  }
  return (unsigned int)v11;
}
