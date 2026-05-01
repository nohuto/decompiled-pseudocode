/*
 * XREFs of ?RemoveWindowingEnvironmentConfig@WindowingEnvironmentManager@@UEAAJW4WindowingEnvironmentType@@@Z @ 0x1802AC7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f27b60bae871d07517fb334ba178f733___ @ 0x1802AB2C8 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_f27b60bae871d07517fb334ba178f733.c)
 *     ?count@?$_Tree@V?$_Tmap_traits@W4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@U?$less@W4WindowingEnvironmentType@@@std@@V?$allocator@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEBA_KAEBW4WindowingEnvironmentType@@@Z @ 0x1802ACF68 (-count@-$_Tree@V-$_Tmap_traits@W4WindowingEnvironmentType@@V-$com_ptr_t@UIWindowingEnvironmentCo.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowingEnvironmentManager::RemoveWindowingEnvironmentConfig(RTL_SRWLOCK *a1, int a2)
{
  RTL_SRWLOCK *v3; // rbx
  __int64 v4; // rax
  DWORD CurrentThreadId; // eax
  unsigned int v6; // ecx
  int v7; // eax
  const char *v8; // r9
  __int64 result; // rax
  __int128 v10; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = a2;
  v3 = a1 + 3;
  AcquireSRWLockExclusive(a1 + 3);
  v4 = std::_Tree<std::_Tmap_traits<enum WindowingEnvironmentType,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>,std::less<enum WindowingEnvironmentType>,std::allocator<std::pair<enum WindowingEnvironmentType const,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>>>,0>>::count(
         &a1[4],
         &v12);
  try
  {
    if ( !v4 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        166LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
        (const char *)0x80070057LL);
    *(_QWORD *)&v10 = a1 - 17;
    *((_QWORD *)&v10 + 1) = &v12;
    CurrentThreadId = GetCurrentThreadId();
    v7 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f27b60bae871d07517fb334ba178f733___(
           v6,
           CurrentThreadId,
           &v10);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        211LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
        (const char *)(unsigned int)v7);
    if ( v3 )
      ReleaseSRWLockExclusive(v3);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xD7,
                           (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
                           v8);
  }
  return result;
}
