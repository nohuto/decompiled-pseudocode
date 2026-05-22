/*
 * XREFs of ?ProcessPositionChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagPOINT@@@Z @ 0x1800074EC
 * Callers:
 *     ?OnMitMessageReceived@CursorNotificationProcessor@@CAJPEAXPEBXH@Z @ 0x1800073F0 (-OnMitMessageReceived@CursorNotificationProcessor@@CAJPEAXPEBXH@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$ComPtr@UICursor@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x180008080 (-_Tidy@-$vector@V-$ComPtr@UICursor@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UICursor@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CursorNotificationProcessor::ProcessPositionChangedNotification(
        CursorNotificationProcessor *this,
        const struct tagPOINT *a2)
{
  unsigned int v4; // edi
  _QWORD *v5; // rbx
  _QWORD *v6; // rbp
  int v7; // eax
  int v8; // esi
  _QWORD *v10; // [rsp+28h] [rbp-20h] BYREF
  _QWORD *v11; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  (*(void (__fastcall **)(_QWORD, _QWORD **))(**(_QWORD **)this + 80LL))(*(_QWORD *)this, &v10);
  v4 = 0;
  v5 = v10;
  v6 = v11;
  if ( v10 == v11 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)this + 48LL))(
      *(_QWORD *)this,
      (unsigned int)a2->x,
      (unsigned int)a2->y);
  }
  else
  {
    while ( 1 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v5 + 24LL))(
             *v5,
             (unsigned int)a2->x,
             (unsigned int)a2->y);
      v8 = v7;
      if ( v7 < 0 )
        break;
      if ( ++v5 == v6 )
        goto LABEL_4;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA2,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\cursorno"
                    "tificationprocessor.cpp",
      (const char *)(unsigned int)v7,
      -2);
    v4 = v8;
  }
LABEL_4:
  std::vector<Microsoft::WRL::ComPtr<ICursor>>::_Tidy(&v10);
  return v4;
}
