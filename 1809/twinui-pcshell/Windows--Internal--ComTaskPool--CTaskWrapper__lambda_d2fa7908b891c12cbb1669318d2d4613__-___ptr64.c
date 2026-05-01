/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d2fa7908b891c12cbb1669318d2d4613__&___ptr64_::Run @ 0x18007A140
 * Callers:
 *     <none>
 * Callees:
 *     ?ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppressionReason@2@@Z @ 0x180128194 (-ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppress.c)
 *     ?_SetFrameCloakSerialized@CFrameApplicationPresentation@@AEAAXW4__MIDL___MIDL_itf_privilegedoperations_0000_0002_0001@@@Z @ 0x180128D50 (-_SetFrameCloakSerialized@CFrameApplicationPresentation@@AEAAXW4__MIDL___MIDL_itf_privilegedoper.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d2fa7908b891c12cbb1669318d2d4613______ptr64_::Run(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)(v2 + 220) == 1 )
  {
    CFrameApplicationPresentation::FrameSystemVisual::ShowSplashScreen(v2 + 216, 2LL);
    v3 = *(_QWORD *)(a1 + 24);
    if ( *(_BYTE *)(v3 + 52) )
      CFrameApplicationPresentation::_SetFrameCloakSerialized(v3, 0LL);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
}
