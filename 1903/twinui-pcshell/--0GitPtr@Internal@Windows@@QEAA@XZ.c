/*
 * XREFs of ??0GitPtr@Internal@Windows@@QEAA@XZ @ 0x1801411C0
 * Callers:
 *     ??0?$GitInvokeHelper@U?$VectorChangedEventHandler@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@VGitPtr@Internal@4@$01@Details@Internal@Windows@@QEAA@XZ @ 0x180140B58 (--0-$GitInvokeHelper@U-$VectorChangedEventHandler@UDisplayRegionId@WindowingEnvironment@Applicat.c)
 *     ??0?$GitInvokeHelper@U?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Internal@3@$01@Details@Internal@Windows@@QEAA@XZ @ 0x1801527E0 (--0-$GitInvokeHelper@U-$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@.c)
 * Callees:
 *     ?Acquire@Git@Details@Internal@Windows@@QEAAJXZ @ 0x18010F750 (-Acquire@Git@Details@Internal@Windows@@QEAAJXZ.c)
 */

Windows::Internal::GitPtr *__fastcall Windows::Internal::GitPtr::GitPtr(Windows::Internal::GitPtr *this)
{
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &Windows::Internal::GitPtrImpl<Windows::Internal::GitPtr>::`vftable';
  *((_DWORD *)this + 3) = Windows::Internal::Details::Git::Acquire(this);
  *(_QWORD *)this = &Windows::Internal::GitPtr::`vftable';
  return this;
}
