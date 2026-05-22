/*
 * XREFs of ?ProcessPositionChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagPOINT@@@Z @ 0x1800864A8
 * Callers:
 *     ?OnMitMessageReceived@CursorNotificationProcessor@@CAJPEAXPEBXH@Z @ 0x1800863A0 (-OnMitMessageReceived@CursorNotificationProcessor@@CAJPEAXPEBXH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$vector@V?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18000EB8C (--1-$vector@V-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIMessageProxy@@@WR.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CursorNotificationProcessor::ProcessPositionChangedNotification(
        CursorNotificationProcessor *this,
        const struct tagPOINT *a2)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rsi
  int v6; // eax
  unsigned int v7; // edi
  _QWORD *v8; // rcx
  _QWORD v10[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  _QWORD *v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, _QWORD **))(**(_QWORD **)this + 40LL))(*(_QWORD *)this, &v12) < 0 )
  {
LABEL_7:
    v7 = 0;
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)this + 72LL))(*(_QWORD *)this, v10);
    v4 = (_QWORD *)v10[0];
    v5 = (_QWORD *)v10[1];
    while ( 1 )
    {
      if ( v4 == v5 )
      {
        std::vector<Microsoft::WRL::ComPtr<IMessageProxy>>::~vector<Microsoft::WRL::ComPtr<IMessageProxy>>((__int64)v10);
        goto LABEL_7;
      }
      v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v4 + 24LL))(
             *v4,
             (unsigned int)a2->x,
             (unsigned int)a2->y);
      v7 = v6;
      if ( v6 < 0 )
        break;
      ++v4;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x97,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\cursornotific"
               "ationprocessor.cpp",
      (const char *)(unsigned int)v6);
    std::vector<Microsoft::WRL::ComPtr<IMessageProxy>>::~vector<Microsoft::WRL::ComPtr<IMessageProxy>>((__int64)v10);
  }
  v8 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v8 + 16LL))(v8, *v8);
  }
  return v7;
}
