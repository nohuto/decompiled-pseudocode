/*
 * XREFs of ?get_DisplayRegionIds@WindowWrapperBase@@UEAAJPEAPEAU?$IVectorView@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@@Z @ 0x180251650
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180066A44 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowWrapperBase::get_DisplayRegionIds(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  const char *v7; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+48h] [rbp+10h] BYREF

  try
  {
    v3 = a1;
    if ( !a2 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1162LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)0x80070057LL);
    (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(v3 + 264) + 192LL))(*(_QWORD *)(v3 + 264), &SRWLock);
    *a2 = 0LL;
    wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsageToService(v5, v4, v6);
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4A2,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v7);
  }
  return result;
}
