/*
 * XREFs of ?Invoke@GameListEntryUpdateHandler@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameListEntry@2345@@Z @ 0x180037650
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_a08974e8dab30255bf05db1a94ec62bb__Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler_ @ 0x18001F120 (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_a08974e8dab30255bf05db1a94ec62bb__Wind.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180025AF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryUpdateHandler::Invoke(
        RTL_SRWLOCK *this,
        struct Windows::Gaming::Preview::GamesEnumeration::IGameListEntry *a2)
{
  RTL_SRWLOCK *v2; // r14
  RTL_SRWLOCK *v3; // rsi
  int v4; // edi
  volatile signed __int32 *Ptr; // rbx
  signed __int32 v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::Gaming::Preview::GamesEnumeration::IGameListEntry *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = this + 4;
  v9 = a2;
  v3 = this + 5;
  v4 = 0;
  Ptr = 0LL;
  AcquireSRWLockExclusive(this + 5);
  if ( v2->Ptr )
  {
    Ptr = (volatile signed __int32 *)v2->Ptr;
    do
      v6 = *((_DWORD *)Ptr + 3);
    while ( v6 != 0x7FFFFFFF && v6 != _InterlockedCompareExchange(Ptr + 3, v6 + 1, v6) );
  }
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  if ( Ptr )
  {
    v4 = Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_a08974e8dab30255bf05db1a94ec62bb__Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler_(
           &v9,
           (__int64)Ptr,
           v2);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(Ptr);
    if ( v4 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x15,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentryupdatehandler.cpp",
        (const char *)(unsigned int)v4);
  }
  return (unsigned int)v4;
}
