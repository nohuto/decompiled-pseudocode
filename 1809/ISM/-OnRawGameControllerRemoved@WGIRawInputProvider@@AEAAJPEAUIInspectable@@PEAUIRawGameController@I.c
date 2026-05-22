/*
 * XREFs of ?OnRawGameControllerRemoved@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@Input@Gaming@Windows@@@Z @ 0x18006B490
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameControllerInputSink@Custom@Input@Gaming@Windows@@UIGipGameControllerInputSink@5678@UIGipGameControllerInputSinkPrivate@Internal@678@UIHidGameControllerInputSink@5678@UIXusbGameControllerInputSink@5678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006C0E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameControllerIn.c)
 *     ?NotifyRemovedAndStop@WGIController@@QEAAJXZ @ 0x18006DAD4 (-NotifyRemovedAndStop@WGIController@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WGIRawInputProvider::OnRawGameControllerRemoved(
        WGIRawInputProvider *this,
        struct IInspectable *a2,
        struct Windows::Gaming::Input::IRawGameController *a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // r14
  WGIController **i; // rdi
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  char **v8; // r15
  char **v9; // rsi
  char *v10; // rax
  WGIController *v11; // rcx
  __int64 v12; // rax
  WGIController *v13; // rcx
  char *v15; // [rsp+60h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+78h] [rbp+20h]

  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 112);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  v16 = v5;
  for ( i = (WGIController **)*((_QWORD *)this + 11); i != *((WGIController ***)this + 12); ++i )
  {
    if ( *((struct Windows::Gaming::Input::IRawGameController **)*i + 9) == a3 )
    {
      v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 352);
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 352));
      v15 = (char *)this + 352;
      if ( this != (WGIRawInputProvider *)-352LL )
      {
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 352));
        v7 = 0LL;
        v15 = 0LL;
      }
      WGIController::NotifyRemovedAndStop(*i);
      v8 = (char **)*((_QWORD *)this + 12);
      v9 = (char **)(i + 1);
      if ( i + 1 != (WGIController **)v8 )
      {
        do
        {
          v10 = 0LL;
          if ( &v15 != v9 )
          {
            v10 = *v9;
            *v9 = 0LL;
          }
          v11 = (WGIController *)*(v9 - 1);
          *(v9 - 1) = v10;
          if ( v11 )
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::Release(v11);
          ++v9;
        }
        while ( v9 != v8 );
      }
      v12 = *((_QWORD *)this + 12);
      v13 = *(WGIController **)(v12 - 8);
      if ( v13 )
      {
        *(_QWORD *)(v12 - 8) = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::Release(v13);
      }
      *((_QWORD *)this + 12) -= 8LL;
      if ( v7 )
        LeaveCriticalSection(v7);
      break;
    }
  }
  if ( v5 )
    LeaveCriticalSection(v5);
  return 0LL;
}
