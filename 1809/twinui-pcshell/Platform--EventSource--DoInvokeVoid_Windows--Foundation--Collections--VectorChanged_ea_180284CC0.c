/*
 * XREFs of Platform::EventSource::DoInvokeVoid_Windows::Foundation::Collections::VectorChangedEventHandler_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64___lambda_691217d92eb9936284588ea727e6ccf8___ @ 0x180284CC0
 * Callers:
 *     ??$InvokeVoid@V?$VectorChangedEventHandler@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@PE$AAU?$IObservableVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@234@PE$AAUIVectorChangedEventArgs@234@@EventSource@Platform@@QEAAXPEAUEventLock@Details@1@PE$AAU?$IObservableVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@PE$AAUIVectorChangedEventArgs@567@@Z @ 0x180285058 (--$InvokeVoid@V-$VectorChangedEventHandler@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experie.c)
 * Callees:
 *     __Platform_ReleaseSRWLockShared @ 0x180085300 (__Platform_ReleaseSRWLockShared.c)
 *     __Platform_AcquireSRWLockShared @ 0x180085324 (__Platform_AcquireSRWLockShared.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18025B6D4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall Platform::EventSource::DoInvokeVoid_Windows::Foundation::Collections::VectorChangedEventHandler_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64___lambda_691217d92eb9936284588ea727e6ccf8___(
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
  int v17; // eax
  __int64 *v18; // [rsp+20h] [rbp-78h]
  struct Platform::Details::EventLock *v20; // [rsp+28h] [rbp-70h] BYREF
  Platform::Details *v21; // [rsp+30h] [rbp-68h]
  _QWORD **v22; // [rsp+38h] [rbp-60h]
  _QWORD v23[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v24; // [rsp+50h] [rbp-48h] BYREF
  _OWORD v25[4]; // [rsp+58h] [rbp-40h] BYREF

  v23[1] = -2LL;
  v3 = a3;
  v21 = 0LL;
  v25[0] = 0LL;
  _Platform_AcquireSRWLockShared(a2);
  TargetArray = (Platform::Details *)Platform::Details::EventSourceGetTargetArray(*a1, v25, v6);
  _Platform_ReleaseSRWLockShared(a2);
  v21 = TargetArray;
  if ( TargetArray )
  {
    TargetArraySize = Platform::Details::EventSourceGetTargetArraySize(TargetArray, v8);
    LODWORD(v18) = TargetArraySize;
    for ( i = 0; i < TargetArraySize; ++i )
    {
      v20 = 0LL;
      try
      {
        v22 = 0LL;
        TargetArrayEvent = (_QWORD **)Platform::Details::EventSourceGetTargetArrayEvent(
                                        TargetArray,
                                        (void *)i,
                                        (unsigned int)&_uuidof__AV__VectorChangedEventHandler_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___Collections_Foundation_Windows__,
                                        &v20,
                                        v18);
        v22 = TargetArrayEvent;
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
      catch ( Platform::Exception *v24 )
      {
        v17 = *(_DWORD *)(v24 + 64);
        if ( v17 != -2147023174 && v17 != -2147417848 && v17 != -2146823277 && v17 != -1996357631 )
        {
          v23[0] = __abi_winrt_ptr_ctor(v24);
          throw (Platform::Exception **)v23;
        }
        Platform::Details::EventSourceRemove((Platform::Details *)a1, &a2->Ptr, v20, v14);
        v3 = a3;
        TargetArray = v21;
        TargetArraySize = (unsigned int)v18;
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
