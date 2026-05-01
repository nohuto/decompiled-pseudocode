/*
 * XREFs of ?reset@?$shared_object@V?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18005EC94
 * Callers:
 *     ??_E?$CAsyncCallbackWithLambda@V_lambda_829df63d4f4da6954880c71339f9350f_@@@@UEAAPEAXI@Z @ 0x18003BCA0 (--_E-$CAsyncCallbackWithLambda@V_lambda_829df63d4f4da6954880c71339f9350f_@@@@UEAAPEAXI@Z.c)
 *     NotificationDispatcher::RunAsync__lambda_4181134c5161f261fff3e61f273c9fd8___ @ 0x18003BDE0 (NotificationDispatcher--RunAsync__lambda_4181134c5161f261fff3e61f273c9fd8___.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18003C140 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ??1RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@QEAA@XZ @ 0x18012B940 (--1RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@QEAA@XZ.c)
 *     ??4?$shared_object@V?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAAEAV012@AEBV012@@Z @ 0x18012BA20 (--4-$shared_object@V-$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0Is.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x1800EA3D0 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 */

void __fastcall wil::details::shared_object<wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v2; // rbx
  volatile signed __int32 *v3; // rcx
  HANDLE ProcessHeap; // rax
  HANDLE v5; // rax
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( *a1 )
  {
    if ( _InterlockedExchangeAdd(*a1, 0xFFFFFFFF) == 1 )
    {
      v2 = *a1;
      if ( *a1 )
      {
        v3 = (volatile signed __int32 *)*((_QWORD *)v2 + 29);
        if ( v3 )
        {
          if ( _InterlockedExchangeAdd(v3, 0xFFFFFFFF) == 1 )
          {
            ProcessHeap = GetProcessHeap();
            HeapFree(ProcessHeap, 0, *((LPVOID *)v2 + 29));
          }
          *((_QWORD *)v2 + 29) = 0LL;
          *((_QWORD *)v2 + 30) = 0LL;
        }
        if ( *((_BYTE *)v2 + 72) )
        {
          v5 = GetProcessHeap();
          HeapFree(v5, 0, *((LPVOID *)v2 + 8));
          *((_BYTE *)v2 + 72) = 0;
        }
        *((_QWORD *)v2 + 8) = 0LL;
        if ( *((_DWORD *)v2 + 2) == 1 )
        {
          Context = 0LL;
          *((_DWORD *)v2 + 2) = 2;
          if ( InitOnceBeginInitialize(
                 &`ApplicationViewManagementLogging::Instance'::`2'::wrapper,
                 0,
                 &fPending,
                 &Context) )
          {
            if ( fPending )
            {
              Context = qword_18050F870;
              qword_18050F870[0] = &ShellScreenClippingLogging::`vftable';
              qword_18050F888 = (struct _TlgProvider_t *)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
              atexit(lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
              wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F870, qword_18050F888);
              InitOnceComplete(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, qword_18050F870);
            }
          }
          _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context + 1), v2 + 4);
        }
        *((_DWORD *)v2 + 2) = 3;
        operator delete((void *)v2, (const struct std::nothrow_t *)0x100);
      }
    }
    *a1 = 0LL;
  }
}
