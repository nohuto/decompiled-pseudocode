/*
 * XREFs of ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@PEAVAppUsageStateChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18008E0A8
 * Callers:
 *     Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_2b4e52e002df5ddb490bb6e80dcb767a__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Foundation::Rect___ @ 0x18008DC68 (Microsoft--WRL--InvokeTraits_2_--InvokeDelegates__lambda_2b4e52e002df5ddb490bb6e80dcb767a__Windo.c)
 *     Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_b3a123d132742ed9bb736a7f1db72d4f__Windows::Foundation::ITypedEventHandler_Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager___Windows::Internal::FamilySafety::AppLimits::AppUsageStateChangedEventArgs_____ @ 0x1800A05F0 (Microsoft--WRL--InvokeTraits_2_--InvokeDelegates__lambda_b3a123d132742ed9bb736a7f1db72d4f__Windo.c)
 *     ?remove_AppUsageStateChanged@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x1800A5800 (-remove_AppUsageStateChanged@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAA.c)
 *     ?remove_NotifyRelaunch@CortanaSharedExperienceManager@@UEAAJUEventRegistrationToken@@@Z @ 0x180181CB0 (-remove_NotifyRelaunch@CortanaSharedExperienceManager@@UEAAJUEventRegistrationToken@@@Z.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockExclusive@Details@234@XZ @ 0x18004D77C (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockExclusive@Details@234@XZ.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18004DC78 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18004DCA0 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x18004E458 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x18004ECB8 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005E750 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *,Windows::Internal::FamilySafety::AppLimits::AppUsageStateChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
        char *a1,
        struct IUnknown *a2)
{
  volatile signed __int32 *v4; // rdi
  __int64 v5; // rax
  struct IUnknown **v6; // rcx
  Microsoft::WRL::Details::EventTargetArray *v7; // rbx
  bool v8; // r12
  __int64 v9; // r13
  RTL_SRWLOCK *v10; // r13
  int v11; // ebx
  struct IUnknown **v12; // r15
  void **v13; // rdi
  RTL_SRWLOCK *v15[2]; // [rsp+20h] [rbp-10h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v16; // [rsp+70h] [rbp+40h] BYREF
  volatile signed __int32 *v17; // [rsp+80h] [rbp+50h] BYREF
  RTL_SRWLOCK *v18; // [rsp+88h] [rbp+58h] BYREF

  v4 = 0LL;
  v17 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive((__int64)(a1 + 16), (__int64)v15);
  v5 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
  {
LABEL_20:
    v11 = 0;
    goto LABEL_21;
  }
  v6 = *(struct IUnknown ***)(v5 + 16);
  v7 = 0LL;
  v8 = 0;
  v9 = *(_QWORD *)(v5 + 24) - (_QWORD)v6;
  v16 = 0LL;
  v10 = (RTL_SRWLOCK *)((v9 >> 3) - 1);
  v18 = v10;
  if ( !v10 )
  {
    v8 = *v6 == a2;
    goto LABEL_16;
  }
  v11 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64 &>(
          &v16,
          (unsigned __int64 *)&v18);
  if ( v11 >= 0 )
  {
    v7 = v16;
    v12 = *(struct IUnknown ***)(*(_QWORD *)a1 + 16LL);
    if ( v12 == *(struct IUnknown ***)(*(_QWORD *)a1 + 24LL) )
    {
LABEL_18:
      if ( v7 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v7);
      goto LABEL_20;
    }
    v13 = *(void ***)(*(_QWORD *)a1 + 32LL);
    do
    {
      if ( v8 || a2 != *v12 )
      {
        if ( !v10 )
          break;
        Microsoft::WRL::Details::EventTargetArray::AddTail(v7, *v12, *v13++);
        v10 = (RTL_SRWLOCK *)((char *)v10 - 1);
      }
      else
      {
        v8 = 1;
      }
      ++v12;
    }
    while ( v12 != *(struct IUnknown ***)(*(_QWORD *)a1 + 24LL) );
    v4 = v17;
LABEL_16:
    if ( v8 )
    {
      Microsoft::WRL::Wrappers::SRWLock::LockExclusive((__int64)(a1 + 8), (__int64)&v18);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=((__int64 *)&v17, a1);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=((__int64 *)a1, (char *)&v16);
      Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v18);
      v4 = v17;
      v7 = v16;
    }
    goto LABEL_18;
  }
  if ( v16 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v16);
LABEL_21:
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(v15);
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v4);
  return (unsigned int)v11;
}
