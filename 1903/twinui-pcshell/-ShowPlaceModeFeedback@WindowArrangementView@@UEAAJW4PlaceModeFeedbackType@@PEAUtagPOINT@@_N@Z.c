/*
 * XREFs of ?ShowPlaceModeFeedback@WindowArrangementView@@UEAAJW4PlaceModeFeedbackType@@PEAUtagPOINT@@_N@Z @ 0x1803C36C0
 * Callers:
 *     ?ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x1803C3858 (-ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEBUPlaceModeFeedbackTarget@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1803C14CC (-EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEB.c)
 *     ?ResetPlaceModeIdleTimer@WindowArrangementView@@AEAAXXZ @ 0x1803C3180 (-ResetPlaceModeIdleTimer@WindowArrangementView@@AEAAXXZ.c)
 *     ?SetPlaceModeIdleAnimationEnabled@WindowArrangementView@@AEAAX_N@Z @ 0x1803C32B8 (-SetPlaceModeIdleAnimationEnabled@WindowArrangementView@@AEAAX_N@Z.c)
 */

__int64 __fastcall WindowArrangementView::ShowPlaceModeFeedback(__int64 a1, unsigned int a2, __int64 *a3, char a4)
{
  __int64 *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // edi
  WindowArrangementView *v11; // rcx
  __int64 v12; // rdx
  int v13; // eax
  unsigned int v14; // ebx
  char v16[16]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v17; // [rsp+40h] [rbp-58h] BYREF
  __int128 v18; // [rsp+50h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 266) )
    return 0LL;
  if ( a4 )
  {
    (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(a1 + 32) + 120LL))(*(_QWORD *)(a1 + 32), &v18);
    v7 = *(__int64 **)(a1 + 56);
    v8 = *a3;
    v9 = *v7;
    v17 = v18;
    (*(void (__fastcall **)(__int64 *, __int64, __int128 *, _QWORD, char *))(v9 + 48))(v7, v8, &v17, a2, v16);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 56) + 56LL))(*(_QWORD *)(a1 + 56));
    v16[0] = 1;
  }
  v10 = 2;
  v11 = (WindowArrangementView *)(a1 - 48);
  if ( a2 == 2 )
    WindowArrangementView::SetPlaceModeIdleAnimationEnabled(v11, 0);
  else
    WindowArrangementView::ResetPlaceModeIdleTimer(v11);
  if ( !v16[0] && *(_DWORD *)(a1 + 248) != 2 && !*(_DWORD *)(a1 + 260) && a2 != 4 )
    return 0LL;
  *(_DWORD *)(a1 + 260) = 0;
  if ( *(_DWORD *)(a1 + 248) )
    WindowArrangementView::SetPlaceModeIdleAnimationEnabled((WindowArrangementView *)(a1 - 48), 1);
  (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(a1 + 56) + 64LL))(*(_QWORD *)(a1 + 56), &v18);
  v12 = 0LL;
  if ( DWORD1(v18) == 5 )
    v12 = 4 - (unsigned int)((_DWORD)v18 != 2);
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**(_QWORD **)(a1 + 32) + 168LL))(
    *(_QWORD *)(a1 + 32),
    v12,
    0LL,
    0LL);
  if ( a2 != 4 )
    v10 = 0;
  v13 = WindowArrangementView::EnablePlaceModeDropFeedback(a1 - 48, v10, (int *)&v18, 0LL);
  v14 = v13;
  if ( v13 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x39E,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
    (const char *)(unsigned int)v13);
  return v14;
}
