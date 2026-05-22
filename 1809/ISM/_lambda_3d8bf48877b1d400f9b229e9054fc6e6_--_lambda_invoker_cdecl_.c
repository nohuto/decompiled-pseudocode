/*
 * XREFs of _lambda_3d8bf48877b1d400f9b229e9054fc6e6_::_lambda_invoker_cdecl_ @ 0x1800C5EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnSendComboButtonInvokeEvent@ButtonRecognizer@@AEAAJXZ @ 0x1800C64C8 (-OnSendComboButtonInvokeEvent@ButtonRecognizer@@AEAAJXZ.c)
 */

__int64 __fastcall lambda_3d8bf48877b1d400f9b229e9054fc6e6_::_lambda_invoker_cdecl_(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // edi
  char v4; // al
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*(_BYTE *)(a1 + 18) )
  {
    *(_BYTE *)(a1 + 17) = 0;
    v4 = 0;
    goto LABEL_6;
  }
  v2 = ButtonRecognizer::OnSendComboButtonInvokeEvent((ButtonRecognizer *)a1);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = 1;
LABEL_6:
    *(_BYTE *)(a1 + 16) = v4;
    v3 = 0;
    *(_DWORD *)(a1 + 24) = 3;
    return v3;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x120,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\combobutton\\system\\lib\\buttonrecognizer.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
