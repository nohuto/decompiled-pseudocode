/*
 * XREFs of ??$InvokeAll@PEAVVirtualDesktop@@W4VirtualDesktopProperty@Multitasking@ComposableShell@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopProperty@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVVirtualDesktop@@W4VirtualDesktopProperty@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18033A65C
 * Callers:
 *     ?CurrentVirtualDesktopChanged@VirtualDesktop@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x18033B1C0 (-CurrentVirtualDesktopChanged@VirtualDesktop@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?UpdateDesktopIndex@VirtualDesktop@@AEAAJXZ @ 0x18033B520 (-UpdateDesktopIndex@VirtualDesktop@@AEAAJXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005E750 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_9b3004d460c15bf124f8e61a2a27ce1e__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop___enum_Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty___ @ 0x18033A6F4 (Microsoft--WRL--InvokeTraits_2_--InvokeDelegates__lambda_9b3004d460c15bf124f8e61a2a27ce1e__Windo.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,enum Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<VirtualDesktop *,enum Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty>(
        RTL_SRWLOCK *a1,
        __int64 a2,
        int a3)
{
  RTL_SRWLOCK *v4; // rsi
  unsigned int v5; // edi
  volatile signed __int32 *v6; // rbx
  volatile signed __int32 *Ptr; // rax
  __int128 v9; // [rsp+20h] [rbp-38h]
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+68h] [rbp+10h] BYREF
  int v12; // [rsp+70h] [rbp+18h] BYREF

  v12 = a3;
  v11 = a2;
  *(_QWORD *)&v9 = &v11;
  v4 = a1 + 1;
  v5 = 0;
  *((_QWORD *)&v9 + 1) = &v12;
  v6 = 0LL;
  AcquireSRWLockExclusive(a1 + 1);
  Ptr = (volatile signed __int32 *)a1->Ptr;
  if ( a1->Ptr )
  {
    _InterlockedIncrement(Ptr + 3);
    v6 = Ptr;
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  if ( v6 )
  {
    v10 = v9;
    v5 = Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_9b3004d460c15bf124f8e61a2a27ce1e__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop___enum_Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty___(
           &v10,
           v6,
           a1);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v6);
  }
  return v5;
}
