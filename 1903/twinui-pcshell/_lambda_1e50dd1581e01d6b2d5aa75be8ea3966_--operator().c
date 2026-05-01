/*
 * XREFs of _lambda_1e50dd1581e01d6b2d5aa75be8ea3966_::operator() @ 0x180048EF4
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_1e50dd1581e01d6b2d5aa75be8ea3966___::Run @ 0x180048ED0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_1e50dd1581e01d6b2d5aa75be8ea3966___--.c)
 * Callees:
 *     ?CommitImportanceVector_@ViewManagerInteropTraceLogging@@QEAAXKAEBT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x1800362F8 (-CommitImportanceVector_@ViewManagerInteropTraceLogging@@QEAAXKAEBT_RM_ACTIVITY_IMPORTANCE@@@Z.c)
 *     ??$FrameWindowChanged@IAEAPEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEAPEAUHWND__@@AEBKAEAK@Z @ 0x18004BBC8 (--$FrameWindowChanged@IAEAPEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEAPEAUH.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Create@ViewManagerInteropTraceLogging@@IEAAXXZ @ 0x180297714 (-Create@ViewManagerInteropTraceLogging@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_1e50dd1581e01d6b2d5aa75be8ea3966_::operator()(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int16 v4; // cx
  __int64 v5; // rsi
  const union _RM_ACTIVITY_IMPORTANCE *v6; // r13
  int v7; // eax
  const char *v8; // r9
  __int64 result; // rax
  __int64 v10; // rcx
  int v11; // eax
  int v12; // esi
  _DWORD *v13; // rcx
  ViewManagerInteropTraceLogging *v14; // rcx
  _DWORD *v15; // rcx
  HWND *v16; // rax
  int v17; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  WINBOOL fPending; // [rsp+70h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+78h] [rbp+10h] BYREF
  int v21; // [rsp+80h] [rbp+18h] BYREF
  PSRWLOCK SRWLock; // [rsp+88h] [rbp+20h]

  v17 = -2;
  v2 = *(_QWORD *)(*a1 + 288LL);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 192LL))(v2);
    if ( *(_QWORD *)(*a1 + 144LL) != *(_QWORD *)a1[1] )
    {
      Context = 0LL;
      if ( InitOnceBeginInitialize(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
        && fPending )
      {
        Context = qword_180599F00;
        qword_180599F00[0] = &IamTraceLogging::`vftable';
        atexit(lambda_1807517bb2a601749b2ae4fbbb57858f_::_lambda_invoker_cdecl_);
        ViewManagerInteropTraceLogging::Create((ViewManagerInteropTraceLogging *)qword_180599F00);
        InitOnceComplete(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, qword_180599F00);
      }
      v15 = (_DWORD *)*((_QWORD *)Context + 1);
      if ( v15 && *v15 )
      {
        fPending = 0;
        v16 = (HWND *)a1[1];
        if ( *v16 )
          LODWORD(Context) = GetWindowThreadProcessId(*v16, (LPDWORD)&fPending);
        else
          LODWORD(Context) = 0;
        v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*a1 + 16LL) + 288LL))(*a1 + 16LL);
        ViewManagerInteropTraceLogging::FrameWindowChanged<unsigned int,HWND__ * &,unsigned long const &,unsigned long &>(
          &v21,
          a1[1],
          &Context,
          &fPending,
          -2LL);
      }
    }
    *(_QWORD *)(*a1 + 144LL) = *(_QWORD *)a1[1];
    v3 = *a1;
    if ( (*(_BYTE *)a1[2] & 1) != 0 || !*(_QWORD *)(v3 + 144) )
      v4 = 0;
    else
      v4 = 128;
    *(_WORD *)(v3 + 260) &= ~0x80u;
    *(_WORD *)(v3 + 260) |= v4;
    v5 = *a1;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*a1 + 288LL) + 208LL))(*(_QWORD *)(*a1 + 288LL));
    if ( !*(_BYTE *)(v5 + 568) )
    {
      v6 = (const union _RM_ACTIVITY_IMPORTANCE *)(v5 + 260);
      if ( *(_DWORD *)(v5 + 264) != *(_DWORD *)(v5 + 260) )
      {
        v10 = *(_QWORD *)(v5 + 104);
        if ( v10 )
        {
          v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 88LL))(v10);
          if ( v11 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0xBA4,
              (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
              (const char *)(unsigned int)v11,
              v17);
          *(_DWORD *)(v5 + 264) = *(_DWORD *)v6;
          v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v5 + 16) + 288LL))(v5 + 16);
          Context = 0LL;
          if ( InitOnceBeginInitialize(
                 &`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper,
                 0,
                 &fPending,
                 &Context)
            && fPending )
          {
            Context = qword_180599F00;
            qword_180599F00[0] = &IamTraceLogging::`vftable';
            atexit(lambda_1807517bb2a601749b2ae4fbbb57858f_::_lambda_invoker_cdecl_);
            ViewManagerInteropTraceLogging::Create((ViewManagerInteropTraceLogging *)qword_180599F00);
            InitOnceComplete(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, qword_180599F00);
          }
          v13 = (_DWORD *)*((_QWORD *)Context + 1);
          if ( v13 && *v13 )
          {
            Context = 0LL;
            if ( InitOnceBeginInitialize(
                   &`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper,
                   0,
                   &fPending,
                   &Context)
              && fPending )
            {
              Context = qword_180599F00;
              qword_180599F00[0] = &IamTraceLogging::`vftable';
              atexit(lambda_1807517bb2a601749b2ae4fbbb57858f_::_lambda_invoker_cdecl_);
              ViewManagerInteropTraceLogging::Create((ViewManagerInteropTraceLogging *)qword_180599F00);
              InitOnceComplete(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, qword_180599F00);
            }
            ViewManagerInteropTraceLogging::CommitImportanceVector_(v14, v12, v6);
          }
        }
      }
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*a1 + 288LL) + 240LL))(
           *(_QWORD *)(*a1 + 288LL),
           (*a1 + 16LL) & -(__int64)(*a1 != 0LL));
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x9E0,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v7,
        v17);
      JUMPOUT(0x1800E277BLL);
    }
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x9E2,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v8);
  }
  return result;
}
