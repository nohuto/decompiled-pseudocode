/*
 * XREFs of ?OnMitMessageReceived@CursorNotificationProcessor@@CAJPEAXPEBXH@Z @ 0x1800073F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessPositionChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagPOINT@@@Z @ 0x1800074EC (-ProcessPositionChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagPOINT@@@Z.c)
 *     ?ReceiveCursorPos@ISM@InputTraceLogging@@SAX_KAEBUtagPOINT@@@Z @ 0x1800075AC (-ReceiveCursorPos@ISM@InputTraceLogging@@SAX_KAEBUtagPOINT@@@Z.c)
 *     ?ProcessAppClipChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagRECT@@@Z @ 0x180007648 (-ProcessAppClipChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagRECT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180027B3C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?ProcessVisibilityChangedNotification@CursorNotificationProcessor@@AEAAJ_N@Z @ 0x180029EB4 (-ProcessVisibilityChangedNotification@CursorNotificationProcessor@@AEAAJ_N@Z.c)
 *     atexit @ 0x18002BC68 (atexit.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _TlgCreateSz @ 0x180052EFC (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?ProcessOrientationChangeNotification@CursorNotificationProcessor@@AEAAJN@Z @ 0x1800BFD9C (-ProcessOrientationChangeNotification@CursorNotificationProcessor@@AEAAJN@Z.c)
 */

__int64 __fastcall CursorNotificationProcessor::OnMitMessageReceived(
        CursorNotificationProcessor *a1,
        char *a2,
        unsigned int a3,
        const char *a4)
{
  __int64 v6; // rdx
  const char *v7; // r9
  int v8; // ecx
  signed __int64 v9; // rcx
  const CHAR *v11; // rdx
  TraceLoggingHProvider v12; // r10
  int v13; // ecx
  int v14; // ecx
  int v15; // eax
  UINT32 cData; // [rsp+20h] [rbp-68h]
  WINBOOL fPending; // [rsp+30h] [rbp-58h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  if ( a3 < 0x20 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x48,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\cursorno"
                    "tificationprocessor.cpp",
      a4);
    __debugbreak();
  }
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`InputTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    qword_1801E14B0[0] = &RawInputProvidersContinuousTracing::`vftable';
    Context = qword_1801E14B0;
    qword_1801E14C8 = (struct _TlgProvider_t *)&`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801E14B0, qword_1801E14C8);
    InitOnceComplete(&`InputTraceLogging::Instance'::`2'::wrapper, 0, qword_1801E14B0);
  }
  if ( **((_DWORD **)Context + 1) > 4u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 8uLL) )
  {
    switch ( *(_DWORD *)a2 )
    {
      case 0:
        v11 = "Visibility";
        break;
      case 1:
        v11 = "Position";
        break;
      case 2:
        v11 = "AppClip";
        break;
      case 3:
        v11 = "ShellClip";
        break;
      case 4:
        v11 = "SuppressCursor";
        break;
      case 5:
        v11 = "Orientation";
        break;
      default:
        v11 = "UNKNOWN";
        break;
    }
    TlgCreateSz(&pDesc, v11);
    TlgWrite(v12, &unk_18019DBDF, 0LL, 0LL, 3u, &pData);
  }
  v8 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 == 1 )
  {
    v9 = *((_QWORD *)a2 + 2);
    if ( !v9 )
    {
LABEL_10:
      InputTraceLogging::ISM::ReceiveCursorPos(v9, (const struct tagPOINT *)a2 + 1);
      CursorNotificationProcessor::ProcessPositionChangedNotification(a1, (const struct tagPOINT *)a2 + 1);
      return 0LL;
    }
    if ( v9 > *((_QWORD *)a1 + 5) )
    {
      *((_QWORD *)a1 + 5) = v9;
      v9 = *((_QWORD *)a2 + 2);
      goto LABEL_10;
    }
  }
  else if ( v8 == 2 )
  {
    CursorNotificationProcessor::ProcessAppClipChangedNotification(a1, (const struct tagRECT *)(a2 + 8));
  }
  else if ( v8 )
  {
    v13 = v8 - 3;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        if ( v14 != 1 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x7F,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\cu"
                          "rsornotificationprocessor.cpp",
            v7);
          __debugbreak();
        }
        CursorNotificationProcessor::ProcessOrientationChangeNotification(a1, *((double *)a2 + 1));
      }
      else
      {
        LOBYTE(v6) = *((_DWORD *)a2 + 2) != 0;
        v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)a1 + 64LL))(
                *(_QWORD *)a1,
                v6,
                *((_QWORD *)a2 + 2));
        if ( v15 < 0 )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x8C,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\cu"
                          "rsornotificationprocessor.cpp",
            (const char *)(unsigned int)v15,
            cData);
      }
    }
  }
  else
  {
    CursorNotificationProcessor::ProcessVisibilityChangedNotification(a1, *((_DWORD *)a2 + 2) != 0);
  }
  return 0LL;
}
