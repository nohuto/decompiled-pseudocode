/*
 * XREFs of ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@PEAVAppUsageStateChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180090C88
 * Callers:
 *     Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_2b4e52e002df5ddb490bb6e80dcb767a__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Foundation::Rect___ @ 0x180090840 (Microsoft--WRL--InvokeTraits_2_--InvokeDelegates__lambda_2b4e52e002df5ddb490bb6e80dcb767a__Windo.c)
 *     Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_b3a123d132742ed9bb736a7f1db72d4f__Windows::Foundation::ITypedEventHandler_Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager___Windows::Internal::FamilySafety::AppLimits::AppUsageStateChangedEventArgs_____ @ 0x1800AEF20 (Microsoft--WRL--InvokeTraits_2_--InvokeDelegates__lambda_b3a123d132742ed9bb736a7f1db72d4f__Windo.c)
 *     ?remove_AppUsageStateChanged@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x1800B4130 (-remove_AppUsageStateChanged@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAA.c)
 *     ?remove_NotifyRelaunch@CortanaSharedExperienceManager@@UEAAJUEventRegistrationToken@@@Z @ 0x1801A0D20 (-remove_NotifyRelaunch@CortanaSharedExperienceManager@@UEAAJUEventRegistrationToken@@@Z.c)
 * Callees:
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x18004F520 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockExclusive@Details@234@XZ @ 0x18004FD6C (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockExclusive@Details@234@XZ.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800500AC (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800500D4 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x180050628 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180050DC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *,Windows::Internal::FamilySafety::AppLimits::AppUsageStateChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
        char *a1,
        struct IUnknown *a2)
{
  __int64 v4; // rdi
  volatile int *v5; // rdx
  __int64 v6; // rax
  struct IUnknown **v7; // rcx
  Microsoft::WRL::Details::EventTargetArray *v8; // rbx
  bool v9; // r12
  __int64 v10; // r13
  RTL_SRWLOCK *v11; // r13
  int v12; // ebx
  struct IUnknown **v13; // r15
  void **v14; // rdi
  volatile int *v15; // rdx
  RTL_SRWLOCK *v17[2]; // [rsp+20h] [rbp-10h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v18; // [rsp+70h] [rbp+40h] BYREF
  __int64 v19; // [rsp+80h] [rbp+50h] BYREF
  RTL_SRWLOCK *v20; // [rsp+88h] [rbp+58h] BYREF

  v4 = 0LL;
  v19 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive((__int64)(a1 + 16), (__int64)v17);
  v6 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
  {
LABEL_20:
    v12 = 0;
    goto LABEL_21;
  }
  v7 = *(struct IUnknown ***)(v6 + 16);
  v8 = 0LL;
  v9 = 0;
  v10 = *(_QWORD *)(v6 + 24) - (_QWORD)v7;
  v18 = 0LL;
  v11 = (RTL_SRWLOCK *)((v10 >> 3) - 1);
  v20 = v11;
  if ( !v11 )
  {
    v9 = *v7 == a2;
    goto LABEL_16;
  }
  v12 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64 &>(
          &v18,
          (unsigned __int64 *)&v20);
  if ( v12 >= 0 )
  {
    v8 = v18;
    v13 = *(struct IUnknown ***)(*(_QWORD *)a1 + 16LL);
    if ( v13 == *(struct IUnknown ***)(*(_QWORD *)a1 + 24LL) )
    {
LABEL_18:
      if ( v8 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
          (__int64)v8,
          v5);
      goto LABEL_20;
    }
    v14 = *(void ***)(*(_QWORD *)a1 + 32LL);
    do
    {
      if ( v9 || a2 != *v13 )
      {
        if ( !v11 )
          break;
        Microsoft::WRL::Details::EventTargetArray::AddTail(v8, *v13, *v14++);
        v11 = (RTL_SRWLOCK *)((char *)v11 - 1);
      }
      else
      {
        v9 = 1;
      }
      ++v13;
    }
    while ( v13 != *(struct IUnknown ***)(*(_QWORD *)a1 + 24LL) );
    v4 = v19;
LABEL_16:
    if ( v9 )
    {
      Microsoft::WRL::Wrappers::SRWLock::LockExclusive((__int64)(a1 + 8), (__int64)&v20);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v19, a1);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=((__int64 *)a1, (char *)&v18);
      Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v20);
      v4 = v19;
      v8 = v18;
    }
    goto LABEL_18;
  }
  if ( v18 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
      (__int64)v18,
      v5);
LABEL_21:
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(v17);
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v4, v15);
  return (unsigned int)v12;
}
