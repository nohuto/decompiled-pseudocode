/*
 * XREFs of ?ProcessOrientationChangeNotification@CursorNotificationProcessor@@AEAAJN@Z @ 0x1800BFD9C
 * Callers:
 *     ?OnMitMessageReceived@CursorNotificationProcessor@@CAJPEAXPEBXH@Z @ 0x1800073F0 (-OnMitMessageReceived@CursorNotificationProcessor@@CAJPEAXPEBXH@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$ComPtr@UICursor@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x180008080 (-_Tidy@-$vector@V-$ComPtr@UICursor@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UICursor@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateCursorOrientation@Cursor@InputTraceLogging@@SAX_KN@Z @ 0x1800BFEAC (-UpdateCursorOrientation@Cursor@InputTraceLogging@@SAX_KN@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CursorNotificationProcessor::ProcessOrientationChangeNotification(
        CursorNotificationProcessor *this,
        double a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rsi
  unsigned int *v4; // rax
  int v5; // eax
  unsigned int v6; // edi
  _QWORD *v8; // [rsp+20h] [rbp-68h] BYREF
  _QWORD *v9; // [rsp+28h] [rbp-60h]
  __int64 v10; // [rsp+38h] [rbp-50h]
  char v11[16]; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v10 = -2LL;
  (*(void (__fastcall **)(_QWORD, _QWORD **))(**(_QWORD **)this + 80LL))(*(_QWORD *)this, &v8);
  v2 = v8;
  v3 = v9;
  if ( v8 == v9 )
  {
LABEL_4:
    v6 = 0;
  }
  else
  {
    while ( 1 )
    {
      v4 = (unsigned int *)(*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v2 + 40LL))(*v2, v11);
      InputTraceLogging::Cursor::UpdateCursorOrientation(*v4, a2);
      v5 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 104LL))(*v2);
      v6 = v5;
      if ( v5 < 0 )
        break;
      if ( ++v2 == v3 )
        goto LABEL_4;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFF,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\cursornotific"
               "ationprocessor.cpp",
      (const char *)(unsigned int)v5);
  }
  std::vector<Microsoft::WRL::ComPtr<ICursor>>::_Tidy((__int64)&v8);
  return v6;
}
