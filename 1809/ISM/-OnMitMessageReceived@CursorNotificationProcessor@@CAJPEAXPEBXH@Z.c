/*
 * XREFs of ?OnMitMessageReceived@CursorNotificationProcessor@@CAJPEAXPEBXH@Z @ 0x1800863A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ProcessPositionChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagPOINT@@@Z @ 0x1800864A8 (-ProcessPositionChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagPOINT@@@Z.c)
 *     ?ProcessAppClipChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagRECT@@@Z @ 0x1800865A0 (-ProcessAppClipChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagRECT@@@Z.c)
 *     ?ProcessVisibilityChangedNotification@CursorNotificationProcessor@@AEAAJ_N@Z @ 0x180086690 (-ProcessVisibilityChangedNotification@CursorNotificationProcessor@@AEAAJ_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CursorNotificationProcessor::OnMitMessageReceived(CursorNotificationProcessor *a1, char *a2, int a3)
{
  __int64 v4; // r8
  int v5; // eax
  __int64 v6; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 != 32 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x45,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\cursornotific"
               "ationprocessor.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( !*(_DWORD *)a2 )
  {
    CursorNotificationProcessor::ProcessVisibilityChangedNotification(a1, *((_DWORD *)a2 + 2) != 0);
    return 0LL;
  }
  if ( *(_DWORD *)a2 != 1 )
  {
    if ( *(_DWORD *)a2 == 2 )
    {
      CursorNotificationProcessor::ProcessAppClipChangedNotification(a1, (const struct tagRECT *)(a2 + 8));
    }
    else if ( *(_DWORD *)a2 != 3 )
    {
      if ( *(_DWORD *)a2 == 4 )
      {
        v4 = *((_QWORD *)a2 + 2);
        LOBYTE(a2) = *((_DWORD *)a2 + 2) != 0;
        v5 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64))(**(_QWORD **)a1 + 56LL))(*(_QWORD *)a1, a2, v4);
        if ( v5 < 0 )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x85,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\cursorn"
                     "otificationprocessor.cpp",
            (const char *)(unsigned int)v5);
      }
      else if ( *(_DWORD *)a2 != 5 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x78,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\cursornot"
                   "ificationprocessor.cpp",
          (const char *)0x80070057LL);
      }
    }
    return 0LL;
  }
  v6 = *((_QWORD *)a2 + 2);
  if ( !v6 )
    goto LABEL_16;
  if ( v6 > *((_QWORD *)a1 + 5) )
  {
    *((_QWORD *)a1 + 5) = v6;
LABEL_16:
    CursorNotificationProcessor::ProcessPositionChangedNotification(a1, (const struct tagPOINT *)a2 + 1);
  }
  return 0LL;
}
