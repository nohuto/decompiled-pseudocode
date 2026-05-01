/*
 * XREFs of ??$InvokeAll@PEAVCortanaSharedExperienceManager@@URect@Foundation@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@URect@Foundation@5@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCortanaSharedExperienceManager@@URect@Foundation@Windows@@@Z @ 0x1800907B0
 * Callers:
 *     ?OnNotifyRelaunch@CortanaExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z @ 0x180090BB0 (-OnNotifyRelaunch@CortanaExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockExclusive@Details@234@XZ @ 0x18004FD6C (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockExclusive@Details@234@XZ.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800500AC (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180050418 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180050DC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_2b4e52e002df5ddb490bb6e80dcb767a__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Foundation::Rect___ @ 0x180090840 (Microsoft--WRL--InvokeTraits_2_--InvokeDelegates__lambda_2b4e52e002df5ddb490bb6e80dcb767a__Windo.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Foundation::Rect>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CortanaSharedExperienceManager *,Windows::Foundation::Rect>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v4; // edi
  volatile int *v5; // rdx
  __int64 v7; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v8[2]; // [rsp+30h] [rbp-20h] BYREF
  RTL_SRWLOCK *v9[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v10; // [rsp+68h] [rbp+18h] BYREF

  v10 = a2;
  v8[1] = a3;
  v4 = 0;
  v8[0] = &v10;
  v7 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive((__int64)(a1 + 1), (__int64)v9);
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v7, a1);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(v9);
  if ( v7 )
  {
    v4 = Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_2b4e52e002df5ddb490bb6e80dcb767a__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Foundation::Rect___(
           v8,
           v7,
           a1);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v7, v5);
  }
  return v4;
}
