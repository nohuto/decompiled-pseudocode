/*
 * XREFs of ?UnregisterForViewEvents@WindowEventDispatcher@@UEAAJUEventRegistrationToken@@@Z @ 0x1802A0CA0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001F104 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18001F7E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180021994 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?WindowEventDispatcher_UnregisteringForWindowEvents@ViewManagerInteropTraceLogging@@SAXXZ @ 0x1802A13F4 (-WindowEventDispatcher_UnregisteringForWindowEvents@ViewManagerInteropTraceLogging@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowEventDispatcher::UnregisterForViewEvents(RTL_SRWLOCK *this, struct EventRegistrationToken a2)
{
  const char *v4; // r9
  __int64 v5; // r15
  std::_Ref_count_base *v6; // r12
  _QWORD *v7; // rdx
  __int64 *v8; // r13
  __int64 *v9; // r12
  __int64 *Ptr; // r14
  std::_Ref_count_base *v11; // rcx
  _QWORD *v12; // r14
  _QWORD *v13; // rax
  __int64 v14; // r13
  PVOID v15; // r13
  unsigned int v16; // eax
  int v17; // eax
  __int64 result; // rax
  std::_Ref_count_base *v19[2]; // [rsp+28h] [rbp-60h] BYREF
  char v20[8]; // [rsp+38h] [rbp-50h] BYREF
  std::_Ref_count_base *v21; // [rsp+40h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  __int64 (__fastcall *v23)(PVOID, _QWORD, _QWORD); // [rsp+90h] [rbp+8h]
  _QWORD *v24; // [rsp+A0h] [rbp+18h]

  ViewManagerInteropTraceLogging::WindowEventDispatcher_UnregisteringForWindowEvents();
  *(_OWORD *)v19 = 0LL;
  AcquireSRWLockExclusive(this + 57);
  v5 = ((char *)this[52].Ptr - (char *)this[51].Ptr) >> 4;
  v6 = 0LL;
  try
  {
    while ( v5 )
    {
      v7 = (char *)this[51].Ptr + 16 * v5 - 16;
      if ( *(_QWORD *)(*v7 + 32LL) == a2.value )
      {
        std::shared_ptr<ViewEventRegistration>::operator=(v19, v7);
        v8 = (__int64 *)((char *)this[51].Ptr + 16 * v5);
        v9 = v8 - 2;
        Ptr = (__int64 *)this[52].Ptr;
        if ( v8 != Ptr )
        {
          do
          {
            std::shared_ptr<ViewEventRegistration>::operator=(v9, v8);
            v9 += 2;
            v8 += 2;
          }
          while ( v8 != Ptr );
          Ptr = (__int64 *)this[52].Ptr;
        }
        v11 = (std::_Ref_count_base *)*(Ptr - 1);
        if ( v11 )
        {
          std::_Ref_count_base::_Decref(v11);
          Ptr = (__int64 *)this[52].Ptr;
        }
        this[52].Ptr = Ptr - 2;
        v6 = v19[0];
        if ( (*((_BYTE *)v19[0] + 16) & 0x20) == 0 )
        {
          v12 = this[44].Ptr;
          v13 = this[45].Ptr;
          v24 = v13;
          while ( v12 != v13 )
          {
            v14 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v12 + 264LL))(
                                           *v12,
                                           v20)
                            + 32LL);
            if ( v21 )
              std::_Ref_count_base::_Decref(v21);
            if ( v14 == a2.value )
            {
              v15 = this[37].Ptr;
              v23 = *(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD))(*(_QWORD *)v15 + 56LL);
              v16 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v12 + 288LL))(*v12);
              v17 = v23(v15, v16, 0LL);
              if ( v17 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x1F8,
                  (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                  (const char *)(unsigned int)v17);
            }
            ++v12;
            v13 = v24;
          }
        }
      }
      --v5;
    }
    if ( this != (RTL_SRWLOCK *)-456LL )
      ReleaseSRWLockExclusive(this + 57);
    if ( v19[1] )
      std::_Ref_count_base::_Decref(v19[1]);
    result = v6 == 0LL ? 0x80070490 : 0;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x200,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v4);
  }
  return result;
}
