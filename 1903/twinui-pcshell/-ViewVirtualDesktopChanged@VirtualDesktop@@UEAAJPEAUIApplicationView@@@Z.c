/*
 * XREFs of ?ViewVirtualDesktopChanged@VirtualDesktop@@UEAAJPEAUIApplicationView@@@Z @ 0x18006F7B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005E750 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_9b3004d460c15bf124f8e61a2a27ce1e__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop___enum_Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty___ @ 0x18033A6F4 (Microsoft--WRL--InvokeTraits_2_--InvokeDelegates__lambda_9b3004d460c15bf124f8e61a2a27ce1e__Windo.c)
 */

__int64 __fastcall VirtualDesktop::ViewVirtualDesktopChanged(RTL_SRWLOCK *this, struct IApplicationView *a2)
{
  RTL_SRWLOCK *v2; // rsi
  volatile signed __int32 *v3; // rbx
  RTL_SRWLOCK *v4; // rdi
  volatile signed __int32 *Ptr; // rax
  __int128 v7; // [rsp+20h] [rbp-28h]
  __int128 v8; // [rsp+30h] [rbp-18h] BYREF
  int v9; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v10; // [rsp+60h] [rbp+18h] BYREF

  v9 = 3;
  v10 = this - 2;
  v2 = this + 8;
  v3 = 0LL;
  *(_QWORD *)&v7 = &v10;
  v4 = this + 9;
  *((_QWORD *)&v7 + 1) = &v9;
  AcquireSRWLockExclusive(this + 9);
  Ptr = (volatile signed __int32 *)v2->Ptr;
  if ( v2->Ptr )
  {
    _InterlockedIncrement(Ptr + 3);
    v3 = Ptr;
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  if ( v3 )
  {
    v8 = v7;
    Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_9b3004d460c15bf124f8e61a2a27ce1e__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop___enum_Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty___(
      &v8,
      v3,
      v2);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v3);
  }
  return 0LL;
}
