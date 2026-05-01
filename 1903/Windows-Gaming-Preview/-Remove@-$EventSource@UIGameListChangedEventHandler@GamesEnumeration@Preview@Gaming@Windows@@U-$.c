/*
 * XREFs of ?Remove@?$EventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18001CD04
 * Callers:
 *     ?remove_GameAdded@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x18001B810 (-remove_GameAdded@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUEvent.c)
 *     ?remove_GameRemoved@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x18001B910 (-remove_GameRemoved@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUEve.c)
 *     ?remove_GameUpdated@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x18001B9C0 (-remove_GameUpdated@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUEve.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_a08974e8dab30255bf05db1a94ec62bb__Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler_ @ 0x18001F160 (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_a08974e8dab30255bf05db1a94ec62bb__Wind.c)
 * Callees:
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x18001E31C (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x180025C3C (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180044260 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2)
{
  RTL_SRWLOCK *v2; // r12
  volatile signed __int32 *v5; // rdi
  _QWORD *Ptr; // rax
  int v7; // ebx
  struct IUnknown **v8; // rcx
  volatile signed __int32 *v9; // rbx
  __int64 v10; // rax
  bool v11; // cl
  struct IUnknown **v12; // r13
  __int64 v13; // r12
  void **v14; // r14
  volatile signed __int32 *v15; // rcx
  volatile signed __int32 *v16; // rax
  char v18; // [rsp+28h] [rbp-8h] BYREF
  char v19; // [rsp+70h] [rbp+40h]
  Microsoft::WRL::Details::EventTargetArray *v20; // [rsp+80h] [rbp+50h] BYREF
  __int64 v21; // [rsp+88h] [rbp+58h] BYREF

  v2 = a1 + 2;
  v5 = 0LL;
  AcquireSRWLockExclusive(a1 + 2);
  Ptr = a1->Ptr;
  if ( !a1->Ptr )
  {
    v7 = 0;
LABEL_10:
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
    return (unsigned int)v7;
  }
  v8 = (struct IUnknown **)Ptr[2];
  v9 = 0LL;
  v10 = Ptr[3] - (_QWORD)v8;
  v20 = 0LL;
  v19 = 0;
  v21 = (v10 >> 3) - 1;
  if ( v10 >> 3 == 1 )
  {
    v11 = *v8 == a2;
  }
  else
  {
    v7 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
           &v20,
           &v21);
    if ( v7 < 0 )
    {
      if ( v20 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v20 + 3, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(Microsoft::WRL::Details::EventTargetArray *, __int64))(*(_QWORD *)v20 + 24LL))(
            v20,
            1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            _InterlockedAdd((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_, 0xFFFFFFFF);
        }
      }
      goto LABEL_10;
    }
    v9 = (volatile signed __int32 *)v20;
    v12 = (struct IUnknown **)*((_QWORD *)a1->Ptr + 2);
    if ( v12 == *((struct IUnknown ***)a1->Ptr + 3) )
      goto LABEL_31;
    v13 = v21;
    v11 = 0;
    v14 = (void **)*((_QWORD *)a1->Ptr + 4);
    do
    {
      if ( v11 || a2 != *v12 )
      {
        if ( !v13 )
          break;
        Microsoft::WRL::Details::EventTargetArray::AddTail((Microsoft::WRL::Details::EventTargetArray *)v9, *v12, *v14);
        v11 = v19;
        ++v14;
        --v13;
      }
      else
      {
        v11 = 1;
        v19 = 1;
      }
      ++v12;
    }
    while ( v12 != *((struct IUnknown ***)a1->Ptr + 3) );
    v21 = v13;
    v2 = a1 + 2;
  }
  if ( v11 )
  {
    AcquireSRWLockExclusive(a1 + 1);
    v15 = (volatile signed __int32 *)a1->Ptr;
    if ( &v18 != (char *)a1 )
    {
      v5 = (volatile signed __int32 *)a1->Ptr;
      v15 = 0LL;
    }
    v16 = v9;
    v9 = 0LL;
    a1->Ptr = (PVOID)v16;
    v20 = 0LL;
    if ( v15 )
    {
      if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v15 + 24LL))(v15, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          _InterlockedAdd((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_, 0xFFFFFFFF);
      }
      v9 = (volatile signed __int32 *)v20;
    }
    if ( a1 == (RTL_SRWLOCK *)-8LL )
      goto LABEL_35;
    ReleaseSRWLockExclusive(a1 + 1);
  }
LABEL_31:
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(Microsoft::WRL::Details::EventTargetArray *, __int64))(*(_QWORD *)v20 + 24LL))(v20, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        _InterlockedAdd((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_, 0xFFFFFFFF);
    }
  }
LABEL_35:
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  v7 = 0;
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v5 + 24LL))(v5, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        _InterlockedAdd((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_, 0xFFFFFFFF);
    }
  }
  return (unsigned int)v7;
}
