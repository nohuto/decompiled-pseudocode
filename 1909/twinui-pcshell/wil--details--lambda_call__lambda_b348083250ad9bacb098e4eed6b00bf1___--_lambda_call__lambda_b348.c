/*
 * XREFs of wil::details::lambda_call__lambda_b348083250ad9bacb098e4eed6b00bf1___::_lambda_call__lambda_b348083250ad9bacb098e4eed6b00bf1___ @ 0x18027DD7C
 * Callers:
 *     _ViewGroup::OnTemplateAppliedToWindow_::_1_::dtor$0 @ 0x18027F96A (_ViewGroup--OnTemplateAppliedToWindow_--_1_--dtor$0.c)
 * Callees:
 *     Microsoft::WRL::EventSource_Windows::Foundation::IEventHandler_IInspectable____Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_9d75cb42004a5c80c8af25a46cf0553c___ @ 0x18019B1C0 (Microsoft--WRL--EventSource_Windows--Foundation--IEventHandler_IInspectable____Microsoft--WRL--I.c)
 */

_BYTE *__fastcall wil::details::lambda_call__lambda_b348083250ad9bacb098e4eed6b00bf1___::_lambda_call__lambda_b348083250ad9bacb098e4eed6b00bf1___(
        __int64 a1)
{
  _BYTE *result; // rax
  RTL_SRWLOCK *v2; // rcx
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF
  RTL_SRWLOCK *v4; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v5; // [rsp+48h] [rbp+10h] BYREF

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    result = *(_BYTE **)a1;
    if ( **(_BYTE **)a1 )
    {
      v2 = *(RTL_SRWLOCK **)(a1 + 8);
      *(_QWORD *)&v3 = &v4;
      v5 = v2;
      *((_QWORD *)&v3 + 1) = &v5;
      v4 = v2;
      return (_BYTE *)Microsoft::WRL::EventSource_Windows::Foundation::IEventHandler_IInspectable____Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_9d75cb42004a5c80c8af25a46cf0553c___(
                        v2 + 18,
                        &v3);
    }
  }
  return result;
}
