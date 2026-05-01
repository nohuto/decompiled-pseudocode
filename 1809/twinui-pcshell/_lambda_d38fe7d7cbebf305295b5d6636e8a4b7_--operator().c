/*
 * XREFs of _lambda_d38fe7d7cbebf305295b5d6636e8a4b7_::operator() @ 0x18002DB34
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_d38fe7d7cbebf305295b5d6636e8a4b7___::Run @ 0x18002DB10 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_d38fe7d7cbebf305295b5d6636e8a4b7___--.c)
 * Callees:
 *     ?CommitImportanceVector_@ViewManagerInteropTraceLogging@@QEAAXKAEBT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x18006D42C (-CommitImportanceVector_@ViewManagerInteropTraceLogging@@QEAAXKAEBT_RM_ACTIVITY_IMPORTANCE@@@Z.c)
 *     ??$FrameWindowChanged@IAEAPEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEAPEAUHWND__@@AEBKAEAK@Z @ 0x18007304C (--$FrameWindowChanged@IAEAPEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEAPEAUH.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?Create@ViewManagerInteropTraceLogging@@IEAAXXZ @ 0x180241644 (-Create@ViewManagerInteropTraceLogging@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_d38fe7d7cbebf305295b5d6636e8a4b7_::operator()(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int16 v4; // ax
  __int64 v5; // rsi
  const union _RM_ACTIVITY_IMPORTANCE *v6; // r13
  int v7; // eax
  const char *v8; // r9
  __int64 result; // rax
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // esi
  _DWORD *v13; // rcx
  ViewManagerInteropTraceLogging *v14; // rcx
  _DWORD *v15; // rcx
  HWND *v16; // rax
  DWORD WindowThreadProcessId; // eax
  int v18; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  WINBOOL fPending; // [rsp+70h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+78h] [rbp+10h] BYREF
  int v22; // [rsp+80h] [rbp+18h] BYREF
  PSRWLOCK SRWLock; // [rsp+88h] [rbp+20h]

  v18 = -2;
  v2 = *(_QWORD *)(*a1 + 280LL);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 184LL))(v2);
    if ( *(_QWORD *)(*a1 + 144LL) != *(_QWORD *)a1[1] )
    {
      Context = 0LL;
      if ( InitOnceBeginInitialize(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
        && fPending )
      {
        Context = qword_18050FB50;
        qword_18050FB50[0] = &IamTraceLogging::`vftable';
        atexit(lambda_1807517bb2a601749b2ae4fbbb57858f_::_lambda_invoker_cdecl_);
        ViewManagerInteropTraceLogging::Create((ViewManagerInteropTraceLogging *)qword_18050FB50);
        InitOnceComplete(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, qword_18050FB50);
      }
      v15 = (_DWORD *)*((_QWORD *)Context + 1);
      if ( v15 && *v15 )
      {
        fPending = 0;
        v16 = (HWND *)a1[1];
        if ( *v16 )
          WindowThreadProcessId = GetWindowThreadProcessId(*v16, (LPDWORD)&fPending);
        else
          WindowThreadProcessId = 0;
        LODWORD(Context) = WindowThreadProcessId;
        v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*a1 + 16LL) + 272LL))(*a1 + 16LL);
        ViewManagerInteropTraceLogging::FrameWindowChanged<unsigned int,HWND__ * &,unsigned long const &,unsigned long &>(
          &v22,
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
    *(_WORD *)(v3 + 252) &= ~0x80u;
    *(_WORD *)(v3 + 252) |= v4;
    v5 = *a1;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*a1 + 280LL) + 200LL))(*(_QWORD *)(*a1 + 280LL));
    if ( !*(_BYTE *)(v5 + 552) )
    {
      v6 = (const union _RM_ACTIVITY_IMPORTANCE *)(v5 + 252);
      if ( *(_DWORD *)(v5 + 256) != *(_DWORD *)(v5 + 252) )
      {
        v10 = *(_QWORD *)(v5 + 104);
        if ( v10 )
        {
          v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 88LL))(v10);
          if ( v11 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0xAE4,
              (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
              (const char *)(unsigned int)v11,
              v18);
          *(_DWORD *)(v5 + 256) = *(_DWORD *)v6;
          v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v5 + 16) + 272LL))(v5 + 16);
          Context = 0LL;
          if ( InitOnceBeginInitialize(
                 &`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper,
                 0,
                 &fPending,
                 &Context)
            && fPending )
          {
            Context = qword_18050FB50;
            qword_18050FB50[0] = &IamTraceLogging::`vftable';
            atexit(lambda_1807517bb2a601749b2ae4fbbb57858f_::_lambda_invoker_cdecl_);
            ViewManagerInteropTraceLogging::Create((ViewManagerInteropTraceLogging *)qword_18050FB50);
            InitOnceComplete(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, qword_18050FB50);
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
              Context = qword_18050FB50;
              qword_18050FB50[0] = &IamTraceLogging::`vftable';
              atexit(lambda_1807517bb2a601749b2ae4fbbb57858f_::_lambda_invoker_cdecl_);
              ViewManagerInteropTraceLogging::Create((ViewManagerInteropTraceLogging *)qword_18050FB50);
              InitOnceComplete(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, qword_18050FB50);
            }
            ViewManagerInteropTraceLogging::CommitImportanceVector_(v14, v12, v6);
          }
        }
      }
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*a1 + 280LL) + 232LL))(
           *(_QWORD *)(*a1 + 280LL),
           (*a1 + 16LL) & -(__int64)(*a1 != 0LL));
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x920,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v7,
        v18);
      JUMPOUT(0x1800BD09ELL);
    }
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x922,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v8);
  }
  return result;
}
