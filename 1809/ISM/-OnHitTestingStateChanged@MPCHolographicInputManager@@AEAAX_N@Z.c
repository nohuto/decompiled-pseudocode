/*
 * XREFs of ?OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z @ 0x180042A70
 * Callers:
 *     ??0MPCHolographicInputManager@@AEAA@XZ @ 0x18003F964 (--0MPCHolographicInputManager@@AEAA@XZ.c)
 * Callees:
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x18003A930 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x18003AFD4 (-GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     ?Initialize3DComponents@MPCHolographicInputManager@@AEAAXXZ @ 0x18003FD94 (-Initialize3DComponents@MPCHolographicInputManager@@AEAAXXZ.c)
 *     ?UnInitialize3DComponents@MPCHolographicInputManager@@AEAAXXZ @ 0x180040040 (-UnInitialize3DComponents@MPCHolographicInputManager@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCHolographicInputManager::OnHitTestingStateChanged(MPCHolographicInputManager *this, char a2)
{
  RTL_SRWLOCK *Instance; // rax
  struct IMPCInputPostProcessor *PostProcessor; // rax
  struct IMPCInputPostProcessor *v5; // rcx
  struct IMPCInputPostProcessor *v6; // rdi
  __int64 v7; // rcx

  if ( a2 )
  {
    Instance = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
    PostProcessor = MPC3DStateHelper::GetPostProcessor(Instance);
    v5 = (struct IMPCInputPostProcessor *)*((_QWORD *)this + 236);
    v6 = PostProcessor;
    if ( v5 != PostProcessor )
    {
      if ( PostProcessor )
      {
        (*(void (__fastcall **)(struct IMPCInputPostProcessor *))(*(_QWORD *)PostProcessor + 8LL))(PostProcessor);
        v5 = (struct IMPCInputPostProcessor *)*((_QWORD *)this + 236);
      }
      *((_QWORD *)this + 236) = v6;
      if ( v5 )
        (*(void (__fastcall **)(struct IMPCInputPostProcessor *))(*(_QWORD *)v5 + 16LL))(v5);
    }
    MPCHolographicInputManager::Initialize3DComponents(this);
  }
  else
  {
    MPCHolographicInputManager::UnInitialize3DComponents(this);
    v7 = *((_QWORD *)this + 236);
    if ( v7 )
    {
      *((_QWORD *)this + 236) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
}
