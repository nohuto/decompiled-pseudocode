/*
 * XREFs of ?Remove@?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18000DE5C
 * Callers:
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_971d44314bc06fe495c30d812f15643d__Windows::Foundation::IEventHandler_IInspectable_____ptr64___ @ 0x180008C54 (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_971d44314bc06fe495c30d812f15643d__Wind.c)
 *     ?remove_AppMemoryUsageDecreased@CMemoryManager@System@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x18000E260 (-remove_AppMemoryUsageDecreased@CMemoryManager@System@Windows@@UEAAJUEventRegistrationToken@@@Z.c)
 *     ?remove_AppMemoryUsageIncreased@CMemoryManager@System@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x18000E280 (-remove_AppMemoryUsageIncreased@CMemoryManager@System@Windows@@UEAAJUEventRegistrationToken@@@Z.c)
 * Callees:
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x180002358 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800040C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x18000CD14 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18000CFB0 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2)
{
  RTL_SRWLOCK *v2; // r14
  __int64 v4; // rbx
  volatile int *v6; // rdx
  RTL_SRWLOCK v7; // rax
  int v8; // esi
  struct IUnknown **v9; // rcx
  bool v10; // r12
  __int64 v11; // r13
  __int64 v12; // r13
  struct IUnknown **v13; // rsi
  void **v14; // r14
  Microsoft::WRL::Details::EventTargetArray *v16; // [rsp+60h] [rbp+40h] BYREF
  __int64 v17; // [rsp+70h] [rbp+50h] BYREF
  __int64 v18; // [rsp+78h] [rbp+58h] BYREF

  v2 = a1 + 2;
  v4 = 0LL;
  v17 = 0LL;
  AcquireSRWLockExclusive(a1 + 2);
  v7.Ptr = a1->Ptr;
  if ( !a1->Ptr )
  {
    v8 = 0;
LABEL_8:
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
    return (unsigned int)v8;
  }
  v9 = (struct IUnknown **)*((_QWORD *)v7.Ptr + 2);
  v10 = 0;
  v11 = *((_QWORD *)v7.Ptr + 3);
  v16 = 0LL;
  v12 = ((v11 - (__int64)v9) >> 3) - 1;
  v18 = v12;
  if ( !v12 )
  {
    v10 = *v9 == a2;
LABEL_19:
    if ( v10 )
    {
      AcquireSRWLockExclusive(a1 + 1);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v17, (volatile int *)a1);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=((__int64 *)a1, (volatile int *)&v16);
      if ( a1 != (RTL_SRWLOCK *)-8LL )
        ReleaseSRWLockExclusive(a1 + 1);
      v4 = v17;
    }
    goto LABEL_23;
  }
  v8 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64 &>(
         &v16,
         (unsigned __int64 *)&v18);
  if ( v8 < 0 )
  {
    if ( v16 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
        (__int64)v16,
        v6);
    goto LABEL_8;
  }
  v13 = (struct IUnknown **)*((_QWORD *)a1->Ptr + 2);
  if ( v13 != *((struct IUnknown ***)a1->Ptr + 3) )
  {
    v14 = (void **)*((_QWORD *)a1->Ptr + 4);
    do
    {
      if ( v10 || a2 != *v13 )
      {
        if ( !v12 )
          break;
        Microsoft::WRL::Details::EventTargetArray::AddTail(v16, *v13, *v14++);
        --v12;
      }
      else
      {
        v10 = 1;
      }
      ++v13;
    }
    while ( v13 != *((struct IUnknown ***)a1->Ptr + 3) );
    v2 = a1 + 2;
    goto LABEL_19;
  }
LABEL_23:
  if ( v16 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
      (__int64)v16,
      v6);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  v8 = 0;
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v4, v6);
  return (unsigned int)v8;
}
