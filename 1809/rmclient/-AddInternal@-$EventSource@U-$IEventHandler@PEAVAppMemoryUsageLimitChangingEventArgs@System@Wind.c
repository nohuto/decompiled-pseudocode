/*
 * XREFs of ?AddInternal@?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180002640
 * Callers:
 *     ?Add@?$AgileEventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x1800025A8 (-Add@-$AgileEventSource@U-$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows.c)
 * Callees:
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x180002358 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x180002D60 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800040C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180006D1C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180009BE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
        Microsoft::WRL::Details::EventTargetArray *a1,
        Microsoft::WRL::Details::EventTargetArray *a2,
        __int64 a3,
        Microsoft::WRL::Details::EventTargetArray **a4)
{
  __int64 v7; // rax
  int v8; // ebx
  Microsoft::WRL::Details::EventTargetArray *v9; // rbx
  Microsoft::WRL::Details::EventTargetArray **v10; // rsi
  Microsoft::WRL::Details::EventTargetArray *v11; // rax
  __int64 v12; // rdi
  struct IUnknown **v14; // r14
  void **i; // r15
  Microsoft::WRL::Details::EventTargetArray *v16; // [rsp+50h] [rbp+8h] BYREF
  __int64 v17; // [rsp+68h] [rbp+20h] BYREF

  v16 = a1;
  *a4 = 0LL;
  AcquireSRWLockExclusive(&stru_1800226E8);
  v16 = 0LL;
  if ( Windows::System::CMemoryManager::s_limitChangeEvent )
    v7 = ((__int64)(*(_QWORD *)(Windows::System::CMemoryManager::s_limitChangeEvent + 24)
                  - *(_QWORD *)(Windows::System::CMemoryManager::s_limitChangeEvent + 16)) >> 3)
       + 1;
  else
    v7 = 1LL;
  v17 = v7;
  v8 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
         &v16,
         &v17);
  if ( v8 < 0 )
  {
    if ( v16 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v16);
    ReleaseSRWLockExclusive(&stru_1800226E8);
    return (unsigned int)v8;
  }
  else
  {
    v9 = v16;
    if ( Windows::System::CMemoryManager::s_limitChangeEvent )
    {
      v14 = *(struct IUnknown ***)(Windows::System::CMemoryManager::s_limitChangeEvent + 16);
      for ( i = *(void ***)(Windows::System::CMemoryManager::s_limitChangeEvent + 32);
            v14 != *(struct IUnknown ***)(Windows::System::CMemoryManager::s_limitChangeEvent + 24);
            ++v14 )
      {
        Microsoft::WRL::Details::EventTargetArray::AddTail(v9, *v14, *i++);
      }
    }
    *a4 = a2;
    v10 = (Microsoft::WRL::Details::EventTargetArray **)*((_QWORD *)v9 + 3);
    v11 = *v10;
    if ( *v10 != a2 )
    {
      if ( a2 )
      {
        (*(void (__fastcall **)(Microsoft::WRL::Details::EventTargetArray *))(*(_QWORD *)a2 + 8LL))(a2);
        v11 = *v10;
      }
      v16 = v11;
      *v10 = a2;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
    }
    *(_QWORD *)(*((_QWORD *)v9 + 4) + 8 * ((__int64)(*((_QWORD *)v9 + 3) - *((_QWORD *)v9 + 2)) >> 3)) = a3;
    *((_QWORD *)v9 + 3) += 8LL;
    AcquireSRWLockExclusive(&stru_1800226E0);
    v12 = Windows::System::CMemoryManager::s_limitChangeEvent;
    Windows::System::CMemoryManager::s_limitChangeEvent = (__int64)v9;
    ReleaseSRWLockExclusive(&stru_1800226E0);
    ReleaseSRWLockExclusive(&stru_1800226E8);
    if ( v12 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v12);
    return 0LL;
  }
}
