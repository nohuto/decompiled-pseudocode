/*
 * XREFs of ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@URect@Foundation@5@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@URect@Foundation@5@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180090914
 * Callers:
 *     ?add_NotifyRelaunch@CortanaSharedExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@URect@Foundation@5@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180090E80 (-add_NotifyRelaunch@CortanaSharedExperienceManager@@UEAAJPEAU-$ITypedEventHandler@PEAVCortanaExp.c)
 *     ?Add@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@PEAVAppUsageStateChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_exception_policy@wil@@@wil@@QEAAXPEAU?$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@PEAVAppUsageStateChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x1800B0A5C (-Add@-$AsyncEventSourceT@U-$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockExclusive@Details@234@XZ @ 0x18004FD6C (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockExclusive@Details@234@XZ.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800500AC (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800500D4 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x180050628 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x1800508F0 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180050DC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Foundation::Rect>,Microsoft::WRL::InvokeModeOptions<2>>::AddInternal(
        char *a1,
        struct IUnknown *a2,
        void *a3,
        struct IUnknown **a4)
{
  __int64 v6; // rbx
  _QWORD *v9; // rcx
  __int64 v10; // rcx
  volatile int *v11; // rdx
  int v12; // edi
  _QWORD *v13; // rax
  void **v14; // rdi
  struct IUnknown **i; // rbx
  Microsoft::WRL::Details::EventTargetArray *v16; // rcx
  volatile int *v17; // rdx
  volatile int *v18; // rdx
  RTL_SRWLOCK *v20; // [rsp+20h] [rbp-10h] BYREF
  RTL_SRWLOCK *v21; // [rsp+28h] [rbp-8h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v22; // [rsp+60h] [rbp+30h] BYREF
  __int64 v23; // [rsp+78h] [rbp+48h] BYREF

  *a4 = 0LL;
  v6 = 0LL;
  v23 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive((__int64)(a1 + 16), (__int64)&v21);
  v9 = *(_QWORD **)a1;
  v22 = 0LL;
  if ( v9 )
    v10 = ((__int64)(v9[3] - v9[2]) >> 3) + 1;
  else
    v10 = 1LL;
  v20 = (RTL_SRWLOCK *)v10;
  v12 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
          &v22,
          (unsigned __int64 *)&v20);
  if ( v12 >= 0 )
  {
    v13 = *(_QWORD **)a1;
    if ( *(_QWORD *)a1 )
    {
      v14 = (void **)v13[4];
      for ( i = (struct IUnknown **)v13[2]; i != (struct IUnknown **)v13[3]; ++i )
      {
        Microsoft::WRL::Details::EventTargetArray::AddTail(v22, *i, *v14);
        v13 = *(_QWORD **)a1;
        ++v14;
      }
    }
    v16 = v22;
    *a4 = a2;
    Microsoft::WRL::Details::EventTargetArray::AddTail(v16, a2, a3);
    Microsoft::WRL::Wrappers::SRWLock::LockExclusive((__int64)(a1 + 8), (__int64)&v20);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v23, a1);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=((__int64 *)a1, (char *)&v22);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v20);
    if ( v22 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
        (__int64)v22,
        v17);
    v6 = v23;
    v12 = 0;
  }
  else if ( v22 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
      (__int64)v22,
      v11);
  }
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v21);
  if ( v6 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v6, v18);
  return (unsigned int)v12;
}
