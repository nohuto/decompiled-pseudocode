/*
 * XREFs of ?ProcessAppClipChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagRECT@@@Z @ 0x180007638
 * Callers:
 *     ?OnMitMessageReceived@CursorNotificationProcessor@@CAJPEAXPEBXH@Z @ 0x1800073E0 (-OnMitMessageReceived@CursorNotificationProcessor@@CAJPEAXPEBXH@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$ComPtr@UICursor@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x180008070 (-_Tidy@-$vector@V-$ComPtr@UICursor@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UICursor@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CursorNotificationProcessor::ProcessAppClipChangedNotification(
        CursorNotificationProcessor *this,
        const struct tagRECT *a2)
{
  _QWORD *v3; // rbx
  _QWORD *v4; // rsi
  int v5; // eax
  unsigned int v6; // edi
  _QWORD v8[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  (*(void (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)this + 80LL))(*(_QWORD *)this, v8);
  v3 = (_QWORD *)v8[0];
  v4 = (_QWORD *)v8[1];
  while ( 1 )
  {
    if ( v3 == v4 )
    {
      v6 = 0;
      goto LABEL_6;
    }
    v5 = (*(__int64 (__fastcall **)(_QWORD, const struct tagRECT *))(*(_QWORD *)*v3 + 88LL))(*v3, a2);
    v6 = v5;
    if ( v5 < 0 )
      break;
    ++v3;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB2,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\cursornoti"
                  "ficationprocessor.cpp",
    (const char *)(unsigned int)v5,
    -2);
LABEL_6:
  std::vector<Microsoft::WRL::ComPtr<ICursor>>::_Tidy(v8);
  return v6;
}
