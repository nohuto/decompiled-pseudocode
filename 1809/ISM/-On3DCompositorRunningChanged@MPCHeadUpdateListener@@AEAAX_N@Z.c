/*
 * XREFs of ?On3DCompositorRunningChanged@MPCHeadUpdateListener@@AEAAX_N@Z @ 0x18005B490
 * Callers:
 *     ?Initialize@MPCHeadUpdateListener@@AEAAXXZ @ 0x18005AC54 (-Initialize@MPCHeadUpdateListener@@AEAAXXZ.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x18003A930 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x18003AFD4 (-GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCHeadUpdateListener::On3DCompositorRunningChanged(MPCHeadUpdateListener *this, char a2)
{
  RTL_SRWLOCK *Instance; // rax
  struct IMPCInputPostProcessor *PostProcessor; // rcx
  __int64 (__fastcall *v6)(struct IMPCInputPostProcessor *, _QWORD); // rax
  int v7; // eax
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Instance = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
  PostProcessor = MPC3DStateHelper::GetPostProcessor(Instance);
  v6 = *(__int64 (__fastcall **)(struct IMPCInputPostProcessor *, _QWORD))(*(_QWORD *)PostProcessor + 88LL);
  if ( a2 )
  {
    v7 = v6(PostProcessor, MPCHeadUpdateListener::OnHeadEventOccurred);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x95,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadupdatelistener.cpp",
        (const char *)(unsigned int)v7);
      __debugbreak();
    }
    *((_WORD *)this + 96) = 257;
  }
  else
  {
    v8 = v6(PostProcessor, 0LL);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x9D,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadupdatelistener.cpp",
        (const char *)(unsigned int)v8);
      JUMPOUT(0x18005B52ELL);
    }
    *((_BYTE *)this + 192) = 0;
    *((_BYTE *)this + 194) = 1;
  }
}
