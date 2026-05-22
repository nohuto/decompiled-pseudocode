/*
 * XREFs of ?On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z @ 0x1800555F0
 * Callers:
 *     ?Initialize@MPCInputRouter@@AEAAJXZ @ 0x18001FD48 (-Initialize@MPCInputRouter@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x180020148 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ??4?$ComPtr@UISpatialObject@Holographic@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUISpatialObject@Holographic@Internal@Windows@@@Z @ 0x180053A80 (--4-$ComPtr@UISpatialObject@Holographic@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUISpati.c)
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x18005464C (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x180055DA4 (-UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x18007C3B0 (-GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 */

void __fastcall MPCInputRouter::On3DCompositorRunningChanged(MPCInputRouter *this, char a2)
{
  __int64 *v2; // rdi
  RTL_SRWLOCK *Instance; // rax
  struct IMPCInputPostProcessor *PostProcessor; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  const char *v8; // r9

  v2 = (__int64 *)((char *)this + 856);
  if ( a2 )
  {
    Instance = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
    PostProcessor = MPC3DStateHelper::GetPostProcessor(Instance);
    Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialObject>::operator=(v2, (__int64)PostProcessor);
    MPCInputRouter::Initialize3DComponents(this, v6, v7, v8);
  }
  else
  {
    MPCInputRouter::UnInitialize3DComponents(this);
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(v2);
  }
}
