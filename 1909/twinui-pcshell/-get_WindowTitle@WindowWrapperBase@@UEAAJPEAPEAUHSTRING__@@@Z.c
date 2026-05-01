/*
 * XREFs of ?get_WindowTitle@WindowWrapperBase@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1802C8670
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_LightweightWindows@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180151860 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_LightweightWindows@@@wil@@CAX_NW4Rep.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_a574284282a20813f4e744272f7d9ec0___ @ 0x1802C4AC8 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_a574284282a20813f4e744272f7d9ec0.c)
 */

__int64 __fastcall WindowWrapperBase::get_WindowTitle(WindowWrapperBase *this, HSTRING *a2, __int64 a3)
{
  DWORD CurrentThreadId; // eax
  unsigned int v5; // ecx
  int v6; // eax
  const char *v7; // r9
  __int64 result; // rax
  __int128 v9; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HSTRING *v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = a2;
  try
  {
    wil::Feature<__WilFeatureTraits_Feature_LightweightWindows>::ReportUsageToService((__int64)this, (__int64)a2, a3);
    *(_QWORD *)&v9 = &v11;
    *((_QWORD *)&v9 + 1) = (char *)this - 8;
    CurrentThreadId = GetCurrentThreadId();
    v6 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_a574284282a20813f4e744272f7d9ec0___(
           v5,
           CurrentThreadId,
           &v9);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1087LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x448,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v7);
  }
  return result;
}
