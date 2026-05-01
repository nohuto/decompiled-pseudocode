/*
 * XREFs of ?WindowAdded@WindowWrapperBase@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@UWindowId@3456@W4WindowCreatedType@@@Z @ 0x180070760
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_88a6f648851480fde846e948b133eaba___ @ 0x1800707F4 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_88a6f648851480fde846e948b133eaba.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall WindowWrapperBase::WindowAdded(__int64 a1, __int64 a2, int a3, int a4)
{
  DWORD CurrentThreadId; // eax
  __int64 v6; // rcx
  int v7; // eax
  _QWORD v9[6]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v11; // [rsp+68h] [rbp+10h] BYREF
  int v12; // [rsp+70h] [rbp+18h] BYREF
  int v13; // [rsp+78h] [rbp+20h] BYREF

  v13 = a4;
  v12 = a3;
  v11 = a2;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 272) + 208LL))(*(_QWORD *)(a1 + 272));
  v9[0] = a1 - 16;
  v9[1] = &v11;
  v9[2] = &v12;
  v9[3] = &v13;
  CurrentThreadId = GetCurrentThreadId();
  v7 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_88a6f648851480fde846e948b133eaba___(
         v6,
         CurrentThreadId,
         v9);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x640,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v7,
      -2);
    __debugbreak();
    JUMPOUT(0x180112D4CLL);
  }
  return 0LL;
}
