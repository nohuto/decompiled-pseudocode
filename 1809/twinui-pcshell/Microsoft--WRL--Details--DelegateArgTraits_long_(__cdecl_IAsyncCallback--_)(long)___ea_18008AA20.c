/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_a6a1a1620cd1726c3c4e0031d0123816___1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_a6a1a1620cd1726c3c4e0031d0123816___1_long_ @ 0x18008AA20
 * Callers:
 *     Microsoft::WRL::Callback_IAsyncCallback__lambda_a6a1a1620cd1726c3c4e0031d0123816___ @ 0x18008A694 (Microsoft--WRL--Callback_IAsyncCallback__lambda_a6a1a1620cd1726c3c4e0031d0123816___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x18004DAC0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long____ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_a6a1a1620cd1726c3c4e0031d0123816___1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_a6a1a1620cd1726c3c4e0031d0123816___1_long_(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // r8
  _QWORD *v5; // r8
  __int128 v6; // xmm0
  _QWORD *v7; // rbx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>(a1);
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( a1 + 16 != a2 )
  {
    *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  v4 = (_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( a1 + 24 != a2 + 8 )
  {
    *(_QWORD *)(a1 + 24) = *v4;
    *v4 = 0LL;
  }
  v5 = (_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( a1 + 32 != a2 + 16 )
  {
    *(_QWORD *)(a1 + 32) = *v5;
    *v5 = 0LL;
  }
  *(_BYTE *)(a1 + 40) = *(_BYTE *)(a2 + 24);
  v6 = *(_OWORD *)(a2 + 28);
  v7 = (_QWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 44) = v6;
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( (_QWORD *)(a1 + 64) != v7 )
  {
    *(_QWORD *)(a1 + 64) = *v7;
    *v7 = 0LL;
  }
  *(_QWORD *)a1 = off_1803C9378;
  return a1;
}
