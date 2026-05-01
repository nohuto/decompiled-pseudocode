/*
 * XREFs of ?Revoke@?$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@QEAAJXZ @ 0x180167E30
 * Callers:
 *     ??$CreateGitHelper@U?$VectorChangedEventHandler@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@VGitPtr@Internal@4@@Details@Internal@Windows@@YAJPEAU?$VectorChangedEventHandler@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@2@PEAPEAU3452@@Z @ 0x18015F098 (--$CreateGitHelper@U-$VectorChangedEventHandler@UDisplayRegionId@WindowingEnvironment@Applicatio.c)
 *     ??_E?$GitInvokeHelper@U?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Internal@3@$01@Details@Internal@Windows@@UEAAPEAXI@Z @ 0x180161150 (--_E-$GitInvokeHelper@U-$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows.c)
 *     ??_E?$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@UEAAPEAXI@Z @ 0x1801611C0 (--_E-$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@UEAAPEAXI@Z.c)
 *     ??$CreateGitHelper@U?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Internal@3@@Details@Internal@Windows@@YAJPEAU?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@2@PEAPEAU342@@Z @ 0x1801717F8 (--$CreateGitHelper@U-$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@P.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::GitPtrImpl<Windows::Internal::GitPtr>::Revoke(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_DWORD *)(a1 + 8) )
  {
    result = *(unsigned int *)(a1 + 12);
    if ( (int)result >= 0 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_1805C27E8 + 32LL))(qword_1805C27E8);
  }
  *(_DWORD *)(a1 + 8) = 0;
  return result;
}
