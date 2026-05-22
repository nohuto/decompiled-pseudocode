/*
 * XREFs of ?OnSendComboButtonInvokeEvent@ButtonRecognizer@@AEAAJXZ @ 0x1800C64C8
 * Callers:
 *     _lambda_3d8bf48877b1d400f9b229e9054fc6e6_::_lambda_invoker_cdecl_ @ 0x1800C5EA0 (_lambda_3d8bf48877b1d400f9b229e9054fc6e6_--_lambda_invoker_cdecl_.c)
 *     ?DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z @ 0x1800C6924 (-DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ButtonRecognizer::OnSendComboButtonInvokeEvent(ButtonRecognizer *this)
{
  __int64 v2; // rcx
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v6; // rcx
  int v7; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF

  v2 = *((_QWORD *)this + 20);
  v9 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, char *, __int64 *))(*(_QWORD *)v2 + 96LL))(v2, (char *)this + 112, &v9);
  if ( v3 < 0 )
  {
    v4 = 315LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\combobutton\\system\\lib\\but"
               "tonrecognizer.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v6 = *((_QWORD *)this + 24);
  v7 = *((_DWORD *)this + 18);
  v10 = v9;
  v3 = CoreUICallSend(v6, &v10, 1LL, 1LL, 0, &unk_18015803F, v7);
  if ( v3 < 0 )
  {
    v4 = 320LL;
    goto LABEL_3;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 20) + 144LL))(*((_QWORD *)this + 20), v9);
  return 0LL;
}
