/*
 * XREFs of ?Remove@?$EventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18001CF4C
 * Callers:
 *     ?remove_GameAdded@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x18001BB30 (-remove_GameAdded@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUEvent.c)
 *     ?remove_GameRemoved@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x18001BC30 (-remove_GameRemoved@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUEve.c)
 *     ?remove_GameUpdated@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x18001BCE0 (-remove_GameUpdated@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUEve.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_bfab945f95f9db2e18b4a82b65eae1b3__Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler_ @ 0x18001F2B0 (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_bfab945f95f9db2e18b4a82b65eae1b3__Wind.c)
 * Callees:
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x18001E0E8 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180025C80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x180025EFC (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2)
{
  RTL_SRWLOCK *v2; // rbp
  PVOID v5; // rbx
  _QWORD *Ptr; // rax
  int v7; // edi
  struct IUnknown **v8; // rcx
  Microsoft::WRL::Details::EventTargetArray *v9; // rdi
  bool v10; // r12
  __int64 v11; // r13
  __int64 v12; // r13
  struct IUnknown **v13; // r15
  void **v14; // rbp
  PVOID v15; // rcx
  Microsoft::WRL::Details::EventTargetArray *v16; // rax
  Microsoft::WRL::Details::EventTargetArray *v18; // [rsp+60h] [rbp+8h] BYREF
  __int64 v19; // [rsp+70h] [rbp+18h] BYREF

  v2 = a1 + 2;
  v5 = 0LL;
  AcquireSRWLockExclusive(a1 + 2);
  Ptr = a1->Ptr;
  if ( !a1->Ptr )
  {
    v7 = 0;
LABEL_8:
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
    return (unsigned int)v7;
  }
  v8 = (struct IUnknown **)Ptr[2];
  v9 = 0LL;
  v10 = 0;
  v11 = Ptr[3] - (_QWORD)v8;
  v18 = 0LL;
  v12 = (v11 >> 3) - 1;
  v19 = v12;
  if ( v12 )
  {
    v7 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
           &v18,
           &v19);
    if ( v7 < 0 )
    {
      if ( v18 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v18);
      goto LABEL_8;
    }
    v9 = v18;
    v13 = (struct IUnknown **)*((_QWORD *)a1->Ptr + 2);
    if ( v13 == *((struct IUnknown ***)a1->Ptr + 3) )
      goto LABEL_26;
    v14 = (void **)*((_QWORD *)a1->Ptr + 4);
    do
    {
      if ( v10 || a2 != *v13 )
      {
        if ( !v12 )
          break;
        Microsoft::WRL::Details::EventTargetArray::AddTail(v9, *v13, *v14++);
        --v12;
      }
      else
      {
        v10 = 1;
      }
      ++v13;
    }
    while ( v13 != *((struct IUnknown ***)a1->Ptr + 3) );
    v2 = a1 + 2;
  }
  else
  {
    v10 = *v8 == a2;
  }
  if ( v10 )
  {
    AcquireSRWLockExclusive(a1 + 1);
    v15 = a1->Ptr;
    if ( &v18 != (Microsoft::WRL::Details::EventTargetArray **)a1 )
    {
      a1->Ptr = 0LL;
      v5 = v15;
      v15 = 0LL;
    }
    v16 = v9;
    v9 = 0LL;
    a1->Ptr = v16;
    if ( v15 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v15);
    if ( a1 == (RTL_SRWLOCK *)-8LL )
      goto LABEL_28;
    ReleaseSRWLockExclusive(a1 + 1);
  }
LABEL_26:
  if ( v9 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v9);
LABEL_28:
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  v7 = 0;
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v5);
  return (unsigned int)v7;
}
