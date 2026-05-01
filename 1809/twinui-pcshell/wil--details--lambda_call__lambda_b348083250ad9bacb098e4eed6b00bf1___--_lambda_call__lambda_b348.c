/*
 * XREFs of wil::details::lambda_call__lambda_b348083250ad9bacb098e4eed6b00bf1___::_lambda_call__lambda_b348083250ad9bacb098e4eed6b00bf1___ @ 0x180205F2C
 * Callers:
 *     _ViewGroup::OnTemplateAppliedToWindow_::_1_::dtor$0 @ 0x180207A07 (_ViewGroup--OnTemplateAppliedToWindow_--_1_--dtor$0.c)
 * Callees:
 *     Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource_____ptr64_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs_____ptr64__Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_8241ab7c54b4c0e48d4fcc85deacecc3___ @ 0x18014FEBC (Microsoft--WRL--EventSource_Windows--Foundation--ITypedEventHandler_Windows--Intern_ea_18014FEBC.c)
 */

_BYTE *__fastcall wil::details::lambda_call__lambda_b348083250ad9bacb098e4eed6b00bf1___::_lambda_call__lambda_b348083250ad9bacb098e4eed6b00bf1___(
        __int64 a1)
{
  _BYTE *result; // rax
  __int64 v2; // rcx
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    result = *(_BYTE **)a1;
    if ( **(_BYTE **)a1 )
    {
      v2 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)&v3 = &v4;
      v5 = v2;
      *((_QWORD *)&v3 + 1) = &v5;
      v4 = v2;
      return (_BYTE *)Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource_____ptr64_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs_____ptr64__Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_8241ab7c54b4c0e48d4fcc85deacecc3___(
                        v2 + 144,
                        &v3);
    }
  }
  return result;
}
