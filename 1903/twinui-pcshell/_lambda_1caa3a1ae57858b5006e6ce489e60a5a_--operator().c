/*
 * XREFs of _lambda_1caa3a1ae57858b5006e6ce489e60a5a_::operator() @ 0x180035714
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_1caa3a1ae57858b5006e6ce489e60a5a___::Run @ 0x1800356F0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_1caa3a1ae57858b5006e6ce489e60a5a___--.c)
 * Callees:
 *     ??$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@Z @ 0x1800359E8 (--$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerI.c)
 *     ?Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z @ 0x1800364FC (-Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z.c)
 *     ??$WindowReadiness_PendingPositionAdded@AEBQEAUHWND__@@AEA_KAEBJAEBJ@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEA_KAEBJ2@Z @ 0x1800691F4 (--$WindowReadiness_PendingPositionAdded@AEBQEAUHWND__@@AEA_KAEBJAEBJ@ViewManagerInteropTraceLogg.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall lambda_1caa3a1ae57858b5006e6ce489e60a5a_::operator()(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  int v3; // esi
  int v4; // r12d
  _DWORD *v5; // r14
  char v6; // r13
  _QWORD *v7; // r15
  _DWORD *v8; // rbx
  char v9; // si
  __int64 v10; // rcx
  unsigned __int64 v12; // [rsp+80h] [rbp+8h] BYREF

  v1 = *a1;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*a1 + 288) + 208LL))(*(_QWORD *)(*a1 + 288));
  if ( !*(_BYTE *)(v1 + 512) )
    return 0LL;
  if ( !*(_DWORD *)(v1 + 304) )
    return 0LL;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v1 + 104LL))(v1) )
    return 0LL;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 96LL))(v1);
  if ( !SetWindowPos(
          (HWND)*(int *)(v1 + 304),
          0LL,
          (int)*(float *)(v1 + 496),
          (int)*(float *)(v1 + 500),
          (int)*(float *)(v1 + 504),
          (int)*(float *)(v1 + 508),
          0x14415u) )
    return 0LL;
  v2 = v1 + 368;
  v3 = (int)*(float *)(v1 + 508);
  v4 = (int)*(float *)(v1 + 504);
  v5 = (_DWORD *)(v1 + 376);
  v6 = *(_DWORD *)(v1 + 376) == 0;
  v7 = (_QWORD *)(v1 + 396);
  v8 = (_DWORD *)(v1 + 400);
  if ( v4 != *(_DWORD *)v7 || v3 != *v8 )
  {
    if ( *(_BYTE *)(v2 + 24) )
    {
      WindowReadyState::WaitFlags::Set(v5, v2, 2LL);
      BeginLayoutUpdate(*(_QWORD *)v2);
    }
    v12 = __PAIR64__(v3, v4);
    *v7 = __PAIR64__(v3, v4);
  }
  v9 = 1;
  ++*(_QWORD *)(v2 + 16);
  ViewManagerInteropTraceLogging::WindowReadiness_PendingPositionAdded<HWND__ * const &,unsigned __int64 &,long const &,long const &>(
    v2,
    v2 + 16,
    v7,
    v8);
  LODWORD(v12) = *v5;
  *v5 = v12 | 8;
  ViewManagerInteropTraceLogging::WindowReadiness_FlagChange<HWND__ * const &,enum WindowReadinessWaitFlags const &,enum WindowReadinessWaitFlags &>(
    v2,
    &v12,
    v5);
  if ( !*(_QWORD *)v2 || *v5 )
    v9 = 0;
  if ( v6 == v9 )
    return 0LL;
  LOBYTE(v12) = v9;
  v10 = *(_QWORD *)(v2 + 96);
  if ( v10 )
  {
    (*(void (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v10 + 16LL))(v10, &v12);
    return 0LL;
  }
  std::_Xbad_function_call();
  return (unsigned int)v12;
}
