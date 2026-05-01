/*
 * XREFs of Platform::EventSource::DoInvokeVoid_Windows::Foundation::Collections::VectorChangedEventHandler_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____lambda_ce333d0cb15dad9de596e78393bdefab___ @ 0x1802DE420
 * Callers:
 *     ??$InvokeVoid@V?$VectorChangedEventHandler@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@PE$AAU?$IObservableVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@234@PE$AAUIVectorChangedEventArgs@234@@EventSource@Platform@@QEAAXPEAUEventLock@Details@1@PE$AAU?$IObservableVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@PE$AAUIVectorChangedEventArgs@567@@Z @ 0x1802DE7B4 (--$InvokeVoid@V-$VectorChangedEventHandler@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experie.c)
 * Callees:
 *     __Platform_ReleaseSRWLockShared @ 0x180087FF2 (__Platform_ReleaseSRWLockShared.c)
 *     __Platform_AcquireSRWLockShared @ 0x180088016 (__Platform_AcquireSRWLockShared.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802B3920 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall Platform::EventSource::DoInvokeVoid_Windows::Foundation::Collections::VectorChangedEventHandler_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____lambda_ce333d0cb15dad9de596e78393bdefab___(
        Platform::Details **a1,
        RTL_SRWLOCK *a2,
        _QWORD *a3)
{
  _QWORD *v3; // r14
  struct Platform::Details::EventLock *v6; // r8
  Platform::Details *TargetArray; // rsi
  void *v8; // rdx
  unsigned int TargetArraySize; // r15d
  unsigned int i; // ebx
  _QWORD **TargetArrayEvent; // rdi
  __int64 v12; // r8
  __int64 v13; // rdx
  struct EventRegistrationToken v14; // r9
  int v15; // eax
  __int64 v16; // rcx
  __int64 *v17; // [rsp+20h] [rbp-78h]
  struct Platform::Details::EventLock *v19; // [rsp+28h] [rbp-70h] BYREF
  Platform::Details *v20; // [rsp+30h] [rbp-68h]
  _QWORD **v21; // [rsp+38h] [rbp-60h]
  _QWORD v22[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v23; // [rsp+50h] [rbp-48h] BYREF
  _OWORD v24[4]; // [rsp+58h] [rbp-40h] BYREF

  v22[1] = -2LL;
  v3 = a3;
  v20 = 0LL;
  v24[0] = 0LL;
  _Platform_AcquireSRWLockShared(a2);
  TargetArray = (Platform::Details *)Platform::Details::EventSourceGetTargetArray(*a1, v24, v6);
  _Platform_ReleaseSRWLockShared(a2);
  v20 = TargetArray;
  if ( TargetArray )
  {
    TargetArraySize = Platform::Details::EventSourceGetTargetArraySize(TargetArray, v8);
    LODWORD(v17) = TargetArraySize;
    for ( i = 0; i < TargetArraySize; ++i )
    {
      v19 = 0LL;
      try
      {
        v21 = 0LL;
        TargetArrayEvent = (_QWORD **)Platform::Details::EventSourceGetTargetArrayEvent(
                                        TargetArray,
                                        (void *)i,
                                        (unsigned int)&_uuidof__AV__VectorChangedEventHandler_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___Collections_Foundation_Windows__,
                                        &v19,
                                        v17);
        v21 = TargetArrayEvent;
        v12 = v3[1];
        v13 = *v3;
        if ( *TargetArrayEvent == &Windows::Foundation::Collections::VectorChangedEventHandler<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *>::`vftable'{for `__abi_IUnknown'} )
        {
          (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*TargetArrayEvent[37] + 8LL))(
            TargetArrayEvent[37],
            v13,
            v12);
        }
        else
        {
          v15 = ((__int64 (__fastcall *)(_QWORD **, __int64, __int64))(*TargetArrayEvent)[3])(
                  TargetArrayEvent,
                  v13,
                  v12);
          if ( v15 < 0 )
            __abi_WinRTraiseException(v15);
        }
        ((void (__fastcall *)(_QWORD **))(*TargetArrayEvent)[2])(TargetArrayEvent);
      }
      catch ( Platform::Exception *v23 )
      {
        if ( *(_DWORD *)(v23 + 64) != -2147023174
          && *(_DWORD *)(v23 + 64) != -2147417848
          && *(_DWORD *)(v23 + 64) != -1996357631 )
        {
          v22[0] = __abi_winrt_ptr_ctor(v23);
          throw (Platform::Exception **)v22;
        }
        Platform::Details::EventSourceRemove((Platform::Details *)a1, &a2->Ptr, v19, v14);
        v3 = a3;
        TargetArray = v20;
        TargetArraySize = (unsigned int)v17;
        continue;
      }
    }
  }
  if ( TargetArray )
    (*(void (__fastcall **)(Platform::Details *))(*(_QWORD *)TargetArray + 16LL))(TargetArray);
  v16 = v3[1];
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  if ( *v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 16LL))(*v3);
}
