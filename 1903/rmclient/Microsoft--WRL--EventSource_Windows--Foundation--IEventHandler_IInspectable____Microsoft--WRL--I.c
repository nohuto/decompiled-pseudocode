/*
 * XREFs of Microsoft::WRL::EventSource_Windows::Foundation::IEventHandler_IInspectable____Microsoft::WRL::InvokeModeOptions__2___::DoInvoke__lambda_c8fac60120d0355ff66629c823b43c3a___ @ 0x100078A0
 * Callers:
 *     ?OnCommitLevelChangeRoutine@CMemoryManager@System@Windows@@CGXPAU_RM_COMMIT_LEVEL_CHANGE_PAYLOAD@@@Z @ 0x10007860 (-OnCommitLevelChangeRoutine@CMemoryManager@System@Windows@@CGXPAU_RM_COMMIT_LEVEL_CHANGE_PAYLOAD.c)
 * Callees:
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_c8fac60120d0355ff66629c823b43c3a__Windows::Foundation::IEventHandler_IInspectable_____ @ 0x100078FC (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_c8fac60120d0355ff66629c823b43c3a__Wind.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UAGKXZ @ 0x100094C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

int __thiscall Microsoft::WRL::EventSource_Windows::Foundation::IEventHandler_IInspectable____Microsoft::WRL::InvokeModeOptions__2___::DoInvoke__lambda_c8fac60120d0355ff66629c823b43c3a___(
        RTL_SRWLOCK *this,
        int a2,
        int a3)
{
  Microsoft::WRL::Details::EventTargetArray *Ptr; // esi
  RTL_SRWLOCK *v5; // edi
  int v7; // edi

  Ptr = 0;
  v5 = this + 1;
  AcquireSRWLockExclusive(this + 1);
  if ( this->Ptr )
  {
    Ptr = (Microsoft::WRL::Details::EventTargetArray *)this->Ptr;
    _InterlockedIncrement((volatile signed __int32 *)this->Ptr + 2);
  }
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  if ( !Ptr )
    return 0;
  v7 = Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_c8fac60120d0355ff66629c823b43c3a__Windows::Foundation::IEventHandler_IInspectable_____(
         a2,
         a3);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(Ptr);
  return v7;
}
