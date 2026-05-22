/*
 * XREFs of ?Unregister3DCompositor@MPC3DStateHelper@@QEAAXXZ @ 0x18007C650
 * Callers:
 *     ?Unregister3DCompositor@@YAHXZ @ 0x1800533A0 (-Unregister3DCompositor@@YAHXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?On3DCompositorStateChanged@MPC3DStateHelper@@AEAA_N_N@Z @ 0x18007C49C (-On3DCompositorStateChanged@MPC3DStateHelper@@AEAA_N_N@Z.c)
 */

void __fastcall MPC3DStateHelper::Unregister3DCompositor(PSRWLOCK SRWLock)
{
  DWORD v2; // eax
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( MPC3DStateHelper::On3DCompositorStateChanged(SRWLock, 0) )
  {
    v2 = WaitForSingleObjectEx(SRWLock[9].Ptr, 0xFFFFFFFF, 0);
    if ( v2 != 258 )
    {
      if ( v2 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          2512LL,
          (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
          v3);
        __debugbreak();
      }
    }
  }
  AcquireSRWLockExclusive(SRWLock);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&SRWLock[3]);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
