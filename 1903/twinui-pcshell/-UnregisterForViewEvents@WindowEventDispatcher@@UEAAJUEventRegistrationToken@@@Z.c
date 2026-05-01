/*
 * XREFs of ?UnregisterForViewEvents@WindowEventDispatcher@@UEAAJUEventRegistrationToken@@@Z @ 0x1802817B0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180036894 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180036E68 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180039014 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_Servicing_RestartManager_25418657@@@wil@@SA_NXZ @ 0x18008D310 (-__private_IsEnabled@-$Feature@U__WilFeatureTraits_Feature_Servicing_RestartManager_25418657@@@w.c)
 *     ??1?$shared_ptr@VUwpAppViewInfo@@@std@@QEAA@XZ @ 0x1800A7A94 (--1-$shared_ptr@VUwpAppViewInfo@@@std@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?WindowEventDispatcher_UnregisteringForWindowEvents@ViewManagerInteropTraceLogging@@SAXXZ @ 0x180281FB4 (-WindowEventDispatcher_UnregisteringForWindowEvents@ViewManagerInteropTraceLogging@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowEventDispatcher::UnregisterForViewEvents(RTL_SRWLOCK *this, struct EventRegistrationToken a2)
{
  __int64 v4; // r12
  _QWORD *v5; // rdx
  __int64 *v6; // r15
  __int64 *v7; // r13
  __int64 *Ptr; // rsi
  std::_Ref_count_base *v9; // rcx
  _QWORD *v10; // r15
  _QWORD *v11; // r13
  __int64 v12; // rsi
  PVOID v13; // rsi
  unsigned int v14; // eax
  int v15; // eax
  _QWORD *v16; // r15
  _QWORD *v17; // r13
  __int64 v18; // rsi
  PVOID v19; // rsi
  unsigned int v20; // eax
  int v21; // eax
  unsigned int v22; // edi
  const char *v23; // r9
  __int64 result; // rax
  __int128 v25; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v26[16]; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v27[24]; // [rsp+48h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  __int64 (__fastcall *v29)(PVOID, _QWORD, _QWORD); // [rsp+90h] [rbp+8h]
  __int64 (__fastcall *v30)(PVOID, _QWORD, _QWORD); // [rsp+90h] [rbp+8h]

  ViewManagerInteropTraceLogging::WindowEventDispatcher_UnregisteringForWindowEvents();
  v25 = 0LL;
  AcquireSRWLockExclusive(this + 57);
  v4 = ((char *)this[52].Ptr - (char *)this[51].Ptr) >> 4;
  try
  {
    while ( v4 )
    {
      v5 = (char *)this[51].Ptr + 16 * v4 - 16;
      if ( *(_QWORD *)(*v5 + 32LL) == a2.value )
      {
        std::shared_ptr<ViewEventRegistration>::operator=(&v25, v5);
        v6 = (__int64 *)((char *)this[51].Ptr + 16 * v4);
        v7 = v6 - 2;
        Ptr = (__int64 *)this[52].Ptr;
        if ( v6 != Ptr )
        {
          do
          {
            std::shared_ptr<ViewEventRegistration>::operator=(v7, v6);
            v7 += 2;
            v6 += 2;
          }
          while ( v6 != Ptr );
          Ptr = (__int64 *)this[52].Ptr;
        }
        v9 = (std::_Ref_count_base *)*(Ptr - 1);
        if ( v9 )
        {
          std::_Ref_count_base::_Decref(v9);
          Ptr = (__int64 *)this[52].Ptr;
        }
        this[52].Ptr = Ptr - 2;
        if ( wil::Feature<__WilFeatureTraits_Feature_Servicing_RestartManager_25418657>::__private_IsEnabled((__int64)v9) )
        {
          if ( (*(_BYTE *)(v25 + 16) & 0x20) == 0 )
          {
            v10 = this[44].Ptr;
            v11 = this[45].Ptr;
            while ( v10 != v11 )
            {
              v12 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*v10 + 264LL))(
                                             *v10,
                                             v26)
                              + 32LL);
              std::shared_ptr<UwpAppViewInfo>::~shared_ptr<UwpAppViewInfo>((__int64)v26);
              if ( v12 == a2.value )
              {
                v13 = this[37].Ptr;
                v29 = *(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD))(*(_QWORD *)v13 + 56LL);
                v14 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v10 + 288LL))(*v10);
                v15 = v29(v13, v14, 0LL);
                if ( v15 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x1FA,
                    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                    (const char *)(unsigned int)v15);
              }
              ++v10;
            }
          }
        }
        else
        {
          v16 = this[44].Ptr;
          v17 = this[45].Ptr;
          while ( v16 != v17 )
          {
            v18 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*v16 + 264LL))(
                                           *v16,
                                           v27)
                            + 32LL);
            std::shared_ptr<UwpAppViewInfo>::~shared_ptr<UwpAppViewInfo>((__int64)v27);
            if ( v18 == a2.value )
            {
              v19 = this[37].Ptr;
              v30 = *(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD))(*(_QWORD *)v19 + 56LL);
              v20 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v16 + 288LL))(*v16);
              v21 = v30(v19, v20, 0LL);
              if ( v21 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x207,
                  (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                  (const char *)(unsigned int)v21);
            }
            ++v16;
          }
        }
      }
      --v4;
    }
    v22 = (_QWORD)v25 == 0LL ? 0x80070490 : 0;
    if ( this != (RTL_SRWLOCK *)-456LL )
      ReleaseSRWLockExclusive(this + 57);
    std::shared_ptr<UwpAppViewInfo>::~shared_ptr<UwpAppViewInfo>((__int64)&v25);
    result = v22;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x20F,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v23);
  }
  return result;
}
