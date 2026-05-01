/*
 * XREFs of ?UpdateDisplayRegions@WindowWrapperBase@@AEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@PEAU?$IVectorView@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@6@@Z @ 0x180049520
 * Callers:
 *     _lambda_88a6f648851480fde846e948b133eaba_::operator() @ 0x180047834 (_lambda_88a6f648851480fde846e948b133eaba_--operator().c)
 *     ?ChangeDisplayRegionIds@WindowWrapperBase@@UEAAJPEAU?$IVectorView@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@@Z @ 0x180073C20 (-ChangeDisplayRegionIds@WindowWrapperBase@@UEAAJPEAU-$IVectorView@UDisplayRegionId@WindowingEnvi.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f734c1787531bbb8bf09975f4ec8a2df___ @ 0x1800495A4 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_f734c1787531bbb8bf09975f4ec8a2df.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall WindowWrapperBase::UpdateDisplayRegions(__int64 a1, __int64 a2, __int64 a3)
{
  DWORD CurrentThreadId; // eax
  __int64 v4; // rcx
  int v5; // eax
  _QWORD v7[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  v10 = a3;
  v9 = a2;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 288) + 208LL))(*(_QWORD *)(a1 + 288));
  if ( v10 )
  {
    v7[0] = &v9;
    v7[1] = &v10;
    CurrentThreadId = GetCurrentThreadId();
    v5 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f734c1787531bbb8bf09975f4ec8a2df___(
           v4,
           CurrentThreadId,
           v7);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xBBA,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v5,
        -2);
      __debugbreak();
      JUMPOUT(0x1800E2897LL);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBAF,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)0x80070057LL,
      -2);
    return 2147942487LL;
  }
}
