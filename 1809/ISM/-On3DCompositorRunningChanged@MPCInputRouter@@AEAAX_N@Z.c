/*
 * XREFs of ?On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z @ 0x180007900
 * Callers:
 *     ?CreateSystemInputRouter@@YAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x1800059E0 (-CreateSystemInputRouter@@YAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x180006C80 (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x18000701C (-UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x18003A930 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x18003AFD4 (-GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCInputRouter::On3DCompositorRunningChanged(MPCInputRouter *this, char a2)
{
  RTL_SRWLOCK *Instance; // rax
  struct IMPCInputPostProcessor *PostProcessor; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  const char *v7; // r9
  struct IMPCInputPostProcessor *v8; // rcx
  struct IMPCInputPostProcessor *v9; // rdi
  __int64 v10; // rcx

  if ( a2 )
  {
    Instance = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
    PostProcessor = MPC3DStateHelper::GetPostProcessor(Instance);
    v8 = (struct IMPCInputPostProcessor *)*((_QWORD *)this + 101);
    v9 = PostProcessor;
    if ( v8 != PostProcessor )
    {
      if ( PostProcessor )
      {
        (*(void (__fastcall **)(struct IMPCInputPostProcessor *))(*(_QWORD *)PostProcessor + 8LL))(PostProcessor);
        v8 = (struct IMPCInputPostProcessor *)*((_QWORD *)this + 101);
      }
      *((_QWORD *)this + 101) = v9;
      if ( v8 )
        (*(void (__fastcall **)(struct IMPCInputPostProcessor *))(*(_QWORD *)v8 + 16LL))(v8);
    }
    MPCInputRouter::Initialize3DComponents(this, v5, v6, v7);
  }
  else
  {
    MPCInputRouter::UnInitialize3DComponents(this);
    v10 = *((_QWORD *)this + 101);
    if ( v10 )
    {
      *((_QWORD *)this + 101) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
}
