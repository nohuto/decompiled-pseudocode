/*
 * XREFs of ?reset@?$shared_object@V?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18006B44C
 * Callers:
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x18003EC80 (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     ??_G?$CTaskWrapper@V_lambda_5b180c0ca92e82d68f6c8a12cad9fd8b_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180041120 (--_G-$CTaskWrapper@V_lambda_5b180c0ca92e82d68f6c8a12cad9fd8b_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800411FC (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvi.c)
 *     ??1?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18006F0AC (--1-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ??4?$shared_object@V?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAAEAV012@AEBV012@@Z @ 0x1803B0A6C (--4-$shared_object@V-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag__ea_1803B0A6C.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x1800EA3D0 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 */

void __fastcall wil::details::shared_object<wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(
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
          if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) )
          {
            if ( fPending )
            {
              Context = qword_18050F938;
              qword_18050F938[0] = &ShellScreenClippingLogging::`vftable';
              qword_18050F950 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
              atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
              wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F938, qword_18050F950);
              InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18050F938);
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
