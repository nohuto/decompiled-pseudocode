/*
 * XREFs of ?OnCommitLimitChangeRoutine@CMemoryManager@System@Windows@@CGX_K0@Z @ 0x10008790
 * Callers:
 *     ?CommitMemoryLimitChangeCallback@ModernResourceManagerProxy@@SGJU_WNF_STATE_NAME@@KPAU_WNF_TYPE_ID@@PAXPBXK@Z @ 0x100086D0 (-CommitMemoryLimitChangeCallback@ModernResourceManagerProxy@@SGJU_WNF_STATE_NAME@@KPAU_WNF_TYPE_.c)
 * Callees:
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_fa4066cff981cf6e25503d416ba3b572__Windows::Foundation::IEventHandler_Windows::System::AppMemoryUsageLimitChangingEventArgs_____ @ 0x10007B2B (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_fa4066cff981cf6e25503d416ba3b572__Wind.c)
 *     ?Release@AppMemoryUsageLimitChangingEventArgs@System@Windows@@UAGKXZ @ 0x10008220 (-Release@AppMemoryUsageLimitChangingEventArgs@System@Windows@@UAGKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UAGKXZ @ 0x10008230 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryUsageLi.c)
 *     ??$Make@VAppMemoryUsageLimitChangingEventArgs@System@Windows@@AA_KAA_K@Details@WRL@Microsoft@@YG?AV?$ComPtr@VAppMemoryUsageLimitChangingEventArgs@System@Windows@@@12@AA_K0@Z @ 0x10008830 (--$Make@VAppMemoryUsageLimitChangingEventArgs@System@Windows@@AA_KAA_K@Details@WRL@Microsoft@@YG.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UAGKXZ @ 0x100094C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

void __stdcall Windows::System::CMemoryManager::OnCommitLimitChangeRoutine(unsigned __int64 a1, unsigned __int64 a2)
{
  Windows::System::AppMemoryUsageLimitChangingEventArgs **v2; // eax
  Windows::System::AppMemoryUsageLimitChangingEventArgs *v3; // esi
  volatile signed __int32 *v4; // edi
  Microsoft::WRL::Details::EventTargetArray *v5; // eax
  int (__stdcall *v6)(Windows::System::AppMemoryUsageLimitChangingEventArgs *); // edi
  Windows::System::AppMemoryUsageLimitChangingEventArgs *v7; // [esp-4h] [ebp-14h]
  Windows::System::AppMemoryUsageLimitChangingEventArgs *v8; // [esp+4h] [ebp-Ch] BYREF
  int v9; // [esp+8h] [ebp-8h] BYREF
  Windows::System::AppMemoryUsageLimitChangingEventArgs *v10; // [esp+Ch] [ebp-4h]

  v2 = (Windows::System::AppMemoryUsageLimitChangingEventArgs **)Microsoft::WRL::Details::Make<Windows::System::AppMemoryUsageLimitChangingEventArgs,unsigned __int64 &,unsigned __int64 &>(&a2);
  v3 = *v2;
  *v2 = 0;
  if ( v10 )
  {
    v7 = v10;
    v10 = 0;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IAppMemoryUsageLimitChangingEventArgs,Microsoft::WRL::FtmBase>::Release(v7);
  }
  if ( v3 )
  {
    v8 = v3;
    v9 = 0;
    v4 = 0;
    AcquireSRWLockExclusive(&SRWLock);
    v5 = Windows::System::CMemoryManager::s_limitChangeEvent;
    if ( Windows::System::CMemoryManager::s_limitChangeEvent )
    {
      _InterlockedIncrement((volatile signed __int32 *)Windows::System::CMemoryManager::s_limitChangeEvent + 2);
      v4 = (volatile signed __int32 *)v5;
    }
    ReleaseSRWLockExclusive(&SRWLock);
    if ( v4 )
    {
      Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_fa4066cff981cf6e25503d416ba3b572__Windows::Foundation::IEventHandler_Windows::System::AppMemoryUsageLimitChangingEventArgs_____(
        v4,
        &v9,
        (int *)&v8);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((Microsoft::WRL::Details::EventTargetArray *)v4);
    }
    v6 = *(int (__stdcall **)(Windows::System::AppMemoryUsageLimitChangingEventArgs *))(*(_DWORD *)v3 + 8);
    if ( v6 == Windows::System::AppMemoryUsageLimitChangingEventArgs::Release )
      Windows::System::AppMemoryUsageLimitChangingEventArgs::Release(v3);
    else
      ((void (__thiscall *)(int (__stdcall *)(Windows::System::AppMemoryUsageLimitChangingEventArgs *), Windows::System::AppMemoryUsageLimitChangingEventArgs *))v6)(
        v6,
        v3);
  }
}
