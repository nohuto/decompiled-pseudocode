/*
 * XREFs of ?AddInternal@?$EventSource@UIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAUIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x18001D104
 * Callers:
 *     ?add_GameRemoved@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameListRemovedEventHandler@2345@PEAUEventRegistrationToken@@@Z @ 0x18001B850 (-add_GameRemoved@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGa.c)
 *     ?Add@?$AgileEventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAUIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@PEAUEventRegistrationToken@@@Z @ 0x18001CF64 (-Add@-$AgileEventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U.c)
 * Callees:
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x18001E31C (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x180025C3C (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180044260 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Gaming::Preview::GamesEnumeration::IGameListRemovedEventHandler,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2,
        void *a3,
        struct IUnknown **a4)
{
  RTL_SRWLOCK *v4; // rsi
  _QWORD *Ptr; // rcx
  __int64 v9; // rax
  int v10; // r15d
  _QWORD *v11; // rax
  Microsoft::WRL::Details::EventTargetArray *v12; // rdi
  void **v13; // r15
  struct IUnknown **i; // rbx
  volatile signed __int32 *v15; // rcx
  volatile signed __int32 *v16; // rbx
  Microsoft::WRL::Details::EventTargetArray *v18; // [rsp+20h] [rbp-20h] BYREF
  __int64 v19; // [rsp+28h] [rbp-18h] BYREF
  volatile signed __int32 *v20; // [rsp+30h] [rbp-10h]
  volatile signed __int32 *v22; // [rsp+98h] [rbp+58h] BYREF

  *a4 = 0LL;
  v4 = a1 + 2;
  AcquireSRWLockExclusive(a1 + 2);
  Ptr = a1->Ptr;
  v18 = 0LL;
  if ( Ptr )
    v9 = ((__int64)(Ptr[3] - Ptr[2]) >> 3) + 1;
  else
    v9 = 1LL;
  v19 = v9;
  v10 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
          &v18,
          &v19);
  if ( v10 >= 0 )
  {
    v11 = a1->Ptr;
    v12 = v18;
    if ( a1->Ptr )
    {
      v13 = (void **)v11[4];
      for ( i = (struct IUnknown **)v11[2]; i != (struct IUnknown **)v11[3]; ++i )
      {
        Microsoft::WRL::Details::EventTargetArray::AddTail(v12, *i, *v13);
        v11 = a1->Ptr;
        ++v13;
      }
    }
    *a4 = a2;
    Microsoft::WRL::Details::EventTargetArray::AddTail(v12, a2, a3);
    AcquireSRWLockExclusive(a1 + 1);
    v15 = (volatile signed __int32 *)a1->Ptr;
    v16 = 0LL;
    v22 = 0LL;
    if ( &v22 != (volatile signed __int32 **)a1 )
    {
      v16 = v15;
      v22 = v15;
      v15 = 0LL;
    }
    a1->Ptr = v12;
    v20 = v15;
    if ( v15 )
    {
      if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v20 + 24LL))(v20, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          _InterlockedAdd((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_, 0xFFFFFFFF);
      }
      v16 = v22;
    }
    if ( a1 != (RTL_SRWLOCK *)-8LL )
      ReleaseSRWLockExclusive(a1 + 1);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    v10 = 0;
    if ( v16 )
    {
      if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v22 + 24LL))(v22, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          _InterlockedAdd((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_, 0xFFFFFFFF);
      }
    }
  }
  else
  {
    if ( v18 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v18 + 3, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(Microsoft::WRL::Details::EventTargetArray *, __int64))(*(_QWORD *)v18 + 24LL))(v18, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          _InterlockedAdd((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_, 0xFFFFFFFF);
      }
    }
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
  }
  return (unsigned int)v10;
}
