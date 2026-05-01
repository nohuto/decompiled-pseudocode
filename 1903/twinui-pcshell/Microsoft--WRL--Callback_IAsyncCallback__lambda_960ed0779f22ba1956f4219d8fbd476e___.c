/*
 * XREFs of Microsoft::WRL::Callback_IAsyncCallback__lambda_960ed0779f22ba1956f4219d8fbd476e___ @ 0x180099E34
 * Callers:
 *     ?AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18000BDE0 (-AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedE.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x1800103D0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall Microsoft::WRL::Callback_IAsyncCallback__lambda_960ed0779f22ba1956f4219d8fbd476e___(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rax
  _QWORD *result; // rax

  v4 = 0LL;
  v5 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>((__int64)v5);
    v7 = *a2;
    *a2 = 0LL;
    v6[2] = v7;
    v8 = a2[1];
    a2[1] = 0LL;
    v4 = v6;
    v6[3] = v8;
    *v6 = off_18042E6E8;
  }
  result = a1;
  *a1 = v4;
  return result;
}
