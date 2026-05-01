/*
 * XREFs of _lambda_60221e79019ecf56c4402e49e3564341_::operator() @ 0x180021294
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_60221e79019ecf56c4402e49e3564341___::Run @ 0x180021270 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_60221e79019ecf56c4402e49e3564341___--.c)
 * Callees:
 *     ??$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@Z @ 0x18002167C (--$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerI.c)
 *     ??$WindowReadiness_PendingPositionAdded@AEBQEAUHWND__@@AEA_KAEBJAEBJ@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEA_KAEBJ2@Z @ 0x1800612CC (--$WindowReadiness_PendingPositionAdded@AEBQEAUHWND__@@AEA_KAEBJAEBJ@ViewManagerInteropTraceLogg.c)
 *     ?Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z @ 0x18007C8B8 (-Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall lambda_60221e79019ecf56c4402e49e3564341_::operator()(__int64 *a1)
{
  __int64 v1; // rbx
  int v2; // r14d
  int v3; // r13d
  _QWORD *v4; // rsi
  _DWORD *v5; // r15
  __int64 v6; // rdi
  char v7; // r14
  __int64 v8; // rcx
  unsigned int v10; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v11; // [rsp+88h] [rbp+10h] BYREF

  v1 = *a1;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*a1 + 280) + 200LL))(*(_QWORD *)(*a1 + 280));
  if ( !*(_BYTE *)(v1 + 496) )
    return 0LL;
  if ( !*(_DWORD *)(v1 + 296) )
    return 0LL;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v1 + 104LL))(v1) )
    return 0LL;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 96LL))(v1);
  if ( !SetWindowPos(
          (HWND)*(int *)(v1 + 296),
          0LL,
          (int)*(float *)(v1 + 480),
          (int)*(float *)(v1 + 484),
          (int)*(float *)(v1 + 488),
          (int)*(float *)(v1 + 492),
          0x14415u) )
    return 0LL;
  v2 = (int)*(float *)(v1 + 492);
  v3 = (int)*(float *)(v1 + 488);
  v4 = (_QWORD *)(v1 + 360);
  v5 = (_DWORD *)(v1 + 368);
  LOBYTE(v10) = *(_DWORD *)(v1 + 368) == 0;
  if ( v3 == *(_DWORD *)(v1 + 388) )
  {
    v6 = v1 + 392;
    if ( v2 == *(_DWORD *)(v1 + 392) )
      goto LABEL_7;
  }
  else
  {
    v6 = v1 + 392;
  }
  if ( *(_BYTE *)(v1 + 384) )
  {
    WindowReadyState::WaitFlags::Set(v1 + 368, v1 + 360, 2LL);
    BeginLayoutUpdate(*v4);
  }
  v11 = __PAIR64__(v2, v3);
  *(_QWORD *)(v1 + 388) = __PAIR64__(v2, v3);
LABEL_7:
  v7 = 1;
  ++*(_QWORD *)(v1 + 376);
  ViewManagerInteropTraceLogging::WindowReadiness_PendingPositionAdded<HWND__ * const &,unsigned __int64 &,long const &,long const &>(
    v1 + 360,
    v1 + 376,
    v1 + 388,
    v6);
  LODWORD(v11) = *v5;
  *v5 = v11 | 8;
  ViewManagerInteropTraceLogging::WindowReadiness_FlagChange<HWND__ * const &,enum WindowReadinessWaitFlags const &,enum WindowReadinessWaitFlags &>(
    v1 + 360,
    &v11,
    v1 + 368);
  if ( !*v4 || *v5 )
    v7 = 0;
  if ( (_BYTE)v10 == v7 )
    return 0LL;
  LOBYTE(v10) = v7;
  v8 = *(_QWORD *)(v1 + 456);
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v8 + 16LL))(v8, &v10);
    return 0LL;
  }
  std::_Xbad_function_call();
  return v10;
}
