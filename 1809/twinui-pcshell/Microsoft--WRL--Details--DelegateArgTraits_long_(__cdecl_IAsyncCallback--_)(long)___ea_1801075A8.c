/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_e81befa3e0ecb40221b8b6f57ea35c74___1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_e81befa3e0ecb40221b8b6f57ea35c74___1_long_ @ 0x1801075A8
 * Callers:
 *     ?ShowAsViewMode@CAppViewManager@@UEAAXPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18010BF40 (-ShowAsViewMode@CAppViewManager@@UEAAXPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@She.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x18004DAC0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long____ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_e81befa3e0ecb40221b8b6f57ea35c74___1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_e81befa3e0ecb40221b8b6f57ea35c74___1_long_(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rdi

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>((__int64)a1);
  a1[2] = 0LL;
  if ( a1 + 2 != a2 )
  {
    a1[2] = *a2;
    *a2 = 0LL;
  }
  v4 = a2 + 1;
  a1[3] = 0LL;
  if ( a1 + 3 != v4 )
  {
    a1[3] = *v4;
    *v4 = 0LL;
  }
  *a1 = off_1803D0110;
  return a1;
}
