/*
 * XREFs of ?Invoke@GameListEntryUpdateHandler@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameListEntry@2345@@Z @ 0x180037610
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_a08974e8dab30255bf05db1a94ec62bb__Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler_ @ 0x18001F160 (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_a08974e8dab30255bf05db1a94ec62bb__Wind.c)
 *     _guard_dispatch_icall_nop @ 0x180044260 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryUpdateHandler::Invoke(
        RTL_SRWLOCK *this,
        struct Windows::Gaming::Preview::GamesEnumeration::IGameListEntry *a2)
{
  RTL_SRWLOCK *v2; // r14
  RTL_SRWLOCK *v3; // rsi
  int v4; // edi
  volatile signed __int32 *Ptr; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct Windows::Gaming::Preview::GamesEnumeration::IGameListEntry *v8; // [rsp+48h] [rbp+10h] BYREF

  v2 = this + 4;
  v8 = a2;
  v3 = this + 5;
  v4 = 0;
  Ptr = 0LL;
  AcquireSRWLockExclusive(this + 5);
  if ( v2->Ptr )
  {
    Ptr = (volatile signed __int32 *)v2->Ptr;
    _InterlockedIncrement((volatile signed __int32 *)v2->Ptr + 3);
  }
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  if ( Ptr )
  {
    v4 = Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_a08974e8dab30255bf05db1a94ec62bb__Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler_(
           &v8,
           (__int64)Ptr,
           v2);
    if ( _InterlockedExchangeAdd(Ptr + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)Ptr + 24LL))(Ptr, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    }
    if ( v4 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x15,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentryupdatehandler.cpp",
        (const char *)(unsigned int)v4);
  }
  return (unsigned int)v4;
}
